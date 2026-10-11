#ifndef TWEAKOBJECTPTR_HPP_
#define TWEAKOBJECTPTR_HPP_

#include "SDK/SDK.h"
#include "Utils/Function.hpp"

namespace Engine {
    template <class T = UObject *>
    class TWeakObjectPtr : public FWeakObjectPtr {
        public:
            T Get() const {
                if (ObjectIndex < 0 || ObjectSerialNumber == 0) return nullptr;
                const FWeakObjectPtr* weakPtr = reinterpret_cast<const FWeakObjectPtr *>(this);
                UObject* object = Utils::Function::call<0x19b0800, UObject* (*)(const FWeakObjectPtr*)>(weakPtr);
                return *reinterpret_cast<T *>(&object);
            }
    };
}

#endif /* !TWEAKOBJECTPTR_HPP_ */
