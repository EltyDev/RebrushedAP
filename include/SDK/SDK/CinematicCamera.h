
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

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0020   (0x0020)  MISSED
	FName                                              SocketName;                                                 // 0x0040   (0x0008)  
	FVector                                            RelativeOffset;                                             // 0x0048   (0x000C)  
	bool                                               bAllowRoll : 1;                                             // 0x0054:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0890 (2192 bytes) (0x000820 - 0x000890) align 16 MaxSize: 0x0888
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x0820   (0x0058)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0878   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x2c903a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x02B8 (696 bytes) (0x000288 - 0x0002B8) align 8 MaxSize: 0x02B8
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0288   (0x0004)  
	float                                              CraneYaw;                                                   // 0x028C   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0290   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x0294   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x0295   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0296   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0298   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x02A0   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x02A8   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x02B0   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x02A8 (680 bytes) (0x000288 - 0x0002A8) align 8 MaxSize: 0x02A8
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0288   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x028C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x028D   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0290   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x0298   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x2c90770] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FCameraTrackingFocusSettings
{ 
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FName                                              SocketName;                                                 // 0x0028   (0x0008)  
	FVector                                            RelativeOffset;                                             // 0x0030   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0040)  
	bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x004C   (0x0004)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x0054   (0x0004)  
	float                                              FocusOffset;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x08E0 (2272 bytes) (0x0007E0 - 0x0008E0) align 16 MaxSize: 0x08E0
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x07E0   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x07EC   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x07F8   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x0810   (0x0060)  
	float                                              CurrentFocalLength;                                         // 0x0870   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0874   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0878   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x087C   (0x000C)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0888   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0898   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x08A8   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x08B8   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x08C8   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x08D8   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x08DC   (0x0004)  


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x2c908e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x2c90840] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x2c907c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x2c90790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x2c90690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x2c90610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x2c905e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x2c90500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x2c90480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x2c903c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(FCameraLookatTrackingSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(ACineCameraActor) == 0x0888); // 2184 bytes (0x000820 - 0x000888)
static_assert(sizeof(ACameraRig_Crane) == 0x02B8); // 696 bytes (0x000288 - 0x0002B8)
static_assert(sizeof(ACameraRig_Rail) == 0x02A8); // 680 bytes (0x000288 - 0x0002A8)
static_assert(sizeof(FCameraFilmbackSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraLensSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCameraFocusSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNamedFilmbackPreset) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedLensPreset) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCineCameraComponent) == 0x08E0); // 2272 bytes (0x0007E0 - 0x0008E0)
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x0018);
static_assert(offsetof(FCameraLookatTrackingSettings, SocketName) == 0x0040);
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x0048);
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x0820);
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x0298);
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x02A0);
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x02A8);
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x02B0);
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x0290);
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x0298);
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x02A0);
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x0000);
static_assert(offsetof(FCameraTrackingFocusSettings, SocketName) == 0x0028);
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x0030);
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x0000);
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x0008);
static_assert(offsetof(FCameraFocusSettings, DebugFocusPlaneColor) == 0x004C);
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x0000);
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x0010);
static_assert(offsetof(FNamedLensPreset, Name) == 0x0000);
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x0010);
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x07E0);
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x07EC);
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x07F8);
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0810);
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x0888);
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x0898);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x08A8);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x08B8);
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x08C8);
