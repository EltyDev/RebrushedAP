#ifndef AACTOR_HPP_
#define AACTOR_HPP_

#include "SDK/SDK.h"
#include "Engine/UActorComponent.hpp"

namespace Engine {
    class AActor : public UObject {
        public:
            UActorComponent* GetComponentByClass(UClass* classe);

            unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
            FActorTickFunction                                 PrimaryActorTick;                                           // 0x0030   (0x0030)  
            bool                                               bNetTemporary : 1;                                          // 0x0060:0 (0x0001)  
            bool                                               bNetStartup : 1;                                            // 0x0060:1 (0x0001)  
            bool                                               bOnlyRelevantToOwner : 1;                                   // 0x0060:2 (0x0001)  
            bool                                               bAlwaysRelevant : 1;                                        // 0x0060:3 (0x0001)  
            bool                                               bReplicateMovement : 1;                                     // 0x0060:4 (0x0001)  
            bool                                               bHidden : 1;                                                // 0x0060:5 (0x0001)  
            bool                                               bTearOff : 1;                                               // 0x0060:6 (0x0001)  
            bool                                               bForceNetAddressable : 1;                                   // 0x0060:7 (0x0001)  
            bool                                               bExchangedRoles : 1;                                        // 0x0061:0 (0x0001)  
            bool                                               bNetLoadOnClient : 1;                                       // 0x0061:1 (0x0001)  
            bool                                               bNetUseOwnerRelevancy : 1;                                  // 0x0061:2 (0x0001)  
            bool                                               bRelevantForNetworkReplays : 1;                             // 0x0061:3 (0x0001)  
            bool                                               bRelevantForLevelBounds : 1;                                // 0x0061:4 (0x0001)  
            bool                                               bReplayRewindable : 1;                                      // 0x0061:5 (0x0001)  
            bool                                               bAllowTickBeforeBeginPlay : 1;                              // 0x0061:6 (0x0001)  
            bool                                               bAutoDestroyWhenFinished : 1;                               // 0x0061:7 (0x0001)  
            bool                                               bCanBeDamaged : 1;                                          // 0x0062:0 (0x0001)  
            bool                                               bBlockInput : 1;                                            // 0x0062:1 (0x0001)  
            bool                                               bCollideWhenPlacing : 1;                                    // 0x0062:2 (0x0001)  
            bool                                               bFindCameraComponentWhenViewTarget : 1;                     // 0x0062:3 (0x0001)  
            bool                                               bGenerateOverlapEventsDuringLevelStreaming : 1;             // 0x0062:4 (0x0001)  
            bool                                               bIgnoresOriginShifting : 1;                                 // 0x0062:5 (0x0001)  
            bool                                               bEnableAutoLODGeneration : 1;                               // 0x0062:6 (0x0001)  
            bool                                               bIsEditorOnlyActor : 1;                                     // 0x0062:7 (0x0001)  
            bool                                               bActorSeamlessTraveled : 1;                                 // 0x0063:0 (0x0001)  
            bool                                               bReplicates : 1;                                            // 0x0063:1 (0x0001)  
            bool                                               bCanBeInCluster : 1;                                        // 0x0063:2 (0x0001)  
            bool                                               bAllowReceiveTickEventOnDedicatedServer : 1;                // 0x0063:3 (0x0001)  
            unsigned char                                      UnknownBit01 : 1;                                           // 0x0063:4 (0x0001)  MISSED
            unsigned char                                      UnknownBit02 : 1;                                           // 0x0063:5 (0x0001)  MISSED
            unsigned char                                      UnknownBit03 : 1;                                           // 0x0063:6 (0x0001)  MISSED
            unsigned char                                      UnknownBit04 : 1;                                           // 0x0063:7 (0x0001)  MISSED
            unsigned char                                      UnknownBit05 : 1;                                           // 0x0064:0 (0x0001)  MISSED
            unsigned char                                      UnknownBit06 : 1;                                           // 0x0064:1 (0x0001)  MISSED
            unsigned char                                      UnknownBit07 : 1;                                           // 0x0064:2 (0x0001)  MISSED
            bool                                               bActorEnableCollision : 1;                                  // 0x0064:3 (0x0001)  
            bool                                               bActorIsBeingDestroyed : 1;                                 // 0x0064:4 (0x0001)  
            EActorUpdateOverlapsMethod                         UpdateOverlapsMethodDuringLevelStreaming;                   // 0x0065   (0x0001)  
            EActorUpdateOverlapsMethod                         DefaultUpdateOverlapsMethodDuringLevelStreaming;            // 0x0066   (0x0001)  
            TEnumAsByte<ENetRole>                              RemoteRole;                                                 // 0x0067   (0x0001)  
            FRepMovement                                       ReplicatedMovement;                                         // 0x0068   (0x0034)  
            float                                              InitialLifeSpan;                                            // 0x009C   (0x0004)  
            float                                              CustomTimeDilation;                                         // 0x00A0   (0x0004)  
            unsigned char                                      UnknownData08_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
            FRepAttachment                                     AttachmentReplication;                                      // 0x00A8   (0x0040)  
            class AActor*                                      Owner;                                                      // 0x00E8   (0x0008)  
            FName                                              NetDriverName;                                              // 0x00F0   (0x0008)  
            TEnumAsByte<ENetRole>                              Role;                                                       // 0x00F8   (0x0001)  
            TEnumAsByte<ENetDormancy>                          NetDormancy;                                                // 0x00F9   (0x0001)  
            ESpawnActorCollisionHandlingMethod                 SpawnCollisionHandlingMethod;                               // 0x00FA   (0x0001)  
            TEnumAsByte<EAutoReceiveInput>                     AutoReceiveInput;                                           // 0x00FB   (0x0001)  
            int32_t                                            InputPriority;                                              // 0x00FC   (0x0004)  
            class UInputComponent*                             InputComponent;                                             // 0x0100   (0x0008)  
            float                                              NetCullDistanceSquared;                                     // 0x0108   (0x0004)  
            int32_t                                            NetTag;                                                     // 0x010C   (0x0004)  
            float                                              NetUpdateFrequency;                                         // 0x0110   (0x0004)  
            float                                              MinNetUpdateFrequency;                                      // 0x0114   (0x0004)  
            float                                              NetPriority;                                                // 0x0118   (0x0004)  
            unsigned char                                      UnknownData09_6[0x4];                                       // 0x011C   (0x0004)  MISSED
            class APawn*                                       Instigator;                                                 // 0x0120   (0x0008)  
            TArray<class AActor*>                              Children;                                                   // 0x0128   (0x0010)  
            class USceneComponent*                             RootComponent;                                              // 0x0138   (0x0008)  
            TArray<class AMatineeActor*>                       ControllingMatineeActors;                                   // 0x0140   (0x0010)  
            unsigned char                                      UnknownData10_6[0x8];                                       // 0x0150   (0x0008)  MISSED
            TArray<FName>                                      Layers;                                                     // 0x0158   (0x0010)  
            TWeakObjectPtr<class UChildActorComponent*>        ParentComponent;                                            // 0x0168   (0x0008)  
            unsigned char                                      UnknownData11_6[0x8];                                       // 0x0170   (0x0008)  MISSED
            TArray<FName>                                      Tags;                                                       // 0x0178   (0x0010)  
            SDK_UNDEFINED(1,8) /* FMulticastSparseDelegate */  __um(OnTakeAnyDamage);                                      // 0x0188   (0x0001)  
            SDK_UNDEFINED(1,9) /* FMulticastSparseDelegate */  __um(OnTakePointDamage);                                    // 0x0189   (0x0001)  
            SDK_UNDEFINED(1,10) /* FMulticastSparseDelegate */ __um(OnTakeRadialDamage);                                   // 0x018A   (0x0001)  
            SDK_UNDEFINED(1,11) /* FMulticastSparseDelegate */ __um(OnActorBeginOverlap);                                  // 0x018B   (0x0001)  
            SDK_UNDEFINED(1,12) /* FMulticastSparseDelegate */ __um(OnActorEndOverlap);                                    // 0x018C   (0x0001)  
            SDK_UNDEFINED(1,13) /* FMulticastSparseDelegate */ __um(OnBeginCursorOver);                                    // 0x018D   (0x0001)  
            SDK_UNDEFINED(1,14) /* FMulticastSparseDelegate */ __um(OnEndCursorOver);                                      // 0x018E   (0x0001)  
            SDK_UNDEFINED(1,15) /* FMulticastSparseDelegate */ __um(OnClicked);                                            // 0x018F   (0x0001)  
            SDK_UNDEFINED(1,16) /* FMulticastSparseDelegate */ __um(OnReleased);                                           // 0x0190   (0x0001)  
            SDK_UNDEFINED(1,17) /* FMulticastSparseDelegate */ __um(OnInputTouchBegin);                                    // 0x0191   (0x0001)  
            SDK_UNDEFINED(1,18) /* FMulticastSparseDelegate */ __um(OnInputTouchEnd);                                      // 0x0192   (0x0001)  
            SDK_UNDEFINED(1,19) /* FMulticastSparseDelegate */ __um(OnInputTouchEnter);                                    // 0x0193   (0x0001)  
            SDK_UNDEFINED(1,20) /* FMulticastSparseDelegate */ __um(OnInputTouchLeave);                                    // 0x0194   (0x0001)  
            SDK_UNDEFINED(1,21) /* FMulticastSparseDelegate */ __um(OnActorHit);                                           // 0x0195   (0x0001)  
            unsigned char                                      UnknownData12_6[0x12];                                      // 0x0196   (0x0012)  MISSED
            SDK_UNDEFINED(1,22) /* FMulticastSparseDelegate */ __um(OnHiddenInGameChanged);                                // 0x01A8   (0x0001)  
            unsigned char                                      UnknownData13_6[0x17];                                      // 0x01A9   (0x0017)  MISSED
            SDK_UNDEFINED(1,23) /* FMulticastSparseDelegate */ __um(OnEnableCollisionChanged);                             // 0x01C0   (0x0001)  
            SDK_UNDEFINED(1,24) /* FMulticastSparseDelegate */ __um(OnActorPostInitializeComponents);                      // 0x01C1   (0x0001)  
            SDK_UNDEFINED(1,25) /* FMulticastSparseDelegate */ __um(OnActorPreInitializeComponents);                       // 0x01C2   (0x0001)  
            SDK_UNDEFINED(1,26) /* FMulticastSparseDelegate */ __um(OnDestroyed);                                          // 0x01C3   (0x0001)  
            SDK_UNDEFINED(1,27) /* FMulticastSparseDelegate */ __um(OnEndPlay);                                            // 0x01C4   (0x0001)  
            unsigned char                                      UnknownData14_6[0x13];                                      // 0x01C5   (0x0013)  MISSED
            SDK_UNDEFINED(1,28) /* FMulticastSparseDelegate */ __um(OnTickEnabledChanged);                                 // 0x01D8   (0x0001)  
            unsigned char                                      UnknownData15_6[0x7F];                                      // 0x01D9   (0x007F)  MISSED
            TArray<class UActorComponent*>                     InstanceComponents;                                         // 0x0258   (0x0010)  
            TArray<class UActorComponent*>                     BlueprintCreatedComponents;                                 // 0x0268   (0x0010)  
            unsigned char                                      UnknownData16_7[0x10];                                      // 0x0278   (0x0010)  MISSED

        protected:
        private:
    };
};

#endif /* !AACTOR_HPP_ */