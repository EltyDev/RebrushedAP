
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/PL_Animation.EPL_AnimNotify_SpawnSkeletalMeshAnimationMode
/// Size: 0x01 (1 bytes)
enum class EPL_AnimNotify_SpawnSkeletalMeshAnimationMode : uint8_t
{
	EPL_AnimNotify_SpawnSkeletalMeshAnimationMode__AnimationBlueprint                = 0,
	EPL_AnimNotify_SpawnSkeletalMeshAnimationMode__AnimationSingleNode               = 1
};

/// Enum /Script/PL_Animation.EPL_FootType
/// Size: 0x01 (1 bytes)
enum class EPL_FootType : uint8_t
{
	EPL_FootType__Left                                                               = 0,
	EPL_FootType__Right                                                              = 1
};

/// Enum /Script/PL_Animation.EPL_PelvisCalculationMethod
/// Size: 0x04 (4 bytes)
enum class EPL_PelvisCalculationMethod : uint32_t
{
	EPL_PelvisCalculationMethod__AverageFeetLocation                                 = 0,
	EPL_PelvisCalculationMethod__PickLowerFeetLocation                               = 1
};

/// Class /Script/PL_Animation.PL_AnimNotify_FixedCameraAngleState
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UPL_AnimNotify_FixedCameraAngleState : public UAnimNotifyState
{ 
public:
	class UClass*                                      CameraActorClass;                                           // 0x0030   (0x0008)  
	bool                                               bDisableInput;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              TargetDistance;                                             // 0x003C   (0x0004)  
	float                                              MinTargetDistance;                                          // 0x0040   (0x0004)  
	float                                              Pitch;                                                      // 0x0044   (0x0004)  
	float                                              YawOffset;                                                  // 0x0048   (0x0004)  
	bool                                               bDoTrace;                                                   // 0x004C   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     ProbeChannel;                                               // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	float                                              ProbeSize;                                                  // 0x0050   (0x0004)  
	bool                                               bFallbackTurnCharacter;                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	class ACameraActor*                                CameraActor;                                                // 0x0058   (0x0008)  
	class APlayerController*                           PlayerController;                                           // 0x0060   (0x0008)  
	class APawn*                                       Pawn;                                                       // 0x0068   (0x0008)  
	class AActor*                                      ViewTargetAtBeginning;                                      // 0x0070   (0x0008)  
};

/// Class /Script/PL_Animation.PL_InitAnimationSpawnedActorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_InitAnimationSpawnedActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Animation.PL_InitAnimationSpawnedActorInterface.Setup
	// void Setup(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);             // [0x856990] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_Animation.PL_AnimNotify_SpawnBase
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPL_AnimNotify_SpawnBase : public UAnimNotifyState
{ 
public:
	FName                                              SocketName;                                                 // 0x0030   (0x0008)  
	FVector                                            Location;                                                   // 0x0038   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0044   (0x000C)  
	FVector                                            Scale;                                                      // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TMap<class USkeletalMeshComponent*, class AActor*> SpawnedActors;                                              // 0x0060   (0x0050)  
	bool                                               bHideOnBlendWeightSmallerThen;                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              CutoffBlendWeight;                                          // 0x00B4   (0x0004)  
};

/// Class /Script/PL_Animation.PL_AnimNotify_SpawnActor
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_AnimNotify_SpawnActor : public UPL_AnimNotify_SpawnBase
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x00B8   (0x0008)  
};

/// Class /Script/PL_Animation.PL_AnimationNotifySkeletalMeshActor
/// Size: 0x0290 (656 bytes) (0x000288 - 0x000290) align 8 MaxSize: 0x0290
class APL_AnimationNotifySkeletalMeshActor : public AActor
{ 
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                      // 0x0288   (0x0008)  
};

/// Struct /Script/PL_Animation.PL_AnimNotify_SpawnSkeletalMeshSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_AnimNotify_SpawnSkeletalMeshSettings
{ 
	class USkeletalMesh*                               Mesh;                                                       // 0x0000   (0x0008)  
	EPL_AnimNotify_SpawnSkeletalMeshAnimationMode      AnimationMode;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UClass*                                      AnimInstance;                                               // 0x0010   (0x0008)  
	class UAnimationAsset*                             AnimToPlay;                                                 // 0x0018   (0x0008)  
	bool                                               bLoopAnimation;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/PL_Animation.PL_AnimNotify_SpawnSkeletalMesh
/// Size: 0x00E0 (224 bytes) (0x0000B8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPL_AnimNotify_SpawnSkeletalMesh : public UPL_AnimNotify_SpawnBase
{ 
public:
	FPL_AnimNotify_SpawnSkeletalMeshSettings           Settings;                                                   // 0x00B8   (0x0028)  
};

/// Class /Script/PL_Animation.PL_AnimNotify_SpawnStaticMesh
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_AnimNotify_SpawnStaticMesh : public UPL_AnimNotify_SpawnBase
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x00B8   (0x0008)  
};

/// Class /Script/PL_Animation.PL_FootStepSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_FootStepSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Animation.PL_OptimizedSkeletalMeshComponent
/// Size: 0x0F00 (3840 bytes) (0x000EE8 - 0x000F00) align 16 MaxSize: 0x0F00
class UPL_OptimizedSkeletalMeshComponent : public USkeletalMeshComponent
{ 
public:
	int32_t                                            MaxEvalRateForInterpolation;                                // 0x0EE8   (0x0004)  
	bool                                               bShouldUseLodMap;                                           // 0x0EEC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0EED   (0x0003)  MISSED
	TArray<int32_t>                                    LODToFrameSkipMap;                                          // 0x0EF0   (0x0010)  
};

/// Struct /Script/PL_Animation.PL_CameraDependentCelLook
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FPL_CameraDependentCelLook
{ 
	FName                                              CharacterOrientationSocket;                                 // 0x0000   (0x0008)  
	float                                              MinYaw;                                                     // 0x0008   (0x0004)  
	float                                              MaxYaw;                                                     // 0x000C   (0x0004)  
	float                                              MinPitch;                                                   // 0x0010   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0014   (0x0004)  
	float                                              MaxPitchValue;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x001C   (0x000C)  MISSED
};

/// Struct /Script/PL_Animation.PL_FeetIkSettings
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FPL_FeetIkSettings
{ 
	float                                              FootHeight;                                                 // 0x0000   (0x0004)  
	float                                              PelvisTargetBelowInterpSpeed;                               // 0x0004   (0x0004)  
	float                                              PelvisTargetAboveInterpSpeed;                               // 0x0008   (0x0004)  
	float                                              FootTargetBelowInterpSpeed;                                 // 0x000C   (0x0004)  
	float                                              FootTargetAboveInterpSpeed;                                 // 0x0010   (0x0004)  
	float                                              FootRotationInterpSpeed;                                    // 0x0014   (0x0004)  
	float                                              TraceDistanceAboveFoot;                                     // 0x0018   (0x0004)  
	float                                              TraceDistanceBelowFoot;                                     // 0x001C   (0x0004)  
	EPL_PelvisCalculationMethod                        PelvisCalculationMethod;                                    // 0x0020   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     FloorTraceChannel;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x73];                                      // 0x0025   (0x0073)  MISSED
};

/// Struct /Script/PL_Animation.PL_BaseFeetIk
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FPL_BaseFeetIk
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FPL_FeetIkSettings                                 Settings;                                                   // 0x0008   (0x0098)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00A0   (0x000C)  MISSED
	FVector                                            CurrentPelvisOffset;                                        // 0x00AC   (0x000C)  
};

/// Struct /Script/PL_Animation.PL_FootIk
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 4 MaxSize: 0x00C0
struct FPL_FootIk
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	FVector                                            CurrentLocationOffset;                                      // 0x0018   (0x000C)  
	FRotator                                           CurrentRotationOffset;                                      // 0x0024   (0x000C)  
	FName                                              FootBoneName;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x88];                                      // 0x0038   (0x0088)  MISSED
};

/// Struct /Script/PL_Animation.PL_SpecializeFootIk
/// Size: 0x00C4 (196 bytes) (0x0000C0 - 0x0000C4) align 4 MaxSize: 0x00C4
struct FPL_SpecializeFootIk : FPL_FootIk
{ 
	EPL_FootType                                       Type;                                                       // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00C1   (0x0003)  MISSED
};

/// Struct /Script/PL_Animation.PL_FeetIk
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FPL_FeetIk : FPL_BaseFeetIk
{ 
	TArray<FPL_SpecializeFootIk>                       Feet;                                                       // 0x00B8   (0x0010)  
};

/// Struct /Script/PL_Animation.PL_BipedalFeetIk
/// Size: 0x0238 (568 bytes) (0x0000B8 - 0x000238) align 8 MaxSize: 0x0238
struct FPL_BipedalFeetIk : FPL_BaseFeetIk
{ 
	FPL_FootIk                                         LeftFoot;                                                   // 0x00B8   (0x00C0)  
	FPL_FootIk                                         RightFoot;                                                  // 0x0178   (0x00C0)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_AnimNotify_FixedCameraAngleState) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UPL_InitAnimationSpawnedActorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_AnimNotify_SpawnBase) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UPL_AnimNotify_SpawnActor) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(APL_AnimationNotifySkeletalMeshActor) == 0x0290); // 656 bytes (0x000288 - 0x000290)
static_assert(sizeof(FPL_AnimNotify_SpawnSkeletalMeshSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPL_AnimNotify_SpawnSkeletalMesh) == 0x00E0); // 224 bytes (0x0000B8 - 0x0000E0)
static_assert(sizeof(UPL_AnimNotify_SpawnStaticMesh) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UPL_FootStepSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_OptimizedSkeletalMeshComponent) == 0x0F00); // 3840 bytes (0x000EE8 - 0x000F00)
static_assert(sizeof(FPL_CameraDependentCelLook) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPL_FeetIkSettings) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FPL_BaseFeetIk) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FPL_FootIk) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FPL_SpecializeFootIk) == 0x00C4); // 196 bytes (0x0000C0 - 0x0000C4)
static_assert(sizeof(FPL_FeetIk) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(FPL_BipedalFeetIk) == 0x0238); // 568 bytes (0x0000B8 - 0x000238)
static_assert(offsetof(UPL_AnimNotify_FixedCameraAngleState, CameraActorClass) == 0x0030);
static_assert(offsetof(UPL_AnimNotify_FixedCameraAngleState, ProbeChannel) == 0x004D);
static_assert(offsetof(UPL_AnimNotify_FixedCameraAngleState, CameraActor) == 0x0058);
static_assert(offsetof(UPL_AnimNotify_FixedCameraAngleState, PlayerController) == 0x0060);
static_assert(offsetof(UPL_AnimNotify_FixedCameraAngleState, Pawn) == 0x0068);
static_assert(offsetof(UPL_AnimNotify_FixedCameraAngleState, ViewTargetAtBeginning) == 0x0070);
static_assert(offsetof(UPL_AnimNotify_SpawnBase, SocketName) == 0x0030);
static_assert(offsetof(UPL_AnimNotify_SpawnBase, Location) == 0x0038);
static_assert(offsetof(UPL_AnimNotify_SpawnBase, Rotation) == 0x0044);
static_assert(offsetof(UPL_AnimNotify_SpawnBase, Scale) == 0x0050);
static_assert(offsetof(UPL_AnimNotify_SpawnBase, SpawnedActors) == 0x0060);
static_assert(offsetof(UPL_AnimNotify_SpawnActor, ActorClass) == 0x00B8);
static_assert(offsetof(APL_AnimationNotifySkeletalMeshActor, SkeletalMeshComponent) == 0x0288);
static_assert(offsetof(FPL_AnimNotify_SpawnSkeletalMeshSettings, Mesh) == 0x0000);
static_assert(offsetof(FPL_AnimNotify_SpawnSkeletalMeshSettings, AnimationMode) == 0x0008);
static_assert(offsetof(FPL_AnimNotify_SpawnSkeletalMeshSettings, AnimInstance) == 0x0010);
static_assert(offsetof(FPL_AnimNotify_SpawnSkeletalMeshSettings, AnimToPlay) == 0x0018);
static_assert(offsetof(UPL_AnimNotify_SpawnSkeletalMesh, Settings) == 0x00B8);
static_assert(offsetof(UPL_AnimNotify_SpawnStaticMesh, Mesh) == 0x00B8);
static_assert(offsetof(UPL_OptimizedSkeletalMeshComponent, LODToFrameSkipMap) == 0x0EF0);
static_assert(offsetof(FPL_CameraDependentCelLook, CharacterOrientationSocket) == 0x0000);
static_assert(offsetof(FPL_FeetIkSettings, PelvisCalculationMethod) == 0x0020);
static_assert(offsetof(FPL_FeetIkSettings, FloorTraceChannel) == 0x0024);
static_assert(offsetof(FPL_BaseFeetIk, Settings) == 0x0008);
static_assert(offsetof(FPL_BaseFeetIk, CurrentPelvisOffset) == 0x00AC);
static_assert(offsetof(FPL_FootIk, CurrentLocationOffset) == 0x0018);
static_assert(offsetof(FPL_FootIk, CurrentRotationOffset) == 0x0024);
static_assert(offsetof(FPL_FootIk, FootBoneName) == 0x0030);
static_assert(offsetof(FPL_SpecializeFootIk, Type) == 0x00C0);
static_assert(offsetof(FPL_FeetIk, Feet) == 0x00B8);
static_assert(offsetof(FPL_BipedalFeetIk, LeftFoot) == 0x00B8);
static_assert(offsetof(FPL_BipedalFeetIk, RightFoot) == 0x0178);
