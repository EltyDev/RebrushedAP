#ifndef MEMORY_HPP_
#define MEMORY_HPP_

#include <concepts>
#include <cstdint>
#include <Windows.h>
#include <stdexcept>

#undef max

namespace Memory {
    template<typename T>
    T read(uintptr_t address)
    {
        if (!address)
            throw std::runtime_error("Invalid memory address");
        return *reinterpret_cast<T*>(address);
    }

    template<typename T>
    T readOffset(uintptr_t offset)
    {
        uintptr_t base = (uintptr_t) GetModuleHandleA(nullptr);
        uintptr_t address = base + offset;
        if (!address)
            throw std::runtime_error("Invalid memory address");
        return *reinterpret_cast<T*>(address);
    }

    template<typename T>
    void write(uintptr_t address, T value)
    {
        DWORD oldProtect;
        VirtualProtect(reinterpret_cast<void*>(address), sizeof(T), PAGE_EXECUTE_READWRITE, &oldProtect);
        *reinterpret_cast<T*>(address) = value;
        VirtualProtect(reinterpret_cast<void *>(address), sizeof(T), oldProtect, &oldProtect);
    }

    template<typename Ret, typename Convention, typename... Args>
    Ret call(uintptr_t offset, Args... args)
    {
        uintptr_t base = (uintptr_t) GetModuleHandleA(nullptr);
        uintptr_t address = base + offset;
        auto func = reinterpret_cast<Convention>(address);
        return func(args...);
    }

    inline uintptr_t findFreeMemory(uintptr_t address, uint8_t length) {
        unsigned char *ptr = (unsigned char *) address;
        for (int i = 0; i < std::numeric_limits<int>::max(); ++i) {
            if (*(ptr + i) != 0xCC) continue;
            int j = 1;
            for (; j < length; ++j)
                if (*(ptr + i + j) != 0xCC) break;
            if (j == length) return address + i;
            i += j;
        }
        throw std::out_of_range("Offset can't exceed 32 bit signed int");
    }
};

#endif /* !MEMORY_HPP_ */
