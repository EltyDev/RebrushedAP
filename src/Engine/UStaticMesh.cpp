#include "Engine/UStaticMesh.hpp"
#include "Utils/Function.hpp"

namespace Engine {

    UClass *UStaticMesh::StaticClass() {
        return Utils::Function::call<0x36bd970, UClass*(*)(void)>();
    }

}