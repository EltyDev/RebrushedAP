
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
/// dependency: InputCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_InputPlayback.EPL_RecordedPointerAction
/// Size: 0x01 (1 bytes)
enum class EPL_RecordedPointerAction : uint8_t
{
	EPL_RecordedPointerAction__Move                                                  = 0,
	EPL_RecordedPointerAction__ButtonDown                                            = 1,
	EPL_RecordedPointerAction__ButtonUp                                              = 2,
	EPL_RecordedPointerAction__ButtonDoubleClick                                     = 3,
	EPL_RecordedPointerAction__Wheel                                                 = 4
};

/// Enum /Script/PL_InputPlayback.EPL_InputPlaybackHandlerAction
/// Size: 0x01 (1 bytes)
enum class EPL_InputPlaybackHandlerAction : uint8_t
{
	EPL_InputPlaybackHandlerAction__DoNothing                                        = 0,
	EPL_InputPlaybackHandlerAction__StartRecording                                   = 1,
	EPL_InputPlaybackHandlerAction__StartPlaybackByPrompt                            = 2,
	EPL_InputPlaybackHandlerAction__StartPlaybackByAsset                             = 3
};

/// Enum /Script/PL_InputPlayback.EPL_InputPlaybackAutoMode
/// Size: 0x01 (1 bytes)
enum class EPL_InputPlaybackAutoMode : uint8_t
{
	EPL_InputPlaybackAutoMode__None                                                  = 0,
	EPL_InputPlaybackAutoMode__Record                                                = 1,
	EPL_InputPlaybackAutoMode__Play                                                  = 2
};

/// Enum /Script/PL_InputPlayback.EPL_InputPlaybackMode
/// Size: 0x01 (1 bytes)
enum class EPL_InputPlaybackMode : uint8_t
{
	EPL_InputPlaybackMode__None                                                      = 0,
	EPL_InputPlaybackMode__Recording                                                 = 1,
	EPL_InputPlaybackMode__Playback                                                  = 2
};

/// Enum /Script/PL_InputPlayback.EPL_InpuPlaybackDataTypes
/// Size: 0x01 (1 bytes)
enum class EPL_InpuPlaybackDataTypes : uint8_t
{
	EPL_InpuPlaybackDataTypes__None                                                  = 0,
	EPL_InpuPlaybackDataTypes__Json                                                  = 1,
	EPL_InpuPlaybackDataTypes__Asset                                                 = 2,
	EPL_InpuPlaybackDataTypes__Any                                                   = 3
};

/// Struct /Script/PL_InputPlayback.PL_RecordedKeyInput
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_RecordedKeyInput
{ 
	int32_t                                            Tick;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	int32_t                                            CharacterCode;                                              // 0x0020   (0x0004)  
	int32_t                                            KeyCode;                                                    // 0x0024   (0x0004)  
	bool                                               bDown;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/PL_InputPlayback.PL_RecordedAnalogInput
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_RecordedAnalogInput
{ 
	int32_t                                            Tick;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	int32_t                                            CharacterCode;                                              // 0x0020   (0x0004)  
	int32_t                                            KeyCode;                                                    // 0x0024   (0x0004)  
	float                                              AnalogValue;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PL_InputPlayback.PL_RecordedPointerInput
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FPL_RecordedPointerInput
{ 
	int32_t                                            Tick;                                                       // 0x0000   (0x0004)  
	FVector2D                                          ViewSpacePosition;                                          // 0x0004   (0x0008)  
	FVector2D                                          ScreenSpacePosition;                                        // 0x000C   (0x0008)  
	FVector2D                                          LastScreenSpacePosition;                                    // 0x0014   (0x0008)  
	FVector2D                                          CursorDelta;                                                // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(80,627) /* TSet<FKey> */             __um(PressedButtons);                                       // 0x0028   (0x0050)  
	FKey                                               EffectingButton;                                            // 0x0078   (0x0018)  
	int32_t                                            PointerIndex;                                               // 0x0090   (0x0004)  
	float                                              WheelDelta;                                                 // 0x0094   (0x0004)  
	EPL_RecordedPointerAction                          Action;                                                     // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/PL_InputPlayback.PL_RecordedMotionInput
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FPL_RecordedMotionInput
{ 
	int32_t                                            Tick;                                                       // 0x0000   (0x0004)  
	FVector                                            Tilt;                                                       // 0x0004   (0x000C)  
	FVector                                            RotationRate;                                               // 0x0010   (0x000C)  
	FVector                                            Gravity;                                                    // 0x001C   (0x000C)  
	FVector                                            Acceleration;                                               // 0x0028   (0x000C)  
};

/// Struct /Script/PL_InputPlayback.PL_InputPlaybackData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FPL_InputPlaybackData
{ 
	float                                              FrameRate;                                                  // 0x0000   (0x0004)  
	FRotator                                           InitialPlayerControlRotation;                               // 0x0004   (0x000C)  
	FTransform                                         InitialPlayerTransform;                                     // 0x0010   (0x0030)  
	TArray<FPL_RecordedKeyInput>                       KeyInputs;                                                  // 0x0040   (0x0010)  
	TArray<FPL_RecordedAnalogInput>                    AnalogInputs;                                               // 0x0050   (0x0010)  
	TArray<FPL_RecordedPointerInput>                   PointerInputs;                                              // 0x0060   (0x0010)  
	TArray<FPL_RecordedMotionInput>                    MotionInputs;                                               // 0x0070   (0x0010)  
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackDataAsset
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 16 MaxSize: 0x00B0
class UPL_InputPlaybackDataAsset : public UDataAsset
{ 
public:
	FPL_InputPlaybackData                              Data;                                                       // 0x0030   (0x0080)  
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackHandler
/// Size: 0x0298 (664 bytes) (0x000288 - 0x000298) align 8 MaxSize: 0x0298
class APL_InputPlaybackHandler : public AActor
{ 
public:
	EPL_InputPlaybackHandlerAction                     BeginPlayAction;                                            // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	class UPL_InputPlaybackDataAsset*                  PlaybackAsset;                                              // 0x0290   (0x0008)  
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackRuntimeSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_InputPlaybackRuntimeSettings : public USaveGame
{ 
public:
	int32_t                                            RecordingFrameRate;                                         // 0x0028   (0x0004)  
	bool                                               bApplyCursorPosition;                                       // 0x002C   (0x0001)  
	bool                                               bShowIndicatorWidget;                                       // 0x002D   (0x0001)  
	bool                                               bPlaybackAsFastAsPossible;                                  // 0x002E   (0x0001)  
	EPL_InputPlaybackAutoMode                          AutoModeInNextWorld;                                        // 0x002F   (0x0001)  
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackSettings
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UPL_InputPlaybackSettings : public UDeveloperSettings
{ 
public:
	TSoftObjectPtr<class UClass*>                      SettingsWidgetClass;                                        // 0x0038   (0x0028)  
	TSoftObjectPtr<class UClass*>                      IndicatorWidgetClass;                                       // 0x0060   (0x0028)  
	int32_t                                            IndicatorWidgetZOrder;                                      // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackSubsystem
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 16 MaxSize: 0x0120
class UPL_InputPlaybackSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	FPL_InputPlaybackData                              RecordedData;                                               // 0x0040   (0x0080)  
	class UPL_InputPlaybackDataAsset*                  PlaybackDataAsset;                                          // 0x00C0   (0x0008)  
	class UUserWidget*                                 IndicatorWidget;                                            // 0x00C8   (0x0008)  
	class UPL_InputPlaybackTimeStep*                   CustomTimeStep;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x00D8   (0x0048)  MISSED


	/// Functions
	// Function /Script/PL_InputPlayback.PL_InputPlaybackSubsystem.OnWorldChanged
	// void OnWorldChanged(class UWorld* OldWorld, class UWorld* NewWorld);                                                     // [0x127e180] Final|Native|Private 
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackTimeStep
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_InputPlaybackTimeStep : public UEngineCustomTimeStep
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/PL_InputPlayback.PL_InputPlaybackUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_InputPlaybackUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.TryStopRecording
	// bool TryStopRecording(class UObject* WorldContextObject);                                                                // [0x127ecd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.TryStopPlayback
	// bool TryStopPlayback(class UObject* WorldContextObject);                                                                 // [0x127ec40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.TryStartRecording
	// bool TryStartRecording(class UObject* WorldContextObject);                                                               // [0x127ebb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.TryStartPlayback
	// bool TryStartPlayback(class UObject* WorldContextObject, class UPL_InputPlaybackDataAsset* InPlaybackDataAsset);         // [0x127eae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.SaveSettingsObject
	// void SaveSettingsObject(class UPL_InputPlaybackRuntimeSettings* Settings);                                               // [0x127ea60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.SaveFileDialogue
	// void SaveFileDialogue(bool& bOutIsValidPath, FString& OutSelectedPath, int32_t AllowedDataTypes);                        // [0x127dbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.SaveData
	// bool SaveData(FPL_InputPlaybackData& Data, FString Path);                                                                // [0x127e7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.SaveAsJsonData
	// bool SaveAsJsonData(FPL_InputPlaybackData& Data, FString Path);                                                          // [0x127e500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.SaveAsDataAsset
	// bool SaveAsDataAsset(FPL_InputPlaybackData& Data, FString Path);                                                         // [0x127e250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.LoadJsonDataIntoStruct
	// bool LoadJsonDataIntoStruct(FPL_InputPlaybackData& Data, FString Path);                                                  // [0x127ded0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.LoadJsonData
	// class UPL_InputPlaybackDataAsset* LoadJsonData(class UObject* WorldContextObject, FString Path);                         // [0x127ddf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.LoadFilesDialogue
	// void LoadFilesDialogue(TArray<FString>& OutSelectedPaths, int32_t AllowedDataTypes);                                     // [0x127dce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.LoadFileDialogue
	// void LoadFileDialogue(bool& bOutIsValidPath, FString& OutSelectedPath, int32_t AllowedDataTypes);                        // [0x127dbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.LoadDataAsset
	// class UPL_InputPlaybackDataAsset* LoadDataAsset(class UObject* WorldContextObject, FString Path);                        // [0x127dad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.LoadData
	// class UPL_InputPlaybackDataAsset* LoadData(class UObject* WorldContextObject, FString Path);                             // [0x127d9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.GetSettingsObject
	// class UPL_InputPlaybackRuntimeSettings* GetSettingsObject();                                                             // [0x127d9c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.GetRecordedData
	// FPL_InputPlaybackData GetRecordedData(class UObject* WorldContextObject);                                                // [0x127d930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.GetCurrentMode
	// EPL_InputPlaybackMode GetCurrentMode(class UObject* WorldContextObject);                                                 // [0x127d8a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.EnforceUserInputControl
	// void EnforceUserInputControl();                                                                                          // [0x127d880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_InputPlayback.PL_InputPlaybackUtils.CreateSettingsWidget
	// class UUserWidget* CreateSettingsWidget(class APlayerController* OwningPlayer);                                          // [0x127d7f0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FPL_RecordedKeyInput) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPL_RecordedAnalogInput) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPL_RecordedPointerInput) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FPL_RecordedMotionInput) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FPL_InputPlaybackData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UPL_InputPlaybackDataAsset) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(APL_InputPlaybackHandler) == 0x0298); // 664 bytes (0x000288 - 0x000298)
static_assert(sizeof(UPL_InputPlaybackRuntimeSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_InputPlaybackSettings) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UPL_InputPlaybackSubsystem) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UPL_InputPlaybackTimeStep) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPL_InputPlaybackUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FPL_RecordedKeyInput, Key) == 0x0008);
static_assert(offsetof(FPL_RecordedAnalogInput, Key) == 0x0008);
static_assert(offsetof(FPL_RecordedPointerInput, ViewSpacePosition) == 0x0004);
static_assert(offsetof(FPL_RecordedPointerInput, ScreenSpacePosition) == 0x000C);
static_assert(offsetof(FPL_RecordedPointerInput, LastScreenSpacePosition) == 0x0014);
static_assert(offsetof(FPL_RecordedPointerInput, CursorDelta) == 0x001C);
static_assert(offsetof(FPL_RecordedPointerInput, EffectingButton) == 0x0078);
static_assert(offsetof(FPL_RecordedPointerInput, Action) == 0x0098);
static_assert(offsetof(FPL_RecordedMotionInput, Tilt) == 0x0004);
static_assert(offsetof(FPL_RecordedMotionInput, RotationRate) == 0x0010);
static_assert(offsetof(FPL_RecordedMotionInput, Gravity) == 0x001C);
static_assert(offsetof(FPL_RecordedMotionInput, Acceleration) == 0x0028);
static_assert(offsetof(FPL_InputPlaybackData, InitialPlayerControlRotation) == 0x0004);
static_assert(offsetof(FPL_InputPlaybackData, InitialPlayerTransform) == 0x0010);
static_assert(offsetof(FPL_InputPlaybackData, KeyInputs) == 0x0040);
static_assert(offsetof(FPL_InputPlaybackData, AnalogInputs) == 0x0050);
static_assert(offsetof(FPL_InputPlaybackData, PointerInputs) == 0x0060);
static_assert(offsetof(FPL_InputPlaybackData, MotionInputs) == 0x0070);
static_assert(offsetof(UPL_InputPlaybackDataAsset, Data) == 0x0030);
static_assert(offsetof(APL_InputPlaybackHandler, BeginPlayAction) == 0x0288);
static_assert(offsetof(APL_InputPlaybackHandler, PlaybackAsset) == 0x0290);
static_assert(offsetof(UPL_InputPlaybackRuntimeSettings, AutoModeInNextWorld) == 0x002F);
static_assert(offsetof(UPL_InputPlaybackSettings, SettingsWidgetClass) == 0x0038);
static_assert(offsetof(UPL_InputPlaybackSettings, IndicatorWidgetClass) == 0x0060);
static_assert(offsetof(UPL_InputPlaybackSubsystem, RecordedData) == 0x0040);
static_assert(offsetof(UPL_InputPlaybackSubsystem, PlaybackDataAsset) == 0x00C0);
static_assert(offsetof(UPL_InputPlaybackSubsystem, IndicatorWidget) == 0x00C8);
static_assert(offsetof(UPL_InputPlaybackSubsystem, CustomTimeStep) == 0x00D0);
