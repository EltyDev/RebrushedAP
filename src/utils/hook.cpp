#include "utils/hook.hpp"
#include "utils/memory.hpp"

#include <Windows.h>
#include <stdlib.h> 
#include "rebrushed/rebrushed_ap.hpp"
#include <thread>

std::map<uintptr_t, HookData> Hook::_callbacks;

Hook::Hook(uintptr_t functionAddress, std::function<bool()> callback)
    : _functionAddress(functionAddress), _callback(callback) {}

void Hook::apply() {
    if (_isApplied) return;
    uintptr_t endAddr = Memory::findFreeMemory(_functionAddress, 1);
    size_t functionSize = endAddr - _functionAddress;
    unsigned char jumpBytes[] = JUMP_BYTECODE;
    if (functionSize < sizeof(jumpBytes))
        throw std::runtime_error("Function size is too small to apply hook");
    if (_callbacks.find(_functionAddress) == _callbacks.end()) {
        unsigned char *functionBytes = (unsigned char *) VirtualAlloc(nullptr, functionSize, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        unsigned char *trampolineBytes = (unsigned char *) VirtualAlloc(nullptr, sizeof(TRAMPOLINE_BYTECODE), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        const HookData &hookData = _callbacks.emplace(_functionAddress, HookData{_functionAddress, reinterpret_cast<uintptr_t>(functionBytes), functionSize, reinterpret_cast<uintptr_t>(trampolineBytes), {}}).first->second;
        memcpy(trampolineBytes, TRAMPOLINE_BYTECODE, sizeof(TRAMPOLINE_BYTECODE));
        uintptr_t callbackAddress = reinterpret_cast<uintptr_t>(&Hook::handleCallback);
        uintptr_t applyJumpAddress = reinterpret_cast<uintptr_t>(&Hook::applyJump);
        Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x10, callbackAddress);
        Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x1A, _functionAddress);
        Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x3E, _functionAddress);
        Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x53, reinterpret_cast<uintptr_t>(&hookData));
        Memory::write(reinterpret_cast<uintptr_t>(trampolineBytes) + 0x5D, applyJumpAddress);
        Memory::write(reinterpret_cast<uintptr_t>(jumpBytes) + 2, reinterpret_cast<uintptr_t>(trampolineBytes));
        VirtualProtect(reinterpret_cast<void*>(trampolineBytes), sizeof(TRAMPOLINE_BYTECODE), PAGE_EXECUTE_READWRITE, nullptr);
        DWORD oldProtect;
        VirtualProtect(reinterpret_cast<void*>(_functionAddress), functionSize, PAGE_EXECUTE_READWRITE, &oldProtect);
        memcpy(functionBytes, reinterpret_cast<void*>(_functionAddress), functionSize);
        memcpy(reinterpret_cast<void*>(_functionAddress), jumpBytes, sizeof(jumpBytes));
        VirtualProtect(reinterpret_cast<void*>(_functionAddress), functionSize, oldProtect, &oldProtect);
    }
    _callbacks[_functionAddress].callbacks.push_back(_callback);
    _isApplied = true;
}

uintptr_t Hook::getFunctionAddress() const {
    return _functionAddress;
}

std::function<bool()> &Hook::getCallback() {
    return _callback;
}

bool Hook::isApplied() const {
    return _isApplied;
}

bool Hook::handleCallback(uintptr_t functionAddress) {
    auto entry = _callbacks.find(functionAddress);
    if (entry == _callbacks.end())
        return false;
    std::vector<std::function<bool()>> &callbacks = entry->second.callbacks;
    bool toCancel = false;
    for (auto &callback : callbacks) {
        if (callback())
            toCancel = true;
    }
    restore(entry->second);
    return toCancel;
}

void Hook::applyJump(HookData &hookData) {
    unsigned char jumpBytes[] = JUMP_BYTECODE;
    DWORD oldProtect;
    VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), sizeof(jumpBytes), PAGE_EXECUTE_READWRITE, &oldProtect);
    Memory::write(reinterpret_cast<uintptr_t>(jumpBytes) + 2, hookData.trampolineFunction);
    memcpy(reinterpret_cast<void*>(hookData.actualFunction), jumpBytes, sizeof(jumpBytes));
    VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), sizeof(jumpBytes), oldProtect, &oldProtect);
}

void Hook::restore(HookData &hookData) {
    DWORD oldProtect;
    VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), hookData.originalFunctionSize, PAGE_EXECUTE_READWRITE, &oldProtect);
    memcpy(reinterpret_cast<void*>(hookData.actualFunction), reinterpret_cast<void*>(hookData.originalFunction), hookData.originalFunctionSize);
    VirtualProtect(reinterpret_cast<void*>(hookData.actualFunction), hookData.originalFunctionSize, oldProtect, &oldProtect);
}

