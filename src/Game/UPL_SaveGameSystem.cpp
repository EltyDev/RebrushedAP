#include "Game/UPL_SaveGameSystem.hpp"
#include "Utils/Function.hpp"

namespace Game {

    FPL_SaveResult UPL_SaveGameSystem::SaveState(FPL_SaveResult* result, bool bWasAutoSave, bool bAsync) {
        return Utils::Function::call<0xe84360, FPL_SaveResult (*)(UPL_SaveGameSystem*, FPL_SaveResult*, bool, bool)>(this, result, bWasAutoSave, bAsync);
    }

}