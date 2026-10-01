#include "Engine/UTexture2D.hpp"
#include "Utils/Function.hpp"

namespace Engine {

    UClass *UTexture2D::StaticClass() {
        return Utils::Function::call<0x359EAC0, UClass*(*)(void)>();
    }

}

