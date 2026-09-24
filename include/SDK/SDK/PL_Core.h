
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_Core.EPL_AssertIsValidResult
/// Size: 0x01 (1 bytes)
enum class EPL_AssertIsValidResult : uint8_t
{
	EPL_AssertIsValidResult__IsValid                                                 = 0,
	EPL_AssertIsValidResult__IsNotValid                                              = 1
};

/// Enum /Script/PL_Core.EPL_AssertResult
/// Size: 0x01 (1 bytes)
enum class EPL_AssertResult : uint8_t
{
	EPL_AssertResult__Succeeded                                                      = 0,
	EPL_AssertResult__Failed                                                         = 1
};

/// Enum /Script/PL_Core.EPL_ComparisonOperator
/// Size: 0x01 (1 bytes)
enum class EPL_ComparisonOperator : uint8_t
{
	EPL_ComparisonOperator__EQUAL                                                    = 0,
	EPL_ComparisonOperator__NOT_EQUAL                                                = 1,
	EPL_ComparisonOperator__GREATER                                                  = 2,
	EPL_ComparisonOperator__GREATER_EQUAL                                            = 3,
	EPL_ComparisonOperator__SMALLER                                                  = 4,
	EPL_ComparisonOperator__SMALLER_EQUAL                                            = 5
};

/// Enum /Script/PL_Core.EPL_DynamicResolutionStatus
/// Size: 0x01 (1 bytes)
enum class EPL_DynamicResolutionStatus : uint8_t
{
	EPL_DynamicResolutionStatus__Unsupported                                         = 0,
	EPL_DynamicResolutionStatus__Disabled                                            = 1,
	EPL_DynamicResolutionStatus__Paused                                              = 2,
	EPL_DynamicResolutionStatus__Enabled                                             = 3,
	EPL_DynamicResolutionStatus__DebugForceEnabled                                   = 4
};

/// Enum /Script/PL_Core.EPL_AlphaInterpolationType
/// Size: 0x01 (1 bytes)
enum class EPL_AlphaInterpolationType : uint8_t
{
	EPL_AlphaInterpolationType__Linear                                               = 0,
	EPL_AlphaInterpolationType__Cubic                                                = 1,
	EPL_AlphaInterpolationType__HermiteCubic                                         = 2,
	EPL_AlphaInterpolationType__Sinusoidal                                           = 3,
	EPL_AlphaInterpolationType__QuadraticIn                                          = 4,
	EPL_AlphaInterpolationType__QuadraticOut                                         = 5,
	EPL_AlphaInterpolationType__QuadraticInOut                                       = 6,
	EPL_AlphaInterpolationType__CubicIn                                              = 7,
	EPL_AlphaInterpolationType__CubicOut                                             = 8,
	EPL_AlphaInterpolationType__CubicInOut                                           = 9,
	EPL_AlphaInterpolationType__QuarticIn                                            = 10,
	EPL_AlphaInterpolationType__QuarticOut                                           = 11,
	EPL_AlphaInterpolationType__QuarticInOut                                         = 12,
	EPL_AlphaInterpolationType__QuinticIn                                            = 13,
	EPL_AlphaInterpolationType__QuinticOut                                           = 14,
	EPL_AlphaInterpolationType__QuinticInOut                                         = 15,
	EPL_AlphaInterpolationType__CircularIn                                           = 16,
	EPL_AlphaInterpolationType__CircularOut                                          = 17,
	EPL_AlphaInterpolationType__CircularInOut                                        = 18,
	EPL_AlphaInterpolationType__ExpIn                                                = 19,
	EPL_AlphaInterpolationType__ExpOut                                               = 20,
	EPL_AlphaInterpolationType__ExpInOut                                             = 21,
	EPL_AlphaInterpolationType__Custom                                               = 22
};

/// Enum /Script/PL_Core.ECS_QuadraticSide
/// Size: 0x01 (1 bytes)
enum class ECS_QuadraticSide : uint8_t
{
	NEGATIVE                                                                         = 0,
	POSITIVE                                                                         = 1
};

/// Enum /Script/PL_Core.ECS_PointsOnSphereRestriction
/// Size: 0x01 (1 bytes)
enum class ECS_PointsOnSphereRestriction : uint8_t
{
	ECS_PointsOnSphereRestriction__FullSphere                                        = 0,
	ECS_PointsOnSphereRestriction__TopHalfSphere                                     = 1,
	ECS_PointsOnSphereRestriction__BottomHalfSphere                                  = 2
};

/// Enum /Script/PL_Core.EPL_MessageLogChannels
/// Size: 0x01 (1 bytes)
enum class EPL_MessageLogChannels : uint8_t
{
	EPL_MessageLogChannels__AssetTools                                               = 0,
	EPL_MessageLogChannels__BuildAndSubmitErrors                                     = 1,
	EPL_MessageLogChannels__ControlRigLog                                            = 2,
	EPL_MessageLogChannels__SourceControl                                            = 3,
	EPL_MessageLogChannels__BlueprintLog                                             = 4,
	EPL_MessageLogChannels__PlayInEditor                                             = 5,
	EPL_MessageLogChannels__AnimBlueprintLog                                         = 6,
	EPL_MessageLogChannels__AutomationTestingLog                                     = 7,
	EPL_MessageLogChannels__LocalizationService                                      = 8,
	EPL_MessageLogChannels__AssetReimport                                            = 9,
	EPL_MessageLogChannels__LightingResults                                          = 10,
	EPL_MessageLogChannels__MapCheck                                                 = 11,
	EPL_MessageLogChannels__LoadErrors                                               = 12,
	EPL_MessageLogChannels__EditorErrors                                             = 13,
	EPL_MessageLogChannels__PackagingResults                                         = 14,
	EPL_MessageLogChannels__AssetCheck                                               = 15,
	EPL_MessageLogChannels__SlateStyleLog                                            = 16,
	EPL_MessageLogChannels__CompilerLog                                              = 17,
	EPL_MessageLogChannels__UDNParseErrors                                           = 18,
	EPL_MessageLogChannels__Custom                                                   = 19
};

/// Enum /Script/PL_Core.EPL_SweepColliderTransformSourceType
/// Size: 0x01 (1 bytes)
enum class EPL_SweepColliderTransformSourceType : uint8_t
{
	EPL_SweepColliderTransformSourceType__Component                                  = 0,
	EPL_SweepColliderTransformSourceType__Socket                                     = 1
};

/// Enum /Script/PL_Core.EPL_HitFilteringMode
/// Size: 0x01 (1 bytes)
enum class EPL_HitFilteringMode : uint8_t
{
	EPL_HitFilteringMode__None                                                       = 0,
	EPL_HitFilteringMode__UniqueActors                                               = 1,
	EPL_HitFilteringMode__UniqueComponents                                           = 2
};

/// Enum /Script/PL_Core.EPL_SweepCollidersInterpolationType
/// Size: 0x01 (1 bytes)
enum class EPL_SweepCollidersInterpolationType : uint8_t
{
	EPL_SweepCollidersInterpolationType__DIRECT                                      = 0,
	EPL_SweepCollidersInterpolationType__LINEAR                                      = 1,
	EPL_SweepCollidersInterpolationType__STEP_ADJUSTED                               = 2
};

/// Enum /Script/PL_Core.EPL_BallisticTraceLengthType
/// Size: 0x01 (1 bytes)
enum class EPL_BallisticTraceLengthType : uint8_t
{
	EPL_BallisticTraceLengthType__Curve                                              = 0,
	EPL_BallisticTraceLengthType__Horizontal                                         = 1
};

/// Class /Script/PL_Core.PL_ActorBaseListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ActorBaseListenerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ActorBaseListenerInterface.ReceiveStopBeingBase
	// void ReceiveStopBeingBase(class AActor* BasedActor, class UPrimitiveComponent* NewBase, class UPrimitiveComponent* OldBase); // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Core.PL_ActorBaseListenerInterface.ReceiveStartBeingBase
	// void ReceiveStartBeingBase(class AActor* BasedActor, class UPrimitiveComponent* NewBase, class UPrimitiveComponent* OldBase); // [0x19ac1c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_Core.PL_ActorUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ActorUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ActorUtils.SetVelocity
	// void SetVelocity(class AActor* Actor, FVector& Velocity);                                                                // [0x8401a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_ActorUtils.SetAllMeshesVisibility
	// void SetAllMeshesVisibility(class AActor* TargetActor, bool bNewVisibility);                                             // [0x83ffd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ActorUtils.GetFirstInterfaceImplementorStartingFromComponent
	// class UObject* GetFirstInterfaceImplementorStartingFromComponent(class UActorComponent* ActorComponent, class UClass* InterfaceClass); // [0x83f520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ActorUtils.GetFirstInterfaceImplementor
	// class UObject* GetFirstInterfaceImplementor(class AActor* Actor, class UClass* InterfaceClass);                          // [0x83f450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ActorUtils.GetAllInterfaceImplementors
	// TArray<UObject*> GetAllInterfaceImplementors(class AActor* Actor, class UClass* InterfaceClass);                         // [0x83f1a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ActorUtils.FilterActors
	// bool FilterActors(TArray<UClass*>& Container, class AActor* ActorInQuestion);                                            // [0x83ec60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_ActorWithControlOverCanBeBaseForCharacter
/// Size: 0x0290 (656 bytes) (0x000288 - 0x000290) align 8 MaxSize: 0x0290
class APL_ActorWithControlOverCanBeBaseForCharacter : public AActor
{ 
public:
	bool                                               bCanBeBaseForCharacter;                                     // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0289   (0x0007)  MISSED
};

/// Class /Script/PL_Core.PL_AnimUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_AnimUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_AnimUtils.StopMontageImmediate
	// void StopMontageImmediate(class UAnimInstance* AnimInstance, class UAnimMontage* Montage);                               // [0x840280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_AnimUtils.SetPosition
	// void SetPosition(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, float position);                        // [0x840090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_AnimUtils.GetTimeUntilNotificationFromSection
	// float GetTimeUntilNotificationFromSection(class UAnimMontage* AnimSequenceBase, FName& SectionName, FName& NotificationName); // [0x83f8a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_AnimUtils.GetTimeUntilNotification
	// float GetTimeUntilNotification(class UAnimSequenceBase* AnimSequenceBase, FName& NotificationName);                      // [0x83f7c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_AnimUtils.GetSectionStartAndEndTime
	// bool GetSectionStartAndEndTime(class UAnimMontage* Montage, FName& SectionName, float& OutStartTime, float& OutEndTime); // [0x83f620] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_AnimUtils.FindAnimInstance
	// class UAnimInstance* FindAnimInstance(class AActor* Owner, FName& SkeletalMeshName);                                     // [0x83ed60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_ArrayUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ArrayUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_AssertUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_AssertUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_AssertUtils.AssertNoEntry
	// void AssertNoEntry(FString Message, bool bShouldAlwaysBreak);                                                            // [0x83a020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_AssertUtils.AssertIsValid
	// EPL_AssertIsValidResult AssertIsValid(class UObject* Object, FString Message, bool bShouldAlwaysBreak);                  // [0x839ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_AssertUtils.Assert
	// EPL_AssertResult Assert(bool& bCondition, FString Message, bool bShouldAlwaysBreak);                                     // [0x839d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_AssetUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_AssetUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_BackendLogger
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BackendLogger : public UObject
{ 
public:
};

/// Class /Script/PL_Core.PL_BackendLoggingService
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BackendLoggingService : public UObject
{ 
public:
};

/// Class /Script/PL_Core.PL_BillboardedWidgetSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UPL_BillboardedWidgetSettings : public UDeveloperSettings
{ 
public:
	float                                              MaxBillboardedUiVisibilityDistance;                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/PL_Core.PL_BillboardedWidgetComponent
/// Size: 0x05D0 (1488 bytes) (0x0005C0 - 0x0005D0) align 16 MaxSize: 0x05C8
class UPL_BillboardedWidgetComponent : public UWidgetComponent
{ 
public:
	bool                                               bBillboardOnlyHorizontally;                                 // 0x05C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x05C1   (0x0007)  MISSED
};

/// Class /Script/PL_Core.PL_CharacterBaseListenerUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CharacterBaseListenerUtils : public UObject
{ 
public:
};

/// Class /Script/PL_Core.PL_CharacterBaseListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CharacterBaseListenerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_CharacterBaseListenerInterface.StopBeingBaseForCharacter
	// void StopBeingBaseForCharacter(class ACharacter* Character);                                                             // [0x83e910] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_Core.PL_CharacterBaseListenerInterface.StartBeingBaseForCharacter
	// void StartBeingBaseForCharacter(class ACharacter* Character);                                                            // [0x83e880] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/PL_Core.PL_ConnectedComponentMovements
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ConnectedComponentMovements
{ 
	TArray<class UPL_ConnectedComponentMovement*>      ConnectedComponentMovementsStack;                           // 0x0000   (0x0010)  
};

/// Class /Script/PL_Core.PL_CharacterMovementComponent
/// Size: 0x0B20 (2848 bytes) (0x000B00 - 0x000B20) align 16 MaxSize: 0x0B18
class UPL_CharacterMovementComponent : public UCharacterMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0B00   (0x0008)  MISSED
	FPL_ConnectedComponentMovements                    ConnectedComponentMovements;                                // 0x0B08   (0x0010)  
};

/// Class /Script/PL_Core.PL_CharacterMovementConnectionInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CharacterMovementConnectionInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Core.PL_ActorConnectionListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ActorConnectionListenerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ActorConnectionListenerInterface.CharacterRemoveConnection
	// void CharacterRemoveConnection(class UPL_ConnectedComponentMovement* Connection);                                        // [0x83e910] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_Core.PL_ActorConnectionListenerInterface.CharacterAddConnection
	// void CharacterAddConnection(class UPL_ConnectedComponentMovement* Connection);                                           // [0x83e880] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PL_Core.PL_ClassUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ClassUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_ComponentUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ComponentUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ComponentUtils.HasSocketName
	// bool HasSocketName(class UMeshComponent* Mesh, FName& SocketName);                                                       // [0x83fa20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.GetFirstComponentWithInterface
	// class UActorComponent* GetFirstComponentWithInterface(class AActor* Actor, class UClass* InterfaceClass);                // [0x83f380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.GetController
	// class AController* GetController(class UActorComponent* ActorComponent);                                                 // [0x83f2b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.GetAllComponentsWithInterface
	// TArray<UActorComponent*> GetAllComponentsWithInterface(class AActor* Actor, class UClass* InterfaceClass);               // [0x83f090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.ForceAnimationUpdate
	// void ForceAnimationUpdate(class USkeletalMeshComponent* Mesh);                                                           // [0x83f010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.FindOrCreateComponentOnGameState
	// class UActorComponent* FindOrCreateComponentOnGameState(class UClass* ComponentClass, class UObject* WorldContextObject); // [0x83ef40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.FindComponentInChildActors
	// class UActorComponent* FindComponentInChildActors(class UClass* ComponentClass, class AActor* OwningActor, bool bSearchDescendantChildActors); // [0x83ee40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.CreateActorComponentAtRunTime
	// class UActorComponent* CreateActorComponentAtRunTime(class AActor* TargetActor, class UClass* ComponentClass, FName Name); // [0x83eaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ComponentUtils.AddAllComponentsWithInterface
	// void AddAllComponentsWithInterface(TArray<UObject*>& OutObjectsWithInterface, class AActor* Actor, class UClass* InterfaceClass); // [0x83e730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_ConnectedComponentMovement
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 16 MaxSize: 0x0100
class UPL_ConnectedComponentMovement : public UObject
{ 
public:
	SDK_UNDEFINED(16,356) /* FMulticastInlineDelegate */ __um(OnUnableToFollowConnectedComponent);                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,357) /* FMulticastInlineDelegate */ __um(OnMovedByConnectedComponent);                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA9];                                      // 0x0048   (0x00A9)  MISSED
	bool                                               bCanCountAsBase;                                            // 0x00F1   (0x0001)  
	bool                                               bShouldDisconnectOnNoCollision;                             // 0x00F2   (0x0001)  
	bool                                               bShouldApplyRotationChangeToController;                     // 0x00F3   (0x0001)  
	bool                                               bShouldApplyWhileHavingBase;                                // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x00F5   (0x000B)  MISSED
};

/// Class /Script/PL_Core.PL_ConnectedMovementUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ConnectedMovementUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ConnectedMovementUtils.IsConnectedAsBase
	// bool IsConnectedAsBase(class ACharacter* Character, class AActor* PotentialBase);                                        // [0x83fb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ConnectedMovementUtils.Disconnect
	// void Disconnect(class ACharacter* Character, class UPL_ConnectedComponentMovement* Connection);                          // [0x83eba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ConnectedMovementUtils.Connect
	// class UPL_ConnectedComponentMovement* Connect(class ACharacter* Character, class UPrimitiveComponent* ComponentToConnect, class UClass* ConnectionClass); // [0x83e9a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_CurveUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CurveUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_DebugDrawUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DebugDrawUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_DebugOverlayWidget
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UPL_DebugOverlayWidget : public UUserWidget
{ 
public:
	float                                              SparseTickInterval;                                         // 0x0260   (0x0004)  
	float                                              SmoothDeltaTimeSpan;                                        // 0x0264   (0x0004)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0268   (0x0028)  MISSED


	/// Functions
	// Function /Script/PL_Core.PL_DebugOverlayWidget.SparseTick
	// void SparseTick();                                                                                                       // [0x840260] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PL_Core.PL_DebugOverlayWidget.GetUsedMemoryInGB
	// float GetUsedMemoryInGB();                                                                                               // [0x83f9f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Core.PL_DebugOverlayWidget.GetTotalMemoryInGB
	// float GetTotalMemoryInGB();                                                                                              // [0x83f9c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Core.PL_DebugOverlayWidget.GetSmoothFPS
	// float GetSmoothFPS();                                                                                                    // [0x83f790] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Core.PL_DebugOverlayWidget.GetLatestFPS
	// float GetLatestFPS();                                                                                                    // [0x83f5f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Core.PL_DebugOverlayWidget.GetDynamicResolutionStateInfos
	// FPL_DynamicResolutionStateInfos GetDynamicResolutionStateInfos();                                                        // [0x83f340] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Core.PL_DebugUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DebugUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_DebugUtils.PL_PrintString
	// void PL_PrintString(class UObject* WorldContextObject, FString inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration); // [0x83fdd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_Delay
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UPL_Delay : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	float                                              DurationSeconds;                                            // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,358) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,359) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0058   (0x0010)  
	bool                                               bShouldReactToReset;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	class UWorld*                                      World;                                                      // 0x0070   (0x0008)  
	class AActor*                                      ContextActor;                                               // 0x0078   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0080   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_Core.PL_Delay.PL_Delay
	// class UPL_Delay* PL_Delay(class UObject* WorldContextObject, float Seconds, bool bShouldReactToReset);                   // [0x83fcc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_Delay.OnTimerComplete
	// void OnTimerComplete();                                                                                                  // [0x83fca0] Final|Native|Protected 
	// Function /Script/PL_Core.PL_Delay.OnCompleted__DelegateSignature
	// void OnCompleted__DelegateSignature();                                                                                   // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_Delay.OnCancel__DelegateSignature
	// void OnCancel__DelegateSignature();                                                                                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_Delay.OnActorEndPlay
	// void OnActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                     // [0x83fbd0] Final|Native|Private 
	// Function /Script/PL_Core.PL_Delay.Cancel
	// void Cancel();                                                                                                           // [0x83e860] Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_EnumUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_EnumUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_EnumUtils.K2_HasFlag
	// bool K2_HasFlag(int32_t MaskValueAsInt, char EnumValueAsUnit8);                                                          // [0x8455e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Core.PL_ForwardCharacterBaseEventComponent
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_ForwardCharacterBaseEventComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/PL_Core.PL_GameInstance
/// Size: 0x01D0 (464 bytes) (0x0001A8 - 0x0001D0) align 8 MaxSize: 0x01D0
class UPL_GameInstance : public UGameInstance
{ 
public:
	SDK_UNDEFINED(16,360) /* FMulticastInlineDelegate */ __um(OnLoadMapComplete);                                  // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(OnWorldChangedDelegate);                             // 0x01B8   (0x0010)  
	float                                              JoyconDCCheckInterval;                                      // 0x01C8   (0x0004)  
	float                                              JoyconMaxDCInterval;                                        // 0x01CC   (0x0004)  
};

/// Struct /Script/PL_Core.PL_LazyTexture2D
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPL_LazyTexture2D
{ 
	TWeakObjectPtr<class UTexture2D*>                  Texture;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0008   (0x0060)  MISSED
};

/// Class /Script/PL_Core.PL_GetTexture2DAsync
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_GetTexture2DAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,362) /* FMulticastInlineDelegate */ __um(OnLoadCompleted);                                    // 0x0030   (0x0010)  
	FPL_LazyTexture2D                                  LazyTexture;                                                // 0x0040   (0x0068)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/PL_Core.PL_GetTexture2DAsync.OnLoadCompleted__DelegateSignature
	// void OnLoadCompleted__DelegateSignature(class UTexture2D* Texture);                                                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_GetTexture2DAsync.GetTexture2DAsync
	// class UPL_GetTexture2DAsync* GetTexture2DAsync(class UObject* WorldContextObject, FPL_LazyTexture2D& LazyTexture);       // [0x844f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_ApplyImpulseToTargetUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ApplyImpulseToTargetUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ApplyImpulseToTargetUtils.ApplyImpulseToTarget
	// void ApplyImpulseToTarget(FPL_ImpulseToApplyToTarget& ImpulseData, class AActor* Target, FVector& Direction);            // [0x843f00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_ApplyImpulseToTargetUtils.ApplyForwardImpulseToTarget
	// void ApplyForwardImpulseToTarget(FPL_ForwardImpulseToApplyToTarget& ImpulseData, class AActor* Source, class AActor* Target, FVector& Direction); // [0x843d80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_ApplyImpulseToTargetUtils.ApplyCameraForwardImpulseToTarget
	// void ApplyCameraForwardImpulseToTarget(FPL_ForwardImpulseToApplyToTarget& ImpulseData, class AActor* Source, class AActor* Target, FVector& Direction); // [0x843c00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_InputUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_InputUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_InterpolationUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_InterpolationUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_InterpolationUtils.SmoothMoveTowardsVector
	// void SmoothMoveTowardsVector(FVector& InOutValue, FVector& InOutVelocity, FVector Target, float MaxVelocity, float MaxAcceleration, float DeltaSeconds); // [0x846290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_InterpolationUtils.SmoothMoveTowards
	// void SmoothMoveTowards(float& InOutValue, float& InOutVelocity, float Target, float MaxVelocity, float MaxAcceleration, float DeltaSeconds); // [0x8460a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_InterpolationUtils.AlphaToInterpolationType
	// float AlphaToInterpolationType(float Alpha, EPL_AlphaInterpolationType Type, class UCurveFloat* CustomCurve);            // [0x843af0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_LabeledIconWidget
/// Size: 0x02A0 (672 bytes) (0x000260 - 0x0002A0) align 8 MaxSize: 0x02A0
class UPL_LabeledIconWidget : public UUserWidget
{ 
public:
	FLinearColor                                       ColorNotValidated;                                          // 0x0260   (0x0010)  
	FLinearColor                                       ColorValid;                                                 // 0x0270   (0x0010)  
	FLinearColor                                       ColorInvalid;                                               // 0x0280   (0x0010)  
	class UTextBlock*                                  Label;                                                      // 0x0290   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0298   (0x0008)  
};

/// Class /Script/PL_Core.PL_LazyTexture2DUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_LazyTexture2DUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_LazyTexture2DUtils.Set
	// void Set(FPL_LazyTexture2D& LazyTexture, TWeakObjectPtr<UTexture2D*> Texture);                                           // [0x845c30] Final|Native|Static|Public|HasOutParms 
	// Function /Script/PL_Core.PL_LazyTexture2DUtils.Reset
	// void Reset(FPL_LazyTexture2D& LazyTexture);                                                                              // [0x845b10] Final|Native|Static|Public|HasOutParms 
	// Function /Script/PL_Core.PL_LazyTexture2DUtils.Release
	// void Release(FPL_LazyTexture2D& LazyTexture);                                                                            // [0x8459f0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/PL_Core.PL_LazyTexture2DUtils.Get
	// class UTexture2D* Get(FPL_LazyTexture2D& LazyTexture);                                                                   // [0x844be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Core.PL_MaterialUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_MaterialUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_MaterialUtils.SetLinearColorParameterValueOnMaterial
	// void SetLinearColorParameterValueOnMaterial(class UMeshComponent* MeshComponent, int32_t MaterialIndex, FName& ParameterName, FLinearColor& ParameterValue); // [0x845f40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_MaterialUtils.SetLinearColorParameterValueOnAllMaterials
	// void SetLinearColorParameterValueOnAllMaterials(class UMeshComponent* MeshComponent, FName& ParameterName, FLinearColor& ParameterValue); // [0x845e20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_MathUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_MathUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_MathUtils.WrapIndex
	// int32_t WrapIndex(int32_t Index, int32_t ElementCount);                                                                  // [0x8456b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.SolveQuadraticFormulaSide
	// float SolveQuadraticFormulaSide(float A, float B, float C, TEnumAsByte<ECS_QuadraticSide> WantedSide);                   // [0x8465b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.SolveQuadraticFormula
	// FVector2D SolveQuadraticFormula(float A, float B, float C);                                                              // [0x846490] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.PointPlaneDistance
	// float PointPlaneDistance(FVector& Point, FPlane& Plane);                                                                 // [0x8458e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.Modulus
	// int32_t Modulus(int32_t Value, int32_t Divisor);                                                                         // [0x8456b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.DistributePointsOnSphere
	// TArray<FVector> DistributePointsOnSphere(FVector& Location, float Radius, int32_t Num, ECS_PointsOnSphereRestriction PointsOnSphereRestriction); // [0x844510] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.DistributePointsOnRing
	// TArray<FVector> DistributePointsOnRing(FVector& Location, float Radius, int32_t Num, FVector& Direction);                // [0x844350] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.DistributePointsOnHorizontalRing
	// TArray<FVector> DistributePointsOnHorizontalRing(FVector& Location, float Radius, int32_t Num);                          // [0x8441f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Core.PL_MathUtils.DistributePointsOnHalfSphere
	// TArray<FVector> DistributePointsOnHalfSphere(FVector& Location, float Radius, int32_t Num, FVector& Direction);          // [0x844030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_MessageLogUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_MessageLogUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_MessageLogUtils.WarningWithObjectToken
	// void WarningWithObjectToken(FString Message, class UObject* TokenObject, FText& LabelOveride, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName); // [0x846a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.WarningWithAssetToken
	// void WarningWithAssetToken(FString Message, FString AssetPath, FText& LabelOveride, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName); // [0x846830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.Warning
	// void Warning(FString Message, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName);                          // [0x846710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.NewPage
	// void NewPage(FText& Title, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName);                             // [0x845780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.InfoWithObjectToken
	// void InfoWithObjectToken(FString Message, class UObject* TokenObject, FText& LabelOveride, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName); // [0x8453f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.InfoWithAssetToken
	// void InfoWithAssetToken(FString Message, FString AssetPath, FText& LabelOveride, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName); // [0x8451f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.Info
	// void Info(FString Message, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName);                             // [0x8450d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.GetLevelNameActorIsIn
	// FString GetLevelNameActorIsIn(class AActor* Actor);                                                                      // [0x844e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.ErrorWithObjectToken
	// void ErrorWithObjectToken(FString Message, class UObject* TokenObject, FText& LabelOveride, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName); // [0x8449f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.ErrorWithAssetToken
	// void ErrorWithAssetToken(FString Message, FString AssetPath, FText& LabelOveride, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName); // [0x8447f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_MessageLogUtils.Error
	// void Error(FString Message, EPL_MessageLogChannels LoggingChannel, FName& CustomChannelName);                            // [0x8446d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PL_Core.PL_MontageSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_MontageSettings
{ 
	class UAnimMontage*                                MontageToPlay;                                              // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              StartingPosition;                                           // 0x000C   (0x0004)  
	FName                                              StartSection;                                               // 0x0010   (0x0008)  
	FName                                              SkeletalMeshName;                                           // 0x0018   (0x0008)  
	float                                              BlendOutTimeWhenCanceled;                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/PL_Core.PL_MontageSettingsObject
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UPL_MontageSettingsObject : public UObject
{ 
public:
	FPL_MontageSettings                                Value;                                                      // 0x0028   (0x0028)  
};

/// Class /Script/PL_Core.PL_ObjectUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ObjectUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_ObjectUtils.GetFirstInterfaceImplementor
	// class UObject* GetFirstInterfaceImplementor(class UObject* Object, class UClass* InterfaceClass);                        // [0x844da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_ObjectUtils.GetDefaultObject
	// class UObject* GetDefaultObject(class UClass*& ObjectClass);                                                             // [0x844d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Core.PL_PersistenceSystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPL_PersistenceSystem : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/PL_Core.PL_PlayerController
/// Size: 0x05F8 (1528 bytes) (0x0005E8 - 0x0005F8) align 8 MaxSize: 0x05F8
class APL_PlayerController : public APlayerController
{ 
public:
	SDK_UNDEFINED(16,363) /* FMulticastInlineDelegate */ __um(OnPawnChanged);                                      // 0x05E8   (0x0010)  
};

/// Class /Script/PL_Core.PL_PossessableInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PossessableInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Core.PL_RootActorProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_RootActorProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_RootActorProvider.GetRootActor
	// class AActor* GetRootActor();                                                                                            // [0x84b600] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PL_Core.PL_StringUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_StringUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_StringUtils.VectorToString
	// FString VectorToString(FVector Value, int32_t Precision, FString Seperator);                                             // [0x84bf10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Core.PL_StringUtils.FloatToString
	// FString FloatToString(float Value, int32_t Precision);                                                                   // [0x84b4f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Core.PL_StringUtils.DurationToString
	// FString DurationToString(float DurationInSeconds, FString Format);                                                       // [0x84b3c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Core.PL_StringUtils.BeautifyString
	// FString BeautifyString(FString inString, bool bIsBool);                                                                  // [0x84afa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Core.PL_SubsystemUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SubsystemUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Core.PL_SweepColliderSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SweepColliderSourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_SweepColliderSourceInterface.CollectActiveSweepColliders
	// void CollectActiveSweepColliders(TArray<FPL_SweepCollider>& InOutActiveSweepColliders, FPL_SweepCollidersSettingInternal& Setting); // [0x84b0c0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/PL_Core.PL_SweepColliderUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SweepColliderUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_SweepColliderUtils.SetSweepCollidersFromPhysicsAsset
	// void SetSweepCollidersFromPhysicsAsset(class UPrimitiveComponent* PhysicsSource, class UPhysicsAsset* PhysicsAsset, float ColliderInflation, TArray<FPL_SweepCollider>& InOutSweepColliders); // [0x84bda0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_SweepColliderUtils.MakeSweepColliderFromSocketAndShape
	// FPL_SweepCollider MakeSweepColliderFromSocketAndShape(class UPrimitiveComponent* SocketSource, FName& SocketName, class UPrimitiveComponent* ColliderSource, float ColliderInflation); // [0x84ba20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_SweepColliderUtils.MakeSweepCollider
	// FPL_SweepCollider MakeSweepCollider(class UPrimitiveComponent* ColliderSource, float ColliderInflation);                 // [0x84b890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_SweepColliderUtils.CreateSweepCollidersFromPhysicsAsset
	// TArray<FPL_SweepCollider> CreateSweepCollidersFromPhysicsAsset(class UPrimitiveComponent* PhysicsSource, class UPhysicsAsset* PhysicsAsset, float ColliderInflation); // [0x84b270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_SweepColliderUtils.AppendSweepCollidersFromPhysicsAsset
	// void AppendSweepCollidersFromPhysicsAsset(class UPrimitiveComponent* PhysicsSource, class UPhysicsAsset* PhysicsAsset, float ColliderInflation, TArray<FPL_SweepCollider>& InOutSweepColliders); // [0x84a890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_SystemUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SystemUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_SystemUtils.IsRunningCookCommandlet
	// bool IsRunningCookCommandlet();                                                                                          // [0x84b770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Core.PL_SystemUtils.GetSystemResolution
	// FIntPoint GetSystemResolution();                                                                                         // [0x84b630] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Core.PL_Ticket
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_Ticket : public UObject
{ 
public:
	class UObject*                                     ContextObject;                                              // 0x0028   (0x0008)  
	FName                                              Context;                                                    // 0x0030   (0x0008)  
	TWeakObjectPtr<class UPL_Ticketer*>                Owner;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/PL_Core.PL_Ticket.SetContextInfo
	// void SetContextInfo(class UObject* InContextObject, FName& InContext);                                                   // [0x84bcc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Core.PL_Ticket.Release
	// void Release();                                                                                                          // [0x84bc80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_Ticketer
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_Ticketer : public UObject
{ 
public:
	SDK_UNDEFINED(16,364) /* FMulticastInlineDelegate */ __um(OnTicketAcquired);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(OnTicketRelinquished);                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(OnTicketerActivated);                                // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(OnTicketerCleared);                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,368) /* TArray<TWeakObjectPtr<UPL_Ticket*>> */ __um(Tickets);                                 // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/PL_Core.PL_Ticketer.ReleaseAllActiveTickets
	// void ReleaseAllActiveTickets();                                                                                          // [0x84bca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Core.PL_Ticketer.OnTicketRelinquished__DelegateSignature
	// void OnTicketRelinquished__DelegateSignature(class UPL_Ticket* Ticket);                                                  // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_Ticketer.OnTicketerCleared__DelegateSignature
	// void OnTicketerCleared__DelegateSignature(class UPL_Ticketer* Ticketer);                                                 // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_Ticketer.OnTicketerActivated__DelegateSignature
	// void OnTicketerActivated__DelegateSignature(class UPL_Ticketer* Ticketer);                                               // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_Ticketer.OnTicketAcquired__DelegateSignature
	// void OnTicketAcquired__DelegateSignature(class UPL_Ticket* Ticket);                                                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Core.PL_Ticketer.NumActiveTickets
	// int32_t NumActiveTickets();                                                                                              // [0x84bc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Core.PL_Ticketer.HasActiveTickets
	// bool HasActiveTickets();                                                                                                 // [0x84b740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Core.PL_Ticketer.GetTicket
	// class UPL_Ticket* GetTicket(class UObject* ContextObject, FName Context);                                                // [0x84b670] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_TraceUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TraceUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_TraceUtils.BallisticTraceSingleByProfile
	// bool BallisticTraceSingleByProfile(class UObject* WorldContextObject, FVector& Start, FVector& Velocity, float OverrideGravityZ, EPL_BallisticTraceLengthType LengthType, float Length, float Radius, FName& ProfileName, FHitResult& OutHit, TArray<AActor*>& ActorsToIgnore, float SegmentError, bool bTraceComplex, bool bIgnoreSelf, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime); // [0x84aa00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PL_Core.PL_VectorUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_VectorUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Core.PL_VectorUtils.K2_IsNearlyZero2D
	// bool K2_IsNearlyZero2D(FVector& Vector, float Tolerance);                                                                // [0x84b7a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/PL_Core.PL_AssetFilter
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPL_AssetFilter
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FString>                                    IncludePathFilters;                                         // 0x0008   (0x0010)  
	TArray<FString>                                    ExcludePathFilters;                                         // 0x0018   (0x0010)  
	TArray<FString>                                    PackageFileNameFilters;                                     // 0x0028   (0x0010)  
};

/// Struct /Script/PL_Core.PL_ClassHierarchy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ClassHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PL_Core.PL_CriticallyDampedInterpolator
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_CriticallyDampedInterpolator
{ 
	bool                                               bIsInstant;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SmoothTime;                                                 // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/PL_Core.PL_DynamicResolutionStateInfos
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FPL_DynamicResolutionStateInfos
{ 
	EPL_DynamicResolutionStatus                        Status;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ResolutionFractionApproximation;                            // 0x0004   (0x0004)  
	float                                              ResolutionFractionUpperBound;                               // 0x0008   (0x0004)  
};

/// Struct /Script/PL_Core.PL_ImpulseToApplyToTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_ImpulseToApplyToTarget
{ 
	float                                              PhysicalImpulseMagnitude;                                   // 0x0000   (0x0004)  
	bool                                               bPhysicalVelChange;                                         // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              MovementImpulseMagnitude;                                   // 0x0008   (0x0004)  
	bool                                               bMovementVelChange;                                         // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PL_Core.PL_ForwardImpulseToApplyToTarget
/// Size: 0x0014 (20 bytes) (0x000010 - 0x000014) align 4 MaxSize: 0x0014
struct FPL_ForwardImpulseToApplyToTarget : FPL_ImpulseToApplyToTarget
{ 
	float                                              PitchAngle;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/PL_Core.PL_MovementMode
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FPL_MovementMode
{ 
	TEnumAsByte<EMovementMode>                         MovementMode;                                               // 0x0000   (0x0001)  
	char                                               CustomMovementMode;                                         // 0x0001   (0x0001)  
};

/// Struct /Script/PL_Core.PL_MovementModeFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_MovementModeFilter
{ 
	TArray<FPL_MovementMode>                           ValidMovementModes;                                         // 0x0000   (0x0010)  
};

/// Struct /Script/PL_Core.PL_OptionalRotator
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_OptionalRotator
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FRotator                                           Value;                                                      // 0x0004   (0x000C)  
};

/// Struct /Script/PL_Core.PL_OptionalVector
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_OptionalVector
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Value;                                                      // 0x0004   (0x000C)  
};

/// Struct /Script/PL_Core.PL_OptionalGuid
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPL_OptionalGuid
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGuid                                              Value;                                                      // 0x0004   (0x0010)  
};

/// Struct /Script/PL_Core.PL_OptionalName
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FPL_OptionalName
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Value;                                                      // 0x0004   (0x0008)  
};

/// Struct /Script/PL_Core.PL_OptionalString
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_OptionalString
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/PL_Core.PL_OptionalText
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_OptionalText
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/PL_Core.PL_OptionalFloat
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPL_OptionalFloat
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/PL_Core.PL_OptionalUint8
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FPL_OptionalUint8
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	char                                               Value;                                                      // 0x0001   (0x0001)  
};

/// Struct /Script/PL_Core.PL_OptionalInt32
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPL_OptionalInt32
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/PL_Core.PL_OptionalBool
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FPL_OptionalBool
{ 
	bool                                               bIsSet;                                                     // 0x0000   (0x0001)  
	bool                                               bValue;                                                     // 0x0001   (0x0001)  
};

/// Struct /Script/PL_Core.PL_ShapeTraceQueryParams
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FPL_ShapeTraceQueryParams
{ 
	unsigned char                                      UnknownData00_2[0xD0];                                      // 0x0000   (0x00D0)  MISSED
};

/// Struct /Script/PL_Core.PL_ShuffleAccessArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_ShuffleAccessArray
{ 
	int32_t                                            MinShuffledIndicesLeftToPickBeforeReshuffle;                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0004   (0x000C)  MISSED
};

/// Struct /Script/PL_Core.PL_ShuffleIndexAccessArray
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_ShuffleIndexAccessArray : FPL_ShuffleAccessArray
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/PL_Core.PL_StreamableAsset
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPL_StreamableAsset
{ 
	TWeakObjectPtr<class UObject*>                     SoftObjectPtr;                                              // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0008   (0x0050)  MISSED
};

/// Struct /Script/PL_Core.PL_SweepColliderTransformSource
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FPL_SweepColliderTransformSource
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UPrimitiveComponent*                         Source;                                                     // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x0010   (0x0040)  MISSED
};

/// Struct /Script/PL_Core.PL_SweepCollider
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FPL_SweepCollider
{ 
	FPL_SweepColliderTransformSource                   SweepColliderTransformSource;                               // 0x0000   (0x0050)  
	class UWorld*                                      CurrentWorld;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0058   (0x0078)  MISSED
};

/// Struct /Script/PL_Core.PL_SweepCollidersSettingBase
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_SweepCollidersSettingBase
{ 
	float                                              ColliderInflation;                                          // 0x0000   (0x0004)  
	EPL_SweepCollidersInterpolationType                SweepInterpolationType;                                     // 0x0004   (0x0001)  
	bool                                               bOnlyBlockingHits;                                          // 0x0005   (0x0001)  
	bool                                               bOnlyUniqueHitsPerSweep;                                    // 0x0006   (0x0001)  
	EPL_HitFilteringMode                               HitFilteringMode;                                           // 0x0007   (0x0001)  
	FName                                              CollisionProfile;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/PL_Core.PL_SweepCollidersSettingInternal
/// Size: 0x0088 (136 bytes) (0x000010 - 0x000088) align 8 MaxSize: 0x0088
struct FPL_SweepCollidersSettingInternal : FPL_SweepCollidersSettingBase
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0010   (0x0078)  MISSED
};

/// Struct /Script/PL_Core.PL_SweepColliders
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FPL_SweepColliders
{ 
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnSweepOverlapFound);                                // 0x0000   (0x0010)  
	FPL_SweepCollidersSettingInternal                  Setting;                                                    // 0x0010   (0x0088)  
	TArray<FPL_SweepCollider>                          ActiveSweepColliders;                                       // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,370) /* TArray<TWeakObjectPtr<UObject*>> */ __um(AlreadyOverlappedTargets);                   // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/PL_Core.PL_SweepCollidersSettingSetup
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000028) align 4 MaxSize: 0x0028
struct FPL_SweepCollidersSettingSetup : FPL_SweepCollidersSettingBase
{ 
	float                                              AngularStepSizeInDegree;                                    // 0x0010   (0x0004)  
	bool                                               bTraceComplex;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              TraceTag;                                                   // 0x0018   (0x0008)  
	bool                                               bFindInitialOverlaps;                                       // 0x0020   (0x0001)  
	bool                                               bReturnFaceIndex;                                           // 0x0021   (0x0001)  
	bool                                               bReturnPhysicalMaterial;                                    // 0x0022   (0x0001)  
	bool                                               bComponentListUnique;                                       // 0x0023   (0x0001)  
	char                                               IgnoreMask;                                                 // 0x0024   (0x0001)  
	bool                                               bIgnoreBlocks;                                              // 0x0025   (0x0001)  
	bool                                               bIgnoreTouches;                                             // 0x0026   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x0027   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPL_ActorBaseListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ActorUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(APL_ActorWithControlOverCanBeBaseForCharacter) == 0x0290); // 656 bytes (0x000288 - 0x000290)
static_assert(sizeof(UPL_AnimUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ArrayUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_AssertUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_AssetUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BackendLogger) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BackendLoggingService) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BillboardedWidgetSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UPL_BillboardedWidgetComponent) == 0x05C8); // 1480 bytes (0x0005C0 - 0x0005C8)
static_assert(sizeof(UPL_CharacterBaseListenerUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CharacterBaseListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_ConnectedComponentMovements) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_CharacterMovementComponent) == 0x0B18); // 2840 bytes (0x000B00 - 0x000B18)
static_assert(sizeof(UPL_CharacterMovementConnectionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ActorConnectionListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ClassUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ComponentUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ConnectedComponentMovement) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UPL_ConnectedMovementUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CurveUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DebugDrawUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DebugOverlayWidget) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UPL_DebugUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_Delay) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UPL_EnumUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ForwardCharacterBaseEventComponent) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UPL_GameInstance) == 0x01D0); // 464 bytes (0x0001A8 - 0x0001D0)
static_assert(sizeof(FPL_LazyTexture2D) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UPL_GetTexture2DAsync) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UPL_ApplyImpulseToTargetUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_InputUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_InterpolationUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_LabeledIconWidget) == 0x02A0); // 672 bytes (0x000260 - 0x0002A0)
static_assert(sizeof(UPL_LazyTexture2DUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_MaterialUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_MathUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_MessageLogUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_MontageSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPL_MontageSettingsObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UPL_ObjectUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PersistenceSystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(APL_PlayerController) == 0x05F8); // 1528 bytes (0x0005E8 - 0x0005F8)
static_assert(sizeof(UPL_PossessableInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_RootActorProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_StringUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SubsystemUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SweepColliderSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SweepColliderUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SystemUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_Ticket) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_Ticketer) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UPL_TraceUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_VectorUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_AssetFilter) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPL_ClassHierarchy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_CriticallyDampedInterpolator) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_DynamicResolutionStateInfos) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPL_ImpulseToApplyToTarget) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_ForwardImpulseToApplyToTarget) == 0x0014); // 20 bytes (0x000010 - 0x000014)
static_assert(sizeof(FPL_MovementMode) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FPL_MovementModeFilter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_OptionalRotator) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_OptionalVector) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_OptionalGuid) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FPL_OptionalName) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPL_OptionalString) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_OptionalText) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPL_OptionalFloat) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_OptionalUint8) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FPL_OptionalInt32) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_OptionalBool) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FPL_ShapeTraceQueryParams) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FPL_ShuffleAccessArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_ShuffleIndexAccessArray) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FPL_StreamableAsset) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FPL_SweepColliderTransformSource) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPL_SweepCollider) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FPL_SweepCollidersSettingBase) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_SweepCollidersSettingInternal) == 0x0088); // 136 bytes (0x000010 - 0x000088)
static_assert(sizeof(FPL_SweepColliders) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FPL_SweepCollidersSettingSetup) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(offsetof(FPL_ConnectedComponentMovements, ConnectedComponentMovementsStack) == 0x0000);
static_assert(offsetof(UPL_CharacterMovementComponent, ConnectedComponentMovements) == 0x0B08);
static_assert(offsetof(UPL_Delay, World) == 0x0070);
static_assert(offsetof(UPL_Delay, ContextActor) == 0x0078);
static_assert(offsetof(FPL_LazyTexture2D, Texture) == 0x0000);
static_assert(offsetof(UPL_GetTexture2DAsync, LazyTexture) == 0x0040);
static_assert(offsetof(UPL_LabeledIconWidget, ColorNotValidated) == 0x0260);
static_assert(offsetof(UPL_LabeledIconWidget, ColorValid) == 0x0270);
static_assert(offsetof(UPL_LabeledIconWidget, ColorInvalid) == 0x0280);
static_assert(offsetof(UPL_LabeledIconWidget, Label) == 0x0290);
static_assert(offsetof(UPL_LabeledIconWidget, Image) == 0x0298);
static_assert(offsetof(FPL_MontageSettings, MontageToPlay) == 0x0000);
static_assert(offsetof(FPL_MontageSettings, StartSection) == 0x0010);
static_assert(offsetof(FPL_MontageSettings, SkeletalMeshName) == 0x0018);
static_assert(offsetof(UPL_MontageSettingsObject, Value) == 0x0028);
static_assert(offsetof(UPL_Ticket, ContextObject) == 0x0028);
static_assert(offsetof(UPL_Ticket, Context) == 0x0030);
static_assert(offsetof(UPL_Ticket, Owner) == 0x0038);
static_assert(offsetof(FPL_AssetFilter, IncludePathFilters) == 0x0008);
static_assert(offsetof(FPL_AssetFilter, ExcludePathFilters) == 0x0018);
static_assert(offsetof(FPL_AssetFilter, PackageFileNameFilters) == 0x0028);
static_assert(offsetof(FPL_DynamicResolutionStateInfos, Status) == 0x0000);
static_assert(offsetof(FPL_MovementMode, MovementMode) == 0x0000);
static_assert(offsetof(FPL_MovementModeFilter, ValidMovementModes) == 0x0000);
static_assert(offsetof(FPL_OptionalRotator, Value) == 0x0004);
static_assert(offsetof(FPL_OptionalVector, Value) == 0x0004);
static_assert(offsetof(FPL_OptionalGuid, Value) == 0x0004);
static_assert(offsetof(FPL_OptionalName, Value) == 0x0004);
static_assert(offsetof(FPL_OptionalString, Value) == 0x0008);
static_assert(offsetof(FPL_OptionalText, Value) == 0x0008);
static_assert(offsetof(FPL_StreamableAsset, SoftObjectPtr) == 0x0000);
static_assert(offsetof(FPL_SweepColliderTransformSource, Source) == 0x0008);
static_assert(offsetof(FPL_SweepCollider, SweepColliderTransformSource) == 0x0000);
static_assert(offsetof(FPL_SweepCollider, CurrentWorld) == 0x0050);
static_assert(offsetof(FPL_SweepCollidersSettingBase, SweepInterpolationType) == 0x0004);
static_assert(offsetof(FPL_SweepCollidersSettingBase, HitFilteringMode) == 0x0007);
static_assert(offsetof(FPL_SweepCollidersSettingBase, CollisionProfile) == 0x0008);
static_assert(offsetof(FPL_SweepColliders, Setting) == 0x0010);
static_assert(offsetof(FPL_SweepColliders, ActiveSweepColliders) == 0x0098);
static_assert(offsetof(FPL_SweepCollidersSettingSetup, TraceTag) == 0x0018);
