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

    static void WatchMaterial(Engine::UStaticMeshComponent* comp, int tick) {
        AP::executeOnGameThread([comp, tick]() {
            auto* m = comp->GetMaterial(0);
            console->log(LogLevel::INFO, "t+", tick, ": ",
                m ? m->NamePrivate.ToString() : "null", " | classe: ",
                m ? reinterpret_cast<Engine::FName*>(&m->ClassPrivate->NamePrivate)->ToString() : "-");
            if (tick < 30)
                std::thread([comp, tick] {
                    std::this_thread::sleep_for(std::chrono::milliseconds(100));
                    WatchMaterial(comp, tick + 1);
                }).detach();
        });
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
        inventoryComponent->Item = items[0];
        killPlayer();
    }

    void executeOnGameThread(std::function<void()> func) {
        std::lock_guard<std::mutex> lock(mutexFunctions);
        toExecuteOnGameThread.push_back(func);
    }


}