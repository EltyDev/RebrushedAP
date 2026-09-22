#include "rebrushed/rebrushed_ap.hpp"
#include "utils/hook.hpp"
#include <cstdint>
#include <fstream>
#include <istream>
#include <thread>
#include <chrono>

std::atomic_bool RebrushedAP::isRunning = false;
std::unique_ptr<Console> RebrushedAP::console = nullptr;



void RebrushedAP::waitLoad()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
}

void RebrushedAP::initialize()
{
    uintptr_t baseAddr = (uintptr_t) GetModuleHandleA(nullptr);
    waitLoad();
    console = std::make_unique<Console>();
    console->log( LogLevel::SUCCESS, "Rebrushed AP loaded successfully!");
    Hook hook(baseAddr + 0x160a130, []() {
        console->log(LogLevel::INFO, "Hooked function called!");
        return false;
    });
    hook.apply();
    while (isRunning) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    console->log(LogLevel::INFO, "Rebrushed AP is unloading...");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    console.reset();
}