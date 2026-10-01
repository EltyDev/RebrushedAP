#include "Utils/Hook.hpp"
#include "Utils/Memory.hpp"

#include <Windows.h>
#include <stdlib.h> 
#include <thread>

#include "Rebrushed/AP.hpp"

namespace Utils {
    std::map<uintptr_t, HookData> Hook::_callbacks;
    int Hook::_ID = 0;

    Hook::Hook(uintptr_t offset, std::function<bool(uint64_t, uint64_t, uint64_t, uint64_t)> callback)
        : _callback(callback) {
            _id = ++_ID;
            uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
            _functionAddress = base + offset;
        }

    void Hook::apply() {
        if (_isApplied) return;
        uintptr_t endAddr = Memory::findNearestFunctionStart(_functionAddress);
        size_t functionSize = endAddr - _functionAddress;
        unsigned char jumpBytes[] = JUMP_BYTECODE;
        if (functionSize < sizeof(jumpBytes))
            throw std::runtime_error("Function size is too small to apply hook");
        if (_callbacks.find(_functionAddress) == _callbacks.end()) {
            unsigned char *functionBytes = (unsigned char *) VirtualAlloc(nullptr, functionSize, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
            unsigned char *trampolineBytes = (unsigned char *) VirtualAlloc(nullptr, sizeof(TRAMPOLINE_BYTECODE), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
            const HookData &hookData = _callbacks.emplace(_functionAddress, HookData{_functionAddress, reinterpret_cast<uintptr_t>(functionBytes), functionSize, reinterpret_cast<uintptr_t>(trampolineBytes), {}, std::make_unique<std::recursive_mutex>(), {}}).first->second;
            memcpy(trampolineBytes, TRAMPOLINE_BYTECODE, sizeof(TRAMPOLINE_BYTECODE));
            uintptr_t callbackAddress = reinterpret_cast<uintptr_t>(&Hook::handleCallback);
            uintptr_t applyJumpAddress = reinterpret_cast<uintptr_t>(&Hook::applyJump);
            Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x31, callbackAddress);
            Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x3B, _functionAddress);
            Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0xA3, _functionAddress);
            Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0xBD, reinterpret_cast<uintptr_t>(&hookData));
            Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0xC7, applyJumpAddress);
            Memory::write(reinterpret_cast<uintptr_t>(jumpBytes) + 2, reinterpret_cast<uintptr_t>(trampolineBytes));
            VirtualProtect(reinterpret_cast<void*>(trampolineBytes), sizeof(TRAMPOLINE_BYTECODE), PAGE_EXECUTE_READWRITE, nullptr);
            DWORD oldProtect;
            VirtualProtect(reinterpret_cast<void*>(_functionAddress), functionSize, PAGE_EXECUTE_READWRITE, &oldProtect);
            memcpy(functionBytes, reinterpret_cast<void*>(_functionAddress), functionSize);
            memcpy(reinterpret_cast<void*>(_functionAddress), jumpBytes, sizeof(jumpBytes));
            VirtualProtect(reinterpret_cast<void*>(_functionAddress), functionSize, oldProtect, &oldProtect);
            FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(_functionAddress), functionSize);
        }
        if (_callbacks[_functionAddress].callbacks.find(_id) == _callbacks[_functionAddress].callbacks.end())
            _callbacks[_functionAddress].callbacks.emplace(_id, _callback);
        _callbacks[_functionAddress].callbacks[_id] = _callback;
        _isApplied = true;
    }

    uintptr_t Hook::getFunctionAddress() const {
        return _functionAddress;
    }

    std::function<bool(uint64_t, uint64_t, uint64_t, uint64_t)> &Hook::getCallback() {
        return _callback;
    }

    bool Hook::isApplied() const {
        return _isApplied;
    }

    bool Hook::handleCallback(uintptr_t functionAddress, uint64_t firstParam, uint64_t secondParam, uint64_t thirdParam, uint64_t fourthParam) {
        auto entry = _callbacks.find(functionAddress);
        if (entry == _callbacks.end())
            return false;
        auto &callbacks = entry->second.callbacks;
        bool toCancel = false;
        for (int id : entry->second.toRemove)
            callbacks.erase(id);
        for (auto &callback : callbacks) {
            if (callback.second(firstParam, secondParam, thirdParam, fourthParam))
                toCancel = true;
        }
        restore(entry->second);
        return toCancel;
    }

    void Hook::applyJump(HookData &hookData) {
        if (hookData.callbacks.empty()) {
            restore(hookData);
            VirtualFree(reinterpret_cast<void*>(hookData.originalFunction), 0, MEM_RELEASE);
            _callbacks.erase(hookData.actualFunction);
            return;
        }
        std::lock_guard<std::recursive_mutex> lock(*hookData.mutex);
        unsigned char jumpBytes[] = JUMP_BYTECODE;
        DWORD oldProtect;
        VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), sizeof(jumpBytes), PAGE_EXECUTE_READWRITE, &oldProtect);
        Memory::write(reinterpret_cast<uintptr_t>(jumpBytes) + 2, hookData.trampolineFunction);
        memcpy(reinterpret_cast<void*>(hookData.actualFunction), jumpBytes, sizeof(jumpBytes));
        VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), sizeof(jumpBytes), oldProtect, &oldProtect);
        FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(hookData.actualFunction), sizeof(jumpBytes));
    }

    void Hook::restore(HookData &hookData) {
        std::lock_guard<std::recursive_mutex> lock(*hookData.mutex);
        DWORD oldProtect;
        VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), hookData.originalFunctionSize, PAGE_EXECUTE_READWRITE, &oldProtect);
        memcpy(reinterpret_cast<void*>(hookData.actualFunction), reinterpret_cast<void*>(hookData.originalFunction), hookData.originalFunctionSize);
        VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), hookData.originalFunctionSize, oldProtect, &oldProtect);
        FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(hookData.actualFunction), hookData.originalFunctionSize);
    }

    void Hook::restore() {
        if (!_isApplied) return;
        auto entry = _callbacks.find(_functionAddress);
        if (entry == _callbacks.end())
            return;
        entry->second.toRemove.push_back(_id);
    }
}

