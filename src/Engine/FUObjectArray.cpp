#include "Engine/FUObjectArray.hpp"
#include <synchapi.h>

Engine::UObject *Engine::FUObjectArray::getObject(uint32_t index) {
    if (index >= static_cast<uint32_t>(this->ObjObjects.NumElements) || index >= static_cast<uint32_t>(this->ObjObjects.MaxElements))
        return nullptr;
    const uint32_t chunkIndex = index / NUM_ELEMENT_PER_CHUNK;
    const uint32_t withinChunkIndex = index % NUM_ELEMENT_PER_CHUNK;
    if (chunkIndex >= static_cast<uint32_t>(this->ObjObjects.NumChunks))
        return nullptr;
    FUObjectItem *item = this->ObjObjects.Objects[chunkIndex];
    if (!item)
        return nullptr;
    item += withinChunkIndex;
    return item->Object;
}

void Engine::FUObjectArray::lock() {
    EnterCriticalSection(&this->ObjObjectsCritical.CriticalSection);
}

void Engine::FUObjectArray::unlock() {
    LeaveCriticalSection(&this->ObjObjectsCritical.CriticalSection);
}