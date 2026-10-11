#include "Utils/Patch.hpp"
#include <Windows.h>

namespace Utils {

    Patch::Patch(uintptr_t offset, const std::vector<unsigned char> &bytes) : _bytes(bytes), _applied(false) {
        _address = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offset;
    }

    Patch::~Patch() {
        if (_applied)
            restore();
    }

    void Patch::apply() {
        if (_applied)
            return;
        DWORD old;
        VirtualProtect(reinterpret_cast<void*>(_address), _bytes.size(), PAGE_EXECUTE_READWRITE, &old);
        _originalBytes.resize(_bytes.size());
        memcpy(_originalBytes.data(), reinterpret_cast<void*>(_address), _bytes.size());
        memcpy(reinterpret_cast<void*>(_address), _bytes.data(), _bytes.size());
        VirtualProtect(reinterpret_cast<void*>(_address), _bytes.size(), old, &old);
        FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(_address), _bytes.size());
        _applied = true;
    }

    void Patch::restore() {
        if (!_applied)
            return;
        DWORD old;
        VirtualProtect(reinterpret_cast<void*>(_address), _originalBytes.size(), PAGE_EXECUTE_READWRITE, &old);
        memcpy(reinterpret_cast<void*>(_address), _originalBytes.data(), _originalBytes.size());
        VirtualProtect(reinterpret_cast<void*>(_address), _originalBytes.size(), old, &old);
        FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(_address), _originalBytes.size());
        _applied = false;
    }

    bool Patch::isApplied() const {
        return _applied;
    }

    uintptr_t Patch::getAddress() const {
        return _address;
    }

}

