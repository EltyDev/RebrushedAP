#ifndef ENGINE_FUNCTIONS_HPP_
#define ENGINE_FUNCTIONS_HPP_

#include "Utils/Function.hpp"

namespace Engine::Functions {

    ::UObject *StaticLoadObject(UClass *classType, ::UObject *outer, const wchar_t *name, const wchar_t *filename, unsigned int loadFlags, class UPackageMap *sandbox, bool bAllowObjectReconciliation, void const *instancingContext);

}

#endif /* !ENGINE_FUNCTIONS_HPP_ */
