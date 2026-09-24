
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
/// dependency: PL_Core
/// dependency: PL_UserInterface
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/PL_Demo.PL_DemoSettings
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPL_DemoSettings : public UDeveloperSettings
{ 
public:
	bool                                               bIsDemoBuild;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TSoftObjectPtr<class UClass*>                      TimerWidgetClass;                                           // 0x0040   (0x0028)  
	int32_t                                            TimerZOrder;                                                // 0x0068   (0x0004)  
	float                                              TimerLevelRerouteThreshold;                                 // 0x006C   (0x0004)  
	TWeakObjectPtr<class UWorld*>                      DemoEndLevel;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	FString                                            FullGameIdentifier;                                         // 0x0098   (0x0010)  
};

/// Class /Script/PL_Demo.PL_DemoTimerSubsystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UPL_DemoTimerSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UPL_DemoTimerWidget*                         TimerWidget;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
	class UPL_Ticketer*                                PauseTicketer;                                              // 0x0058   (0x0008)  
};

/// Class /Script/PL_Demo.PL_DemoTimerWidget
/// Size: 0x02D0 (720 bytes) (0x0002C8 - 0x0002D0) align 8 MaxSize: 0x02D0
class UPL_DemoTimerWidget : public UPL_UserWidget
{ 
public:
	float                                              RemainingTime;                                              // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/PL_Demo.PL_DemoTimerWidget.SetRemainingTime
	// void SetRemainingTime(float InRemainingTime);                                                                            // [0x12765c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Demo.PL_DemoTimerWidget.OnRemainingTimeChanged
	// void OnRemainingTimeChanged(float NewRemainingTime);                                                                     // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Demo.PL_DemoTimerWidget.GetRemainingTime
	// float GetRemainingTime();                                                                                                // [0x1276480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Demo.PL_DemoUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DemoUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Demo.PL_DemoUtils.StopDemoTimer
	// void StopDemoTimer(class UObject* WorldContextObject);                                                                   // [0x12766c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Demo.PL_DemoUtils.StartDemoTimer
	// void StartDemoTimer(class UObject* WorldContextObject);                                                                  // [0x1276640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Demo.PL_DemoUtils.PrimeDemoTimer
	// void PrimeDemoTimer(class UObject* WorldContextObject);                                                                  // [0x1276540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Demo.PL_DemoUtils.PauseDemoTimer
	// class UPL_Ticket* PauseDemoTimer(class UObject* WorldContextObject);                                                     // [0x12764b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Demo.PL_DemoUtils.GetRemainingDemoTime
	// float GetRemainingDemoTime(class UObject* WorldContextObject);                                                           // [0x12763f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Demo.PL_DemoUtils.FinishDemoTimer
	// void FinishDemoTimer(class UObject* WorldContextObject);                                                                 // [0x1276370] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UPL_DemoSettings) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UPL_DemoTimerSubsystem) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UPL_DemoTimerWidget) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UPL_DemoUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UPL_DemoSettings, TimerWidgetClass) == 0x0040);
static_assert(offsetof(UPL_DemoSettings, DemoEndLevel) == 0x0070);
static_assert(offsetof(UPL_DemoSettings, FullGameIdentifier) == 0x0098);
static_assert(offsetof(UPL_DemoTimerSubsystem, TimerWidget) == 0x0040);
static_assert(offsetof(UPL_DemoTimerSubsystem, PauseTicketer) == 0x0058);
