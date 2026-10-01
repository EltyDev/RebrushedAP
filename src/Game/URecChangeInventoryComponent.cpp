#include "Game/URecChangeInventoryComponent.hpp"
#include "Utils/Function.hpp"

namespace Game {
    UClass *GetPrivateStaticClass() {
        return Utils::Function::call<0x15e9fc0, UClass*(*)(void)>();
    }
}