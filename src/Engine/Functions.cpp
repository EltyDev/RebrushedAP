#include "Engine/Functions.hpp"
#include "Utils/Function.hpp"

namespace Engine::Functions {

    ::UObject *StaticLoadObject(UClass *classType, ::UObject *outer, const wchar_t *name, const wchar_t *filename, unsigned int loadFlags, class UPackageMap *sandbox, bool bAllowObjectReconciliation, void const *instancingContext) {
        return Utils::Function::call<0x19B4CE0, ::UObject*(*)(UClass*, ::UObject*, wchar_t const *, wchar_t const *, unsigned int, class UPackageMap *, bool, void const *)>(classType, outer, name, filename, loadFlags, sandbox, bAllowObjectReconciliation, instancingContext);
    }

}