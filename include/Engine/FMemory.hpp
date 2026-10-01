#ifndef FMEMORY_HPP_
#define FMEMORY_HPP_

#include "Utils/Function.hpp"

namespace Engine::FMemory {

    template<typename T>
    inline T* Malloc(size_t size, size_t alignment = alignof(T)) {
        return reinterpret_cast<T*>(Utils::Function::call<0x16C3BA0, void*(*)(size_t, size_t)>(size, alignment));
    }

    inline void Free(void* ptr) {
        Utils::Function::call<0x16B7820, void(*)(void*)>(ptr);
    }
}

#endif /* !FMEMORY_HPP_ */
