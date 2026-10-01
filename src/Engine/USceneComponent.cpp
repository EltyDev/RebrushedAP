#include "Engine/USceneComponent.hpp"
#include "Utils/Function.hpp"

namespace Engine {
    void USceneComponent::SetVisibility(bool bNewVisibility, EVisibilityPropagation PropagateToChildren) {
        Utils::Function::call<0x2ff5330, void(*)(USceneComponent*, bool, EVisibilityPropagation)>(this, bNewVisibility, PropagateToChildren);
    }
}