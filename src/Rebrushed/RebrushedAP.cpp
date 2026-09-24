#include "Rebrushed/RebrushedAP.hpp"
#include "Utils/Hook.hpp"
#include <cstdint>
#include <fstream>
#include <istream>
#include <thread>
#include <chrono>
#include "Utils/Memory.hpp"
#include "Utils/FName.hpp"
#include "Functions/UPL/GetDefaultObject.hpp"
#include "Functions/URecInventoryUtils/GetAllItemsWithAnyCategory.hpp"
#include "Functions/GameplayTag/AddGameplayTag.hpp"
#include <fstream>
#include <filesystem>
#include "Functions/ARecBaseCharacter/TriggerGenericDeath.hpp"

std::atomic_bool RebrushedAP::isRunning = false;
std::unique_ptr<Console> RebrushedAP::console = nullptr;
UWorld *RebrushedAP::_gWorld = nullptr;
uintptr_t RebrushedAP::_gNames = 0;
FUObjectArray *RebrushedAP::_gObjects = nullptr;
std::unordered_map<std::string, UObject *> RebrushedAP::_cache = {};

ARecBaseCharacter* RebrushedAP::getBaseCharacter()
{
    _gWorld = Memory::readOffset<UWorld*>(GWORLD_OFFSET);
    if (_gWorld == nullptr) return nullptr;
    if (_gWorld->OwningGameInstance == nullptr) return nullptr;
    if (_gWorld->OwningGameInstance->LocalPlayers.Num() == 0) return nullptr;
    ULocalPlayer* localPlayer = _gWorld->OwningGameInstance->LocalPlayers[0];
    if (localPlayer == nullptr) return nullptr;
    if (localPlayer->PlayerController == nullptr) return nullptr;
    if (localPlayer->PlayerController->Pawn == nullptr) return nullptr;
    return static_cast<ARecBaseCharacter*>(localPlayer->PlayerController->Pawn);
}

TArray<URecInventoryItem*> RebrushedAP::getAllItems()
{
    URecInventoryUtils* utils = nullptr;
    URecInventorySettings* settings = nullptr;
    waitObject(&utils, "Default__RecInventoryUtils");
    waitObject(&settings, "Default__RecInventorySettings");
    FGameplayTagContainer categories{};
    for (int32_t index = 0; index < settings->Categories.Num(); ++index)
        categories.GameplayTags.Add(settings->Categories[index].NameId);
    return GetAllItemsWithAnyCategory::call(utils, categories);

}

void RebrushedAP::waitLoad()
{
    std::this_thread::sleep_for(std::chrono::seconds(10));
    uintptr_t baseAddr = (uintptr_t) GetModuleHandleA(nullptr);
    console->log(LogLevel::INFO, "Waiting for global objects to load...");
    _gObjects = reinterpret_cast<FUObjectArray *>(baseAddr + GOBJECTS_OFFSET);
    _gWorld = Memory::readOffset<UWorld*>(GWORLD_OFFSET);
    _gNames = baseAddr + GNAMES_OFFSET;
    waitObject(&_gObjects);
    console->log(LogLevel::INFO, "Global objects loaded successfully!");
}

void RebrushedAP::killPlayer() {
    ARecBaseCharacter* character = getBaseCharacter();
    if (character == nullptr) return;
    TriggerGenericDeath::call(character);
}

UObject* RebrushedAP::getUObjectInternal(std::string_view name, bool safe, int nth)
{
    UObject *object = nullptr;
    uint32_t counter = 0;
    if (safe)
        _gObjects->lock();
    for (int i = 0; i < _gObjects->ObjObjects.NumElements; ++i) {
        object = _gObjects->getObject(i);
        if (object == nullptr) continue;
        if (FNameUtils::toString(object->NamePrivate) == name && ++counter > nth) break;
        object = nullptr;
    }
    if (safe)
        _gObjects->unlock();
    return object;
}

void RebrushedAP::initialize()
{
    uintptr_t baseAddr = (uintptr_t) GetModuleHandleA(nullptr);
    console = std::make_unique<Console>();
    waitLoad();
    TArray<URecInventoryItem*> items = getAllItems();
    console->log(LogLevel::INFO, "Found ", items.Num(), " items in the game!");
    console->log( LogLevel::SUCCESS, "Rebrushed AP loaded successfully!");
    bool needToKillMickey = false;
    Hook hook(baseAddr + 0x160a130, [&needToKillMickey](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) {
        console->log(LogLevel::INFO, "Mickey is being killed!");
        needToKillMickey = true;
        return false;
    });
    Hook hook2(baseAddr + 0x15ECBE0, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) {
        auto component = reinterpret_cast<URecChangeInventoryComponent*>(firstParam);
        if (component == nullptr) {
            console->log(LogLevel::INFO, "Inventory component Execute called with null this!");
            return false;
        }
        if (component->Item == nullptr) {
            console->log(LogLevel::INFO, "Inventory component Execute called with null item!");
            return false;
        }
        console->log(LogLevel::INFO, "Name: ", FNameUtils::toString(component->Item->NamePrivate));
        console->log(LogLevel::INFO, "Inventory component Execute called!");
        console->log(LogLevel::INFO, "Item: ", reinterpret_cast<uint64_t>(component->Item));
        console->log(LogLevel::INFO, "Amount: ", component->Amount);
        return false;
    });
    hook.apply();
    hook2.apply();
    while (isRunning) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        if (needToKillMickey) {
            std::this_thread::sleep_for(std::chrono::milliseconds(7000));
            needToKillMickey = false;
            killPlayer();
        }
    }
    console->log(LogLevel::INFO, "Rebrushed AP is unloading...");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    console.reset();
}