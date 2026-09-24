
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: PL_ActionSystem
/// dependency: PL_Core
/// dependency: PL_Decisions
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_TriggerSystem.EPL_TriggerConditionState
/// Size: 0x01 (1 bytes)
enum class EPL_TriggerConditionState : uint8_t
{
	EPL_TriggerConditionState__FULFILLED                                             = 0,
	EPL_TriggerConditionState__UNFULFILLED                                           = 1,
	EPL_TriggerConditionState__NOT_EVALUATED                                         = 2
};

/// Enum /Script/PL_TriggerSystem.EPL_TriggerConditionEvaluationType
/// Size: 0x01 (1 bytes)
enum class EPL_TriggerConditionEvaluationType : uint8_t
{
	EPL_TriggerConditionEvaluationType__AND                                          = 0,
	EPL_TriggerConditionEvaluationType__OR                                           = 1,
	EPL_TriggerConditionEvaluationType__MORE_THAN                                    = 2,
	EPL_TriggerConditionEvaluationType__LESS_THAN                                    = 3,
	EPL_TriggerConditionEvaluationType__MORE_THAN_OR_EQUALS_TO                       = 4,
	EPL_TriggerConditionEvaluationType__LESS_THAN_OR_EQUALS_TO                       = 5,
	EPL_TriggerConditionEvaluationType__NOT_EQUALS_TO                                = 6,
	EPL_TriggerConditionEvaluationType__EQUALS_TO                                    = 7
};

/// Enum /Script/PL_TriggerSystem.ERecTriggerConditionOverlapState
/// Size: 0x01 (1 bytes)
enum class ERecTriggerConditionOverlapState : uint8_t
{
	ERecTriggerConditionOverlapState__BEGIN_OVERLAP                                  = 0,
	ERecTriggerConditionOverlapState__END_OVERLAP                                    = 1
};

/// Enum /Script/PL_TriggerSystem.EPL_TriggerState
/// Size: 0x01 (1 bytes)
enum class EPL_TriggerState : uint8_t
{
	EPL_TriggerState__Active                                                         = 0,
	EPL_TriggerState__Inactive                                                       = 1,
	EPL_TriggerState__Broken                                                         = 2
};

/// Class /Script/PL_TriggerSystem.PL_Trigger
/// Size: 0x02C0 (704 bytes) (0x000288 - 0x0002C0) align 8 MaxSize: 0x02C0
class APL_Trigger : public AActor
{ 
public:
	FName                                              TriggerName;                                                // 0x0288   (0x0008)  
	class UPL_TriggerCondition*                        Condition;                                                  // 0x0290   (0x0008)  
	class UPL_TriggerCondition*                        ResetCondition;                                             // 0x0298   (0x0008)  
	EPL_ResetPolicy                                    ResetPolicy;                                                // 0x02A0   (0x0001)  
	bool                                               bTriggerOnce;                                               // 0x02A1   (0x0001)  
	bool                                               bHasBeenTriggeredAtLeastOnce;                               // 0x02A2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x02A3   (0x0005)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x02B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_TriggerSystem.PL_Trigger.OnWorldActorsHaveBegunPlay
	// void OnWorldActorsHaveBegunPlay(class UWorld* World);                                                                    // [0xe95d60] Final|Native|Private 
	// Function /Script/PL_TriggerSystem.PL_Trigger.OnResetConditionStateChanged
	// void OnResetConditionStateChanged(EPL_TriggerConditionState NewState);                                                   // [0xe95a30] Native|Protected     
	// Function /Script/PL_TriggerSystem.PL_Trigger.OnConditionStateChanged
	// void OnConditionStateChanged(EPL_TriggerConditionState NewState);                                                        // [0xe95810] Native|Protected     
	// Function /Script/PL_TriggerSystem.PL_Trigger.GetTriggerName
	// FName GetTriggerName();                                                                                                  // [0xe957a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_TriggerSystem.PL_ActionTrigger
/// Size: 0x02D8 (728 bytes) (0x0002C0 - 0x0002D8) align 8 MaxSize: 0x02D8
class APL_ActionTrigger : public APL_Trigger
{ 
public:
	TArray<class UPL_BaseAction*>                      Actions;                                                    // 0x02C0   (0x0010)  
	class UPL_BaseAction*                              ResetAction;                                                // 0x02D0   (0x0008)  
};

/// Class /Script/PL_TriggerSystem.PL_TriggerBox
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class APL_TriggerBox : public ATriggerBox
{ 
public:
};

/// Class /Script/PL_TriggerSystem.PL_TriggerComponent
/// Size: 0x0100 (256 bytes) (0x0000B8 - 0x000100) align 8 MaxSize: 0x0100
class UPL_TriggerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,668) /* FMulticastInlineDelegate */ __um(OnTriggerActivated);                                 // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,669) /* FMulticastInlineDelegate */ __um(OnTriggerDeactivated);                               // 0x00C8   (0x0010)  
	EPL_ResetPolicy                                    ResetPolicy;                                                // 0x00D8   (0x0001)  
	bool                                               bCanBeDeactivated;                                          // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00DA   (0x0006)  MISSED
	class UPL_TriggerConditionContainer*               ActivationConditions;                                       // 0x00E0   (0x0008)  
	class UPL_TriggerConditionContainer*               DeactivationConditions;                                     // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_TriggerSystem.PL_TriggerComponent.OnWorldActorsHaveBegunPlay
	// void OnWorldActorsHaveBegunPlay(class UWorld* World);                                                                    // [0xe95df0] Final|Native|Private 
	// Function /Script/PL_TriggerSystem.PL_TriggerComponent.OnTriggerComponentStateChangedDelegate__DelegateSignature
	// void OnTriggerComponentStateChangedDelegate__DelegateSignature();                                                        // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_TriggerSystem.PL_TriggerComponent.OnConditionStateChanged
	// void OnConditionStateChanged(EPL_TriggerConditionState NewState);                                                        // [0xe95890] Final|Native|Private 
	// Function /Script/PL_TriggerSystem.PL_TriggerComponent.IsTriggerActive
	// bool IsTriggerActive();                                                                                                  // [0xe957e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_TriggerSystem.PL_TriggerComponentPersistenceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TriggerComponentPersistenceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_TriggerSystem.PL_TriggerComponentUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TriggerComponentUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_TriggerSystem.PL_TriggerCondition
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_TriggerCondition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	bool                                               bInverted;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/PL_TriggerSystem.PL_TriggerConditionContainer
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UPL_TriggerConditionContainer : public UPL_TriggerCondition
{ 
public:
	EPL_TriggerConditionEvaluationType                 EvaluationType;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            Amount;                                                     // 0x0044   (0x0004)  
	TArray<class UPL_TriggerCondition*>                Conditions;                                                 // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/PL_TriggerSystem.PL_TriggerConditionContainer.OnSubConditionStateChanged
	// void OnSubConditionStateChanged(EPL_TriggerConditionState NewState);                                                     // [0xe95ce0] Final|Native|Protected 
};

/// Class /Script/PL_TriggerSystem.PL_TriggerConditionOverlap
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
class UPL_TriggerConditionOverlap : public UPL_TriggerCondition
{ 
public:
	ERecTriggerConditionOverlapState                   DesiredOverlapState;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TWeakObjectPtr<class AActor*>                      Source;                                                     // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/PL_TriggerSystem.PL_TriggerConditionOverlap.OnSourceEndOverlap
	// void OnSourceEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                        // [0xe95c10] Final|Native|Protected 
	// Function /Script/PL_TriggerSystem.PL_TriggerConditionOverlap.OnSourceBeginOverlap
	// void OnSourceBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                      // [0xe95b40] Final|Native|Protected 
};

/// Class /Script/PL_TriggerSystem.PL_TriggerConditionPlayerDecision
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UPL_TriggerConditionPlayerDecision : public UPL_TriggerCondition
{ 
public:
	SDK_UNDEFINED(16,670) /* FDelegateProperty */      __um(OnPlayerDecisionChangedDelegate);                      // 0x0040   (0x0010)  
	FGameplayTag                                       DecisionID;                                                 // 0x0050   (0x0008)  
	bool                                               bIsArbitraryDecision;                                       // 0x0058   (0x0001)  
	EPL_BinaryChoice                                   YesOrNo;                                                    // 0x0059   (0x0001)  
	EPL_ComparisonOperator                             Operator;                                                   // 0x005A   (0x0001)  
	char                                               Decision;                                                   // 0x005B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED


	/// Functions
	// Function /Script/PL_TriggerSystem.PL_TriggerConditionPlayerDecision.OnPlayerDecisionChanged
	// void OnPlayerDecisionChanged(FGameplayTag& InDecisionID, char InDecision, EPL_DecisionChangedAction Action);             // [0xe95910] Final|Native|Protected|HasOutParms 
};

/// Class /Script/PL_TriggerSystem.PL_TriggerDebugComponent
/// Size: 0x0490 (1168 bytes) (0x000470 - 0x000490) align 16 MaxSize: 0x0490
class UPL_TriggerDebugComponent : public UPrimitiveComponent
{ 
public:
	FColor                                             ConditionColor;                                             // 0x0470   (0x0004)  
	FColor                                             ActionColor;                                                // 0x0474   (0x0004)  
	FColor                                             MultiTypeColor;                                             // 0x0478   (0x0004)  
	float                                              ConnectionThickness;                                        // 0x047C   (0x0004)  
	float                                              ConnectionCounterDistance;                                  // 0x0480   (0x0004)  
	float                                              ConnectionCounterScale;                                     // 0x0484   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0488   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_TriggerSystem.PL_TriggerDebugComponent.OnSelectionChanged
	// void OnSelectionChanged(class UObject* Object);                                                                          // [0xe95ab0] Final|Native|Protected 
};

/// Class /Script/PL_TriggerSystem.PL_TriggerEditorComponent
/// Size: 0x05C0 (1472 bytes) (0x0005C0 - 0x0005C0) align 16 MaxSize: 0x05C0
class UPL_TriggerEditorComponent : public UWidgetComponent
{ 
public:
};

/// Class /Script/PL_TriggerSystem.PL_TriggerEditorWidget
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UPL_TriggerEditorWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0260   (0x0008)  MISSED
};

/// Class /Script/PL_TriggerSystem.PL_TriggerPersistenceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TriggerPersistenceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_TriggerSystem.PL_TriggerUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TriggerUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/PL_TriggerSystem.PL_PersistentTriggerComponentData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPL_PersistentTriggerComponentData
{ 
	SDK_UNDEFINED(80,671) /* TSet<TWeakObjectPtr<UPL_TriggerComponent*>> */ __um(TriggeredTriggerComponents);      // 0x0000   (0x0050)  
};

/// Struct /Script/PL_TriggerSystem.PL_PersistentTriggerData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPL_PersistentTriggerData
{ 
	SDK_UNDEFINED(80,672) /* TSet<TWeakObjectPtr<APL_Trigger*>> */ __um(TriggeredTriggers);                        // 0x0000   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(APL_Trigger) == 0x02C0); // 704 bytes (0x000288 - 0x0002C0)
static_assert(sizeof(APL_ActionTrigger) == 0x02D8); // 728 bytes (0x0002C0 - 0x0002D8)
static_assert(sizeof(APL_TriggerBox) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UPL_TriggerComponent) == 0x0100); // 256 bytes (0x0000B8 - 0x000100)
static_assert(sizeof(UPL_TriggerComponentPersistenceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TriggerComponentUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TriggerCondition) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_TriggerConditionContainer) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UPL_TriggerConditionOverlap) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UPL_TriggerConditionPlayerDecision) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UPL_TriggerDebugComponent) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UPL_TriggerEditorComponent) == 0x05C0); // 1472 bytes (0x0005C0 - 0x0005C0)
static_assert(sizeof(UPL_TriggerEditorWidget) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UPL_TriggerPersistenceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TriggerUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_PersistentTriggerComponentData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPL_PersistentTriggerData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(APL_Trigger, TriggerName) == 0x0288);
static_assert(offsetof(APL_Trigger, Condition) == 0x0290);
static_assert(offsetof(APL_Trigger, ResetCondition) == 0x0298);
static_assert(offsetof(APL_Trigger, ResetPolicy) == 0x02A0);
static_assert(offsetof(APL_Trigger, SceneComponent) == 0x02A8);
static_assert(offsetof(APL_ActionTrigger, Actions) == 0x02C0);
static_assert(offsetof(APL_ActionTrigger, ResetAction) == 0x02D0);
static_assert(offsetof(UPL_TriggerComponent, ResetPolicy) == 0x00D8);
static_assert(offsetof(UPL_TriggerComponent, ActivationConditions) == 0x00E0);
static_assert(offsetof(UPL_TriggerComponent, DeactivationConditions) == 0x00E8);
static_assert(offsetof(UPL_TriggerConditionContainer, EvaluationType) == 0x0040);
static_assert(offsetof(UPL_TriggerConditionContainer, Conditions) == 0x0048);
static_assert(offsetof(UPL_TriggerConditionOverlap, DesiredOverlapState) == 0x0040);
static_assert(offsetof(UPL_TriggerConditionOverlap, Source) == 0x0048);
static_assert(offsetof(UPL_TriggerConditionPlayerDecision, DecisionID) == 0x0050);
static_assert(offsetof(UPL_TriggerConditionPlayerDecision, YesOrNo) == 0x0059);
static_assert(offsetof(UPL_TriggerConditionPlayerDecision, Operator) == 0x005A);
static_assert(offsetof(UPL_TriggerDebugComponent, ConditionColor) == 0x0470);
static_assert(offsetof(UPL_TriggerDebugComponent, ActionColor) == 0x0474);
static_assert(offsetof(UPL_TriggerDebugComponent, MultiTypeColor) == 0x0478);
