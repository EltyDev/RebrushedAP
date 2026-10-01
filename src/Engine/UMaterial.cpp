#include "Engine/UMaterial.hpp"
#include "Utils/Function.hpp"

namespace Engine {

    UClass *UMaterial::StaticClass() {
        return Utils::Function::call<0x363bd80, UClass*(*)(void)>();
    }

}