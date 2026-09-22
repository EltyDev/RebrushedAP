#ifndef REBRUSHED_AP_HPP_
#define REBRUSHED_AP_HPP_

#include "console.hpp"
#include <atomic>
#include <memory>
#include <vector>

class RebrushedAP {
public:
    static void initialize();
    static void waitLoad();

    static std::atomic_bool isRunning;
    static std::unique_ptr<Console> console;
};

#endif /* !REBRUSHED_AP_HPP_ */
