
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_UserInterface
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_OptionsContainerWidgetModule.EPL_OptionListItemVisualState
/// Size: 0x01 (1 bytes)
enum class EPL_OptionListItemVisualState : uint8_t
{
	EPL_OptionListItemVisualState__Default                                           = 0,
	EPL_OptionListItemVisualState__Disabled                                          = 1,
	EPL_OptionListItemVisualState__Hidden                                            = 2
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_WidgetWithCommandsBase
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UPL_WidgetWithCommandsBase : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,611) /* FMulticastInlineDelegate */ __um(OnActionCommandsChanged);                            // 0x0260   (0x0010)  
	TArray<FName>                                      CommandActions;                                             // 0x0270   (0x0010)  
	TArray<FPL_UICommandData>                          CommandsData;                                               // 0x0280   (0x0010)  


	/// Functions
	// Function /Script/PL_OptionsContainerWidgetModule.PL_WidgetWithCommandsBase.SetCommandsData
	// void SetCommandsData(TArray<FPL_UICommandData>& NewCommandsData);                                                        // [0xabbb40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_WidgetWithCommandsBase.SetCommandActions
	// void SetCommandActions(TArray<FName>& InCommandActions);                                                                 // [0xabba90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_WidgetWithCommandsBase.GetWidgetCommands
	// TArray<FPL_UICommandData> GetWidgetCommands();                                                                           // [0xabb5f0] Native|Public|BlueprintCallable 
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_BaseOptionListItem
/// Size: 0x02E8 (744 bytes) (0x000290 - 0x0002E8) align 8 MaxSize: 0x02E8
class UPL_BaseOptionListItem : public UPL_WidgetWithCommandsBase
{ 
public:
	SDK_UNDEFINED(16,612) /* FMulticastInlineDelegate */ __um(HoveredByMouseDelegate);                             // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02A0   (0x0020)  MISSED
	class UClass*                                      UnSelectedTextStyleDefinition;                              // 0x02C0   (0x0008)  
	class UClass*                                      SelectedTextStyleDefinition;                                // 0x02C8   (0x0008)  
	class UPL_StyledTextBlock*                         LabelOption;                                                // 0x02D0   (0x0008)  
	class UPL_BaseDynamicOptionData*                   DynamicOptionData;                                          // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_OptionsContainerWidgetModule.PL_BaseOptionListItem.SetVisualState
	// void SetVisualState(EPL_OptionListItemVisualState VisualState);                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_BaseOptionListItem.RequestFocus
	// void RequestFocus();                                                                                                     // [0xabb950] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_BaseOptionListItem.OnUnfocused
	// void OnUnfocused();                                                                                                      // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_BaseOptionListItem.OnFocused
	// void OnFocused(bool bPlaySound);                                                                                         // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_BaseOptionListItem.IsOptionEnabled
	// bool IsOptionEnabled();                                                                                                  // [0xabb720] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ChangeMenuDataFunctionInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ChangeMenuDataFunctionInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_CommandOptionListItem
/// Size: 0x0310 (784 bytes) (0x0002E8 - 0x000310) align 8 MaxSize: 0x0310
class UPL_CommandOptionListItem : public UPL_BaseOptionListItem
{ 
public:
	SDK_UNDEFINED(16,613) /* FMulticastInlineDelegate */ __um(CommandExecutedDelegate);                            // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,614) /* FMulticastInlineDelegate */ __um(ChangeViewRequestDelegate);                          // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0308   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_OptionsContainerWidgetModule.PL_CommandOptionListItem.OnCommandExecuted
	// void OnCommandExecuted();                                                                                                // [0xabb7f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_CheckBoxOptionListItem
/// Size: 0x0318 (792 bytes) (0x000310 - 0x000318) align 8 MaxSize: 0x0318
class UPL_CheckBoxOptionListItem : public UPL_CommandOptionListItem
{ 
public:
	class UCheckBox*                                   CheckBox;                                                   // 0x0310   (0x0008)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_DynamicMenuFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DynamicMenuFunction : public UObject
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_DynamicMenuIsEnabledFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DynamicMenuIsEnabledFunction : public UObject
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ContainerFunction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_ContainerFunction : public UPL_DynamicMenuFunction
{ 
public:
	TArray<class UPL_DynamicMenuFunction*>             Functions;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ChangeMenuDataFunction
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_ChangeMenuDataFunction : public UPL_DynamicMenuFunction
{ 
public:
	class UPL_DynamicOptionsData*                      OptionsData;                                                // 0x0028   (0x0008)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_RefreshMenuFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_RefreshMenuFunction : public UPL_DynamicMenuFunction
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_PopMenuDataFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PopMenuDataFunction : public UPL_DynamicMenuFunction
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_RequestOpenLevelFunction
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_RequestOpenLevelFunction : public UPL_DynamicMenuFunction
{ 
public:
	TWeakObjectPtr<class UWorld*>                      Level;                                                      // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	bool                                               bShouldResetOnLoad;                                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            TravelLocationName;                                         // 0x0058   (0x0010)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_RestartLevelFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_RestartLevelFunction : public UPL_DynamicMenuFunction
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_QuitGameFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_QuitGameFunction : public UPL_DynamicMenuFunction
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_PushViewFunction
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_PushViewFunction : public UPL_DynamicMenuFunction
{ 
public:
	class UClass*                                      ViewClass;                                                  // 0x0028   (0x0008)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_PopViewFunction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PopViewFunction : public UPL_DynamicMenuFunction
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_AddToViewportFunction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_AddToViewportFunction : public UPL_DynamicMenuFunction
{ 
public:
	class UClass*                                      WidgetClass;                                                // 0x0028   (0x0008)  
	int32_t                                            ZOrder;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsContainerWidget
/// Size: 0x0330 (816 bytes) (0x000290 - 0x000330) align 8 MaxSize: 0x0330
class UPL_DynamicOptionsContainerWidget : public UPL_WidgetWithCommandsBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0290   (0x0010)  MISSED
	class UPL_DynamicOptionsData*                      OptionsData;                                                // 0x02A0   (0x0008)  
	SDK_UNDEFINED(16,615) /* FMulticastInlineDelegate */ __um(OnOptionsDataChanged);                               // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,616) /* FMulticastInlineDelegate */ __um(OnMenuNavigationSuspended);                          // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,617) /* FMulticastInlineDelegate */ __um(OnMenuNavigationResumed);                            // 0x02C8   (0x0010)  
	bool                                               bCanSuspendMenuNavigation;                                  // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02D9   (0x0003)  MISSED
	int32_t                                            SuspendMenuNavigationCount;                                 // 0x02DC   (0x0004)  
	TArray<class UPL_DynamicOptionsData*>              DataStack;                                                  // 0x02E0   (0x0010)  
	TArray<FPL_UICommandData>                          CombinedWidgetCommands;                                     // 0x02F0   (0x0010)  
	class UTextBlock*                                  LabelHeader;                                                // 0x0300   (0x0008)  
	class UVerticalBox*                                ListOptions;                                                // 0x0308   (0x0008)  
	class UScrollBox*                                  PanelScroll;                                                // 0x0310   (0x0008)  
	class UWidget*                                     PanelNoNavigationActivity;                                  // 0x0318   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0320   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsContainerWidget.OnOptionSelectedByMouse
	// void OnOptionSelectedByMouse(class UUserWidget* SelectedOption);                                                         // [0xabb8a0] Final|Native|Protected 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsContainerWidget.OnOptionCommandsChanged
	// void OnOptionCommandsChanged(class UWidget* _);                                                                          // [0xabb810] Final|Native|Protected 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsContainerWidget.OnMenuNavigationSuspensionChanged__DelegateSignature
	// void OnMenuNavigationSuspensionChanged__DelegateSignature();                                                             // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsContainerWidget.IsOptionsDataOnStack
	// bool IsOptionsDataOnStack(class UPL_DynamicOptionsData* Data);                                                           // [0xabb750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsContainerWidget.ChangeMenuData
	// void ChangeMenuData(class UPL_DynamicOptionsData* NewOptionsData, bool bClearStack);                                     // [0xabb510] Native|Public|BlueprintCallable 
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_BaseDynamicOptionData
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPL_BaseDynamicOptionData : public UObject
{ 
public:
	FText                                              ScreenLabel;                                                // 0x0028   (0x0018)  
	class UPL_DynamicMenuIsEnabledFunction*            IsEnabledFunction;                                          // 0x0040   (0x0008)  
	EPL_OptionListItemVisualState                      VisualState;                                                // 0x0048   (0x0001)  
	EPL_OptionListItemVisualState                      DisabledVisualState;                                        // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            ExcludeOnPlatforms;                                         // 0x004C   (0x0004)  
	int32_t                                            ExcludeOnBuildConfiguration;                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UClass*                                      ListItemWidgetClass;                                        // 0x0058   (0x0008)  
	class UClass*                                      OverrideDefaultListItemWidgetClass;                         // 0x0060   (0x0008)  
	class UPL_DynamicMenuFunction*                     OnFocusFunction;                                            // 0x0068   (0x0008)  
	class UPL_DynamicMenuFunction*                     OnUnfocusFunction;                                          // 0x0070   (0x0008)  
	class UPL_DynamicMenuFunction*                     CommandFunction;                                            // 0x0078   (0x0008)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionDataUserSettings
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UPL_DynamicOptionDataUserSettings : public UPL_BaseDynamicOptionData
{ 
public:
	FName                                              UserSettingName;                                            // 0x0080   (0x0008)  
	class UPL_DynamicValueHandler*                     ValueHandlingFunction;                                      // 0x0088   (0x0008)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_CommandOption
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UPL_CommandOption : public UPL_BaseDynamicOptionData
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_SliderOption
/// Size: 0x00A0 (160 bytes) (0x000090 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPL_SliderOption : public UPL_DynamicOptionDataUserSettings
{ 
public:
	float                                              MinValue;                                                   // 0x0090   (0x0004)  
	float                                              MaxValue;                                                   // 0x0094   (0x0004)  
	float                                              StepSize;                                                   // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ToggleOption
/// Size: 0x00F0 (240 bytes) (0x000090 - 0x0000F0) align 8 MaxSize: 0x00F0
class UPL_ToggleOption : public UPL_DynamicOptionDataUserSettings
{ 
public:
	bool                                               bUseCircularNavigation;                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	TMap<char, FText>                                  ToggleValues;                                               // 0x0098   (0x0050)  
	class UPL_ToggleValuesProvider*                    ToggleValuesProvider;                                       // 0x00E8   (0x0008)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_CheckBoxOption
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UPL_CheckBoxOption : public UPL_DynamicOptionDataUserSettings
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_DynamicOptionsData
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UPL_DynamicOptionsData : public UDataAsset
{ 
public:
	FText                                              MenuHeaderText;                                             // 0x0030   (0x0018)  
	TArray<FPL_UICommandData>                          CommandsData;                                               // 0x0048   (0x0010)  
	TArray<class UPL_BaseDynamicOptionData*>           OptionsList;                                                // 0x0058   (0x0010)  
	class UPL_DynamicMenuFunction*                     ExitFunction;                                               // 0x0068   (0x0008)  
	TArray<FName>                                      CommandActions;                                             // 0x0070   (0x0010)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_DynamicValueHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DynamicValueHandler : public UObject
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_FloatValueHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_FloatValueHandler : public UPL_DynamicValueHandler
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_IntValueHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_IntValueHandler : public UPL_DynamicValueHandler
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_BoolValueHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BoolValueHandler : public UPL_DynamicValueHandler
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_OptionsContainerWidgetSettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_OptionsContainerWidgetSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,618) /* TMap<TSoftObjectPtr<UClass*>, TSoftObjectPtr<UClass*>> */ __um(MenuListItemDefinitions); // 0x0028   (0x0050)  
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_SliderOptionListItem
/// Size: 0x0328 (808 bytes) (0x000310 - 0x000328) align 8 MaxSize: 0x0328
class UPL_SliderOptionListItem : public UPL_CommandOptionListItem
{ 
public:
	SDK_UNDEFINED(16,619) /* FMulticastInlineDelegate */ __um(OnValueChangedDelegate);                             // 0x0310   (0x0010)  
	class USlider*                                     ValueSlider;                                                // 0x0320   (0x0008)  


	/// Functions
	// Function /Script/PL_OptionsContainerWidgetModule.PL_SliderOptionListItem.OnValueChangedDelegate__DelegateSignature
	// void OnValueChangedDelegate__DelegateSignature(FName OptionId, float Value);                                             // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_SliderOptionListItem.OnValueChangedByMouse
	// void OnValueChangedByMouse();                                                                                            // [0xabb930] Final|Native|Protected 
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ToggleOptionListItem
/// Size: 0x0330 (816 bytes) (0x000310 - 0x000330) align 8 MaxSize: 0x0330
class UPL_ToggleOptionListItem : public UPL_CommandOptionListItem
{ 
public:
	class UPL_StyledTextBlock*                         LabelOptionValue;                                           // 0x0310   (0x0008)  
	SDK_UNDEFINED(16,620) /* FMulticastInlineDelegate */ __um(OnValueChangedDelegate);                             // 0x0318   (0x0010)  
	bool                                               bCycleOnConfirm;                                            // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0329   (0x0007)  MISSED


	/// Functions
	// Function /Script/PL_OptionsContainerWidgetModule.PL_ToggleOptionListItem.ToggleRightScrolling
	// void ToggleRightScrolling(bool bIsScrollEnabled);                                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_ToggleOptionListItem.ToggleLeftScrolling
	// void ToggleLeftScrolling(bool bIsScrollEnabled);                                                                         // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_ToggleOptionListItem.ScrollRight
	// void ScrollRight(float _);                                                                                               // [0xabba00] Native|Public|BlueprintCallable 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_ToggleOptionListItem.ScrollLeft
	// void ScrollLeft(float _);                                                                                                // [0xabb970] Native|Public|BlueprintCallable 
	// Function /Script/PL_OptionsContainerWidgetModule.PL_ToggleOptionListItem.OnValueChangedDelegate__DelegateSignature
	// void OnValueChangedDelegate__DelegateSignature(FName OptionId, char Value);                                              // [0x19ac1c0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ToggleValuesProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ToggleValuesProvider : public UObject
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ToggleValuesScreenPercentageProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ToggleValuesScreenPercentageProvider : public UPL_ToggleValuesProvider
{ 
public:
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ToggleValuesScreenResolutionProvider
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_ToggleValuesScreenResolutionProvider : public UPL_ToggleValuesProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/PL_OptionsContainerWidgetModule.PL_ToggleValuesStaticProvider
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_ToggleValuesStaticProvider : public UPL_ToggleValuesProvider
{ 
public:
	TMap<char, FText>                                  ToggleValues;                                               // 0x0028   (0x0050)  
};

/// Struct /Script/PL_OptionsContainerWidgetModule.PL_DynamicFunctionContextObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_DynamicFunctionContextObject
{ 
	class APlayerController*                           PlayerController;                                           // 0x0000   (0x0008)  
	class UPL_DynamicOptionsContainerWidget*           ParentWidget;                                               // 0x0008   (0x0008)  
	class UUserWidget*                                 RootWidget;                                                 // 0x0010   (0x0008)  
	class UPL_BaseDynamicOptionData*                   DynamicOptionData;                                          // 0x0018   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_WidgetWithCommandsBase) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UPL_BaseOptionListItem) == 0x02E8); // 744 bytes (0x000290 - 0x0002E8)
static_assert(sizeof(UPL_ChangeMenuDataFunctionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CommandOptionListItem) == 0x0310); // 784 bytes (0x0002E8 - 0x000310)
static_assert(sizeof(UPL_CheckBoxOptionListItem) == 0x0318); // 792 bytes (0x000310 - 0x000318)
static_assert(sizeof(UPL_DynamicMenuFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DynamicMenuIsEnabledFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ContainerFunction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_ChangeMenuDataFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_RefreshMenuFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PopMenuDataFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_RequestOpenLevelFunction) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPL_RestartLevelFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_QuitGameFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PushViewFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_PopViewFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_AddToViewportFunction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_DynamicOptionsContainerWidget) == 0x0330); // 816 bytes (0x000290 - 0x000330)
static_assert(sizeof(UPL_BaseDynamicOptionData) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UPL_DynamicOptionDataUserSettings) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UPL_CommandOption) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UPL_SliderOption) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(UPL_ToggleOption) == 0x00F0); // 240 bytes (0x000090 - 0x0000F0)
static_assert(sizeof(UPL_CheckBoxOption) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UPL_DynamicOptionsData) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UPL_DynamicValueHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_FloatValueHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_IntValueHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BoolValueHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_OptionsContainerWidgetSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UPL_SliderOptionListItem) == 0x0328); // 808 bytes (0x000310 - 0x000328)
static_assert(sizeof(UPL_ToggleOptionListItem) == 0x0330); // 816 bytes (0x000310 - 0x000330)
static_assert(sizeof(UPL_ToggleValuesProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ToggleValuesScreenPercentageProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ToggleValuesScreenResolutionProvider) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UPL_ToggleValuesStaticProvider) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FPL_DynamicFunctionContextObject) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UPL_WidgetWithCommandsBase, CommandActions) == 0x0270);
static_assert(offsetof(UPL_WidgetWithCommandsBase, CommandsData) == 0x0280);
static_assert(offsetof(UPL_BaseOptionListItem, UnSelectedTextStyleDefinition) == 0x02C0);
static_assert(offsetof(UPL_BaseOptionListItem, SelectedTextStyleDefinition) == 0x02C8);
static_assert(offsetof(UPL_BaseOptionListItem, LabelOption) == 0x02D0);
static_assert(offsetof(UPL_BaseOptionListItem, DynamicOptionData) == 0x02D8);
static_assert(offsetof(UPL_CheckBoxOptionListItem, CheckBox) == 0x0310);
static_assert(offsetof(UPL_ContainerFunction, Functions) == 0x0028);
static_assert(offsetof(UPL_ChangeMenuDataFunction, OptionsData) == 0x0028);
static_assert(offsetof(UPL_RequestOpenLevelFunction, Level) == 0x0028);
static_assert(offsetof(UPL_RequestOpenLevelFunction, TravelLocationName) == 0x0058);
static_assert(offsetof(UPL_PushViewFunction, ViewClass) == 0x0028);
static_assert(offsetof(UPL_AddToViewportFunction, WidgetClass) == 0x0028);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, OptionsData) == 0x02A0);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, DataStack) == 0x02E0);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, CombinedWidgetCommands) == 0x02F0);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, LabelHeader) == 0x0300);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, ListOptions) == 0x0308);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, PanelScroll) == 0x0310);
static_assert(offsetof(UPL_DynamicOptionsContainerWidget, PanelNoNavigationActivity) == 0x0318);
static_assert(offsetof(UPL_BaseDynamicOptionData, ScreenLabel) == 0x0028);
static_assert(offsetof(UPL_BaseDynamicOptionData, IsEnabledFunction) == 0x0040);
static_assert(offsetof(UPL_BaseDynamicOptionData, VisualState) == 0x0048);
static_assert(offsetof(UPL_BaseDynamicOptionData, DisabledVisualState) == 0x0049);
static_assert(offsetof(UPL_BaseDynamicOptionData, ListItemWidgetClass) == 0x0058);
static_assert(offsetof(UPL_BaseDynamicOptionData, OverrideDefaultListItemWidgetClass) == 0x0060);
static_assert(offsetof(UPL_BaseDynamicOptionData, OnFocusFunction) == 0x0068);
static_assert(offsetof(UPL_BaseDynamicOptionData, OnUnfocusFunction) == 0x0070);
static_assert(offsetof(UPL_BaseDynamicOptionData, CommandFunction) == 0x0078);
static_assert(offsetof(UPL_DynamicOptionDataUserSettings, UserSettingName) == 0x0080);
static_assert(offsetof(UPL_DynamicOptionDataUserSettings, ValueHandlingFunction) == 0x0088);
static_assert(offsetof(UPL_ToggleOption, ToggleValues) == 0x0098);
static_assert(offsetof(UPL_ToggleOption, ToggleValuesProvider) == 0x00E8);
static_assert(offsetof(UPL_DynamicOptionsData, MenuHeaderText) == 0x0030);
static_assert(offsetof(UPL_DynamicOptionsData, CommandsData) == 0x0048);
static_assert(offsetof(UPL_DynamicOptionsData, OptionsList) == 0x0058);
static_assert(offsetof(UPL_DynamicOptionsData, ExitFunction) == 0x0068);
static_assert(offsetof(UPL_DynamicOptionsData, CommandActions) == 0x0070);
static_assert(offsetof(UPL_SliderOptionListItem, ValueSlider) == 0x0320);
static_assert(offsetof(UPL_ToggleOptionListItem, LabelOptionValue) == 0x0310);
static_assert(offsetof(UPL_ToggleValuesStaticProvider, ToggleValues) == 0x0028);
static_assert(offsetof(FPL_DynamicFunctionContextObject, PlayerController) == 0x0000);
static_assert(offsetof(FPL_DynamicFunctionContextObject, ParentWidget) == 0x0008);
static_assert(offsetof(FPL_DynamicFunctionContextObject, RootWidget) == 0x0010);
static_assert(offsetof(FPL_DynamicFunctionContextObject, DynamicOptionData) == 0x0018);
