#include "Engine/UStaticMeshComponent.hpp"
#include "Utils/Function.hpp"

namespace Engine {

    void UStaticMeshComponent::SetStaticMesh(Engine::UStaticMesh* mesh) {
        Utils::Function::call<0x301f9f0, void(*)(UStaticMeshComponent*, Engine::UStaticMesh*)>(this, mesh);
    }

    void UStaticMeshComponent::SetRelativeScale3D(FVector scale) {
        Utils::Function::call<0x2ff47c0, void(*)(UStaticMeshComponent*, FVector)>(this, scale);
    }

    UClass* UStaticMeshComponent::StaticClass() {
        return Utils::Function::call<0x29781f0, UClass* (*)()>();
    }

    Engine::UMaterialInterface* UStaticMeshComponent::GetMaterial(int32_t index) {
        return Utils::Function::call<0x300fc80, Engine::UMaterialInterface* (*)(UStaticMeshComponent*, int32_t)>(this, index);
    }

}