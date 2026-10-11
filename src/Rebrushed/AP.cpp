#include "Rebrushed/AP.hpp"
#include "Console.hpp"
#include "Engine/TSoftObjectPtr.hpp"
#include "Engine/UObject.hpp"
#include "SDK/SDK/recolored.h"
#include "Utils/Hook.hpp"
#include <cstdint>
#include <thread>
#include <chrono>
#include "Game/URecToastNotificationManager.hpp"
#include "Rebrushed/GameData.hpp"
#include "Engine/FName.hpp"
#include "Engine/FText.hpp"
#include "Game/URecToastNotificationManager.hpp"
#include "Game/URecInventoryUtils.hpp"
#include "Engine/AActor.hpp"
#include "Engine/UStaticMeshComponent.hpp"
#include "Game/ARecBaseCharacter.hpp"
#include "Game/URecAbilityUtils.hpp"
#include "Game/UPL_HealthAttributeSet.hpp"
#include "Engine/FMemory.hpp"
#include "Game/URecGameInstance.hpp"
#include "Game/URecShopUtils.hpp"
#include "Game/URecShopItemWrapperBase.hpp"
#include "Utils/Patch.hpp"

namespace Rebrushed::AP {

    void sendNotification(const std::string &title, const std::string &message) {
        std::wstring titleW(title.begin(), title.end());
        std::wstring messageW(message.begin(), message.end());
        Game::URecToastNotificationManager* manager = nullptr;
        GameData::waitObject(&manager, "RecToastNotificationManager_", 0, true);
        console->log(LogLevel::INFO, "Sending notification: ", title, " - ", message);
        Engine::FName id("notification_ap");
        Engine::FText titleText(FString(titleW.c_str()));
        Engine::FText messageText(FString(messageW.c_str()));
        manager->AddToast(&id, Game::NotificationType::GENERIC, &titleText, &messageText, GameData::getAPTexture());
    }

    void killPlayer() {
        Game::ARecBaseCharacter* character = GameData::getPlayerCharacter();
        if (character == nullptr) return;
        character->TriggerGenericDeath();
    }

    void giveItem(URecInventoryItem* item, int32_t amount) {
        Game::ARecBaseCharacter* player = GameData::getPlayerCharacter();
        if (player == nullptr) return;
        Game::URecInventoryUtils* utils = nullptr;
        GameData::waitObject(&utils, "Default__RecInventoryUtils");
        utils->ChangeInventory(item, amount);
    }

    void patchPopulateShop() {
        uintptr_t baseAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
        unsigned char *jzAddress = reinterpret_cast<unsigned char *>(baseAddress + 0x15c4c70);
        DWORD old;
        VirtualProtect(jzAddress, 2, PAGE_EXECUTE_READWRITE, &old);
        jzAddress[0] = 0x90;
        jzAddress[1] = 0x90;
        VirtualProtect(jzAddress, 2, old, &old);
        FlushInstructionCache(GetCurrentProcess(), jzAddress, 2);
    }

    void initialize() {
        std::vector<Utils::Hook> hooks;
        std::vector<Utils::Patch> patches;
        console = std::make_unique<Console>();
        GameData::loadData();
        hooks.emplace_back(0x160a130, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) -> bool {
            onDeath();
            return false;
        });
        hooks.emplace_back(0x1534740, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) -> bool {
            URecChestInteractionComponent* chestComponent = reinterpret_cast<URecChestInteractionComponent*>(firstParam);
            AActor* actor = reinterpret_cast<AActor*>(secondParam);
            onChestInteraction(chestComponent, actor);
            return false;
        });
        hooks.emplace_back(0x15ecd60, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) -> bool {
            ARecCollectable* collectible = reinterpret_cast<ARecCollectable*>(firstParam);
            onItemCollected(collectible);
            return false;
        });
        hooks.emplace_back(0x30bae80, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) -> bool {
            std::vector<std::function<void()>> functionsToExecute;
            {
                std::lock_guard<std::mutex> lock(mutexFunctions);
                functionsToExecute.swap(toExecuteOnGameThread);
            }
            for (auto& func : functionsToExecute)
                func();
            return false;
        });
        // hooks.emplace_back(0x15c85a0, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) -> bool {
        //     URecShopMenuWidget *shopMenu = reinterpret_cast<URecShopMenuWidget*>(firstParam);
        //     executeOnGameThread([shopMenu]() {
        //         TArray<URecShopItemWrapperBase *> items = shopMenu->ShopItemContainer->AvailableShopItems;
        //         console->log(LogLevel::INFO, "Shop menu opened with ", items.Num(), " items.");
        //         for (int i = 0; i < items.Num(); i++) {
        //             Game::URecShopItemWrapperBase* itemWrapper = reinterpret_cast<Game::URecShopItemWrapperBase*>(items[i]);
        //             if (itemWrapper == nullptr) continue;
        //             Engine::TSoftObjectPtr<URecInventoryItem*> &itemPtr = itemWrapper->Item;
        //             URecInventoryItem *firstItem = GameData::getAllItems()[0];
        //             Engine::UObject* firstItemObject = reinterpret_cast<Engine::UObject*>(firstItem);
        //             FString pathName = firstItemObject->GetPathName();
        //             Engine::FName assetPathName(pathName.ToString());
        //             itemPtr.ObjectID.AssetPathName = *reinterpret_cast<FName*>(&assetPathName);
        //             itemPtr.WeakPtr.ObjectIndex = -1;
        //             itemPtr.WeakPtr.ObjectSerialNumber = 0;
        //         }
        //     });
        //     return false;
        // });
        for (auto& hook : hooks) {
            hook.apply();
            console->log(LogLevel::INFO, "Hook applied at address: 0x", std::hex, hook.getFunctionAddress());
        }
        patches.emplace_back(0x15c4c70, 0x90, 0x90);
        // patches.emplace_back(0x16473a0, 0x31, 0xC0, 0xC3);
        for (auto& patch : patches) {
            patch.apply();
            console->log(LogLevel::INFO, "Patch applied at address: 0x", std::hex, patch.getAddress());
        }
        executeOnGameThread([]() {
            GameData::gameThreadId = std::this_thread::get_id();
        });
        while (GameData::gameThreadId._Get_underlying_id() == 0)
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        console->log( LogLevel::SUCCESS, "Rebrushed AP loaded successfully!");
        isRunning = true;
        while (isRunning) {
            loop();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        console->log(LogLevel::INFO, "Rebrushed AP is unloading...");
        std::this_thread::sleep_for(std::chrono::seconds(2));
        console.reset();
    }

    void loop() {
    }

    void onDeath() {
        TArray<URecShopData*> shops = Game::URecShopUtils::GetAllShops();
        for (int i = 0; i < shops.Num(); i++) {
            URecShopData* shop = shops[i];
            if (shop == nullptr) continue;
            TArray<URecShopItemWrapperBase*> &items = shop->Items;
            for (int j = 0; j < items.Num(); j++) {
                Game::URecShopItemWrapperBase* itemWrapper = reinterpret_cast<Game::URecShopItemWrapperBase*>(items[j]);
                if (itemWrapper == nullptr) continue;
                Engine::TSoftObjectPtr<URecInventoryItem*> &itemPtr = itemWrapper->Item;
                UStruct *baseClass = reinterpret_cast<Engine::UObject*>(itemWrapper)->ClassPrivate->SuperStruct;
                if (baseClass == nullptr) continue;
                Engine::FName baseClassName = *reinterpret_cast<Engine::FName*>(&baseClass->NamePrivate);
                console->log(LogLevel::INFO, "Item wrapper base class: ", baseClassName.ToString());
                if (baseClassName.ToString() != "RecConditionalShopItem") continue;
                URecConditionalShopItem* conditionalItem = reinterpret_cast<URecConditionalShopItem*>(itemWrapper);
                conditionalItem->Condition = nullptr;
                Engine::FName assetPathName("/Game/REC/DA_Archipelago.DA_Archipelago");
                itemPtr.ObjectID.AssetPathName = *reinterpret_cast<FName*>(&assetPathName);
                itemPtr.WeakPtr.ObjectIndex = -1;
                itemPtr.WeakPtr.ObjectSerialNumber = 0;
            }
        }
    }

    void onChestInteraction(URecChestInteractionComponent* chestComponent, AActor* actor) {
        sendNotification("Chest Interaction", "Player interacted with a chest!");
        Engine::AActor *newActor = reinterpret_cast<Engine::AActor*>(actor);
        for (int i = 0; i < actor->BlueprintCreatedComponents.Num(); i++) {
            UActorComponent* component = actor->BlueprintCreatedComponents[i];
            if (component == nullptr) continue;
            Engine::FName *componentName = reinterpret_cast<Engine::FName *>(&component->NamePrivate);
            console->log(LogLevel::INFO, "Component: ", componentName->ToString());
        }
        AP::executeOnGameThread([chestComponent]() {
            Engine::AActor* chestActor = reinterpret_cast<Engine::AActor*>(chestComponent->SequenceItem);
            Engine::UStaticMeshComponent* meshComponent = reinterpret_cast<Engine::UStaticMeshComponent*>(chestActor->GetComponentByClass(Engine::UStaticMeshComponent::StaticClass()));
            meshComponent->SetStaticMesh(GameData::getAPMesh());
            meshComponent->SetRelativeScale3D(FVector(2.5f, 2.5f, 2.5f));
            meshComponent->SetMaterial(0, GameData::getAPMaterial());
        });
    }

    void onItemCollected(ARecCollectable* collectible) {
        sendNotification("Item Collected", "Player collected an item!");
        TArray<URecInventoryItem*> items = GameData::getAllItems();
        URecChangeInventoryComponent* inventoryComponent = collectible->ChangeInventoryComponent;
        if (inventoryComponent == nullptr) {
            console->log(LogLevel::ERROR, "Inventory component is null!");
            return;
        }
        //inventoryComponent->Item = items[0];
        inventoryComponent->Amount = 10000;
        //teleportPlayer("/Game/REC/Maps/03_MeanStreet/01_MeanStreet/MS_MS_P.MS_MS_P", "", "?ShouldResetOnLoad");
    }


    void executeOnGameThread(std::function<void()> func) {
        std::lock_guard<std::mutex> lock(mutexFunctions);
        toExecuteOnGameThread.push_back(func);
    }

    void setMaxHealth(float maxHealth) {
        Game::ARecBaseCharacter* player = GameData::getPlayerCharacter();
        if (player == nullptr) return;
        FGameplayAttribute maxHeathAttr;
        FGameplayAttribute healthAttr;
        Game::UPL_HealthAttributeSet::GetMaxHealthAttribute(&maxHeathAttr);
        Game::UPL_HealthAttributeSet::GetHealthAttribute(&healthAttr);
        URecPersistenceSystem *persistenceSystem = GameData::getPersistenceSystem();
        Game::URecAbilityUtils::OverridePlayerAttribute(player, maxHeathAttr, maxHealth);
        persistenceSystem->PersistentData.PlayerData.MaxHealth = maxHealth;
        if (persistenceSystem->PersistentData.PlayerData.Health > maxHealth) {
            Game::URecAbilityUtils::OverridePlayerAttribute(player, healthAttr, maxHealth);
            persistenceSystem->PersistentData.PlayerData.Health = maxHealth;
        }
        GameData::save();
    }

    void teleportPlayer(const std::string &levelPath, const std::string &portalName, const std::string &options) {
        Game::URecGameInstance* gameInstance = reinterpret_cast<Game::URecGameInstance*>(GameData::getWorld()->OwningGameInstance);
        if (gameInstance == nullptr) {
            console->log(LogLevel::ERROR, "Game instance is null!");
            return;
        }
        wchar_t *optionsW = Engine::FMemory::Malloc<wchar_t>((options.size() + 1) * sizeof(wchar_t));
        mbstowcs_s(nullptr, optionsW, options.size() + 1, options.c_str(), _TRUNCATE);
        wchar_t* portalNameW = Engine::FMemory::Malloc<wchar_t>((portalName.size() + 1) * sizeof(wchar_t));
        mbstowcs_s(nullptr, portalNameW, portalName.size() + 1, portalName.c_str(), _TRUNCATE);
        FString optionsF(optionsW);
        FString portalNameF(portalNameW);
        TSoftObjectPtr<UWorld> worldPtr;
        Engine::FName levelName(levelPath);
        worldPtr.ObjectID.AssetPathName.ComparisonIndex = levelName.ComparisonIndex;
        worldPtr.ObjectID.AssetPathName.Number = levelName.Number;
        gameInstance->RequestLevelChange(&worldPtr, portalNameF, optionsF);
    }


}