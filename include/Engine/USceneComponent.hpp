#ifndef USCENECOMPONENT_HPP_
#define USCENECOMPONENT_HPP_

#include "Engine/UActorComponent.hpp"

namespace Engine {

    enum EVisibilityPropagation {  
        NoPropagation,  
        DirtyOnly,  
        Propagate,  
    };

    class USceneComponent : public Engine::UActorComponent {
        public:

            void SetVisibility(bool bNewVisibility, EVisibilityPropagation PropagateToChildren);

            unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
            TWeakObjectPtr<class APhysicsVolume*>              PhysicsVolume;                                              // 0x00C0   (0x0008)  
            class USceneComponent*                             AttachParent;                                               // 0x00C8   (0x0008)  
            FName                                              AttachSocketName;                                           // 0x00D0   (0x0008)  
            TArray<class USceneComponent*>                     AttachChildren;                                             // 0x00D8   (0x0010)  
            TArray<class USceneComponent*>                     ClientAttachedChildren;                                     // 0x00E8   (0x0010)  
            unsigned char                                      UnknownData01_6[0x2C];                                      // 0x00F8   (0x002C)  MISSED
            FVector                                            RelativeLocation;                                           // 0x0124   (0x000C)  
            FRotator                                           RelativeRotation;                                           // 0x0130   (0x000C)  
            FVector                                            RelativeScale3D;                                            // 0x013C   (0x000C)  
            FVector                                            ComponentVelocity;                                          // 0x0148   (0x000C)  
            bool                                               bComponentToWorldUpdated : 1;                               // 0x0154:0 (0x0001)  
            unsigned char                                      UnknownBit02 : 1;                                           // 0x0154:1 (0x0001)  MISSED
            bool                                               bAbsoluteLocation : 1;                                      // 0x0154:2 (0x0001)  
            bool                                               bAbsoluteRotation : 1;                                      // 0x0154:3 (0x0001)  
            bool                                               bAbsoluteScale : 1;                                         // 0x0154:4 (0x0001)  
            bool                                               bVisible : 1;                                               // 0x0154:5 (0x0001)  
            bool                                               bShouldBeAttached : 1;                                      // 0x0154:6 (0x0001)  
            bool                                               bShouldSnapLocationWhenAttached : 1;                        // 0x0154:7 (0x0001)  
            bool                                               bShouldSnapRotationWhenAttached : 1;                        // 0x0155:0 (0x0001)  
            bool                                               bShouldUpdatePhysicsVolume : 1;                             // 0x0155:1 (0x0001)  
            bool                                               bHiddenInGame : 1;                                          // 0x0155:2 (0x0001)  
            bool                                               bBoundsChangeTriggersStreamingDataRebuild : 1;              // 0x0155:3 (0x0001)  
            bool                                               bUseAttachParentBound : 1;                                  // 0x0155:4 (0x0001)  
            unsigned char                                      UnknownData03_5[0x1];                                       // 0x0156   (0x0001)  MISSED
            TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0157   (0x0001)  
            TEnumAsByte<EDetailMode>                           DetailMode;                                                 // 0x0158   (0x0001)  
            SDK_UNDEFINED(1,4) /* FMulticastSparseDelegate */  __um(PhysicsVolumeChangedDelegate);                         // 0x0159   (0x0001)  
            unsigned char                                      UnknownData04_7[0xAE];                                      // 0x015A   (0x00AE)  MISSED{
    };
}

#endif /* !USCENECOMPONENT_HPP_ */
