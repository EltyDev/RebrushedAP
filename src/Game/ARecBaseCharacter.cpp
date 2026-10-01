#include "Game/ARecBaseCharacter.hpp"
#include "Utils/Function.hpp"

constexpr char TriggerGenericDeath_Name[] = "TriggerGenericDeath";

struct TriggerGenericDeath_Params {};

namespace Game {
    void ARecBaseCharacter::TriggerGenericDeath() {
        Utils::Function::callProcessEvent<TriggerGenericDeath_Name, TriggerGenericDeath_Params>(this);
    }
}