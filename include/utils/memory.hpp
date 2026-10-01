#ifndef MEMORY_HPP_
#define MEMORY_HPP_

#include <concepts>
#include <cstdint>
#include <Windows.h>
#include <stdexcept>

#undef max

namespace Utils::Memory {
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

    inline uintptr_t findNearestFunctionStart(uintptr_t address) {
        unsigned short *ptr = (unsigned short *) address;
        bool alignementFound = false;
        for (int i = 0; i < std::numeric_limits<int>::max(); ++i) {
            if (!alignementFound) {
                if (*(ptr + i) != 0xCCCC)
                    continue;
                else
                    alignementFound = true;
            } else {
                if (*(ptr + i) != 0xCCCC)
                    return address + i * sizeof(unsigned short) + 1;
            }
        }
        throw std::out_of_range("Offset can't exceed 32 bit signed int");
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
