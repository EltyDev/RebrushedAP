#include "Game/UPL_SaveGameUtils.hpp"
#include "Utils/Function.hpp"

namespace Game::UPL_SaveGameUtils {
    UPL_SaveGameSystem* GetSaveGameSystem(UObject* WorldContextObject) {
        return Utils::Function::call<0xe82700, UPL_SaveGameSystem* (*)(UObject*)>(WorldContextObject);
    }
}