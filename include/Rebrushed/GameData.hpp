#ifndef GAMEDATA_HPP_
#define GAMEDATA_HPP_

#include "Engine/FUObjectArray.hpp"
#include "Engine/UObject.hpp"
#include "Engine/UStaticMesh.hpp"
#include "Engine/UTexture2D.hpp"
#include "Game/ARecBaseCharacter.hpp"
#include "Engine/UMaterial.hpp"
#include <unordered_map>
#include <thread>

#define GWORLD_OFFSET 0x56C41E0
#define GNAMES_OFFSET 0x5544000
#define GOBJECTS_OFFSET 0x5580370

namespace Rebrushed::GameData {
    
    inline UWorld *_gWorld = nullptr;
    inline Engine::FUObjectArray* _gObjects = nullptr;
    inline std::unordered_map<std::string, Engine::UObject *> _cache;
    inline std::thread::id gameThreadId;

    Engine::UObject* getUObjectInternal(std::string_view name, bool safe, int nth, bool contains);

    template<typename T = void>
    T *getUObject(const std::string &name, bool safe = false, uint32_t nth = 0, bool contains = false) {
        if (_gObjects == nullptr) return nullptr;
        if (_cache.contains(name))
            return reinterpret_cast<T *>(_cache.at(name));
        Engine::UObject *object = getUObjectInternal(name, safe, nth, contains);
        if (object)
            _cache.emplace(name, object);
        return reinterpret_cast<T *>(object);
    }
        
    template<typename T = void *>
    static void waitObject(T *object, std::string_view name = {}, uint32_t nth = 0, bool contains = false) {
        while (*object == nullptr) 
        {
            if (!name.empty()) *object = getUObject<typename std::remove_pointer<T>::type>(name.data(), false, nth, contains);
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }

    void loadData();
    Game::ARecBaseCharacter *getPlayerCharacter();
    UWorld *getWorld();
    TArray<URecInventoryItem*> getAllItems();
    Engine::UStaticMesh *getAPMesh();
    Engine::UTexture2D *getAPTexture();
    Engine::UMaterial *getAPMaterial();
}

#endif /* !GAMEDATA_HPP_ */

