#ifndef REBRUSHED_AP_HPP_
#define REBRUSHED_AP_HPP_

#include "Console.hpp"
#include <atomic>
#include <memory>
#include <vector>
#include <unordered_map>
#include <thread>
#include <functional>
#include <mutex>
#include "SDK/SDK.h"


#define GWORLD_OFFSET 0x56C41E0
#define GNAMES_OFFSET 0x5544000
#define GOBJECTS_OFFSET 0x5580370   

namespace Rebrushed::AP {

    inline std::atomic_bool isRunning = false;
    inline std::unique_ptr<Console> console = nullptr;
    inline std::vector<std::function<void()>> toExecuteOnGameThread;
    inline std::mutex mutexFunctions;

    void initialize();
    void killPlayer();
    void giveItem(URecInventoryItem* item, int32_t amount);
    void sendNotification(const std::string &title, const std::string &message);
    void onDeath();
    void loop();
    void setMaxHealth(float maxHealth);
    void onChestInteraction(URecChestInteractionComponent* component, AActor* actor);
    void onItemCollected(ARecCollectable* collectible);
    void executeOnGameThread(std::function<void()> func);
    void teleportPlayer(const std::string &levelPath, const std::string &portalName, const std::string &options);
};

#endif /* !REBRUSHED_AP_HPP_ */
