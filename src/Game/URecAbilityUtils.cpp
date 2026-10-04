#include "Game/URecAbilityUtils.hpp"
#include "Utils/Function.hpp"

namespace Game::URecAbilityUtils {

    void OverridePlayerAttribute(UObject *player, FGameplayAttribute attribute, float value) {
        Utils::Function::call<0x14ad6c0, void(*)(UObject*, FGameplayAttribute, float)>(player, attribute, value);
    }

}