
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_WidgetsUtilsModule.EPL_WidgetVisualState
/// Size: 0x01 (1 bytes)
enum class EPL_WidgetVisualState : uint8_t
{
	EPL_WidgetVisualState__Visible                                                   = 0,
	EPL_WidgetVisualState__BeingShown                                                = 1,
	EPL_WidgetVisualState__Hidden                                                    = 2,
	EPL_WidgetVisualState__BeingHidden                                               = 3
};

/// Struct /Script/PL_WidgetsUtilsModule.PL_GenericMenuInputBinding
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_GenericMenuInputBinding
{ 
	TArray<FName>                                      Actions;                                                    // 0x0000   (0x0010)  
	bool                                               bShouldConsumeInput;                                        // 0x0010   (0x0001)  
	bool                                               bShouldExecuteWhenPaused;                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/PL_WidgetsUtilsModule.PL_GenericMenuAxisBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_GenericMenuAxisBinding
{ 
	TArray<FName>                                      Axes;                                                       // 0x0000   (0x0010)  
	float                                              ValueScale;                                                 // 0x0010   (0x0004)  
	float                                              Threshold;                                                  // 0x0014   (0x0004)  
	bool                                               bShouldConsumeInput;                                        // 0x0018   (0x0001)  
	bool                                               bShouldExecuteWhenPaused;                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Class /Script/PL_WidgetsUtilsModule.PL_GenericMenuInputComponent
/// Size: 0x0228 (552 bytes) (0x000140 - 0x000228) align 8 MaxSize: 0x0228
class UPL_GenericMenuInputComponent : public UInputComponent
{ 
public:
	bool                                               bAutoSetupInput;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	TMap<FName, FPL_GenericMenuInputBinding>           InputBindings;                                              // 0x0148   (0x0050)  
	TMap<FName, FPL_GenericMenuAxisBinding>            AxisBindings;                                               // 0x0198   (0x0050)  
	double                                             RepeatDelay;                                                // 0x01E8   (0x0008)  
	double                                             RepeatRate;                                                 // 0x01F0   (0x0008)  
	float                                              DiscreteAxisStepSize;                                       // 0x01F8   (0x0004)  
	float                                              AxisScrollThreshold;                                        // 0x01FC   (0x0004)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0200   (0x0028)  MISSED
};

/// Class /Script/PL_WidgetsUtilsModule.PL_GenericMenuInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_GenericMenuInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_WidgetsUtilsModule.PL_GenericMenuInterface.InputProgressStopped
	// void InputProgressStopped(FName& Command, float StoppedAt);                                                              // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PL_WidgetsUtilsModule.PL_GenericMenuInterface.InputProgressStarted
	// void InputProgressStarted(FName& Command, float StartedAt);                                                              // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PL_WidgetsUtilsModule.PL_ShowableWidgetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ShowableWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_WidgetsUtilsModule.PL_ShowableWidgetInterface.ShowWithOnComplete
	// void ShowWithOnComplete(FDelegateProperty& OnShownOnce, bool bUseAnimation);                                             // [0xaaea70] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_WidgetsUtilsModule.PL_ShowableWidgetInterface.Show
	// void Show(bool bUseAnimation);                                                                                           // [0xaae9e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_WidgetsUtilsModule.PL_ShowableWidgetInterface.HideWithOnComplete
	// void HideWithOnComplete(FDelegateProperty& OnHiddenOnce, bool bUseAnimation);                                            // [0xaae8e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_WidgetsUtilsModule.PL_ShowableWidgetInterface.Hide
	// void Hide(bool bUseAnimation);                                                                                           // [0xaae850] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_WidgetsUtilsModule.PL_ShowableWidgetInterface.GetVisualState
	// EPL_WidgetVisualState GetVisualState();                                                                                  // [0xaae820] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PL_WidgetsUtilsModule.PL_WidgetUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_WidgetUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_WidgetsUtilsModule.PL_WidgetUtils.FindParentWidgetOfType
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                                // [0xaae750] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FPL_GenericMenuInputBinding) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_GenericMenuAxisBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UPL_GenericMenuInputComponent) == 0x0228); // 552 bytes (0x000140 - 0x000228)
static_assert(sizeof(UPL_GenericMenuInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ShowableWidgetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_WidgetUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FPL_GenericMenuInputBinding, Actions) == 0x0000);
static_assert(offsetof(FPL_GenericMenuAxisBinding, Axes) == 0x0000);
static_assert(offsetof(UPL_GenericMenuInputComponent, InputBindings) == 0x0148);
static_assert(offsetof(UPL_GenericMenuInputComponent, AxisBindings) == 0x0198);
