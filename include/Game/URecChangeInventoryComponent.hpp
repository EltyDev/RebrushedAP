#ifndef URECCHANGEINVENTORYCOMPONENT_HPP_
#define URECCHANGEINVENTORYCOMPONENT_HPP_

#include "SDK/SDK.h"

namespace Game {
    class URecChangeInventoryComponent : public UActorComponent {
        public:

            static UClass *GetPrivateStaticClass();

            class URecInventoryItem*                           Item;                                                       // 0x00B8   (0x0008)  
            ERecInventoryChange                                Change;                                                     // 0x00C0   (0x0001)  
            unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
            int32_t                                            Amount;                                                     // 0x00C4   (0x0004)  
            class URecInventoryItem*                           RevisitingItem;                                             // 0x00C8   (0x0008)  
            int32_t                                            RevistingItemAmount;                                        // 0x00D0   (0x0004)  
            unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
    };
}

#endif /* !URECCHANGEINVENTORYCOMPONENT_HPP_ */
