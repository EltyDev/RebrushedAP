#ifndef URECGAMEINSTANCE_HPP_
#define URECGAMEINSTANCE_HPP_

#include "Game/UPL_GameInstance.hpp"

namespace Game {
    class URecGameInstance : public UPL_GameInstance {
        public:

            void RequestLevelChange(const TSoftObjectPtr<UWorld> *InLevel, FString Portal, FString Options);

            unsigned char                                      UnknownData00_8[0x10];                                      // 0x01D0   (0x0010)  MISSED
            class URecPersistentDataAdjustment*                StartupPeristentDataAdjustment;                             // 0x01E0   (0x0008)  
            class URecPersistentDataAdjustment*                AllUnlockedPersistentDataAdjustment;                        // 0x01E8   (0x0008)  
            bool                                               bUnlockAll;                                                 // 0x01F0   (0x0001)  
            unsigned char                                      UnknownData01_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
            class URecCutsceneManager*                         CutsceneManager;                                            // 0x01F8   (0x0008)  
            class URecActivityChecker*                         ActivityChecker;                                            // 0x0200   (0x0008)  
            unsigned char                                      UnknownData02_7[0xB18];                                     // 0x0208   (0x0B18)  MISSED
    };
}

#endif /* !URECGAMEINSTANCE_HPP_ */
