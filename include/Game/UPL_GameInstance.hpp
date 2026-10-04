#ifndef UPL_GAMEINSTANCE_HPP_
#define UPL_GAMEINSTANCE_HPP_

#include "SDK/SDK.h"

namespace Game {
    class UPL_GameInstance : public UGameInstance { 
        public:

            SDK_UNDEFINED(16,360) /* FMulticastInlineDelegate */ __um(OnLoadMapComplete);                                  // 0x01A8   (0x0010)  
            SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(OnWorldChangedDelegate);                             // 0x01B8   (0x0010)  
            float                                              JoyconDCCheckInterval;                                      // 0x01C8   (0x0004)  
            float                                              JoyconMaxDCInterval;                                        // 0x01CC   (0x0004)  
    };
}

#endif /* !UPL_GAMEINSTANCE_HPP_ */
