#ifndef ARECBASECHARACTER_HPP_
#define ARECBASECHARACTER_HPP_

#include "SDK/SDK.h"

namespace Game {
    class ARecBaseCharacter : public APL_CharacterWithAbilitySystem { 
        public:

            void TriggerGenericDeath();

            unsigned char                                      UnknownData00_8[0x28];                                      // 0x0530   (0x0028)  MISSED
            SDK_UNDEFINED(16,706) /* FMulticastInlineDelegate */ __um(OnJumpedDelegate);                                   // 0x0558   (0x0010)  
            SDK_UNDEFINED(16,707) /* FMulticastInlineDelegate */ __um(OnLandedDelegate);                                   // 0x0568   (0x0010)  
            SDK_UNDEFINED(16,708) /* FMulticastInlineDelegate */ __um(OnTeamIdChangedDelegate);                            // 0x0578   (0x0010)  
            SDK_UNDEFINED(16,709) /* FMulticastInlineDelegate */ __um(OnStartedDyingDelegate);                             // 0x0588   (0x0010)  
            SDK_UNDEFINED(16,710) /* FMulticastInlineDelegate */ __um(OnFinishedDyingDelegate);                            // 0x0598   (0x0010)  
            SDK_UNDEFINED(16,711) /* FMulticastInlineDelegate */ __um(OnDeathEffectReceivedAfterDeath);                    // 0x05A8   (0x0010)  
            unsigned char                                      UnknownData01_6[0x18];                                      // 0x05B8   (0x0018)  MISSED
            ERecTeamId                                         TeamId;                                                     // 0x05D0   (0x0001)  
            unsigned char                                      UnknownData02_6[0x7];                                       // 0x05D1   (0x0007)  MISSED
            class URecTypeComponent*                           TypeComponent;                                              // 0x05D8   (0x0008)  
            class URecToggleAIComponent*                       ToggleAIComponent;                                          // 0x05E0   (0x0008)  
            class URecLookAtComponent*                         LookAtComponent;                                            // 0x05E8   (0x0008)  
            TArray<class UClass*>                              DefaultAbilities;                                           // 0x05F0   (0x0010)  
            float                                              LookAtInterpolationSpeed;                                   // 0x0600   (0x0004)  
            float                                              SoftLandingThreshold;                                       // 0x0604   (0x0004)  
            float                                              HardLandingThreshold;                                       // 0x0608   (0x0004)  
            float                                              TurnThreshold;                                              // 0x060C   (0x0004)  
            FGameplayTag                                       BlockMovementTag;                                           // 0x0610   (0x0008)  
            class UClass*                                      WeaponTemplate;                                             // 0x0618   (0x0008)  
            FName                                              WeaponSocket;                                               // 0x0620   (0x0008)  
            bool                                               bIsInDialogue;                                              // 0x0628   (0x0001)  
            unsigned char                                      UnknownData03_6[0x1];                                       // 0x0629   (0x0001)  MISSED
            bool                                               bIsListeningToTarget;                                       // 0x062A   (0x0001)  
            unsigned char                                      UnknownData04_6[0x5];                                       // 0x062B   (0x0005)  MISSED
            class APL_Dialogue*                                ActiveDialogue;                                             // 0x0630   (0x0008)  
            class ARecWeapon*                                  Weapon;                                                     // 0x0638   (0x0008)  
            TArray<FGameplayAbilitySpecHandle>                 WeaponAbilityHandles;                                       // 0x0640   (0x0010)  
            TArray<FGameplayAbilitySpecHandle>                 AbilitySpecHandles;                                         // 0x0650   (0x0010)  
            unsigned char                                      UnknownData05_6[0x10];                                      // 0x0660   (0x0010)  MISSED
            FGameplayTag                                       DeathReasonTag;                                             // 0x0670   (0x0008)  
            unsigned char                                      UnknownData06_7[0x28];                                      // 0x0678   (0x0028)  MISSED
        };
}

#endif /* !ARECBASECHARACTER_HPP_ */

