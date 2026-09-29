#ifndef REBRUSHED_AP_HPP_
#define REBRUSHED_AP_HPP_

#include "Console.hpp"
#include <atomic>
#include <memory>
#include <vector>
#include <unordered_map>
#include <thread>

#include "Engine/FUObjectArray.hpp"

typedef void (__thiscall *TriggerGenericDeathFunc)(ARecBaseCharacter*);

#define GWORLD_OFFSET 0x56C41E0
#define GNAMES_OFFSET 0x5544000
#define GOBJECTS_OFFSET 0x5580370   

class RebrushedAP {
    public:
        static void initialize();
        static void waitLoad();
        static ARecBaseCharacter* getBaseCharacter();
        static TArray<URecInventoryItem*> getAllItems();
        static void killPlayer();
        static void giveItem(URecInventoryItem* item, int32_t amount);
        static void sendNotification(const std::string &title, const std::string &message);
        static void loadPak();

        template<typename T = void>
        static T *getUObject(const std::string name, bool safe = false, uint32_t nth = 0, bool contains = false)
        {
            if (_gObjects == nullptr) return nullptr;
            if (_cache.contains(name))
                return reinterpret_cast<T *>(_cache.at(name));
            UObject *object = getUObjectInternal(name, safe, nth, contains);
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

        static std::atomic_bool isRunning;
        static std::unique_ptr<Console> console;
    private:
        static UWorld *_gWorld;
        static uintptr_t _gNames;
        static FUObjectArray *_gObjects;
        static std::unordered_map<std::string, UObject *> _cache;
    protected:
        static UObject* getUObjectInternal(std::string_view name, bool safe, int nth, bool contains);
    
};

#endif /* !REBRUSHED_AP_HPP_ */
