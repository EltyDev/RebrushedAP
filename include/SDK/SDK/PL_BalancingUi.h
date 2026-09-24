
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_Balancing
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_BalancingUi.EPL_BalancingUiInputMode
/// Size: 0x01 (1 bytes)
enum class EPL_BalancingUiInputMode : uint8_t
{
	EPL_BalancingUiInputMode__None                                                   = 0,
	EPL_BalancingUiInputMode__Balancing                                              = 1,
	EPL_BalancingUiInputMode__Game                                                   = 2
};

/// Class /Script/PL_BalancingUi.PL_BalancingInputInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BalancingInputInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_BalancingUi.PL_BalancingInputInterface.CreateAndSetupInput
	// void CreateAndSetupInput(class APlayerController* PlayerController);                                                     // [0x83e910] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_BalancingUi.PL_BalancingInputInterface.ConnectWithWorld
	// void ConnectWithWorld(class UObject* WorldContextObject);                                                                // [0x83e880] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PL_BalancingUi.PL_BalancingRandomNames
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BalancingRandomNames : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_BalancingUi.PL_BalancingUiInputModeComponent
/// Size: 0x0150 (336 bytes) (0x000140 - 0x000150) align 8 MaxSize: 0x0150
class UPL_BalancingUiInputModeComponent : public UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Class /Script/PL_BalancingUi.PL_BalancingUiInputComponent
/// Size: 0x0158 (344 bytes) (0x000140 - 0x000158) align 8 MaxSize: 0x0158
class UPL_BalancingUiInputComponent : public UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0140   (0x0018)  MISSED
};

/// Class /Script/PL_BalancingUi.PL_BalancingUiSettings
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingUiSettings : public UObject
{ 
public:
	bool                                               bShouldPauseWhileBalancing;                                 // 0x0028   (0x0001)  
	bool                                               bShouldBlockAllGameInputWhileBalancing;                     // 0x0029   (0x0001)  
	bool                                               bShouldRoundToClosestIncrement;                             // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              MinAxisInputScaleValue;                                     // 0x002C   (0x0004)  
	float                                              MaxAxisInputScaleValue;                                     // 0x0030   (0x0004)  
	float                                              TimeToMaxInputScale;                                        // 0x0034   (0x0004)  
	FName                                              SelectPrevious;                                             // 0x0038   (0x0008)  
	FName                                              SelectNext;                                                 // 0x0040   (0x0008)  
	FName                                              IncreaseByOne;                                              // 0x0048   (0x0008)  
	FName                                              DecreaseByOne;                                              // 0x0050   (0x0008)  
	FName                                              ResetCurrentFocused;                                        // 0x0058   (0x0008)  
	FName                                              ChangeAxis;                                                 // 0x0060   (0x0008)  
	FName                                              SwitchBalancingMode;                                        // 0x0068   (0x0008)  
};

/// Class /Script/PL_BalancingUi.PL_BalancingUiUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BalancingUiUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/PL_BalancingUi.PL_BalancingStyle
/// Size: 0x02A8 (680 bytes) (0x000008 - 0x0002A8) align 8 MaxSize: 0x02A8
struct FPL_BalancingStyle : FSlateWidgetStyle
{ 
	FTextBlockStyle                                    TextStyle;                                                  // 0x0008   (0x0270)  
	FLinearColor                                       FocusedBackgroundColor;                                     // 0x0278   (0x0010)  
	FLinearColor                                       UnfocusedBackgroundColor;                                   // 0x0288   (0x0010)  
	float                                              BalancingModeAlpha;                                         // 0x0298   (0x0004)  
	float                                              GameModeAlpha;                                              // 0x029C   (0x0004)  
	float                                              BalancingLabelSizeFraction;                                 // 0x02A0   (0x0004)  
	float                                              InfoHeightSizeFraction;                                     // 0x02A4   (0x0004)  
};

/// Class /Script/PL_BalancingUi.PL_BalancingUMG
/// Size: 0x03D8 (984 bytes) (0x000108 - 0x0003D8) align 8 MaxSize: 0x03D8
class UPL_BalancingUMG : public UWidget
{ 
public:
	SDK_UNDEFINED(16,551) /* FMulticastInlineDelegate */ __um(OnBalancingInputModeChanged);                        // 0x0108   (0x0010)  
	FPL_BalancingStyle                                 WidgetStyle;                                                // 0x0118   (0x02A8)  
	class UPL_BalancingProfileSets*                    AvailableSets;                                              // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x03C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_BalancingUi.PL_BalancingUMG.CreateAndSetupInput
	// void CreateAndSetupInput(class APlayerController* PlayerController);                                                     // [0xc483a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_BalancingUi.PL_BalancingUMG.ConnectWithWorld
	// void ConnectWithWorld(class UObject* WorldContextObject);                                                                // [0xc48310] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UPL_BalancingInputInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BalancingRandomNames) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BalancingUiInputModeComponent) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(UPL_BalancingUiInputComponent) == 0x0158); // 344 bytes (0x000140 - 0x000158)
static_assert(sizeof(UPL_BalancingUiSettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UPL_BalancingUiUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_BalancingStyle) == 0x02A8); // 680 bytes (0x000008 - 0x0002A8)
static_assert(sizeof(UPL_BalancingUMG) == 0x03D8); // 984 bytes (0x000108 - 0x0003D8)
static_assert(offsetof(UPL_BalancingUiSettings, SelectPrevious) == 0x0038);
static_assert(offsetof(UPL_BalancingUiSettings, SelectNext) == 0x0040);
static_assert(offsetof(UPL_BalancingUiSettings, IncreaseByOne) == 0x0048);
static_assert(offsetof(UPL_BalancingUiSettings, DecreaseByOne) == 0x0050);
static_assert(offsetof(UPL_BalancingUiSettings, ResetCurrentFocused) == 0x0058);
static_assert(offsetof(UPL_BalancingUiSettings, ChangeAxis) == 0x0060);
static_assert(offsetof(UPL_BalancingUiSettings, SwitchBalancingMode) == 0x0068);
static_assert(offsetof(FPL_BalancingStyle, TextStyle) == 0x0008);
static_assert(offsetof(FPL_BalancingStyle, FocusedBackgroundColor) == 0x0278);
static_assert(offsetof(FPL_BalancingStyle, UnfocusedBackgroundColor) == 0x0288);
static_assert(offsetof(UPL_BalancingUMG, WidgetStyle) == 0x0118);
static_assert(offsetof(UPL_BalancingUMG, AvailableSets) == 0x03C0);
