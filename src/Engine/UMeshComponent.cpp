#include "Engine/UMeshComponent.hpp"
#include "Utils/Function.hpp"
#include "Engine/UMaterialInterface.hpp"

namespace Engine {

    void UMeshComponent::SetMaterial(int32_t index, Engine::UMaterialInterface* material) {
        Utils::Function::call<0x2fd06a0, void(*)(UMeshComponent*, int32_t, Engine::UMaterialInterface*)>(this, index, material);
    }

}