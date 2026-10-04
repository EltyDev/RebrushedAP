#include "Game/UPL_HealthAttributeSet.hpp"
#include "Utils/Function.hpp"

namespace Game {

    FGameplayAttribute *UPL_HealthAttributeSet::GetMaxHealthAttribute(FGameplayAttribute *result) {
        Utils::Function::call<0x156c950, void(*)(FGameplayAttribute*)>(result);
        return result;
    }

    FGameplayAttribute *UPL_HealthAttributeSet::GetHealthAttribute(FGameplayAttribute *result) {
        Utils::Function::call<0xbccac0, void(*)(FGameplayAttribute*)>(result);
        return result;
    }

}
