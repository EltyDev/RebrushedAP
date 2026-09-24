
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: GameplayTags
/// dependency: PL_Cutscenes
/// dependency: PL_Decisions

#pragma pack(push, 0x1)

/// Enum /Script/PL_ActionSystem.EPL_ActionExecutionFlow
/// Size: 0x01 (1 bytes)
enum class EPL_ActionExecutionFlow : uint8_t
{
	EPL_ActionExecutionFlow__Sequential                                              = 0,
	EPL_ActionExecutionFlow__Parallel                                                = 1
};

/// Enum /Script/PL_ActionSystem.EPL_DesiredManipulationState
/// Size: 0x01 (1 bytes)
enum class EPL_DesiredManipulationState : uint8_t
{
	EPL_DesiredManipulationState__Enable                                             = 0,
	EPL_DesiredManipulationState__Disable                                            = 1,
	EPL_DesiredManipulationState__DoNothing                                          = 2
};

/// Enum /Script/PL_ActionSystem.EPL_AnimationManipulationActionControl
/// Size: 0x01 (1 bytes)
enum class EPL_AnimationManipulationActionControl : uint8_t
{
	EPL_AnimationManipulationActionControl__STOP                                     = 0,
	EPL_AnimationManipulationActionControl__PLAY                                     = 1,
	EPL_AnimationManipulationActionControl__PAUSE                                    = 2
};

/// Enum /Script/PL_ActionSystem.EPL_AnimationManipulationActionWrapping
/// Size: 0x01 (1 bytes)
enum class EPL_AnimationManipulationActionWrapping : uint8_t
{
	EPL_AnimationManipulationActionWrapping__LOOP                                    = 0,
	EPL_AnimationManipulationActionWrapping__NONE                                    = 1
};

/// Enum /Script/PL_ActionSystem.EPL_AnimationManipulationActionPosition
/// Size: 0x01 (1 bytes)
enum class EPL_AnimationManipulationActionPosition : uint8_t
{
	EPL_AnimationManipulationActionPosition__FROM_START                              = 0,
	EPL_AnimationManipulationActionPosition__FROM_CURRENT                            = 1
};

/// Enum /Script/PL_ActionSystem.EPL_DesiredSequenceOption
/// Size: 0x01 (1 bytes)
enum class EPL_DesiredSequenceOption : uint8_t
{
	EPL_DesiredSequenceOption__START                                                 = 0,
	EPL_DesiredSequenceOption__STOP                                                  = 1
};

/// Enum /Script/PL_ActionSystem.EPL_DecisionManipulation
/// Size: 0x04 (4 bytes)
enum class EPL_DecisionManipulation : uint32_t
{
	EPL_DecisionManipulation__Set                                                    = 0,
	EPL_DecisionManipulation__SetArbitrary                                           = 1,
	EPL_DecisionManipulation__Add                                                    = 2,
	EPL_DecisionManipulation__Subtract                                               = 3,
	EPL_DecisionManipulation__Remove                                                 = 4
};

/// Class /Script/PL_ActionSystem.PL_BaseAction
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_BaseAction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/PL_ActionSystem.PL_ActionContainer
/// Size: 0x00C0 (192 bytes) (0x000048 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_ActionContainer : public UPL_BaseAction
{ 
public:
	EPL_ActionExecutionFlow                            ActionExecutionFlow;                                        // 0x0048   (0x0001)  
	bool                                               bWaitOnActionsCompletion;                                   // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	TArray<class UPL_BaseAction*>                      Actions;                                                    // 0x0050   (0x0010)  
	class UPL_BaseActionContext*                       ActionContext;                                              // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x0068   (0x0058)  MISSED
};

/// Class /Script/PL_ActionSystem.PL_ActionUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ActionUtils : public UObject
{ 
public:
};

/// Class /Script/PL_ActionSystem.PL_ActorManipulationAction
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UPL_ActorManipulationAction : public UPL_BaseAction
{ 
public:
	SDK_UNDEFINED(16,547) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Targets);                                     // 0x0048   (0x0010)  
	EPL_DesiredManipulationState                       CollisionDesiredState;                                      // 0x0058   (0x0001)  
	EPL_DesiredManipulationState                       VisibleDesiredState;                                        // 0x0059   (0x0001)  
	EPL_DesiredManipulationState                       TickDesiredState;                                           // 0x005A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x005B   (0x0005)  MISSED
};

/// Class /Script/PL_ActionSystem.PL_AnimationManipulationAction
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPL_AnimationManipulationAction : public UPL_BaseAction
{ 
public:
	EPL_AnimationManipulationActionControl             Control;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TWeakObjectPtr<class AActor*>                      Target;                                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0058   (0x0020)  MISSED
	TWeakObjectPtr<class UAnimSequence*>               Animation;                                                  // 0x0078   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0080   (0x0020)  MISSED
	EPL_AnimationManipulationActionPosition            position;                                                   // 0x00A0   (0x0001)  
	EPL_AnimationManipulationActionWrapping            Wrapping;                                                   // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x00A2   (0x0006)  MISSED
};

/// Class /Script/PL_ActionSystem.PL_BaseActionContext
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPL_BaseActionContext : public UObject
{ 
public:
	TWeakObjectPtr<class UObject*>                     Source;                                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	TWeakObjectPtr<class ACharacter*>                  PlayerCharacter;                                            // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0058   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     WorldContextObject;                                         // 0x0078   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0080   (0x0020)  MISSED
};

/// Class /Script/PL_ActionSystem.PL_PlaySequenceAction
/// Size: 0x00E0 (224 bytes) (0x000048 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPL_PlaySequenceAction : public UPL_BaseAction
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0048   (0x0008)  MISSED
	EPL_DesiredSequenceOption                          DesiredSequenceOption;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TWeakObjectPtr<class ALevelSequenceActor*>         LevelSequenceActor;                                         // 0x0058   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0060   (0x0020)  MISSED
	bool                                               bIsCutscene;                                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FPL_CutsceneSettings                               Settings;                                                   // 0x0088   (0x0018)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00A0   (0x0008)  MISSED
	TWeakObjectPtr<class ULevelSequencePlayer*>        SequencePlayer;                                             // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x00B0   (0x0020)  MISSED
	SDK_UNDEFINED(16,548) /* FDelegateProperty */      __um(OnStartSkippingCutscenes);                             // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/PL_ActionSystem.PL_PlaySequenceAction.OnSkipCutscene
	// void OnSkipCutscene();                                                                                                   // [0xe9bbb0] Final|Native|Protected 
	// Function /Script/PL_ActionSystem.PL_PlaySequenceAction.OnSequenceStopped
	// void OnSequenceStopped();                                                                                                // [0xe9bb90] Final|Native|Protected 
};

/// Class /Script/PL_ActionSystem.PL_SetPlayerDecisionAction
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UPL_SetPlayerDecisionAction : public UPL_BaseAction
{ 
public:
	FGameplayTag                                       DecisionID;                                                 // 0x0048   (0x0008)  
	EPL_DecisionManipulation                           Manipulation;                                               // 0x0050   (0x0004)  
	bool                                               bIsArbitraryDecision;                                       // 0x0054   (0x0001)  
	EPL_BinaryChoice                                   YesOrNo;                                                    // 0x0055   (0x0001)  
	char                                               Decision;                                                   // 0x0056   (0x0001)  
	char                                               Amount;                                                     // 0x0057   (0x0001)  
};

/// Class /Script/PL_ActionSystem.PL_TeleportToMarkerAction
/// Size: 0x0080 (128 bytes) (0x000048 - 0x000080) align 8 MaxSize: 0x0080
class UPL_TeleportToMarkerAction : public UPL_BaseAction
{ 
public:
	FGameplayTag                                       PositionMarkerId;                                           // 0x0048   (0x0008)  
	bool                                               bTargetPlayer;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TWeakObjectPtr<class AActor*>                      Target;                                                     // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0060   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPL_BaseAction) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPL_ActionContainer) == 0x00C0); // 192 bytes (0x000048 - 0x0000C0)
static_assert(sizeof(UPL_ActionUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ActorManipulationAction) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UPL_AnimationManipulationAction) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UPL_BaseActionContext) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UPL_PlaySequenceAction) == 0x00E0); // 224 bytes (0x000048 - 0x0000E0)
static_assert(sizeof(UPL_SetPlayerDecisionAction) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UPL_TeleportToMarkerAction) == 0x0080); // 128 bytes (0x000048 - 0x000080)
static_assert(offsetof(UPL_ActionContainer, ActionExecutionFlow) == 0x0048);
static_assert(offsetof(UPL_ActionContainer, Actions) == 0x0050);
static_assert(offsetof(UPL_ActionContainer, ActionContext) == 0x0060);
static_assert(offsetof(UPL_ActorManipulationAction, CollisionDesiredState) == 0x0058);
static_assert(offsetof(UPL_ActorManipulationAction, VisibleDesiredState) == 0x0059);
static_assert(offsetof(UPL_ActorManipulationAction, TickDesiredState) == 0x005A);
static_assert(offsetof(UPL_AnimationManipulationAction, Control) == 0x0048);
static_assert(offsetof(UPL_AnimationManipulationAction, Target) == 0x0050);
static_assert(offsetof(UPL_AnimationManipulationAction, Animation) == 0x0078);
static_assert(offsetof(UPL_AnimationManipulationAction, position) == 0x00A0);
static_assert(offsetof(UPL_AnimationManipulationAction, Wrapping) == 0x00A1);
static_assert(offsetof(UPL_BaseActionContext, Source) == 0x0028);
static_assert(offsetof(UPL_BaseActionContext, PlayerCharacter) == 0x0050);
static_assert(offsetof(UPL_BaseActionContext, WorldContextObject) == 0x0078);
static_assert(offsetof(UPL_PlaySequenceAction, DesiredSequenceOption) == 0x0050);
static_assert(offsetof(UPL_PlaySequenceAction, LevelSequenceActor) == 0x0058);
static_assert(offsetof(UPL_PlaySequenceAction, Settings) == 0x0088);
static_assert(offsetof(UPL_PlaySequenceAction, SequencePlayer) == 0x00A8);
static_assert(offsetof(UPL_SetPlayerDecisionAction, DecisionID) == 0x0048);
static_assert(offsetof(UPL_SetPlayerDecisionAction, Manipulation) == 0x0050);
static_assert(offsetof(UPL_SetPlayerDecisionAction, YesOrNo) == 0x0055);
static_assert(offsetof(UPL_TeleportToMarkerAction, PositionMarkerId) == 0x0048);
static_assert(offsetof(UPL_TeleportToMarkerAction, Target) == 0x0058);
