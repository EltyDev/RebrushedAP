
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
/// dependency: PL_BuildInfo

#pragma pack(push, 0x1)

/// Enum /Script/PL_InputMappingsUtilsModule.EPL_InputMode
/// Size: 0x01 (1 bytes)
enum class EPL_InputMode : uint8_t
{
	EPL_InputMode__Unknown                                                           = 0,
	EPL_InputMode__MouseKeyboard                                                     = 1,
	EPL_InputMode__Gamepad                                                           = 2
};

/// Enum /Script/PL_InputMappingsUtilsModule.EPL_ShowAxisInput
/// Size: 0x01 (1 bytes)
enum class EPL_ShowAxisInput : uint8_t
{
	EPL_ShowAxisInput__None                                                          = 0,
	EPL_ShowAxisInput__PositiveAndNegative                                           = 1,
	EPL_ShowAxisInput__OnlyPositive                                                  = 2,
	EPL_ShowAxisInput__OnlyNegative                                                  = 3
};

/// Enum /Script/PL_InputMappingsUtilsModule.EPL_VirtualKey
/// Size: 0x01 (1 bytes)
enum class EPL_VirtualKey : uint8_t
{
	EPL_VirtualKey__None                                                             = 0,
	EPL_VirtualKey__Accept                                                           = 1,
	EPL_VirtualKey__Back                                                             = 2
};

/// Struct /Script/PL_InputMappingsUtilsModule.PL_ActionToLabel
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_ActionToLabel
{ 
	FName                                              ActionName;                                                 // 0x0000   (0x0008)  
	FText                                              ScreenLabel;                                                // 0x0008   (0x0018)  
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_InputActionToScreenLabel
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPL_InputActionToScreenLabel : public UDataAsset
{ 
public:
	TArray<FPL_ActionToLabel>                          InputActionsToScreenLabels;                                 // 0x0030   (0x0010)  
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_InputManager
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UPL_InputManager : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,610) /* FMulticastInlineDelegate */ __um(OnInputModeChangedDelegate);                         // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputManager.SetInputModeOverride
	// void SetInputModeOverride(EPL_InputMode NewOverride);                                                                    // [0xab2660] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputManager.HasInputModeOverride
	// bool HasInputModeOverride();                                                                                             // [0xab2590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputManager.GetLastInputMode
	// EPL_InputMode GetLastInputMode();                                                                                        // [0xab2300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputManager.GetInputModeOverride
	// EPL_InputMode GetInputModeOverride();                                                                                    // [0xab2170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputManager.ClearInputModeOverride
	// void ClearInputModeOverride();                                                                                           // [0xab1d00] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PL_InputMappingsUtilsModule.PL_ButtonIconsDefinitions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_ButtonIconsDefinitions
{ 
	class UTexture2D*                                  MissingButtonIcon;                                          // 0x0000   (0x0008)  
	class UTexture2D*                                  InvalidButtonIcon;                                          // 0x0008   (0x0008)  
	class UDataAsset*                                  InputKeyToButtonIconDefinitions;                            // 0x0010   (0x0008)  
	class UDataAsset*                                  InputKeyToButtonIconDefinitionsSteamDeck;                   // 0x0018   (0x0008)  
};

/// Struct /Script/PL_InputMappingsUtilsModule.PL_InputActionLabelDefinitions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPL_InputActionLabelDefinitions
{ 
	class UDataAsset*                                  InputActionsToScreenLabelsDefinitions;                      // 0x0000   (0x0008)  
};

/// Struct /Script/PL_InputMappingsUtilsModule.PL_RemappableInputActionData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPL_RemappableInputActionData
{ 
	FName                                              ActionName;                                                 // 0x0000   (0x0008)  
	FText                                              GroupName;                                                  // 0x0008   (0x0018)  
	FText                                              Description;                                                // 0x0020   (0x0018)  
	bool                                               bDevelopmentOnly;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_InputMappingsSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_InputMappingsSettings : public UObject
{ 
public:
	FPL_ButtonIconsDefinitions                         ButtonIconsDefinitions;                                     // 0x0028   (0x0020)  
	FPL_InputActionLabelDefinitions                    ScreenLabelsDefinitions;                                    // 0x0048   (0x0008)  
	bool                                               bEnableInputRemapping;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FPL_RemappableInputActionData>              RemappableInputActions;                                     // 0x0058   (0x0010)  
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_InputMappingsUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.HasPositiveAndNegativeIcons
	// bool HasPositiveAndNegativeIcons(FPL_AxisInputButtonIcons& Result);                                                      // [0xab25c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.HasAnyIcons
	// bool HasAnyIcons(FPL_AxisInputButtonIcons& Result);                                                                      // [0xab24f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetScreenLabelFromActionName
	// FText GetScreenLabelFromActionName(FName ActionName, bool bIsUpperCase);                                                 // [0xab23c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetLastInputMode
	// EPL_InputMode GetLastInputMode(class UObject* WorldContextObject);                                                       // [0xab2330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetKeyFromActionName
	// FKey GetKeyFromActionName(class UObject* WorldContextObject, FName& ActionName);                                         // [0xab21a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetInputButtonIconsFromInputAxis
	// FPL_AxisInputButtonIcons GetInputButtonIconsFromInputAxis(class UObject* WorldContextObject, FName& InAxisName);         // [0xab2090] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetButtonIconsFromInputAction
	// TArray<UTexture2D*> GetButtonIconsFromInputAction(class UObject* WorldContextObject, FName& ActionName);                 // [0xab1f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetButtonIconFromInputKey
	// class UTexture2D* GetButtonIconFromInputKey(FKey& InKey);                                                                // [0xab1ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetButtonIconFromInputAction
	// class UTexture2D* GetButtonIconFromInputAction(class UObject* WorldContextObject, FName& ActionName);                    // [0xab1dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_InputMappingsUtilsModule.PL_InputMappingsUtils.GetAnyIcon
	// class UTexture2D* GetAnyIcon(FPL_AxisInputButtonIcons& Result);                                                          // [0xab1d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PL_InputMappingsUtilsModule.PL_InputKeyToButtonIcon
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPL_InputKeyToButtonIcon
{ 
	FKey                                               InputKey;                                                   // 0x0000   (0x0018)  
	TMap<EPL_TargetPlatform, class UTexture2D*>        PlatformButtonIcons;                                        // 0x0018   (0x0050)  
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_InputKeyToButtonIcons
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPL_InputKeyToButtonIcons : public UDataAsset
{ 
public:
	TArray<FPL_InputKeyToButtonIcon>                   KeysToButtonsList;                                          // 0x0030   (0x0010)  
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_PS4InputRemappingSettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_PS4InputRemappingSettings : public UObject
{ 
public:
	TMap<FName, EPL_VirtualKey>                        InputRemapping;                                             // 0x0028   (0x0050)  
};

/// Class /Script/PL_InputMappingsUtilsModule.PL_PS4InputRemappingSystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPL_PS4InputRemappingSystem : public UGameInstanceSubsystem
{ 
public:
};

/// Struct /Script/PL_InputMappingsUtilsModule.PL_AxisInputButtonIcons
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_AxisInputButtonIcons
{ 
	class UTexture2D*                                  NEGATIVE;                                                   // 0x0000   (0x0008)  
	class UTexture2D*                                  POSITIVE;                                                   // 0x0008   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FPL_ActionToLabel) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UPL_InputActionToScreenLabel) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPL_InputManager) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FPL_ButtonIconsDefinitions) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPL_InputActionLabelDefinitions) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_RemappableInputActionData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UPL_InputMappingsSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPL_InputMappingsUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_InputKeyToButtonIcon) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UPL_InputKeyToButtonIcons) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPL_PS4InputRemappingSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UPL_PS4InputRemappingSystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FPL_AxisInputButtonIcons) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FPL_ActionToLabel, ActionName) == 0x0000);
static_assert(offsetof(FPL_ActionToLabel, ScreenLabel) == 0x0008);
static_assert(offsetof(UPL_InputActionToScreenLabel, InputActionsToScreenLabels) == 0x0030);
static_assert(offsetof(FPL_ButtonIconsDefinitions, MissingButtonIcon) == 0x0000);
static_assert(offsetof(FPL_ButtonIconsDefinitions, InvalidButtonIcon) == 0x0008);
static_assert(offsetof(FPL_ButtonIconsDefinitions, InputKeyToButtonIconDefinitions) == 0x0010);
static_assert(offsetof(FPL_ButtonIconsDefinitions, InputKeyToButtonIconDefinitionsSteamDeck) == 0x0018);
static_assert(offsetof(FPL_InputActionLabelDefinitions, InputActionsToScreenLabelsDefinitions) == 0x0000);
static_assert(offsetof(FPL_RemappableInputActionData, ActionName) == 0x0000);
static_assert(offsetof(FPL_RemappableInputActionData, GroupName) == 0x0008);
static_assert(offsetof(FPL_RemappableInputActionData, Description) == 0x0020);
static_assert(offsetof(UPL_InputMappingsSettings, ButtonIconsDefinitions) == 0x0028);
static_assert(offsetof(UPL_InputMappingsSettings, ScreenLabelsDefinitions) == 0x0048);
static_assert(offsetof(UPL_InputMappingsSettings, RemappableInputActions) == 0x0058);
static_assert(offsetof(FPL_InputKeyToButtonIcon, InputKey) == 0x0000);
static_assert(offsetof(FPL_InputKeyToButtonIcon, PlatformButtonIcons) == 0x0018);
static_assert(offsetof(UPL_InputKeyToButtonIcons, KeysToButtonsList) == 0x0030);
static_assert(offsetof(UPL_PS4InputRemappingSettings, InputRemapping) == 0x0028);
static_assert(offsetof(FPL_AxisInputButtonIcons, NEGATIVE) == 0x0000);
static_assert(offsetof(FPL_AxisInputButtonIcons, POSITIVE) == 0x0008);
