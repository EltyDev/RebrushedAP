#include "Engine/UActorComponent.hpp"
#include "Utils/Function.hpp"

namespace Engine {
    void UActorComponent::SetActive(bool bNewActive, bool bReset) {
        Utils::Function::call<0x2f7e810, void(*)(UActorComponent*, bool, bool)>(this, bNewActive, bReset);
    }

}