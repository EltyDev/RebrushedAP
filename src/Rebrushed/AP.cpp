#include "Rebrushed/AP.hpp"
#include "Utils/Hook.hpp"
#include <cstdint>
#include <fstream>
#include <istream>
#include <thread>
#include <chrono>
#include "Utils/Memory.hpp"
#include <fstream>
#include <filesystem>
#include "Game/URecToastNotificationManager.hpp"
#include "Rebrushed/GameData.hpp"
#include "Engine/FName.hpp"
#include "Engine/FText.hpp"
#include "Game/URecToastNotificationManager.hpp"
#include "Game/URecInventoryUtils.hpp"
#include "Engine/Functions.hpp"
#include "Engine/AActor.hpp"
#include "Game/URecChangeInventoryComponent.hpp"
#include "Engine/UStaticMeshComponent.hpp"
#include "Engine/UActorComponent.hpp"
#include "Engine/USceneComponent.hpp"
#include "Engine/UMaterialInterface.hpp"
#include "Game/ARecBaseCharacter.hpp"
#include "Engine/TArray.hpp"
#include "Game/URecAbilityUtils.hpp"
#include "Game/UPL_HealthAttributeSet.hpp"
#include "Engine/FMemory.hpp"
#include "Game/URecGameInstance.hpp"

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

    void initialize() {
        std::vector<Utils::Hook> hooks;
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
        for (auto& hook : hooks) {
            hook.apply();
            console->log(LogLevel::INFO, "Hook applied at address: 0x", std::hex, hook.getFunctionAddress());
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
        inventoryComponent->Item = items[0];
        teleportPlayer("/Game/REC/Maps/03_MeanStreet/01_MeanStreet/MS_MS_P.MS_MS_P", "", "");
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
        wchar_t *optionsW = Engine::FMemory::Malloc<wchar_t>(options.size() + 1);
        std::mbstowcs(optionsW, options.c_str(), options.size() + 1);
        wchar_t *portalNameW = Engine::FMemory::Malloc<wchar_t>(portalName.size() + 1);
        std::mbstowcs(portalNameW, portalName.c_str(), portalName.size() + 1);
        FString optionsF(optionsW);
        FString portalNameF(portalNameW);
        TSoftObjectPtr<UWorld> worldPtr;
        Engine::FName levelName(levelPath);
        worldPtr.ObjectID.AssetPathName.ComparisonIndex = levelName.ComparisonIndex;
        worldPtr.ObjectID.AssetPathName.Number = levelName.Number;
        gameInstance->RequestLevelChange(&worldPtr, portalNameF, optionsF);
    }


}