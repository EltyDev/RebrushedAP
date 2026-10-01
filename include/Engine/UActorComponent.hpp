#ifndef UACTORCOMPONENT_HPP_
#define UACTORCOMPONENT_HPP_

#include "SDK/SDK.h"

namespace Engine {
    class UActorComponent : public UObject {
        public:

            void SetActive(bool bNewActive, bool bReset);

        	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
            FActorComponentTickFunction                        PrimaryComponentTick;                                       // 0x0038   (0x0030)  
            TArray<FName>                                      ComponentTags;                                              // 0x0068   (0x0010)  
            TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0078   (0x0010)  
            unsigned char                                      UnknownData01_6[0x4];                                       // 0x0088   (0x0004)  MISSED
            int32_t                                            UCSSerializationIndex;                                      // 0x008C   (0x0004)  
            unsigned char                                      UnknownBit02 : 1;                                           // 0x0090:0 (0x0001)  MISSED
            unsigned char                                      UnknownBit03 : 1;                                           // 0x0090:1 (0x0001)  MISSED
            unsigned char                                      UnknownBit04 : 1;                                           // 0x0090:2 (0x0001)  MISSED
            bool                                               bNetAddressable : 1;                                        // 0x0090:3 (0x0001)  
            bool                                               bReplicates : 1;                                            // 0x0090:4 (0x0001)  
            unsigned char                                      UnknownBit05 : 1;                                           // 0x0090:5 (0x0001)  MISSED
            unsigned char                                      UnknownBit06 : 1;                                           // 0x0090:6 (0x0001)  MISSED
            unsigned char                                      UnknownBit07 : 1;                                           // 0x0090:7 (0x0001)  MISSED
            unsigned char                                      UnknownBit08 : 1;                                           // 0x0091:0 (0x0001)  MISSED
            unsigned char                                      UnknownBit09 : 1;                                           // 0x0091:1 (0x0001)  MISSED
            unsigned char                                      UnknownBit10 : 1;                                           // 0x0091:2 (0x0001)  MISSED
            unsigned char                                      UnknownBit11 : 1;                                           // 0x0091:3 (0x0001)  MISSED
            unsigned char                                      UnknownBit12 : 1;                                           // 0x0091:4 (0x0001)  MISSED
            unsigned char                                      UnknownBit13 : 1;                                           // 0x0091:5 (0x0001)  MISSED
            unsigned char                                      UnknownBit14 : 1;                                           // 0x0091:6 (0x0001)  MISSED
            bool                                               bAutoActivate : 1;                                          // 0x0091:7 (0x0001)  
            bool                                               bIsActive : 1;                                              // 0x0092:0 (0x0001)  
            bool                                               bEditableWhenInherited : 1;                                 // 0x0092:1 (0x0001)  
            unsigned char                                      UnknownBit15 : 1;                                           // 0x0092:2 (0x0001)  MISSED
            bool                                               bCanEverAffectNavigation : 1;                               // 0x0092:3 (0x0001)  
            unsigned char                                      UnknownBit16 : 1;                                           // 0x0092:4 (0x0001)  MISSED
            bool                                               bIsEditorOnly : 1;                                          // 0x0092:5 (0x0001)  
            unsigned char                                      UnknownData17_5[0x1];                                       // 0x0093   (0x0001)  MISSED
            EComponentCreationMethod                           CreationMethod;                                             // 0x0094   (0x0001)  
            SDK_UNDEFINED(1,2) /* FMulticastSparseDelegate */  __um(OnComponentActivated);                                 // 0x0095   (0x0001)  
            SDK_UNDEFINED(1,3) /* FMulticastSparseDelegate */  __um(OnComponentDeactivated);                               // 0x0096   (0x0001)  
            unsigned char                                      UnknownData18_6[0x1];                                       // 0x0097   (0x0001)  MISSED
            TArray<FSimpleMemberReference>                     UCSModifiedProperties;                                      // 0x0098   (0x0010)  
            unsigned char                                      UnknownData19_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
        protected:
        private:
    };
}

#endif /* !UACTORCOMPONENT_HPP_ */
