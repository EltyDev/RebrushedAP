#ifndef UPL_SAVEGAMESYSTEM_HPP_
#define UPL_SAVEGAMESYSTEM_HPP_

#include "SDK/SDK.h"

namespace Game {
    class UPL_SaveGameSystem : public UGameInstanceSubsystem { 
        public:

            FPL_SaveResult SaveState(FPL_SaveResult* result, bool bWasAutoSave, bool bAsync);

            SDK_UNDEFINED(16,660) /* FMulticastInlineDelegate */ __um(OnStateTransition);                                  // 0x0030   (0x0010)  
            SDK_UNDEFINED(16,661) /* FMulticastInlineDelegate */ __um(OnSaveDataQueueChanged);                             // 0x0040   (0x0010)  
            unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED
            class UUserWidget*                                 SaveIndicatorWidget;                                        // 0x0070   (0x0008)  
            unsigned char                                      UnknownData01_7[0x70];                                      // 0x0078   (0x0070)  MISSED
    };
}

#endif /* !UPL_SAVEGAMESYSTEM_HPP_ */
