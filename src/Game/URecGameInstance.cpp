#include "Game/URecGameInstance.hpp"
#include "Utils/Function.hpp"

namespace Game {
    void URecGameInstance::RequestLevelChange(const TSoftObjectPtr<UWorld> *InLevel, FString Portal, FString Options) {
        Utils::Function::call<0x151d7f0, void(*)(URecGameInstance*, const TSoftObjectPtr<UWorld> *, FString, FString)>(this, InLevel, Portal, Options);
    }
}