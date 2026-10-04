#ifndef UPL_SAVEGAMEUTILS_HPP_
#define UPL_SAVEGAMEUTILS_HPP_

#include "Game/UPL_SaveGameSystem.hpp"

namespace Game::UPL_SaveGameUtils {
    UPL_SaveGameSystem* GetSaveGameSystem(UObject* WorldContextObject);
}

#endif /* !UPL_SAVEGAMEUTILS_HPP_ */
