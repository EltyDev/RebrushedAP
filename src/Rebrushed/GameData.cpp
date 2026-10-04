#include "Rebrushed/GameData.hpp"
#include "Engine/FName.hpp"
#include "Rebrushed/AP.hpp"
#include "Utils/Memory.hpp"
#include "Engine/UTexture2D.hpp"
#include "Engine/UStaticMesh.hpp"
#include "Engine/Functions.hpp"
#include "Engine/TArray.hpp"
#include "Game/URecInventoryUtils.hpp"
#include "Game/UPL_SaveGameUtils.hpp"


namespace Rebrushed::GameData {

    Engine::UObject* getUObjectInternal(std::string_view name, bool safe, int nth, bool contains) {
        Engine::UObject* result = nullptr;
        int counter = 0;
        if (safe) _gObjects->lock();
        for (int i = 0; i < _gObjects->ObjObjects.NumElements; ++i) {
            Engine::UObject* object = _gObjects->getObject(i);
            if (!object) continue;
            std::string objectName = object->NamePrivate.ToString();
            bool match = contains ? objectName.find(name) != std::string::npos : objectName == name;
            if (match && counter++ >= nth) { result = object; break; }
        }
        if (safe) _gObjects->unlock();
        return result;
    }

    void loadData() {
        uintptr_t baseAddr = (uintptr_t) GetModuleHandleA(nullptr);
        AP::console->log(LogLevel::INFO, "Waiting for global objects to load...");
        _gObjects = reinterpret_cast<Engine::FUObjectArray *>(baseAddr + GOBJECTS_OFFSET);
        _gWorld = Utils::Memory::readOffset<UWorld*>(GWORLD_OFFSET);
        waitObject(&_gObjects);
        waitObject(&_persistenceSystem, "RecPersistenceSystem_", 0, true);
        AP::console->log(LogLevel::SUCCESS, "Global objects loaded successfully!");
    }

    UWorld *getWorld() {
        return Utils::Memory::readOffset<UWorld*>(GWORLD_OFFSET);
    }

    Game::ARecBaseCharacter* getPlayerCharacter() {
        _gWorld = Utils::Memory::readOffset<UWorld*>(GWORLD_OFFSET);
        if (_gWorld == nullptr || _gWorld->OwningGameInstance == nullptr || _gWorld->OwningGameInstance->LocalPlayers.Num() == 0)
            return nullptr;
        ULocalPlayer* localPlayer = _gWorld->OwningGameInstance->LocalPlayers[0];
        if (localPlayer == nullptr || localPlayer->PlayerController == nullptr || localPlayer->PlayerController->Pawn == nullptr)
            return nullptr;
        return static_cast<Game::ARecBaseCharacter*>(localPlayer->PlayerController->Pawn);
    }

    TArray<URecInventoryItem*> getAllItems() {
        Game::URecInventoryUtils* utils = nullptr;
        URecInventorySettings* settings = nullptr;
        waitObject(&utils, "Default__RecInventoryUtils");
        waitObject(&settings, "Default__RecInventorySettings");
        FGameplayTagContainer categories{};
        Engine::TArray<FGameplayTag> *tags = reinterpret_cast<Engine::TArray<FGameplayTag>*>(&categories.GameplayTags);
        for (int32_t index = 0; index < settings->Categories.Num(); ++index)
            tags->Add(settings->Categories[index].NameId);
        return utils->GetAllItemsWithAnyCategory(categories);
    }

    void giveItem(URecInventoryItem* item, int32_t amount) {
        Game::ARecBaseCharacter* player = getPlayerCharacter();
        if (player == nullptr) return;
        Game::URecInventoryUtils* utils = nullptr;
        waitObject(&utils, "Default__RecInventoryUtils");
        utils->ChangeInventory(item, amount);
    }

    Engine::UTexture2D* getAPTexture() {
        if (gameThreadId != std::this_thread::get_id()) {
            Engine::UTexture2D* texture = nullptr;
            AP::executeOnGameThread([&texture]() {
                texture = GameData::getAPTexture();
            });
            while (texture == nullptr) std::this_thread::sleep_for(std::chrono::milliseconds(10));
            return texture;
        }
        UClass *textureClass = Engine::UTexture2D::StaticClass();
        return reinterpret_cast<Engine::UTexture2D*>(Engine::Functions::StaticLoadObject(textureClass, nullptr, L"/Game/REC/T_Logo.T_Logo", nullptr, 0, nullptr, false, nullptr));
    }

    Engine::UStaticMesh* getAPMesh() {
        if (gameThreadId != std::this_thread::get_id()) {
            Engine::UStaticMesh* mesh = nullptr;
            AP::executeOnGameThread([&mesh]() {
                mesh = GameData::getAPMesh();
            });
            while (mesh == nullptr) std::this_thread::sleep_for(std::chrono::milliseconds(10));
            return mesh;
        }
        UClass *meshClass = Engine::UStaticMesh::StaticClass();
        return reinterpret_cast<Engine::UStaticMesh*>(Engine::Functions::StaticLoadObject(meshClass, nullptr, L"/Game/REC/SM_ArchipelagoLogo_A.SM_ArchipelagoLogo_A", nullptr, 0, nullptr, false, nullptr));
    }

    Engine::UMaterial* getAPMaterial() {
        if (gameThreadId != std::this_thread::get_id()) {
            Engine::UMaterial* material = nullptr;
            AP::executeOnGameThread([&material]() {
                material = GameData::getAPMaterial();
            });
            while (material == nullptr) std::this_thread::sleep_for(std::chrono::milliseconds(10));
            return material;
        }
        UClass *materialClass = Engine::UMaterial::StaticClass();
        return reinterpret_cast<Engine::UMaterial*>(Engine::Functions::StaticLoadObject(materialClass, nullptr, L"/Game/REC/M_ArchipelagoLogo_A.M_ArchipelagoLogo_A", nullptr, 0, nullptr, false, nullptr));
    }

    URecPersistenceSystem* getPersistenceSystem() {
        return _persistenceSystem;
    }

    FPL_SaveResult save(bool bWasAutoSave, bool bAsync) {
        if (_persistenceSystem == nullptr)
            return { false, EPL_SaveGameErrorCode::EPL_SaveGameErrorCode__SavingGameFailed_NoPlatformUserId };
        FPL_SaveResult result;
        return Game::UPL_SaveGameUtils::GetSaveGameSystem(_gWorld)->SaveState(&result, bWasAutoSave, bAsync);
    }

}