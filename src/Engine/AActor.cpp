#include "Engine/AActor.hpp"
#include "Utils/Function.hpp"

Engine::UActorComponent* Engine::AActor::GetComponentByClass(UClass* classe) {
    return Utils::Function::call<0x2e4c660, Engine::UActorComponent* (*)(Engine::AActor*, UClass*)>(this, classe);
}