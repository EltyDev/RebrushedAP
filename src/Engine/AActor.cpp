#include "Engine/AActor.hpp"
#include "Utils/Function.hpp"

UActorComponent* Engine::AActor::GetComponentByClass(UClass* classe) {
    return Utils::Function::call<0x2e4c660, UActorComponent* (*)(AActor*, UClass*)>(this, classe);
}