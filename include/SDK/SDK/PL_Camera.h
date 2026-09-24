
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: PL_Core

#pragma pack(push, 0x1)

/// Enum /Script/PL_Camera.EPL_AppliedCameraArmProfileState
/// Size: 0x01 (1 bytes)
enum class EPL_AppliedCameraArmProfileState : uint8_t
{
	EPL_AppliedCameraArmProfileState__FadingIn                                       = 0,
	EPL_AppliedCameraArmProfileState__Applied                                        = 1,
	EPL_AppliedCameraArmProfileState__FadingOut                                      = 2
};

/// Enum /Script/PL_Camera.EPL_CameraArmRotationModifierControlledRotation
/// Size: 0x01 (1 bytes)
enum class EPL_CameraArmRotationModifierControlledRotation : uint8_t
{
	EPL_CameraArmRotationModifierControlledRotation__Yaw                             = 0,
	EPL_CameraArmRotationModifierControlledRotation__Pitch                           = 1
};

/// Enum /Script/PL_Camera.EPL_CameraArmSplineRotationControlSourceType
/// Size: 0x01 (1 bytes)
enum class EPL_CameraArmSplineRotationControlSourceType : uint8_t
{
	EPL_CameraArmSplineRotationControlSourceType__SplineDirection                    = 0,
	EPL_CameraArmSplineRotationControlSourceType__SplinePointToPlayerDirection       = 1,
	EPL_CameraArmSplineRotationControlSourceType__CustomDirection                    = 2,
	EPL_CameraArmSplineRotationControlSourceType__SplineDirectionCustomPitch         = 3,
	EPL_CameraArmSplineRotationControlSourceType__CustomRotation                     = 4
};

/// Enum /Script/PL_Camera.EPL_LocationAlongArmSettingBlendState
/// Size: 0x01 (1 bytes)
enum class EPL_LocationAlongArmSettingBlendState : uint8_t
{
	EPL_LocationAlongArmSettingBlendState__BlendIn                                   = 0,
	EPL_LocationAlongArmSettingBlendState__FullyBlendedIn                            = 1,
	EPL_LocationAlongArmSettingBlendState__BlendOut                                  = 2
};

/// Enum /Script/PL_Camera.EPL_SharedMultiplayerCameraYawChange
/// Size: 0x01 (1 bytes)
enum class EPL_SharedMultiplayerCameraYawChange : uint8_t
{
	EPL_SharedMultiplayerCameraYawChange__Fixed                                      = 0,
	EPL_SharedMultiplayerCameraYawChange__AdjustOnMaxDistance                        = 1,
	EPL_SharedMultiplayerCameraYawChange__AdjustOnFixedPoint                         = 2
};

/// Enum /Script/PL_Camera.EPL_CharacterSharedMultiplayerCameraZCalculationMethod
/// Size: 0x01 (1 bytes)
enum class EPL_CharacterSharedMultiplayerCameraZCalculationMethod : uint8_t
{
	EPL_CharacterSharedMultiplayerCameraZCalculationMethod__ActorPositions           = 0,
	EPL_CharacterSharedMultiplayerCameraZCalculationMethod__ProjectDown              = 1,
	EPL_CharacterSharedMultiplayerCameraZCalculationMethod__FixedZValue              = 2,
	EPL_CharacterSharedMultiplayerCameraZCalculationMethod__LastGroundedZLocation    = 3
};

/// Enum /Script/PL_Camera.EPL_SharedMultiplayerCameraZCalculationMethod
/// Size: 0x01 (1 bytes)
enum class EPL_SharedMultiplayerCameraZCalculationMethod : uint8_t
{
	EPL_SharedMultiplayerCameraZCalculationMethod__ActorPositions                    = 0,
	EPL_SharedMultiplayerCameraZCalculationMethod__ProjectDown                       = 1,
	EPL_SharedMultiplayerCameraZCalculationMethod__FixedZValue                       = 2
};

/// Struct /Script/PL_Camera.PL_AppliedCameraArmProfile
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_AppliedCameraArmProfile
{ 
	class UPL_CameraArmProfile*                        CameraArmProfile;                                           // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArm
/// Size: 0x03C0 (960 bytes) (0x000208 - 0x0003C0) align 16 MaxSize: 0x03C0
class UPL_CameraArm : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0208   (0x0010)  MISSED
	bool                                               bUsePawnControlRotation : 1;                                // 0x0218:0 (0x0001)  
	bool                                               bInfluencePawnControlRotation : 1;                          // 0x0218:1 (0x0001)  
	bool                                               bInheritPitch : 1;                                          // 0x0218:2 (0x0001)  
	bool                                               bInheritYaw : 1;                                            // 0x0218:3 (0x0001)  
	bool                                               bInheritRoll : 1;                                           // 0x0218:4 (0x0001)  
	bool                                               bDontInterfereWithPlayerControl : 1;                        // 0x0218:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0219   (0x0007)  MISSED
	class UClass*                                      CameraCollisionVisibilityHandlerClass;                      // 0x0220   (0x0008)  
	TArray<class UClass*>                              StartCameraArmModifierClasses;                              // 0x0228   (0x0010)  
	TArray<class UPL_CameraArmModifier*>               CameraArmModifiers;                                         // 0x0238   (0x0010)  
	TArray<class UObject*>                             UpdateDependent;                                            // 0x0248   (0x0010)  
	class UPL_CameraCollisionVisibilityHandler*        CameraCollisionVisibilityHandler;                           // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_6[0x148];                                     // 0x0260   (0x0148)  MISSED
	TArray<FPL_AppliedCameraArmProfile>                ActiveProfiles;                                             // 0x03A8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x03B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArm.ResetCamera
	// void ResetCamera(FPL_CameraArmResetContext& Context);                                                                    // [0xaeadf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArm.RemoveCameraArmProfile
	// void RemoveCameraArmProfile(FPL_CameraArmProfileHandle& CameraArmProfileHandle);                                         // [0xaeaa30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArm.RemoveAllCameraArmProfilesOfType
	// void RemoveAllCameraArmProfilesOfType(class UPL_CameraArmProfile* CameraArmProfile);                                     // [0xaea850] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArm.GetTargetRotation
	// FRotator GetTargetRotation();                                                                                            // [0xaea780] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Camera.PL_CameraArm.ApplyCameraArmProfile
	// FPL_CameraArmProfileHandle ApplyCameraArmProfile(class UPL_CameraArmProfile* CameraArmProfile);                          // [0xae9f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_CameraArmModifier
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UPL_CameraArmModifier : public UObject
{ 
public:
	FGameplayTag                                       ArmModifierTag;                                             // 0x0028   (0x0008)  
	FGameplayTagContainer                              BlockArmModifiersWithTag;                                   // 0x0030   (0x0020)  
	int32_t                                            Priority;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmModifier.Tick
	// void Tick(FPL_CameraArmUpdateContext& InOutCameraArmUpdateContext, float DeltaSeconds);                                  // [0xaeb2e0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PL_Camera.PL_CameraArmModifier.Reset
	// void Reset(class UPL_CameraArm* OwningCameraArm, FPL_CameraArmResetContext& Context);                                    // [0xaead00] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PL_Camera.PL_CameraArmModifier.Initialize
	// void Initialize(class UPL_CameraArm* OwningCameraArm);                                                                   // [0xaea7c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Camera.PL_CameraArmModifier.ApplyWorldOffset
	// void ApplyWorldOffset(class UPL_CameraArm* OwningCameraArm, FVector& InOffset, bool bWorldShift);                        // [0xaea190] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/PL_Camera.PL_CameraArmModifier.AdjustAfterTeleport
	// void AdjustAfterTeleport(class UPL_CameraArm* OwningCameraArm, FPL_CameraArmTeleportContext& Context);                   // [0xae9e00] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PL_Camera.PL_CameraArmPlayerInputSensitiveModifier
/// Size: 0x0070 (112 bytes) (0x000058 - 0x000070) align 8 MaxSize: 0x0070
class UPL_CameraArmPlayerInputSensitiveModifier : public UPL_CameraArmModifier
{ 
public:
	float                                              CooldownAfterPlayerInput;                                   // 0x0058   (0x0004)  
	float                                              TotalEaseInTime;                                            // 0x005C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmActorFramingModifier
/// Size: 0x00E0 (224 bytes) (0x000070 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPL_CameraArmActorFramingModifier : public UPL_CameraArmPlayerInputSensitiveModifier
{ 
public:
	class AActor*                                      ActorToFrame;                                               // 0x0070   (0x0008)  
	class UCurveFloat*                                 ArmLengthToDistanceToFramedActorCurve;                      // 0x0078   (0x0008)  
	float                                              ArmLengthBlendInTime;                                       // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	class UCurveFloat*                                 PitchToDistanceToFramedActorCurve;                          // 0x0088   (0x0008)  
	FPL_CriticallyDampedInterpolator                   PitchInterpolator;                                          // 0x0090   (0x0010)  
	FGameplayTagContainer                              BlockArmModifiersWithTagWhenActorToFrame;                   // 0x00A0   (0x0020)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C0   (0x0004)  MISSED
	float                                              SoftAdjustActorToBeFramedDistance;                          // 0x00C4   (0x0004)  
	float                                              FastInterpolationSpeed;                                     // 0x00C8   (0x0004)  
	float                                              SlowInterpolationSpeed;                                     // 0x00CC   (0x0004)  
	float                                              MaxAngleToCharacter;                                        // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x00D4   (0x000C)  MISSED


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmActorFramingModifier.StopFramingActor
	// void StopFramingActor(class AActor* InActorToFrame);                                                                     // [0xaeb190] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmActorFramingModifier.SetActorToFrame
	// void SetActorToFrame(class AActor* InActorToFrame);                                                                      // [0xaeaea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_CameraArmBaseSettingReceiverInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmBaseSettingReceiverInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmBaseSettingReceiverInterface.RemoveAppliedCameraSetting
	// void RemoveAppliedCameraSetting(FPL_CameraArmProfileHandle& Handle);                                                     // [0xaea8e0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PL_Camera.PL_CameraArmBaseSettingReceiverInterface.ApplyCameraSetting
	// void ApplyCameraSetting(FPL_CameraArmBaseSettingsValues& Values, FPL_CameraArmProfileHandle& Handle);                    // [0xaea0a0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PL_Camera.PL_CameraArmSetting
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmSetting : public UObject
{ 
public:
};

/// Class /Script/PL_Camera.PL_CameraArmBaseSetting
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_CameraArmBaseSetting : public UPL_CameraArmSetting
{ 
public:
	float                                              FieldOfView;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PL_Camera.PL_TargetPitchForTag
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_TargetPitchForTag
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	float                                              TargetPitch;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmControlledPitchModifier
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPL_CameraArmControlledPitchModifier : public UPL_CameraArmPlayerInputSensitiveModifier
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0070   (0x0008)  MISSED
	float                                              TargetPitch;                                                // 0x0078   (0x0004)  
	FPL_CriticallyDampedInterpolator                   PitchAdjustment;                                            // 0x007C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FGameplayTagContainer                              DontLowerPitchIfTagsAreActive;                              // 0x0090   (0x0020)  
	TArray<FPL_TargetPitchForTag>                      TargetPitchForTags;                                         // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmControlledPitchSetting
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_CameraArmControlledPitchSetting : public UPL_CameraArmSetting
{ 
public:
	float                                              TargetPitch;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FPL_TargetPitchForTag>                      TargetPitchForTags;                                         // 0x0030   (0x0010)  
};

/// Class /Script/PL_Camera.PL_CameraArmFollowModifier
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPL_CameraArmFollowModifier : public UPL_CameraArmPlayerInputSensitiveModifier
{ 
public:
	FGameplayTagContainer                              DontAdjustYawIfTagsAreActive;                               // 0x0070   (0x0020)  
	float                                              YawChangeAcceleration;                                      // 0x0090   (0x0004)  
	float                                              YawChangeDeceleration;                                      // 0x0094   (0x0004)  
	float                                              MaxYawChangeVelocity;                                       // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmLagModifier
/// Size: 0x0088 (136 bytes) (0x000058 - 0x000088) align 8 MaxSize: 0x0088
class UPL_CameraArmLagModifier : public UPL_CameraArmModifier
{ 
public:
	bool                                               bEnableCameraLag : 1;                                       // 0x0058:0 (0x0001)  
	bool                                               bDoLocationLag : 1;                                         // 0x0058:1 (0x0001)  
	bool                                               bEnableCameraRotationLag : 1;                               // 0x0058:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              CameraRotationLagSpeed;                                     // 0x005C   (0x0004)  
	bool                                               bUseCameraLagSubstepping : 1;                               // 0x0060:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              CameraLagSpeed;                                             // 0x0064   (0x0004)  
	float                                              CameraLagMaxTimeStep;                                       // 0x0068   (0x0004)  
	float                                              CameraLagMaxDistance;                                       // 0x006C   (0x0004)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0070   (0x0018)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmManagerSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_CameraArmManagerSettings : public UPL_CameraArmSetting
{ 
public:
	float                                              MaxPitch;                                                   // 0x0028   (0x0004)  
	float                                              MinPitch;                                                   // 0x002C   (0x0004)  
};

/// Class /Script/PL_Camera.PL_CameraArmModifierUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmModifierUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.StopFramingActor
	// void StopFramingActor(class AActor* Actor, class AActor* ActorToFrame);                                                  // [0xaeb220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.SetFixedTargetRotation
	// void SetFixedTargetRotation(class AActor* Actor, FPL_CameraRotationControlResult& InFixedTargetRotation);                // [0xaeb0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.SetAdjustWithFloorUpVector
	// void SetAdjustWithFloorUpVector(class AActor* Actor, bool bShouldAdjustWithFloorUpVector);                               // [0xaeaff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.SetActorToFrame
	// void SetActorToFrame(class AActor* Actor, class AActor* ActorToFrame);                                                   // [0xaeaf30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.RemoveLooseCameraArmModifierBlockingTags
	// void RemoveLooseCameraArmModifierBlockingTags(class AActor* Actor, FGameplayTagContainer& TagsToRemove);                 // [0xaeac10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.RemoveCameraArmRotationControlSource
	// void RemoveCameraArmRotationControlSource(class AActor* Actor, class UObject* ControlSource);                            // [0xaeab50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.RemoveCameraArmModifier
	// void RemoveCameraArmModifier(class AActor* Actor, class UPL_CameraArmModifier* Modifier);                                // [0xaea970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.FindCameraArmModifier
	// class UPL_CameraArmModifier* FindCameraArmModifier(class AActor* Actor, class UClass* ModifierClass);                    // [0xaea570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.ClearFixedTargetRotation
	// void ClearFixedTargetRotation(class AActor* Actor);                                                                      // [0xaea4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.BP_PushControlledRotationSettings
	// FPL_CameraArmRotationModifierSettingsHandle BP_PushControlledRotationSettings(class AActor* Actor, FPL_CameraArmRotationModifierSettings& Settings); // [0xaea3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.BP_PopControlledRotationSettings
	// void BP_PopControlledRotationSettings(class AActor* Actor, FPL_CameraArmRotationModifierSettingsHandle& Handle);         // [0xaea2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.AddNewCameraArmModifier
	// class UPL_CameraArmModifier* AddNewCameraArmModifier(class AActor* Actor, class UClass* ModifierClass);                  // [0xae9d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.AddLooseCameraArmModifierBlockingTags
	// void AddLooseCameraArmModifierBlockingTags(class AActor* Actor, FGameplayTagContainer& TagsToAdd);                       // [0xae9c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmModifierUtils.AddCameraArmRotationControlSource
	// void AddCameraArmRotationControlSource(class AActor* Actor, class UObject* ControlSource);                               // [0xae9b80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_CameraArmProfile
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UPL_CameraArmProfile : public UDataAsset
{ 
public:
	FGameplayTagContainer                              LooseCameraArmModifierBlockingTags;                         // 0x0030   (0x0020)  
	TArray<class UPL_CameraArmSetting*>                CameraArmSettings;                                          // 0x0050   (0x0010)  
};

/// Class /Script/PL_Camera.PL_DirectionalCameraArmSettingComponent
/// Size: 0x0490 (1168 bytes) (0x000488 - 0x000490) align 16 MaxSize: 0x0490
class UPL_DirectionalCameraArmSettingComponent : public UArrowComponent
{ 
public:
	class UPL_CameraArmProfile*                        Profile;                                                    // 0x0488   (0x0008)  
};

/// Struct /Script/PL_Camera.PL_CameraArmAppliedSetting
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_CameraArmAppliedSetting
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UActorComponent*>                     RotationControlSourceProviders;                             // 0x0008   (0x0010)  
};

/// Class /Script/PL_Camera.PL_CameraArmProfileSwitchingComponent
/// Size: 0x0108 (264 bytes) (0x0000B8 - 0x000108) align 8 MaxSize: 0x0108
class UPL_CameraArmProfileSwitchingComponent : public UActorComponent
{ 
public:
	TMap<class AActor*, FPL_CameraArmAppliedSetting>   AppliedSettings;                                            // 0x00B8   (0x0050)  


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmProfileSwitchingComponent.RemoveCameraArmProfile
	// void RemoveCameraArmProfile(class AActor* Actor);                                                                        // [0xaeaac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraArmProfileSwitchingComponent.ApplyCameraArmProfile
	// void ApplyCameraArmProfile(class AActor* Actor, FVector& Direction);                                                     // [0xae9fd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_CameraArmRotationControlSourceActorsSetting
/// Size: 0x0220 (544 bytes) (0x000208 - 0x000220) align 16 MaxSize: 0x0220
class UPL_CameraArmRotationControlSourceActorsSetting : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0208   (0x0008)  MISSED
	SDK_UNDEFINED(16,552) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Sources);                                     // 0x0210   (0x0010)  
};

/// Class /Script/PL_Camera.PL_CameraArmRotationControlSourceDirectSetting
/// Size: 0x04A0 (1184 bytes) (0x000488 - 0x0004A0) align 16 MaxSize: 0x04A0
class UPL_CameraArmRotationControlSourceDirectSetting : public UArrowComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0488   (0x0010)  MISSED
	int32_t                                            Controls;                                                   // 0x0498   (0x0004)  
	int32_t                                            SourcePriority;                                             // 0x049C   (0x0004)  
};

/// Class /Script/PL_Camera.PL_CameraArmRotationControlSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmRotationControlSourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmRotationControlSourceInterface.GetPriority
	// FPL_CameraArmRotationControlSourcePriorityResult GetPriority(class AActor* Target);                                      // [0xaea6e0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Camera.PL_CameraArmRotationControlSourceInterface.GetDesiredRotation
	// FPL_CameraRotationControlResult GetDesiredRotation(class AActor* Target);                                                // [0xaea640] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/PL_Camera.PL_CameraArmRotationControlSourcePriorityResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_CameraArmRotationControlSourcePriorityResult
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Priority;                                                   // 0x0004   (0x0004)  
	bool                                               bHasDistance;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x000C   (0x0004)  
};

/// Class /Script/PL_Camera.PL_CameraArmRotationControlSourceLookAtComponent
/// Size: 0x0230 (560 bytes) (0x000208 - 0x000230) align 16 MaxSize: 0x0230
class UPL_CameraArmRotationControlSourceLookAtComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0208   (0x0008)  MISSED
	FPL_CameraArmRotationControlSourcePriorityResult   Priority;                                                   // 0x0210   (0x0010)  
	EPL_CameraArmRotationModifierControlledRotation    Controls;                                                   // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0221   (0x000F)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmRotationControlSourceProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmRotationControlSourceProviderInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmRotationControlSourceProviderInterface.RemoveControlSource
	// void RemoveControlSource(class UPL_CameraArmRotationModifier* RotationModifier);                                         // [0x83e910] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Camera.PL_CameraArmRotationControlSourceProviderInterface.AddControlSources
	// void AddControlSources(class UPL_CameraArmRotationModifier* RotationModifier);                                           // [0x83e880] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/PL_Camera.PL_TargetAngleForTag
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_TargetAngleForTag
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	float                                              TargetAngle;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/PL_Camera.PL_CameraArmRotationModifierSettings
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FPL_CameraArmRotationModifierSettings
{ 
	float                                              DefaultTargetPitch;                                         // 0x0000   (0x0004)  
	FPL_CriticallyDampedInterpolator                   PitchAdjustment;                                            // 0x0004   (0x0010)  
	FPL_CriticallyDampedInterpolator                   YawAdjustment;                                              // 0x0014   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FGameplayTagContainer                              DontAdjustPitchIfTagsAreActive;                             // 0x0028   (0x0020)  
	FGameplayTagContainer                              DontLowerPitchIfTagsAreActive;                              // 0x0048   (0x0020)  
	FGameplayTagContainer                              DontAdjustYawIfTagsAreActive;                               // 0x0068   (0x0020)  
	TArray<FPL_TargetAngleForTag>                      TargetPitchForTags;                                         // 0x0088   (0x0010)  
	float                                              MinInputDependentAdjust;                                    // 0x0098   (0x0004)  
	float                                              MaxInputDependentAdjust;                                    // 0x009C   (0x0004)  
	int32_t                                            ControlledRotation;                                         // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraArmRotationModifier
/// Size: 0x01B8 (440 bytes) (0x000070 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPL_CameraArmRotationModifier : public UPL_CameraArmPlayerInputSensitiveModifier
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0070   (0x0008)  MISSED
	FPL_CameraArmRotationModifierSettings              DefaultSettings;                                            // 0x0078   (0x00A8)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0120   (0x0088)  MISSED
	TArray<class UObject*>                             ControlSources;                                             // 0x01A8   (0x0010)  
};

/// Class /Script/PL_Camera.PL_CameraArmRotationSettings
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class UPL_CameraArmRotationSettings : public UPL_CameraArmSetting
{ 
public:
	FPL_CameraArmRotationModifierSettings              Settings;                                                   // 0x0028   (0x00A8)  
};

/// Class /Script/PL_Camera.PL_CameraArmSettingReceiverInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmSettingReceiverInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmSettingReceiverInterface.OnNoCameraArmSettingsApplied
	// void OnNoCameraArmSettingsApplied();                                                                                     // [0xaefd80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_Camera.PL_CameraArmSplineRotationControlSourceActor
/// Size: 0x02A8 (680 bytes) (0x000288 - 0x0002A8) align 8 MaxSize: 0x02A8
class APL_CameraArmSplineRotationControlSourceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0288   (0x0008)  MISSED
	class UPL_CameraArmSplineRotationControlSourceComponent* SplineComponent;                                      // 0x0290   (0x0008)  
	class UPL_CameraArmSplineRotationControlSourceMetadata* SplineMetadata;                                        // 0x0298   (0x0008)  
	int32_t                                            Controls;                                                   // 0x02A0   (0x0004)  
	int32_t                                            SourcePriority;                                             // 0x02A4   (0x0004)  
};

/// Class /Script/PL_Camera.PL_CameraArmSplineRotationControlSourceComponent
/// Size: 0x0570 (1392 bytes) (0x000570 - 0x000570) align 16 MaxSize: 0x0570
class UPL_CameraArmSplineRotationControlSourceComponent : public USplineComponent
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmSplineRotationControlSourceComponent.FindCameraArmRotationForToWorldLocation
	// FRotator FindCameraArmRotationForToWorldLocation(FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> World);     // [0xaef3d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/PL_Camera.PL_CameraArmSplineRotationControlSourcePoint
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FPL_CameraArmSplineRotationControlSourcePoint
{ 
	EPL_CameraArmSplineRotationControlSourceType       Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Direction;                                                  // 0x0004   (0x000C)  
	float                                              Pitch;                                                      // 0x0010   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0014   (0x000C)  
};

/// Struct /Script/PL_Camera.PL_CameraArmSplineRotationControlSourcePointEntry
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FPL_CameraArmSplineRotationControlSourcePointEntry
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FPL_CameraArmSplineRotationControlSourcePoint      OutVal;                                                     // 0x0004   (0x0020)  
};

/// Class /Script/PL_Camera.PL_CameraArmSplineRotationControlSourceMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_CameraArmSplineRotationControlSourceMetadata : public USplineMetadata
{ 
public:
	TArray<FPL_CameraArmSplineRotationControlSourcePointEntry> Points;                                             // 0x0028   (0x0010)  
};

/// Class /Script/PL_Camera.PL_CameraArmUpdateContextUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmUpdateContextUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmUpdateContextUtils.GetTargetCameraArm
	// class UPL_CameraArm* GetTargetCameraArm(FPL_CameraArmUpdateContext& CameraArmUpdateContext);                             // [0xaefc30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Camera.PL_CameraArmUpdateContextUtils.GetTargetActor
	// class AActor* GetTargetActor(FPL_CameraArmUpdateContext& CameraArmUpdateContext);                                        // [0xaefae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Camera.PL_CameraArmUpdateContextUtils.GetRotationInput
	// FRotator GetRotationInput(FPL_CameraArmUpdateContext& CameraArmUpdateContext);                                           // [0xaef980] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Camera.PL_CameraArmUpdateContextUtils.GetPlayerController
	// class APlayerController* GetPlayerController(FPL_CameraArmUpdateContext& CameraArmUpdateContext);                        // [0xaef800] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Camera.PL_CameraArmUpdateContextUtils.GetPlayerCameraManager
	// class APlayerCameraManager* GetPlayerCameraManager(FPL_CameraArmUpdateContext& CameraArmUpdateContext);                  // [0xaef6b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Camera.PL_CameraArmUpdateContextUtils.GetOwningPawn
	// class APawn* GetOwningPawn(FPL_CameraArmUpdateContext& CameraArmUpdateContext);                                          // [0xaef560] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Camera.PL_CameraArmUpdateDependentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmUpdateDependentInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmUpdateDependentInterface.Update
	// void Update(float DeltaTime, FVector& CameraLocation, FRotator& CameraRotation);                                         // [0xaf06b0] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/PL_Camera.PL_CameraArmUpdateInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraArmUpdateInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraArmUpdateInterface.UnregisterCameraArmUpdateDependent
	// void UnregisterCameraArmUpdateDependent(class UObject* CameraArmUpdateDependent);                                        // [0x83e910] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Camera.PL_CameraArmUpdateInterface.RegisterCameraArmUpdateDependent
	// void RegisterCameraArmUpdateDependent(class UObject* CameraArmUpdateDependent);                                          // [0x83e880] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_Camera.PL_CameraCollisionVisibilityHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraCollisionVisibilityHandler : public UObject
{ 
public:
};

/// Class /Script/PL_Camera.PL_CameraComponent
/// Size: 0x0820 (2080 bytes) (0x0007E0 - 0x000820) align 16 MaxSize: 0x0820
class UPL_CameraComponent : public UCameraComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x07E0   (0x0008)  MISSED
	float                                              FovInterpSpeed;                                             // 0x07E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x07EC   (0x0024)  MISSED
	TArray<class UObject*>                             FovControlSources;                                          // 0x0810   (0x0010)  
};

/// Class /Script/PL_Camera.PL_CameraDebugDrawUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraDebugDrawUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Camera.PL_CameraModifier
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UPL_CameraModifier : public UCameraModifier
{ 
public:
};

/// Class /Script/PL_Camera.PL_CameraMod_BlockedByPlayerCameraInput
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UPL_CameraMod_BlockedByPlayerCameraInput : public UPL_CameraModifier
{ 
public:
	float                                              CooldownAfterPlayerInput;                                   // 0x0048   (0x0004)  
	float                                              TotalEaseInTime;                                            // 0x004C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraMod_Fov
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UPL_CameraMod_Fov : public UPL_CameraModifier
{ 
public:
	float                                              TargetFov;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraMod_LookAfterTarget
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UPL_CameraMod_LookAfterTarget : public UCameraModifier
{ 
public:
	class AActor*                                      TargetActor;                                                // 0x0048   (0x0008)  
	float                                              InterpSpeed;                                                // 0x0050   (0x0004)  
	bool                                               bOnlyFollowPitch;                                           // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_CameraSettings : public UObject
{ 
public:
	float                                              FieldOfViewMin;                                             // 0x0028   (0x0004)  
	float                                              FieldOfViewMax;                                             // 0x002C   (0x0004)  
	float                                              MinFieldOfViewMultiplier;                                   // 0x0030   (0x0004)  
	float                                              MaxFieldOfViewMultiplier;                                   // 0x0034   (0x0004)  
	float                                              DefaultFieldOfViewMultiplier;                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/PL_Camera.PL_CameraUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CameraUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_CameraUtils.TryApplyPlayerCameraArmProfile
	// FPL_CameraArmProfileHandle TryApplyPlayerCameraArmProfile(class UObject* WorldContext, class UPL_CameraArmProfile* Profile); // [0xaf05e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.TryApplyCameraArmProfile
	// FPL_CameraArmProfileHandle TryApplyCameraArmProfile(class AActor* CameraOwner, class UPL_CameraArmProfile* Profile);     // [0xaf0510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.SetFieldOfViewMultiplierByFraction
	// void SetFieldOfViewMultiplierByFraction(float InFieldOfViewFraction);                                                    // [0xaf0490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.ResetPlayerCameraWithLookAt
	// void ResetPlayerCameraWithLookAt(class UObject* WorldContext, class UPL_CameraArmRotationControlSourceLookAtComponent* LookAtTarget, bool bInstantReset); // [0xaf0390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.ResetPlayerCameraWithContext
	// void ResetPlayerCameraWithContext(class UObject* WorldContext, FPL_CameraArmResetContext& ResetContext);                 // [0xaf02b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.ResetPlayerCamera
	// void ResetPlayerCamera(class UObject* WorldContext, bool bInstantReset);                                                 // [0xaf01f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.ResetCameraWithContext
	// void ResetCameraWithContext(class AActor* Actor, FPL_CameraArmResetContext& ResetContext);                               // [0xaf0110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.ResetCamera
	// void ResetCamera(class AActor* Actor, bool bInstantReset);                                                               // [0xaf0050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.RemoveCameraModifier
	// void RemoveCameraModifier(class ACharacter* Character, class UCameraModifier* ModifierClass);                            // [0xaeff90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.RemoveAllPlayerCameraArmProfilesOfType
	// void RemoveAllPlayerCameraArmProfilesOfType(class UObject* WorldContext, class UPL_CameraArmProfile* Profile);           // [0xaefed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.PossessWithCameraTransition
	// void PossessWithCameraTransition(class APlayerController* PlayerController, class APawn* Target, FViewTargetTransitionParams TransitionParams); // [0xaefda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.AdjustCameraArmModifiersAfterTeleport
	// void AdjustCameraArmModifiersAfterTeleport(class AActor* Actor, FVector& LocationBeforeTeleport, FRotator& RotationBeforeTeleport); // [0xaef2b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Camera.PL_CameraUtils.AddNewCameraModifier
	// class UCameraModifier* AddNewCameraModifier(class ACharacter* Character, class UClass* ModifierClass);                   // [0xaef1e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_FieldOfViewControlSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_FieldOfViewControlSourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_FieldOfViewControlSourceInterface.GetPriority
	// int32_t GetPriority();                                                                                                   // [0xaef950] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Camera.PL_FieldOfViewControlSourceInterface.GetDesiredFieldOfView
	// float GetDesiredFieldOfView(float CurrentTargetFieldOfView);                                                             // [0xaef4c0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/PL_Camera.PL_FollowCameraModifierCharacterInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_FollowCameraModifierCharacterInterface : public UInterface
{ 
public:
};

/// Struct /Script/PL_Camera.PL_CameraArmProfileHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPL_CameraArmProfileHandle
{ 
	uint64_t                                           Handle;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/PL_Camera.PL_ArmLengthToPitchCurveBlend
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPL_ArmLengthToPitchCurveBlend
{ 
	FPL_CameraArmProfileHandle                         Handle;                                                     // 0x0000   (0x0008)  
	EPL_LocationAlongArmSettingBlendState              State;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              BlendAlpha;                                                 // 0x000C   (0x0004)  
	class UPL_LocationAlongArmSetting*                 Settings;                                                   // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/PL_Camera.PL_ArmLengthToPitchCurveBlends
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ArmLengthToPitchCurveBlends
{ 
	TArray<FPL_ArmLengthToPitchCurveBlend>             Blends;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/PL_Camera.PL_LocationAlongArm
/// Size: 0x0130 (304 bytes) (0x000058 - 0x000130) align 16 MaxSize: 0x0130
class UPL_LocationAlongArm : public UPL_CameraArmModifier
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UCurveFloat*                                 ArmLengthToPitchCurve;                                      // 0x0060   (0x0008)  
	float                                              ReducedDistanceExtensionInterpSpeed;                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x006C   (0x0010)  MISSED
	float                                              DesiredArmLengthInterpSpeed;                                // 0x007C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0080   (0x0008)  MISSED
	FVector                                            TargetOffset;                                               // 0x0088   (0x000C)  
	FVector                                            SocketOffset;                                               // 0x0094   (0x000C)  
	float                                              PitchCurveBlendDuration;                                    // 0x00A0   (0x0004)  
	bool                                               bShouldAdjustWithFloorUpVector;                             // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00A5   (0x0003)  MISSED
	float                                              AdjustedUpVectorInterpSpeed;                                // 0x00A8   (0x0004)  
	bool                                               bDoCollisionTest : 1;                                       // 0x00AC:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              ProbeSize;                                                  // 0x00B0   (0x0004)  
	float                                              UpwardProbeSizeIncrease;                                    // 0x00B4   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ProbeChannel;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x27];                                      // 0x00B9   (0x0027)  MISSED
	float                                              SnapBackDistance;                                           // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x1C];                                      // 0x00E4   (0x001C)  MISSED
	bool                                               bTraceComplex;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	FPL_ArmLengthToPitchCurveBlends                    ArmLengthToPitchCurveBlends;                                // 0x0108   (0x0010)  
	unsigned char                                      UnknownData08_7[0x18];                                      // 0x0118   (0x0018)  MISSED
};

/// Class /Script/PL_Camera.PL_LocationAlongArmSetting
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_LocationAlongArmSetting : public UPL_CameraArmSetting
{ 
public:
	float                                              BlendDuration;                                              // 0x0028   (0x0004)  
	float                                              BlendOutDuration;                                           // 0x002C   (0x0004)  
	bool                                               bOverrideArmLengthToPitchCurve;                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UCurveFloat*                                 ArmLengthToPitchCurve;                                      // 0x0038   (0x0008)  
	bool                                               bOverrideSocketOffset;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FVector                                            SocketOffset;                                               // 0x0044   (0x000C)  
	bool                                               bOverrideTargetOffset;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	FVector                                            TargetOffset;                                               // 0x0054   (0x000C)  
	bool                                               bOverrideShouldAdjustWithFloorUpVector;                     // 0x0060   (0x0001)  
	bool                                               bShouldAdjustWithFloorUpVector;                             // 0x0061   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              AdjustedUpVectorInterpSpeed;                                // 0x0064   (0x0004)  
};

/// Struct /Script/PL_Camera.PL_CameraArmManagerSettingsValues
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPL_CameraArmManagerSettingsValues
{ 
	float                                              MaxPitch;                                                   // 0x0000   (0x0004)  
	float                                              MinPitch;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/PL_Camera.PL_CameraManagerSettingsContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_CameraManagerSettingsContainer
{ 
	FPL_CameraArmProfileHandle                         Handle;                                                     // 0x0000   (0x0008)  
	FPL_CameraArmManagerSettingsValues                 Values;                                                     // 0x0008   (0x0008)  
};

/// Class /Script/PL_Camera.PL_PlayerCameraManager
/// Size: 0x28C0 (10432 bytes) (0x002880 - 0x0028C0) align 16 MaxSize: 0x28C0
class APL_PlayerCameraManager : public APlayerCameraManager
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x2880   (0x0008)  MISSED
	float                                              PitchInterpSpeed;                                           // 0x2888   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x288C   (0x0018)  MISSED
	FPL_CameraArmManagerSettingsValues                 ActiveSettings;                                             // 0x28A4   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x28AC   (0x0004)  MISSED
	TArray<FPL_CameraManagerSettingsContainer>         SettingsStack;                                              // 0x28B0   (0x0010)  


	/// Functions
	// Function /Script/PL_Camera.PL_PlayerCameraManager.RemoveCameraModifiersByClass
	// bool RemoveCameraModifiersByClass(class UClass* ModifierClass);                                                          // [0xaf3080] Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_SharedMultiplayerCamera
/// Size: 0x0840 (2112 bytes) (0x000820 - 0x000840) align 16 MaxSize: 0x0840
class APL_SharedMultiplayerCamera : public ACameraActor
{ 
public:
	bool                                               bAutoActiveForAllPlayers;                                   // 0x0820   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0821   (0x0007)  MISSED
	SDK_UNDEFINED(16,553) /* TArray<TEnumAsByte<EAutoReceiveInput>> */ __um(AutoActivateForPlayers);               // 0x0828   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0838   (0x0008)  MISSED
};

/// Class /Script/PL_Camera.PL_SharedMultiplayerAutoCompositionCamera
/// Size: 0x0840 (2112 bytes) (0x000840 - 0x000840) align 16 MaxSize: 0x0840
class APL_SharedMultiplayerAutoCompositionCamera : public APL_SharedMultiplayerCamera
{ 
public:
};

/// Struct /Script/PL_Camera.PL_FramingViewFraction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_FramingViewFraction
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Right;                                                      // 0x0004   (0x0004)  
	float                                              Top;                                                        // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/PL_Camera.PL_FramingMinDistance
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_FramingMinDistance
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Right;                                                      // 0x0004   (0x0004)  
	float                                              Top;                                                        // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/PL_Camera.PL_SharedMultiplayerFramingSettingGroups
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FPL_SharedMultiplayerFramingSettingGroups
{ 
	FPL_FramingViewFraction                            FromScreen;                                                 // 0x0000   (0x0010)  
	FPL_FramingMinDistance                             ViewFrustum;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/PL_Camera.PL_SharedMultiplayerFramingSetting
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FPL_SharedMultiplayerFramingSetting
{ 
	FPL_SharedMultiplayerFramingSettingGroups          LowPriority;                                                // 0x0000   (0x0020)  
	FPL_SharedMultiplayerFramingSettingGroups          HighPriority;                                               // 0x0020   (0x0020)  
};

/// Struct /Script/PL_Camera.PL_SharedMultiplayerFramingActorToKeepInFrame
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPL_SharedMultiplayerFramingActorToKeepInFrame
{ 
	TWeakObjectPtr<class AActor*>                      Actor;                                                      // 0x0000   (0x0008)  
	FVector                                            position;                                                   // 0x0008   (0x000C)  
};

/// Struct /Script/PL_Camera.PL_SharedMultiplayerFramingInformation
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FPL_SharedMultiplayerFramingInformation
{ 
	EPL_CharacterSharedMultiplayerCameraZCalculationMethod ZCalculationMethodForCharacters;                        // 0x0000   (0x0001)  
	EPL_SharedMultiplayerCameraZCalculationMethod      ZCalculationMethodForNonCharacters;                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ProjectPlayerToGroundForCameraZDampening;                   // 0x0004   (0x0004)  
	float                                              ProjectActorToGroundForCameraZDampening;                    // 0x0008   (0x0004)  
	FName                                              ProjectTargetsToGroundTraceChannel;                         // 0x000C   (0x0008)  
	float                                              GroundTraceColliderFraction;                                // 0x0014   (0x0004)  
	float                                              FixedZLocation;                                             // 0x0018   (0x0004)  
	FVector                                            Center;                                                     // 0x001C   (0x000C)  
	TArray<FVector>                                    AllPositionsToKeepInFrame;                                  // 0x0028   (0x0010)  
	TArray<FPL_SharedMultiplayerFramingActorToKeepInFrame> ActorsToKeepInFrame;                                    // 0x0038   (0x0010)  
	TArray<FVector>                                    PriorityPositionToKeepInFrame;                              // 0x0048   (0x0010)  
	TMap<class AActor*, FVector>                       CurrentCharacterLocations;                                  // 0x0058   (0x0050)  
	TMap<class AActor*, FVector>                       LastCharacterLocations;                                     // 0x00A8   (0x0050)  
};

/// Class /Script/PL_Camera.PL_SharedMultiplayerCameraCompositionComponent
/// Size: 0x0400 (1024 bytes) (0x000208 - 0x000400) align 16 MaxSize: 0x0400
class UPL_SharedMultiplayerCameraCompositionComponent : public USceneComponent
{ 
public:
	EPL_SharedMultiplayerCameraYawChange               SharedMultiplayerCameraYawChange;                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0209   (0x0003)  MISSED
	float                                              ArmYaw;                                                     // 0x020C   (0x0004)  
	float                                              YawAdjustInterpSpeed;                                       // 0x0210   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0214   (0x0004)  MISSED
	TWeakObjectPtr<class AActor*>                      YawFixedPoint;                                              // 0x0218   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0220   (0x0020)  MISSED
	float                                              ArmPitch;                                                   // 0x0240   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UCurveFloat*                                 PitchCurve;                                                 // 0x0248   (0x0008)  
	float                                              PitchAdjustInterpSpeed;                                     // 0x0250   (0x0004)  
	float                                              MinTargetArmLength;                                         // 0x0254   (0x0004)  
	bool                                               bRestrictArmLength;                                         // 0x0258   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              MaxTargetArmLength;                                         // 0x025C   (0x0004)  
	FPL_SharedMultiplayerFramingSetting                FramingSetting;                                             // 0x0260   (0x0040)  
	FPL_SharedMultiplayerFramingInformation            FramingInformation;                                         // 0x02A0   (0x00F8)  
	bool                                               bDoLocationLag;                                             // 0x0398   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0399   (0x0003)  MISSED
	float                                              CameraLagSpeed;                                             // 0x039C   (0x0004)  
	bool                                               bUseCameraLagSubstepping;                                   // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x03A1   (0x0003)  MISSED
	float                                              CameraLagMaxTimeStep;                                       // 0x03A4   (0x0004)  
	float                                              CameraLagMaxDistance;                                       // 0x03A8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x24];                                      // 0x03AC   (0x0024)  MISSED
	class AGameStateBase*                              GameState;                                                  // 0x03D0   (0x0008)  
	class UCameraComponent*                            Camera;                                                     // 0x03D8   (0x0008)  
	float                                              LastYaw;                                                    // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData08_7[0x1C];                                      // 0x03E4   (0x001C)  MISSED
};

/// Class /Script/PL_Camera.PL_SharedMultiplayerCameraToControlRotationModifier
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UPL_SharedMultiplayerCameraToControlRotationModifier : public UCameraModifier
{ 
public:
};

/// Class /Script/PL_Camera.PL_SharedMultiplayerCameraUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SharedMultiplayerCameraUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_SharedMultiplayerCameraUtils.RemoveActorToKeepInFrame
	// void RemoveActorToKeepInFrame(class AActor* Actor);                                                                      // [0xaf3000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Camera.PL_SharedMultiplayerCameraUtils.AddActorToKeepInFrame
	// void AddActorToKeepInFrame(class AActor* Actor, bool bIsPriorityTarget);                                                 // [0xaf2ec0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/PL_Camera.PL_SMCActorToKeepInFrame
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_SMCActorToKeepInFrame
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	bool                                               bIsPriorityTarget;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/PL_Camera.PL_SMCActorsToKeepInFrameListenerComponent
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UPL_SMCActorsToKeepInFrameListenerComponent : public UActorComponent
{ 
public:
	TArray<FPL_SMCActorToKeepInFrame>                  AdditionalActorsToKeepInFrame;                              // 0x00B8   (0x0010)  
};

/// Class /Script/PL_Camera.PL_SMCActorToKeepInFrameComponent
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_SMCActorToKeepInFrameComponent : public UActorComponent
{ 
public:
	bool                                               bShouldBeKeptInFrame;                                       // 0x00B8   (0x0001)  
	bool                                               bIsPriorityTarget;                                          // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00BA   (0x0006)  MISSED


	/// Functions
	// Function /Script/PL_Camera.PL_SMCActorToKeepInFrameComponent.SetShouldBeKeptInFrame
	// void SetShouldBeKeptInFrame(bool bInShouldBeKeptInFrame);                                                                // [0xaf3120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Camera.PL_SMCKillIfOutOfFrameComponent
/// Size: 0x00D8 (216 bytes) (0x0000B8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPL_SMCKillIfOutOfFrameComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	float                                              StartCountDownDistance;                                     // 0x00C0   (0x0004)  
	float                                              TimeToKillInSeconds;                                        // 0x00C4   (0x0004)  
	class UClass*                                      KillEffectClass;                                            // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_Camera.PL_SMCKillIfOutOfFrameComponent.TimeUp
	// void TimeUp();                                                                                                           // [0xaf31b0] Final|Native|Protected 
};

/// Class /Script/PL_Camera.PL_SMCOutOfFrameListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SMCOutOfFrameListenerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Camera.PL_SMCOutOfFrameListenerInterface.MaxDistanceToFrame
	// void MaxDistanceToFrame(float Distance);                                                                                 // [0xaf2f80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_Camera.PL_SpectateUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SpectateUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Camera.PL_ZJumpDampening
/// Size: 0x0100 (256 bytes) (0x000058 - 0x000100) align 8 MaxSize: 0x0100
class UPL_ZJumpDampening : public UPL_CameraArmModifier
{ 
public:
	bool                                               bApplyJumpDampening;                                        // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	FPL_CriticallyDampedInterpolator                   DeltaZInterpolator;                                         // 0x005C   (0x0010)  
	float                                              MaxDampeningZValue;                                         // 0x006C   (0x0004)  
	float                                              MinFromJumpingDampeningZValue;                              // 0x0070   (0x0004)  
	float                                              MinFromIdleDampeningZValue;                                 // 0x0074   (0x0004)  
	FGameplayTagContainer                              BlockedTags;                                                // 0x0078   (0x0020)  
	FGameplayTagContainer                              StopUpdateDeltaZTags;                                       // 0x0098   (0x0020)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x00B8   (0x0038)  MISSED
	class UAbilitySystemComponent*                     OwnersAbilitySystemComponent;                               // 0x00F0   (0x0008)  
	class UCharacterMovementComponent*                 CharacterMovementComponent;                                 // 0x00F8   (0x0008)  
};

/// Struct /Script/PL_Camera.PL_CameraArmBaseSettingsValues
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPL_CameraArmBaseSettingsValues
{ 
	float                                              FieldOfView;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/PL_Camera.PL_CameraArmLengthData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_CameraArmLengthData
{ 
	TWeakObjectPtr<class UObject*>                     Source;                                                     // 0x0000   (0x0008)  
	float                                              TargetDesiredLength;                                        // 0x0008   (0x0004)  
	float                                              TotalBlendInTime;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/PL_Camera.PL_CameraArmLengthDataBlend
/// Size: 0x0014 (20 bytes) (0x000010 - 0x000014) align 4 MaxSize: 0x0014
struct FPL_CameraArmLengthDataBlend : FPL_CameraArmLengthData
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0010   (0x0004)  MISSED
};

/// Struct /Script/PL_Camera.PL_CameraArmResetContext
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_CameraArmResetContext
{ 
	bool                                               bInstantReset;                                              // 0x0000   (0x0001)  
	bool                                               bHasCustomSettings;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FRotator                                           DesiredRotation;                                            // 0x0004   (0x000C)  
};

/// Struct /Script/PL_Camera.PL_CameraArmRotationModifierSettingsHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_CameraArmRotationModifierSettingsHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PL_Camera.PL_CameraRotationControlResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_CameraRotationControlResult
{ 
	int32_t                                            Controls;                                                   // 0x0000   (0x0004)  
	FRotator                                           DesiredRotation;                                            // 0x0004   (0x000C)  
};

/// Struct /Script/PL_Camera.PL_CameraArmTeleportContext
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 MaxSize: 0x0048
struct FPL_CameraArmTeleportContext
{ 
	FVector                                            LocationBeforeTeleport;                                     // 0x0000   (0x000C)  
	FRotator                                           RotationBeforeTeleport;                                     // 0x000C   (0x000C)  
	FVector                                            LocationAfterTeleport;                                      // 0x0018   (0x000C)  
	FRotator                                           RotationAfterTeleport;                                      // 0x0024   (0x000C)  
	FVector                                            DeltaLocation;                                              // 0x0030   (0x000C)  
	FRotator                                           DeltaRotation;                                              // 0x003C   (0x000C)  
};

/// Struct /Script/PL_Camera.PL_CameraArmUpdateContext
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FPL_CameraArmUpdateContext
{ 
	class UPL_CameraArm*                               TargetCameraArm;                                            // 0x0000   (0x0008)  
	class APlayerController*                           PlayerController;                                           // 0x0008   (0x0008)  
	FVector                                            ArmOrigin;                                                  // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x001C   (0x0054)  MISSED
	class UAbilitySystemComponent*                     TargetAbilitySystem;                                        // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	TArray<class UPrimitiveComponent*>                 Obstacles;                                                  // 0x0080   (0x0010)  
};

/// Struct /Script/PL_Camera.PL_HorizontalCameraDirectionResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_HorizontalCameraDirectionResult
{ 
	bool                                               bHasValidResult;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Direction;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/PL_Camera.PL_FieldOfView
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FPL_FieldOfView
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/PL_Camera.PL_SharedMultiplayerCameraFramingPlaneNormals
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 4 MaxSize: 0x00C0
struct FPL_SharedMultiplayerCameraFramingPlaneNormals
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Struct /Script/PL_Camera.PL_SharedMultiplayerCameraFramingPlaneNormalsSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FPL_SharedMultiplayerCameraFramingPlaneNormalsSet
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/PL_Camera.PL_ViewFrustum
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FPL_ViewFrustum : FPL_FieldOfView
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0080   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FPL_AppliedCameraArmProfile) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPL_CameraArm) == 0x03C0); // 960 bytes (0x000208 - 0x0003C0)
static_assert(sizeof(UPL_CameraArmModifier) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UPL_CameraArmPlayerInputSensitiveModifier) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(UPL_CameraArmActorFramingModifier) == 0x00E0); // 224 bytes (0x000070 - 0x0000E0)
static_assert(sizeof(UPL_CameraArmBaseSettingReceiverInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraArmSetting) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraArmBaseSetting) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FPL_TargetPitchForTag) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPL_CameraArmControlledPitchModifier) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(UPL_CameraArmControlledPitchSetting) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_CameraArmFollowModifier) == 0x00A0); // 160 bytes (0x000070 - 0x0000A0)
static_assert(sizeof(UPL_CameraArmLagModifier) == 0x0088); // 136 bytes (0x000058 - 0x000088)
static_assert(sizeof(UPL_CameraArmManagerSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_CameraArmModifierUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraArmProfile) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UPL_DirectionalCameraArmSettingComponent) == 0x0490); // 1168 bytes (0x000488 - 0x000490)
static_assert(sizeof(FPL_CameraArmAppliedSetting) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPL_CameraArmProfileSwitchingComponent) == 0x0108); // 264 bytes (0x0000B8 - 0x000108)
static_assert(sizeof(UPL_CameraArmRotationControlSourceActorsSetting) == 0x0220); // 544 bytes (0x000208 - 0x000220)
static_assert(sizeof(UPL_CameraArmRotationControlSourceDirectSetting) == 0x04A0); // 1184 bytes (0x000488 - 0x0004A0)
static_assert(sizeof(UPL_CameraArmRotationControlSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_CameraArmRotationControlSourcePriorityResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_CameraArmRotationControlSourceLookAtComponent) == 0x0230); // 560 bytes (0x000208 - 0x000230)
static_assert(sizeof(UPL_CameraArmRotationControlSourceProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_TargetAngleForTag) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPL_CameraArmRotationModifierSettings) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(UPL_CameraArmRotationModifier) == 0x01B8); // 440 bytes (0x000070 - 0x0001B8)
static_assert(sizeof(UPL_CameraArmRotationSettings) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UPL_CameraArmSettingReceiverInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(APL_CameraArmSplineRotationControlSourceActor) == 0x02A8); // 680 bytes (0x000288 - 0x0002A8)
static_assert(sizeof(UPL_CameraArmSplineRotationControlSourceComponent) == 0x0570); // 1392 bytes (0x000570 - 0x000570)
static_assert(sizeof(FPL_CameraArmSplineRotationControlSourcePoint) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPL_CameraArmSplineRotationControlSourcePointEntry) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UPL_CameraArmSplineRotationControlSourceMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_CameraArmUpdateContextUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraArmUpdateDependentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraArmUpdateInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraCollisionVisibilityHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraComponent) == 0x0820); // 2080 bytes (0x0007E0 - 0x000820)
static_assert(sizeof(UPL_CameraDebugDrawUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CameraModifier) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UPL_CameraMod_BlockedByPlayerCameraInput) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UPL_CameraMod_Fov) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UPL_CameraMod_LookAfterTarget) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UPL_CameraSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_CameraUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_FieldOfViewControlSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_FollowCameraModifierCharacterInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_CameraArmProfileHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_ArmLengthToPitchCurveBlend) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPL_ArmLengthToPitchCurveBlends) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_LocationAlongArm) == 0x0130); // 304 bytes (0x000058 - 0x000130)
static_assert(sizeof(UPL_LocationAlongArmSetting) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FPL_CameraArmManagerSettingsValues) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_CameraManagerSettingsContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(APL_PlayerCameraManager) == 0x28C0); // 10432 bytes (0x002880 - 0x0028C0)
static_assert(sizeof(APL_SharedMultiplayerCamera) == 0x0840); // 2112 bytes (0x000820 - 0x000840)
static_assert(sizeof(APL_SharedMultiplayerAutoCompositionCamera) == 0x0840); // 2112 bytes (0x000840 - 0x000840)
static_assert(sizeof(FPL_FramingViewFraction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_FramingMinDistance) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_SharedMultiplayerFramingSettingGroups) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPL_SharedMultiplayerFramingSetting) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPL_SharedMultiplayerFramingActorToKeepInFrame) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FPL_SharedMultiplayerFramingInformation) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(UPL_SharedMultiplayerCameraCompositionComponent) == 0x0400); // 1024 bytes (0x000208 - 0x000400)
static_assert(sizeof(UPL_SharedMultiplayerCameraToControlRotationModifier) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UPL_SharedMultiplayerCameraUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_SMCActorToKeepInFrame) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_SMCActorsToKeepInFrameListenerComponent) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UPL_SMCActorToKeepInFrameComponent) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UPL_SMCKillIfOutOfFrameComponent) == 0x00D8); // 216 bytes (0x0000B8 - 0x0000D8)
static_assert(sizeof(UPL_SMCOutOfFrameListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SpectateUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ZJumpDampening) == 0x0100); // 256 bytes (0x000058 - 0x000100)
static_assert(sizeof(FPL_CameraArmBaseSettingsValues) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPL_CameraArmLengthData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_CameraArmLengthDataBlend) == 0x0014); // 20 bytes (0x000010 - 0x000014)
static_assert(sizeof(FPL_CameraArmResetContext) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_CameraArmRotationModifierSettingsHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_CameraRotationControlResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_CameraArmTeleportContext) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FPL_CameraArmUpdateContext) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FPL_HorizontalCameraDirectionResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_FieldOfView) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FPL_SharedMultiplayerCameraFramingPlaneNormals) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FPL_SharedMultiplayerCameraFramingPlaneNormalsSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPL_ViewFrustum) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(offsetof(FPL_AppliedCameraArmProfile, CameraArmProfile) == 0x0000);
static_assert(offsetof(UPL_CameraArm, CameraCollisionVisibilityHandlerClass) == 0x0220);
static_assert(offsetof(UPL_CameraArm, StartCameraArmModifierClasses) == 0x0228);
static_assert(offsetof(UPL_CameraArm, CameraArmModifiers) == 0x0238);
static_assert(offsetof(UPL_CameraArm, UpdateDependent) == 0x0248);
static_assert(offsetof(UPL_CameraArm, CameraCollisionVisibilityHandler) == 0x0258);
static_assert(offsetof(UPL_CameraArm, ActiveProfiles) == 0x03A8);
static_assert(offsetof(UPL_CameraArmModifier, ArmModifierTag) == 0x0028);
static_assert(offsetof(UPL_CameraArmModifier, BlockArmModifiersWithTag) == 0x0030);
static_assert(offsetof(UPL_CameraArmActorFramingModifier, ActorToFrame) == 0x0070);
static_assert(offsetof(UPL_CameraArmActorFramingModifier, ArmLengthToDistanceToFramedActorCurve) == 0x0078);
static_assert(offsetof(UPL_CameraArmActorFramingModifier, PitchToDistanceToFramedActorCurve) == 0x0088);
static_assert(offsetof(UPL_CameraArmActorFramingModifier, PitchInterpolator) == 0x0090);
static_assert(offsetof(UPL_CameraArmActorFramingModifier, BlockArmModifiersWithTagWhenActorToFrame) == 0x00A0);
static_assert(offsetof(FPL_TargetPitchForTag, Tags) == 0x0000);
static_assert(offsetof(UPL_CameraArmControlledPitchModifier, PitchAdjustment) == 0x007C);
static_assert(offsetof(UPL_CameraArmControlledPitchModifier, DontLowerPitchIfTagsAreActive) == 0x0090);
static_assert(offsetof(UPL_CameraArmControlledPitchModifier, TargetPitchForTags) == 0x00B0);
static_assert(offsetof(UPL_CameraArmControlledPitchSetting, TargetPitchForTags) == 0x0030);
static_assert(offsetof(UPL_CameraArmFollowModifier, DontAdjustYawIfTagsAreActive) == 0x0070);
static_assert(offsetof(UPL_CameraArmProfile, LooseCameraArmModifierBlockingTags) == 0x0030);
static_assert(offsetof(UPL_CameraArmProfile, CameraArmSettings) == 0x0050);
static_assert(offsetof(UPL_DirectionalCameraArmSettingComponent, Profile) == 0x0488);
static_assert(offsetof(FPL_CameraArmAppliedSetting, RotationControlSourceProviders) == 0x0008);
static_assert(offsetof(UPL_CameraArmProfileSwitchingComponent, AppliedSettings) == 0x00B8);
static_assert(offsetof(UPL_CameraArmRotationControlSourceLookAtComponent, Priority) == 0x0210);
static_assert(offsetof(UPL_CameraArmRotationControlSourceLookAtComponent, Controls) == 0x0220);
static_assert(offsetof(FPL_TargetAngleForTag, Tags) == 0x0000);
static_assert(offsetof(FPL_CameraArmRotationModifierSettings, PitchAdjustment) == 0x0004);
static_assert(offsetof(FPL_CameraArmRotationModifierSettings, YawAdjustment) == 0x0014);
static_assert(offsetof(FPL_CameraArmRotationModifierSettings, DontAdjustPitchIfTagsAreActive) == 0x0028);
static_assert(offsetof(FPL_CameraArmRotationModifierSettings, DontLowerPitchIfTagsAreActive) == 0x0048);
static_assert(offsetof(FPL_CameraArmRotationModifierSettings, DontAdjustYawIfTagsAreActive) == 0x0068);
static_assert(offsetof(FPL_CameraArmRotationModifierSettings, TargetPitchForTags) == 0x0088);
static_assert(offsetof(UPL_CameraArmRotationModifier, DefaultSettings) == 0x0078);
static_assert(offsetof(UPL_CameraArmRotationModifier, ControlSources) == 0x01A8);
static_assert(offsetof(UPL_CameraArmRotationSettings, Settings) == 0x0028);
static_assert(offsetof(APL_CameraArmSplineRotationControlSourceActor, SplineComponent) == 0x0290);
static_assert(offsetof(APL_CameraArmSplineRotationControlSourceActor, SplineMetadata) == 0x0298);
static_assert(offsetof(FPL_CameraArmSplineRotationControlSourcePoint, Type) == 0x0000);
static_assert(offsetof(FPL_CameraArmSplineRotationControlSourcePoint, Direction) == 0x0004);
static_assert(offsetof(FPL_CameraArmSplineRotationControlSourcePoint, Rotation) == 0x0014);
static_assert(offsetof(FPL_CameraArmSplineRotationControlSourcePointEntry, OutVal) == 0x0004);
static_assert(offsetof(UPL_CameraArmSplineRotationControlSourceMetadata, Points) == 0x0028);
static_assert(offsetof(UPL_CameraComponent, FovControlSources) == 0x0810);
static_assert(offsetof(UPL_CameraMod_LookAfterTarget, TargetActor) == 0x0048);
static_assert(offsetof(FPL_ArmLengthToPitchCurveBlend, Handle) == 0x0000);
static_assert(offsetof(FPL_ArmLengthToPitchCurveBlend, State) == 0x0008);
static_assert(offsetof(FPL_ArmLengthToPitchCurveBlend, Settings) == 0x0010);
static_assert(offsetof(FPL_ArmLengthToPitchCurveBlends, Blends) == 0x0000);
static_assert(offsetof(UPL_LocationAlongArm, ArmLengthToPitchCurve) == 0x0060);
static_assert(offsetof(UPL_LocationAlongArm, TargetOffset) == 0x0088);
static_assert(offsetof(UPL_LocationAlongArm, SocketOffset) == 0x0094);
static_assert(offsetof(UPL_LocationAlongArm, ProbeChannel) == 0x00B8);
static_assert(offsetof(UPL_LocationAlongArm, ArmLengthToPitchCurveBlends) == 0x0108);
static_assert(offsetof(UPL_LocationAlongArmSetting, ArmLengthToPitchCurve) == 0x0038);
static_assert(offsetof(UPL_LocationAlongArmSetting, SocketOffset) == 0x0044);
static_assert(offsetof(UPL_LocationAlongArmSetting, TargetOffset) == 0x0054);
static_assert(offsetof(FPL_CameraManagerSettingsContainer, Handle) == 0x0000);
static_assert(offsetof(FPL_CameraManagerSettingsContainer, Values) == 0x0008);
static_assert(offsetof(APL_PlayerCameraManager, ActiveSettings) == 0x28A4);
static_assert(offsetof(APL_PlayerCameraManager, SettingsStack) == 0x28B0);
static_assert(offsetof(FPL_SharedMultiplayerFramingSettingGroups, FromScreen) == 0x0000);
static_assert(offsetof(FPL_SharedMultiplayerFramingSettingGroups, ViewFrustum) == 0x0010);
static_assert(offsetof(FPL_SharedMultiplayerFramingSetting, LowPriority) == 0x0000);
static_assert(offsetof(FPL_SharedMultiplayerFramingSetting, HighPriority) == 0x0020);
static_assert(offsetof(FPL_SharedMultiplayerFramingActorToKeepInFrame, Actor) == 0x0000);
static_assert(offsetof(FPL_SharedMultiplayerFramingActorToKeepInFrame, position) == 0x0008);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, ZCalculationMethodForCharacters) == 0x0000);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, ZCalculationMethodForNonCharacters) == 0x0001);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, ProjectTargetsToGroundTraceChannel) == 0x000C);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, Center) == 0x001C);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, AllPositionsToKeepInFrame) == 0x0028);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, ActorsToKeepInFrame) == 0x0038);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, PriorityPositionToKeepInFrame) == 0x0048);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, CurrentCharacterLocations) == 0x0058);
static_assert(offsetof(FPL_SharedMultiplayerFramingInformation, LastCharacterLocations) == 0x00A8);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, SharedMultiplayerCameraYawChange) == 0x0208);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, YawFixedPoint) == 0x0218);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, PitchCurve) == 0x0248);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, FramingSetting) == 0x0260);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, FramingInformation) == 0x02A0);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, GameState) == 0x03D0);
static_assert(offsetof(UPL_SharedMultiplayerCameraCompositionComponent, Camera) == 0x03D8);
static_assert(offsetof(FPL_SMCActorToKeepInFrame, Actor) == 0x0000);
static_assert(offsetof(UPL_SMCActorsToKeepInFrameListenerComponent, AdditionalActorsToKeepInFrame) == 0x00B8);
static_assert(offsetof(UPL_SMCKillIfOutOfFrameComponent, KillEffectClass) == 0x00C8);
static_assert(offsetof(UPL_ZJumpDampening, DeltaZInterpolator) == 0x005C);
static_assert(offsetof(UPL_ZJumpDampening, BlockedTags) == 0x0078);
static_assert(offsetof(UPL_ZJumpDampening, StopUpdateDeltaZTags) == 0x0098);
static_assert(offsetof(UPL_ZJumpDampening, OwnersAbilitySystemComponent) == 0x00F0);
static_assert(offsetof(UPL_ZJumpDampening, CharacterMovementComponent) == 0x00F8);
static_assert(offsetof(FPL_CameraArmLengthData, Source) == 0x0000);
static_assert(offsetof(FPL_CameraArmResetContext, DesiredRotation) == 0x0004);
static_assert(offsetof(FPL_CameraRotationControlResult, DesiredRotation) == 0x0004);
static_assert(offsetof(FPL_CameraArmTeleportContext, LocationBeforeTeleport) == 0x0000);
static_assert(offsetof(FPL_CameraArmTeleportContext, RotationBeforeTeleport) == 0x000C);
static_assert(offsetof(FPL_CameraArmTeleportContext, LocationAfterTeleport) == 0x0018);
static_assert(offsetof(FPL_CameraArmTeleportContext, RotationAfterTeleport) == 0x0024);
static_assert(offsetof(FPL_CameraArmTeleportContext, DeltaLocation) == 0x0030);
static_assert(offsetof(FPL_CameraArmTeleportContext, DeltaRotation) == 0x003C);
static_assert(offsetof(FPL_CameraArmUpdateContext, TargetCameraArm) == 0x0000);
static_assert(offsetof(FPL_CameraArmUpdateContext, PlayerController) == 0x0008);
static_assert(offsetof(FPL_CameraArmUpdateContext, ArmOrigin) == 0x0010);
static_assert(offsetof(FPL_CameraArmUpdateContext, TargetAbilitySystem) == 0x0070);
static_assert(offsetof(FPL_CameraArmUpdateContext, Obstacles) == 0x0080);
static_assert(offsetof(FPL_HorizontalCameraDirectionResult, Direction) == 0x0004);
