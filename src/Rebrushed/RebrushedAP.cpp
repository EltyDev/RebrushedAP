#include "Rebrushed/RebrushedAP.hpp"
#include "Utils/Hook.hpp"
#include <cstdint>
#include <fstream>
#include <istream>
#include <thread>
#include <chrono>
#include "Utils/Memory.hpp"
#include "Utils/FName.hpp"
#include "Functions/URecInventoryUtils/GetAllItemsWithAnyCategory.hpp"
#include <fstream>
#include <filesystem>
#include "Functions/ARecBaseCharacter/TriggerGenericDeath.hpp"
#include "Functions/URecInventoryUtils/ChangeInventory.hpp"
#include "Functions/FName/FNameConstructor.hpp"
#include "Functions/FText/FTextConstructor.hpp"
#include "Functions/Notification/AddToast.hpp"
#include "Functions/Texture2D/StaticClass.hpp"
#include "Functions/StaticLoadObject.hpp"

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

void RebrushedAP::sendNotification(const std::string &title, const std::string &message)
{
    std::wstring titleW(title.begin(), title.end());
    std::wstring messageW(message.begin(), message.end());
    URecToastNotificationManager* manager = nullptr;
    waitObject(&manager, "RecToastNotificationManager_", 0, true);
    console->log(LogLevel::INFO, "Sending notification: ", title, " - ", message);
    FName id;
    FNameConstructor::call(&id, "notification_ap");
    FString titleStr(titleW.c_str());
    FString messageStr(messageW.c_str());
    FText titleText;
    FText messageText;
    FTextConstructor::call(&titleText, &titleStr);
    FTextConstructor::call(&messageText, &messageStr);
    UClass *textureClass = Texture2D::StaticClass::call();
    UTexture2D* texture = reinterpret_cast<UTexture2D*>(StaticLoadObject::call(textureClass, nullptr, L"/Game/REC/T_Logo.T_Logo", nullptr, 0, nullptr, false, nullptr));
    AddToast::call(manager, &id, NotificationType::GENERIC, &titleText, &messageText, texture);
}

void RebrushedAP::waitLoad()
{
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

void RebrushedAP::giveItem(URecInventoryItem* item, int32_t amount) {
    ARecBaseCharacter* character = getBaseCharacter();
    if (character == nullptr) return;
    URecInventoryUtils* utils = nullptr;
    waitObject(&utils, "Default__RecInventoryUtils");
    ChangeInventory::call(utils, item, amount);
}

UObject* RebrushedAP::getUObjectInternal(std::string_view name, bool safe, int nth, bool contains)
{
    UObject *object = nullptr;
    uint32_t counter = 0;
    if (safe)
        _gObjects->lock();
    for (int i = 0; i < _gObjects->ObjObjects.NumElements; ++i) {
        object = _gObjects->getObject(i);
        if (object == nullptr) continue;
        std::string objectName = FNameUtils::toString(object->NamePrivate);
        if ((contains && objectName.find(name) != std::string::npos) || (!contains && objectName == name) && ++counter > nth) break;
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
    console->log( LogLevel::SUCCESS, "Rebrushed AP loaded successfully!");
    bool needToKillMickey = false;
    Hook hook(baseAddr + 0x160a130, [&needToKillMickey](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) {
        console->log(LogLevel::INFO, "Mickey is being killed!");
        needToKillMickey = true;
        return false;
    });
    Hook hook2(baseAddr + 0x15ecd60, [](uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) {
        console->log(LogLevel::INFO, "ARecCollectable::OnBeginOverlap called!");
        sendNotification("Rebrushed AP", "Mickey has been killed!");
        ARecCollectable* collectible = reinterpret_cast<ARecCollectable*>(firstParam);
        URecChangeInventoryComponent* component = collectible->ChangeInventoryComponent;
        TArray<URecInventoryItem*> items = getAllItems();
        if (component == nullptr) {
            console->log(LogLevel::WARNING, "ARecCollectable::OnBeginOverlap called but ChangeInventoryComponent is null!");
            console->log(LogLevel::WARNING, "Collectable name: ", FNameUtils::toString(collectible->NamePrivate));
            return false;
        }
        URecInventoryItem* item = component->Item;
        console->log(LogLevel::INFO, "Collectable ", FNameUtils::toString(collectible->NamePrivate), " collected item: ", FNameUtils::toString(item->NamePrivate));
        component->Item = items[0];
        return false;
    });
    hook.apply();
    hook2.apply();
    while (isRunning) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        if (needToKillMickey) {
            std::this_thread::sleep_for(std::chrono::milliseconds(7000));
            console->log(LogLevel::INFO, "Killing Mickey...");
            needToKillMickey = false;
            
        }
    }
    console->log(LogLevel::INFO, "Rebrushed AP is unloading...");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    console.reset();
}