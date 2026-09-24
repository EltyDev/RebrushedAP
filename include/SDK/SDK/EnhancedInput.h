
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: Slate

#pragma pack(push, 0x1)

/// Enum /Script/EnhancedInput.EInputActionValueType
/// Size: 0x01 (1 bytes)
enum class EInputActionValueType : uint8_t
{
	EInputActionValueType__Boolean                                                   = 0,
	EInputActionValueType__Axis1D                                                    = 1,
	EInputActionValueType__Axis2D                                                    = 2,
	EInputActionValueType__Axis3D                                                    = 3
};

/// Enum /Script/EnhancedInput.EMappingQueryIssue
/// Size: 0x01 (1 bytes)
enum class EMappingQueryIssue : uint8_t
{
	EMappingQueryIssue__NoIssue                                                      = 0,
	EMappingQueryIssue__ReservedByAction                                             = 1,
	EMappingQueryIssue__HidesExistingMapping                                         = 2,
	EMappingQueryIssue__HiddenByExistingMapping                                      = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext                            = 8,
	EMappingQueryIssue__ForcesTypePromotion                                          = 16,
	EMappingQueryIssue__ForcesTypeDemotion                                           = 32
};

/// Enum /Script/EnhancedInput.EMappingQueryResult
/// Size: 0x01 (1 bytes)
enum class EMappingQueryResult : uint8_t
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled                               = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts                       = 1,
	EMappingQueryResult__Error_InvalidAction                                         = 2,
	EMappingQueryResult__NotMappable                                                 = 3,
	EMappingQueryResult__MappingAvailable                                            = 4
};

/// Enum /Script/EnhancedInput.EInputAxisSwizzle
/// Size: 0x01 (1 bytes)
enum class EInputAxisSwizzle : uint8_t
{
	EInputAxisSwizzle__YXZ                                                           = 0,
	EInputAxisSwizzle__ZYX                                                           = 1,
	EInputAxisSwizzle__XZY                                                           = 2,
	EInputAxisSwizzle__YZX                                                           = 3,
	EInputAxisSwizzle__ZXY                                                           = 4
};

/// Enum /Script/EnhancedInput.EFOVScalingType
/// Size: 0x01 (1 bytes)
enum class EFOVScalingType : uint8_t
{
	EFOVScalingType__Standard                                                        = 0,
	EFOVScalingType__UE4_BackCompat                                                  = 1
};

/// Enum /Script/EnhancedInput.EDeadZoneType
/// Size: 0x01 (1 bytes)
enum class EDeadZoneType : uint8_t
{
	EDeadZoneType__Axial                                                             = 0,
	EDeadZoneType__Radial                                                            = 1
};

/// Enum /Script/EnhancedInput.EModifierExecutionPhase
/// Size: 0x01 (1 bytes)
enum class EModifierExecutionPhase : uint8_t
{
	EModifierExecutionPhase__PerInput                                                = 0,
	EModifierExecutionPhase__FinalValue                                              = 1,
	EModifierExecutionPhase__NumPhases                                               = 2
};

/// Enum /Script/EnhancedInput.ETriggerType
/// Size: 0x01 (1 bytes)
enum class ETriggerType : uint8_t
{
	ETriggerType__Explicit                                                           = 0,
	ETriggerType__Implicit                                                           = 1,
	ETriggerType__Blocker                                                            = 2
};

/// Enum /Script/EnhancedInput.ETriggerEvent
/// Size: 0x01 (1 bytes)
enum class ETriggerEvent : uint8_t
{
	ETriggerEvent__None                                                              = 0,
	ETriggerEvent__Started                                                           = 1,
	ETriggerEvent__Ongoing                                                           = 2,
	ETriggerEvent__Canceled                                                          = 3,
	ETriggerEvent__Triggered                                                         = 4,
	ETriggerEvent__Completed                                                         = 5
};

/// Enum /Script/EnhancedInput.ETriggerState
/// Size: 0x01 (1 bytes)
enum class ETriggerState : uint8_t
{
	ETriggerState__None                                                              = 0,
	ETriggerState__Ongoing                                                           = 1,
	ETriggerState__Triggered                                                         = 2
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBlueprintEnhancedInputActionBinding
{ 
	class UInputAction*                                InputAction;                                                // 0x0000   (0x0008)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionDelegateBindings;                                // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionValueBindings;                                   // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0170 (368 bytes) (0x000140 - 0x000170) align 8 MaxSize: 0x0170
class UEnhancedInputComponent : public UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class UInputAction* Action);                                                       // [0x1119eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	// void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);             // [0x111ae20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	// FInputActionValue MakeInputActionValue(float X, float Y, float Z, FInputActionValue& MatchValueType);                    // [0x111a320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class AActor* Actor, class UInputAction* Action);                                  // [0x1119f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	// bool Conv_InputActionValueToBool(FInputActionValue InValue);                                                             // [0x1119e10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	// FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);                                                    // [0x1119d60] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	// FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);                                                      // [0x1119cb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	// float Conv_InputActionValueToAxis1D(FInputActionValue InValue);                                                          // [0x1119c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	// void BreakInputActionValue(FInputActionValue InActionValue, float& X, float& Y, float& Z);                               // [0x1119a70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnhancedInputSubsystemInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	// void RequestRebuildControlMappings(bool bForceImmediately);                                                              // [0xbea3d0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	// void RemoveMappingContext(class UInputMappingContext* MappingContext);                                                   // [0x111ad90] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	// EMappingQueryResult QueryMapKeyInContextSet(TArray<UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x111ab20] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	// EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x111a910] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	// TArray<FKey> QueryKeysMappedToAction(class UInputAction* Action);                                                        // [0x111a7a0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	// bool HasMappingContext(class UInputMappingContext* MappingContext);                                                      // [0x111a1c0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	// void ClearAllMappings();                                                                                                 // [0xbebaa0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	// void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority);                                    // [0x11199a0] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputEngineSubsystem
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UEnhancedInputEngineSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xB0];                                      // 0x0030   (0x00B0)  MISSED
	class UEnhancedPlayerInput*                        PlayerInput;                                                // 0x00E0   (0x0008)  
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FEnhancedActionKeyMapping
{ 
	class UInputAction*                                Action;                                                     // 0x0000   (0x0008)  
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0020   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FInputActionInstance
{ 
	class UInputAction*                                SourceAction;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0010   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0020   (0x0010)  
	TArray<class UInputModifier*>                      PerInputModifiers;                                          // 0x0030   (0x0010)  
	TArray<class UInputModifier*>                      FinalValueModifiers;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	float                                              ElapsedProcessedTime;                                       // 0x0060   (0x0004)  
	float                                              ElapsedTriggeredTime;                                       // 0x0064   (0x0004)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x0598 (1432 bytes) (0x0003A8 - 0x000598) align 8 MaxSize: 0x0598
class UEnhancedPlayerInput : public UPlayerInput
{ 
public:
	TMap<class UInputMappingContext*, int32_t>         AppliedInputContexts;                                       // 0x03A8   (0x0050)  
	TArray<FEnhancedActionKeyMapping>                  EnhancedActionMappings;                                     // 0x03F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0408   (0x0050)  MISSED
	TMap<class UInputAction*, FInputActionInstance>    ActionInstanceData;                                         // 0x0458   (0x0050)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x04A8   (0x00F0)  MISSED
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UInputAction : public UDataAsset
{ 
public:
	bool                                               bConsumeInput;                                              // 0x0030   (0x0001)  
	bool                                               bTriggerWhenPaused;                                         // 0x0031   (0x0001)  
	bool                                               bReserveAllMappings;                                        // 0x0032   (0x0001)  
	EInputActionValueType                              ValueType;                                                  // 0x0033   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0038   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FBlueprintInputDebugKeyDelegateBinding
{ 
	FInputChord                                        InputChord;                                                 // 0x0000   (0x0020)  
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x0024   (0x0008)  
	bool                                               bExecuteWhenPaused;                                         // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintInputDebugKeyDelegateBinding>     InputDebugKeyDelegateBindings;                              // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UInputMappingContext : public UDataAsset
{ 
public:
	TArray<FEnhancedActionKeyMapping>                  Mappings;                                                   // 0x0030   (0x0010)  
	FText                                              ContextDescription;                                         // 0x0040   (0x0018)  


	/// Functions
	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey
	// void UnmapKey(class UInputAction* Action, FKey Key);                                                                     // [0x111af90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll
	// void UnmapAll();                                                                                                         // [0x111af70] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction
	// void UnmapAction(class UInputAction* Action);                                                                            // [0x111aee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.MapKey
	// FEnhancedActionKeyMapping MapKey(class UInputAction* Action, FKey ToKey);                                                // [0x111a4c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputModifier : public UObject
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.InputModifier.ModifyRaw
	// FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);   // [0x111a630] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputModifier.GetVisualizationColor
	// FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);                         // [0x111a090] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/EnhancedInput.InputModifier.GetExecutionPhase
	// EModifierExecutionPhase GetExecutionPhase();                                                                             // [0x111a030] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputModifierDeadZone : public UInputModifier
{ 
public:
	float                                              LowerThreshold;                                             // 0x0028   (0x0004)  
	float                                              UpperThreshold;                                             // 0x002C   (0x0004)  
	EDeadZoneType                                      Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputModifierScalar : public UInputModifier
{ 
public:
	FVector                                            Scalar;                                                     // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputModifierNegate : public UInputModifier
{ 
public:
	bool                                               bX;                                                         // 0x0028   (0x0001)  
	bool                                               bY;                                                         // 0x0029   (0x0001)  
	bool                                               bZ;                                                         // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UInputModifierSmooth : public UInputModifier
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputModifierResponseCurveExponential : public UInputModifier
{ 
public:
	FVector                                            CurveExponent;                                              // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UInputModifierResponseCurveUser : public UInputModifier
{ 
public:
	class UCurveFloat*                                 ResponseX;                                                  // 0x0028   (0x0008)  
	class UCurveFloat*                                 ResponseY;                                                  // 0x0030   (0x0008)  
	class UCurveFloat*                                 ResponseZ;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputModifierFOVScaling : public UInputModifier
{ 
public:
	float                                              FOVScale;                                                   // 0x0028   (0x0004)  
	EFOVScalingType                                    FOVScalingType;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputModifierToWorldSpace : public UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputModifierSwizzleAxis : public UInputModifier
{ 
public:
	EInputAxisSwizzle                                  Order;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierCollection
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UInputModifierCollection : public UInputModifier
{ 
public:
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0028   (0x0010)  
	bool                                               bPermitValueTypeModification;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FInputActionValue
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UInputTrigger : public UObject
{ 
public:
	float                                              ActuationThreshold;                                         // 0x0028   (0x0004)  
	FInputActionValue                                  LastValue;                                                  // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/EnhancedInput.InputTrigger.UpdateState
	// ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);    // [0x111b0c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EnhancedInput.InputTrigger.IsActuated
	// bool IsActuated(FInputActionValue& ForValue);                                                                            // [0x111a260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType
	// ETriggerType GetTriggerType();                                                                                           // [0x111a060] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInputTriggerTimedBase : public UInputTrigger
{ 
public:
	float                                              HeldDuration;                                               // 0x0040   (0x0004)  
	bool                                               bAffectedByTimeDilation;                                    // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UInputTriggerDown : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UInputTriggerPressed : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UInputTriggerReleased : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UInputTriggerHold : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0048   (0x0004)  MISSED
	float                                              HoldTimeThreshold;                                          // 0x004C   (0x0004)  
	bool                                               bIsOneShot;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{ 
public:
	float                                              HoldTimeThreshold;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UInputTriggerTap : public UInputTriggerTimedBase
{ 
public:
	float                                              TapReleaseTimeThreshold;                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UInputTriggerPulse : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bTriggerOnStart;                                            // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              Interval;                                                   // 0x0050   (0x0004)  
	int32_t                                            TriggerLimit;                                               // 0x0054   (0x0004)  
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UInputTriggerChordAction : public UInputTrigger
{ 
public:
	class UInputAction*                                ChordAction;                                                // 0x0040   (0x0008)  
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{ 
public:
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMappingQueryIssue
{ 
	EMappingQueryIssue                                 Issue;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UInputMappingContext*                        BlockingContext;                                            // 0x0008   (0x0008)  
	class UInputAction*                                BlockingAction;                                             // 0x0010   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FBlueprintEnhancedInputActionBinding) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UEnhancedInputActionDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEnhancedInputActionValueBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEnhancedInputComponent) == 0x0170); // 368 bytes (0x000140 - 0x000170)
static_assert(sizeof(UEnhancedInputLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnhancedInputSubsystemInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnhancedInputLocalPlayerSubsystem) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UEnhancedInputEngineSubsystem) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(FEnhancedActionKeyMapping) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInputActionInstance) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UEnhancedPlayerInput) == 0x0598); // 1432 bytes (0x0003A8 - 0x000598)
static_assert(sizeof(UInputAction) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FBlueprintInputDebugKeyDelegateBinding) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UInputDebugKeyDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputMappingContext) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UInputModifier) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputModifierDeadZone) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputModifierScalar) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputModifierNegate) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInputModifierSmooth) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UInputModifierResponseCurveExponential) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputModifierResponseCurveUser) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInputModifierFOVScaling) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInputModifierToWorldSpace) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputModifierSwizzleAxis) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInputModifierCollection) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FInputActionValue) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UInputTrigger) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInputTriggerTimedBase) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UInputTriggerDown) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UInputTriggerPressed) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UInputTriggerReleased) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UInputTriggerHold) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UInputTriggerHoldAndRelease) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UInputTriggerTap) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UInputTriggerPulse) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UInputTriggerChordAction) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UInputTriggerChordBlocker) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FMappingQueryIssue) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, InputAction) == 0x0000);
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, TriggerEvent) == 0x0008);
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, FunctionNameToBind) == 0x000C);
static_assert(offsetof(UEnhancedInputActionDelegateBinding, InputActionDelegateBindings) == 0x0028);
static_assert(offsetof(UEnhancedInputActionValueBinding, InputActionValueBindings) == 0x0028);
static_assert(offsetof(UEnhancedInputEngineSubsystem, PlayerInput) == 0x00E0);
static_assert(offsetof(FEnhancedActionKeyMapping, Action) == 0x0000);
static_assert(offsetof(FEnhancedActionKeyMapping, Key) == 0x0008);
static_assert(offsetof(FEnhancedActionKeyMapping, Triggers) == 0x0020);
static_assert(offsetof(FEnhancedActionKeyMapping, Modifiers) == 0x0030);
static_assert(offsetof(FInputActionInstance, SourceAction) == 0x0000);
static_assert(offsetof(FInputActionInstance, Triggers) == 0x0010);
static_assert(offsetof(FInputActionInstance, Modifiers) == 0x0020);
static_assert(offsetof(FInputActionInstance, PerInputModifiers) == 0x0030);
static_assert(offsetof(FInputActionInstance, FinalValueModifiers) == 0x0040);
static_assert(offsetof(FInputActionInstance, TriggerEvent) == 0x0068);
static_assert(offsetof(UEnhancedPlayerInput, AppliedInputContexts) == 0x03A8);
static_assert(offsetof(UEnhancedPlayerInput, EnhancedActionMappings) == 0x03F8);
static_assert(offsetof(UEnhancedPlayerInput, ActionInstanceData) == 0x0458);
static_assert(offsetof(UInputAction, ValueType) == 0x0033);
static_assert(offsetof(UInputAction, Triggers) == 0x0038);
static_assert(offsetof(UInputAction, Modifiers) == 0x0048);
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputChord) == 0x0000);
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent) == 0x0020);
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind) == 0x0024);
static_assert(offsetof(UInputDebugKeyDelegateBinding, InputDebugKeyDelegateBindings) == 0x0028);
static_assert(offsetof(UInputMappingContext, Mappings) == 0x0030);
static_assert(offsetof(UInputMappingContext, ContextDescription) == 0x0040);
static_assert(offsetof(UInputModifierDeadZone, Type) == 0x0030);
static_assert(offsetof(UInputModifierScalar, Scalar) == 0x0028);
static_assert(offsetof(UInputModifierResponseCurveExponential, CurveExponent) == 0x0028);
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseX) == 0x0028);
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseY) == 0x0030);
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseZ) == 0x0038);
static_assert(offsetof(UInputModifierFOVScaling, FOVScalingType) == 0x002C);
static_assert(offsetof(UInputModifierSwizzleAxis, Order) == 0x0028);
static_assert(offsetof(UInputModifierCollection, Modifiers) == 0x0028);
static_assert(offsetof(UInputTrigger, LastValue) == 0x002C);
static_assert(offsetof(UInputTriggerChordAction, ChordAction) == 0x0040);
static_assert(offsetof(FMappingQueryIssue, Issue) == 0x0000);
static_assert(offsetof(FMappingQueryIssue, BlockingContext) == 0x0008);
static_assert(offsetof(FMappingQueryIssue, BlockingAction) == 0x0010);
