#include "Engine/UMaterialInterface.hpp"
#include "Utils/Function.hpp"

namespace Engine {
    UClass* UMaterialInterface::StaticClass() {
        return Utils::Function::call<0x3651720, UClass* (*)()>();
    }
}