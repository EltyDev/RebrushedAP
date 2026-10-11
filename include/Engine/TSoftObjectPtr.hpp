#ifndef TSOFTOBJECTPTR_HPP_
#define TSOFTOBJECTPTR_HPP_

#include "SDK/SDK.h"
#include "Utils/Function.hpp"

namespace Engine {
    template<typename UEType>
    class TSoftObjectPtr : public FSoftObjectPtr {
        public:
            UEType LoadSynchronous() const {
                const FSoftObjectPtr* softPtr = reinterpret_cast<const FSoftObjectPtr *>(this);
                UObject* object = Utils::Function::call<0xab5030, UObject* (*)(const FSoftObjectPtr*)>(softPtr);
                return *reinterpret_cast<UEType *>(&object);
            }

    };
}

#endif /* !TSOFTOBJECTPTR_HPP_ */
