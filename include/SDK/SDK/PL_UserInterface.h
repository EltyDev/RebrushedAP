
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
/// dependency: PL_WidgetsUtilsModule
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_UserInterface.EPL_CollectionChangedAction
/// Size: 0x01 (1 bytes)
enum class EPL_CollectionChangedAction : uint8_t
{
	EPL_CollectionChangedAction__Modified                                            = 0,
	EPL_CollectionChangedAction__Add                                                 = 1,
	EPL_CollectionChangedAction__Remove                                              = 2
};

/// Enum /Script/PL_UserInterface.EPL_UISaveSlotState
/// Size: 0x01 (1 bytes)
enum class EPL_UISaveSlotState : uint8_t
{
	EPL_UISaveSlotState__Load                                                        = 0,
	EPL_UISaveSlotState__Save                                                        = 1,
	EPL_UISaveSlotState__New                                                         = 2
};

/// Enum /Script/PL_UserInterface.EPL_PopViewOptions
/// Size: 0x01 (1 bytes)
enum class EPL_PopViewOptions : uint8_t
{
	EPL_PopViewOptions__Topmost                                                      = 0,
	EPL_PopViewOptions__All                                                          = 1
};

/// Class /Script/PL_UserInterface.PL_CustomSubtitlesWidget
/// Size: 0x02C0 (704 bytes) (0x000260 - 0x0002C0) align 16 MaxSize: 0x02C0
class UPL_CustomSubtitlesWidget : public UUserWidget
{ 
public:
	class URichTextBlock*                              LabelSubtitles;                                             // 0x0260   (0x0008)  
	TArray<FSubtitleCue>                               Subtitles;                                                  // 0x0268   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0278   (0x0048)  MISSED


	/// Functions
	// Function /Script/PL_UserInterface.PL_CustomSubtitlesWidget.GetTime
	// float GetTime();                                                                                                         // [0xaa8060] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PL_UserInterface.PL_UserWidget
/// Size: 0x02C8 (712 bytes) (0x000260 - 0x0002C8) align 8 MaxSize: 0x02C8
class UPL_UserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0260   (0x0008)  MISSED
	SDK_UNDEFINED(16,557) /* FMulticastInlineDelegate */ __um(OnShowComplete);                                     // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,558) /* FMulticastInlineDelegate */ __um(OnHideComplete);                                     // 0x0278   (0x0010)  
	SDK_UNDEFINED(16,559) /* FMulticastInlineDelegate */ __um(OnShowCompleteOnce);                                 // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,560) /* FMulticastInlineDelegate */ __um(OnHideCompleteOnce);                                 // 0x0298   (0x0010)  
	class UClass*                                      InputComponentClass;                                        // 0x02A8   (0x0008)  
	ESlateVisibility                                   ShownVisibility;                                            // 0x02B0   (0x0001)  
	ESlateVisibility                                   HiddenVisibility;                                           // 0x02B1   (0x0001)  
	EPL_WidgetVisualState                              VisualState;                                                // 0x02B2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x02B3   (0x0005)  MISSED
	class UWidgetAnimation*                            AnimShow;                                                   // 0x02B8   (0x0008)  
	class UWidgetAnimation*                            AnimHide;                                                   // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_UserWidget.ShowCompleted
	// void ShowCompleted();                                                                                                    // [0xaa9ab0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UserWidget.ReceiveOnShowComplete
	// void ReceiveOnShowComplete();                                                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UserWidget.ReceiveOnHideComplete
	// void ReceiveOnHideComplete();                                                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UserWidget.ReceivedShow
	// void ReceivedShow(bool bPlayAnimation);                                                                                  // [0xaa9340] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UserWidget.ReceivedHide
	// void ReceivedHide(bool bPlayAnimation);                                                                                  // [0xaa92b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UserWidget.IsShownOrShowing
	// bool IsShownOrShowing();                                                                                                 // [0xaa8440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserInterface.PL_UserWidget.IsHiddenOrHiding
	// bool IsHiddenOrHiding();                                                                                                 // [0xaa8410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserInterface.PL_UserWidget.IsFullyShown
	// bool IsFullyShown();                                                                                                     // [0xaa83e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserInterface.PL_UserWidget.IsFullyHidden
	// bool IsFullyHidden();                                                                                                    // [0xaa83b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserInterface.PL_UserWidget.HideCompleted
	// void HideCompleted();                                                                                                    // [0xaa80d0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PL_UserInterface.PL_ListItemBase
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align 8 MaxSize: 0x02D8
class UPL_ListItemBase : public UPL_UserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008)  MISSED
	class UObject*                                     ListEntryData;                                              // 0x02D0   (0x0008)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_ListItemBase.OnDataChanged
	// void OnDataChanged();                                                                                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_ListItemBase.IsEmpty
	// bool IsEmpty();                                                                                                          // [0xaa8380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_UserInterface.PL_InteractiveListItemBase
/// Size: 0x0340 (832 bytes) (0x0002D8 - 0x000340) align 8 MaxSize: 0x0340
class UPL_InteractiveListItemBase : public UPL_ListItemBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02D8   (0x0008)  MISSED
	SDK_UNDEFINED(16,561) /* FMulticastInlineDelegate */ __um(OnRequestFocus);                                     // 0x02E0   (0x0010)  
	SDK_UNDEFINED(16,562) /* FMulticastInlineDelegate */ __um(OnRequestConfirm);                                   // 0x02F0   (0x0010)  
	SDK_UNDEFINED(16,563) /* FMulticastInlineDelegate */ __um(OnPostConfirm);                                      // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,564) /* FMulticastInlineDelegate */ __um(OnAsyncActionBegin);                                 // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,565) /* FMulticastInlineDelegate */ __um(OnAsyncActionEnd);                                   // 0x0320   (0x0010)  
	TArray<int32_t>                                    FocusedByPlayers;                                           // 0x0330   (0x0010)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_InteractiveListItemBase.RequestFocus
	// void RequestFocus(int32_t PlayerIndex);                                                                                  // [0xaa9460] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_InteractiveListItemBase.RequestConfirm
	// void RequestConfirm(int32_t PlayerIndex);                                                                                // [0xaa93d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_InteractiveListItemBase.ReceiveOnUnfocusedByAll
	// void ReceiveOnUnfocusedByAll();                                                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_InteractiveListItemBase.ReceiveOnFocusedByAny
	// void ReceiveOnFocusedByAny();                                                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_InteractiveListItemBase.PostConfirm
	// void PostConfirm(int32_t PlayerIndex);                                                                                   // [0xaa8fb0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PL_UserInterface.PL_ListEntryInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ListEntryInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_UserInterface.PL_ListEntryInterface.ReceiveSetListEntryData
	// void ReceiveSetListEntryData(class UObject* Data);                                                                       // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_ListEntryInterface.Compare
	// bool Compare(class UObject* Other);                                                                                      // [0xaa7920] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PL_UserInterface.PL_ObservableCollection
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 16 MaxSize: 0x0090
class UPL_ObservableCollection : public UObject
{ 
public:
	SDK_UNDEFINED(16,566) /* FMulticastInlineDelegate */ __um(OnCollectionChanged);                                // 0x0028   (0x0010)  
	TArray<class UObject*>                             SourceCollection;                                           // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Struct /Script/PL_UserInterface.PL_UIInteractableWidgetBindings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 4 MaxSize: 0x0050
struct FPL_UIInteractableWidgetBindings
{ 
	SDK_UNDEFINED(16,567) /* FDelegateProperty */      __um(OnRequestFocus);                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,568) /* FDelegateProperty */      __um(OnRequestConfirm);                                     // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,569) /* FDelegateProperty */      __um(OnPostConfirm);                                        // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,570) /* FDelegateProperty */      __um(OnAsyncActionBegin);                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,571) /* FDelegateProperty */      __um(OnAsyncActionEnd);                                     // 0x0040   (0x0010)  
};

/// Class /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget
/// Size: 0x0340 (832 bytes) (0x000260 - 0x000340) align 8 MaxSize: 0x0340
class UPL_SaveGameSlotsContainerWidget : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,572) /* FMulticastInlineDelegate */ __um(OnAsyncActionBegin);                                 // 0x0260   (0x0010)  
	SDK_UNDEFINED(16,573) /* FMulticastInlineDelegate */ __um(OnAsyncActionEnd);                                   // 0x0270   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0280   (0x0010)  MISSED
	class UObject*                                     SaveGamesDataProvider;                                      // 0x0290   (0x0008)  
	EPL_UISaveSlotState                                ShowSlotsForState;                                          // 0x0298   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UClass*                                      SlotItemWidgetClass;                                        // 0x02A0   (0x0008)  
	float                                              ScrollPadding;                                              // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	FText                                              HeaderText;                                                 // 0x02B0   (0x0018)  
	TMap<class UWidget*, FPL_UIInteractableWidgetBindings> SaveSlotBindings;                                       // 0x02C8   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0318   (0x0008)  MISSED
	class UTextBlock*                                  LabelHeader;                                                // 0x0320   (0x0008)  
	class UWidget*                                     PanelNoSaves;                                               // 0x0328   (0x0008)  
	class UPanelWidget*                                ListSlots;                                                  // 0x0330   (0x0008)  
	class UScrollBox*                                  PanelScroll;                                                // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget.OnSlotRequestedFocus
	// void OnSlotRequestedFocus(int32_t PlayerIndex, class UWidget* RequesterSlot);                                            // [0xaa8db0] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget.OnSlotRequestedConfirm
	// void OnSlotRequestedConfirm(int32_t PlayerIndex, class UWidget* RequesterSlot);                                          // [0xaa8ce0] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget.OnSavedIntoSlot
	// void OnSavedIntoSlot(int32_t PlayerIndex, class UWidget* SavedSlotWidget);                                               // [0xaa8c10] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget.OnFocusedSlotChanged__DelegateSignature
	// void OnFocusedSlotChanged__DelegateSignature();                                                                          // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget.OnAsyncSlotActionEnd
	// void OnAsyncSlotActionEnd(int32_t PlayerIndex, class UWidget* SavedSlotWidget);                                          // [0xaa85f0] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_SaveGameSlotsContainerWidget.OnAsyncSlotActionBegin
	// void OnAsyncSlotActionBegin(int32_t PlayerIndex, class UWidget* SavedSlotWidget);                                        // [0xaa8520] Final|Native|Protected 
};

/// Class /Script/PL_UserInterface.PL_StyledTextBlock
/// Size: 0x02B0 (688 bytes) (0x0002A8 - 0x0002B0) align 8 MaxSize: 0x02B0
class UPL_StyledTextBlock : public UTextBlock
{ 
public:
	class UClass*                                      TextStyleDefinition;                                        // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_StyledTextBlock.ApplyTextStyle
	// void ApplyTextStyle(class UClass* InTextStyleDefinition);                                                                // [0xaa7520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_UserInterface.PL_SubtitlesWidget
/// Size: 0x0278 (632 bytes) (0x000260 - 0x000278) align 8 MaxSize: 0x0278
class UPL_SubtitlesWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0260   (0x0008)  MISSED
	class URichTextBlock*                              LabelSubtitles;                                             // 0x0268   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0270   (0x0008)  MISSED
};

/// Struct /Script/PL_UserInterface.PL_TextShadowStyleDefinition
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FPL_TextShadowStyleDefinition
{ 
	FLinearColor                                       ColorAndOpacity;                                            // 0x0000   (0x0010)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0008)  
};

/// Class /Script/PL_UserInterface.PL_TextStyleBaseDefinition
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_TextStyleBaseDefinition : public UObject
{ 
public:
	FSlateColor                                        ColorAndOpacity;                                            // 0x0028   (0x0028)  
	FSlateFontInfo                                     FontStyle;                                                  // 0x0050   (0x0058)  
	FPL_TextShadowStyleDefinition                      ShadowStyle;                                                // 0x00A8   (0x0018)  
};

/// Struct /Script/PL_UserInterface.PL_UICommandData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_UICommandData
{ 
	FName                                              CommandAction;                                              // 0x0000   (0x0008)  
	FText                                              CustomLabel;                                                // 0x0008   (0x0018)  
};

/// Class /Script/PL_UserInterface.PL_UICommandListItem
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UPL_UICommandListItem : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,574) /* FMulticastInlineDelegate */ __um(OnUICommandInvokeRequested);                         // 0x0260   (0x0010)  
	FPL_UICommandData                                  CommandData;                                                // 0x0270   (0x0020)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_UICommandListItem.SetProgress
	// void SetProgress(float Value);                                                                                           // [0xaa9950] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.OnInvoked__DelegateSignature
	// void OnInvoked__DelegateSignature(class UPL_UICommandListItem* CommandListItem);                                         // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.InitCommand
	// void InitCommand(FPL_UICommandData& InCommandData);                                                                      // [0xaa81f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.GetLabelText
	// FText GetLabelText();                                                                                                    // [0xaa7df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.GetActionName
	// FName GetActionName();                                                                                                   // [0xaa7cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.BP_SetCommandProgress
	// void BP_SetCommandProgress(float Value);                                                                                 // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.BP_OnCommandPressed
	// void BP_OnCommandPressed();                                                                                              // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UICommandListItem.BP_InitCommand
	// void BP_InitCommand();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_UserInterface.PL_UICommandsList
/// Size: 0x02A0 (672 bytes) (0x000260 - 0x0002A0) align 8 MaxSize: 0x02A0
class UPL_UICommandsList : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,575) /* FMulticastInlineDelegate */ __um(OnInvokeCommandRequested);                           // 0x0260   (0x0010)  
	class UClass*                                      ListItemWidgetClass;                                        // 0x0270   (0x0008)  
	TArray<FName>                                      CommandActions;                                             // 0x0278   (0x0010)  
	TArray<FPL_UICommandData>                          CommandsData;                                               // 0x0288   (0x0010)  
	class UPanelWidget*                                PanelCommands;                                              // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_UICommandsList.SetProgressOnCommand
	// void SetProgressOnCommand(FName& ActionName, float Progress);                                                            // [0xaa99d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UICommandsList.SetCommandsData
	// void SetCommandsData(TArray<FPL_UICommandData>& NewCommandsData);                                                        // [0xaa9670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UICommandsList.SetCommandActions
	// void SetCommandActions(TArray<FName>& InCommandActions);                                                                 // [0xaa95c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UICommandsList.OnRequestInvokeItem
	// void OnRequestInvokeItem(class UPL_UICommandListItem* CommandListItem);                                                  // [0xaa8b80] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_UICommandsList.OnInvoked__DelegateSignature
	// void OnInvoked__DelegateSignature(class UPL_UICommandsList* CommandsList, FName CommandActionName);                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PL_UserInterface.PL_UIInteractableInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UIInteractableInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.UnbindFromOnRequestFocus
	// void UnbindFromOnRequestFocus(FDelegateProperty& Delegate);                                                              // [0xaa9f90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.UnbindFromOnRequestConfirm
	// void UnbindFromOnRequestConfirm(FDelegateProperty& Delegate);                                                            // [0xaa9ee0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.UnbindFromOnPostConfirm
	// void UnbindFromOnPostConfirm(FDelegateProperty& Delegate);                                                               // [0xaa9e30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.UnbindFromOnAsyncActionEnd
	// void UnbindFromOnAsyncActionEnd(FDelegateProperty& Delegate);                                                            // [0xaa9d80] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.UnbindFromOnAsyncActionBegin
	// void UnbindFromOnAsyncActionBegin(FDelegateProperty& Delegate);                                                          // [0xaa9cd0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnScrollUp
	// void ReceiveOnScrollUp(int32_t PlayerIndex, bool bPlaySound);                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnScrollRight
	// void ReceiveOnScrollRight(int32_t PlayerIndex, bool bPlaySound);                                                         // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnScrollLeft
	// void ReceiveOnScrollLeft(int32_t PlayerIndex, bool bPlaySound);                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnScrollDown
	// void ReceiveOnScrollDown(int32_t PlayerIndex, bool bPlaySound);                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.ReceiveOnConfirm
	// void ReceiveOnConfirm(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.BindToOnRequestFocus
	// void BindToOnRequestFocus(FDelegateProperty& Delegate);                                                                  // [0xaa7870] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.BindToOnRequestConfirm
	// void BindToOnRequestConfirm(FDelegateProperty& Delegate);                                                                // [0xaa77c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.BindToOnPostConfirm
	// void BindToOnPostConfirm(FDelegateProperty& Delegate);                                                                   // [0xaa7710] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.BindToOnAsyncActionEnd
	// void BindToOnAsyncActionEnd(FDelegateProperty& Delegate);                                                                // [0xaa7660] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UIInteractableInterface.BindToOnAsyncActionBegin
	// void BindToOnAsyncActionBegin(FDelegateProperty& Delegate);                                                              // [0xaa75b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/PL_UserInterface.PL_UIListControllerTuple
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_UIListControllerTuple
{ 
	class UObject*                                     Model;                                                      // 0x0000   (0x0008)  
	class UWidget*                                     View;                                                       // 0x0008   (0x0008)  
};

/// Class /Script/PL_UserInterface.PL_UIListController
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UPL_UIListController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	SDK_UNDEFINED(16,576) /* FMulticastInlineDelegate */ __um(OnPostConfirm);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,577) /* FMulticastInlineDelegate */ __um(OnAsyncActionBegin);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,578) /* FMulticastInlineDelegate */ __um(OnAsyncActionEnd);                                   // 0x0058   (0x0010)  
	class UPanelWidget*                                ListView;                                                   // 0x0068   (0x0008)  
	class UScrollBox*                                  PanelScrollable;                                            // 0x0070   (0x0008)  
	class UPL_ObservableCollection*                    Collection;                                                 // 0x0078   (0x0008)  
	TArray<FPL_UIListControllerTuple>                  EntryModelViewMap;                                          // 0x0080   (0x0010)  
	TMap<int32_t, int32_t>                             PlayerSelection;                                            // 0x0090   (0x0050)  
	TArray<int32_t>                                    PlayerRunningAsyncActions;                                  // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_UIListController.SetPlayerSelection
	// void SetPlayerSelection(int32_t PlayerIndex, int32_t NewSelectionIndex);                                                 // [0xaa9880] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UIListController.OnEntryRequestedFocus
	// void OnEntryRequestedFocus(int32_t PlayerIndex, class UWidget* EntryView);                                               // [0xaa8ab0] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_UIListController.OnEntryRequestedConfirm
	// void OnEntryRequestedConfirm(int32_t PlayerIndex, class UWidget* EntryView);                                             // [0xaa89e0] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_UIListController.OnEntryPostConfirm
	// void OnEntryPostConfirm(int32_t PlayerIndex, class UWidget* EntryView);                                                  // [0xaa8910] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_UIListController.OnEntryAsyncActionEnd
	// void OnEntryAsyncActionEnd(int32_t PlayerIndex, class UWidget* EntryView);                                               // [0xaa8840] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_UIListController.OnEntryAsyncActionBegin
	// void OnEntryAsyncActionBegin(int32_t PlayerIndex, class UWidget* EntryView);                                             // [0xaa8770] Final|Native|Protected 
	// Function /Script/PL_UserInterface.PL_UIListController.OnCollectionChanged
	// void OnCollectionChanged(FPL_CollectionChangedArgs& ChangeArgs);                                                         // [0xaa86c0] Final|Native|Protected|HasOutParms 
	// Function /Script/PL_UserInterface.PL_UIListController.IsAsyncActionRunning
	// bool IsAsyncActionRunning();                                                                                             // [0xaa8350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_UserInterface.PL_UIResettableInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UIResettableInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_UserInterface.PL_UIResettableInterface.Reset
	// void Reset(int32_t PlayerIndex, bool bPlaySound);                                                                        // [0xaa94f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UISaveGamesDataProviderInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.IsUsedSlot
	// bool IsUsedSlot(FString SlotName);                                                                                       // [0xaa8470] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.HasUnlimitedAmountOfSaveSlots
	// bool HasUnlimitedAmountOfSaveSlots();                                                                                    // [0xaa80a0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.GetSaveSlotName
	// FString GetSaveSlotName(int32_t SlotIndex);                                                                              // [0xaa7ef0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.GetNumSaveSlotsUsed
	// int32_t GetNumSaveSlotsUsed();                                                                                           // [0xaa7ec0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.GetNumSaveSlotsMax
	// int32_t GetNumSaveSlotsMax();                                                                                            // [0xaa7e90] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.GetFirstAvailableSlotName
	// FString GetFirstAvailableSlotName();                                                                                     // [0xaa7d70] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.GetAllSaveGameSlotNames
	// TArray<FString> GetAllSaveGameSlotNames();                                                                               // [0xaa7cf0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.GenerateAllPossibleSaveNames
	// TArray<FString> GenerateAllPossibleSaveNames(EPL_UISaveSlotState SlotState);                                             // [0xaa7be0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.DeleteSlotByName
	// bool DeleteSlotByName(FString SlotName);                                                                                 // [0xaa7a60] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_UserInterface.PL_UISaveGamesDataProviderInterface.DeleteSlotAtIndex
	// bool DeleteSlotAtIndex(int32_t SlotIndex);                                                                               // [0xaa79c0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_UserInterface.PL_UISaveSlotData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_UISaveSlotData : public UObject
{ 
public:
	FString                                            SaveSlotName;                                               // 0x0028   (0x0010)  
	EPL_UISaveSlotState                                SaveSlotState;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/PL_UserInterface.PL_UiSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UPL_UiSettings : public UDeveloperSettings
{ 
public:
	class UClass*                                      DefaultTextStyle;                                           // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_UiSettings.GetSettings
	// class UPL_UiSettings* GetSettings();                                                                                     // [0xaa7fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_UserInterface.PL_UiUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UiUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_UserInterface.PL_UiUtils.ShowHudOfPlayerIndex
	// void ShowHudOfPlayerIndex(class UObject* WorldContextObject, int32_t PlayerIndex, bool bPlayAnimation);                  // [0xaa9bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UiUtils.ShowHudOfPlayerId
	// void ShowHudOfPlayerId(class UObject* WorldContextObject, int32_t ControllerId, bool bPlayAnimation);                    // [0xaa9ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UiUtils.SetHudVisibilityOnController
	// void SetHudVisibilityOnController(class APlayerController* PlayerController, bool bVisible, bool bPlayAnimation);        // [0xaa9770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UiUtils.HideHudOfPlayerIndex
	// void HideHudOfPlayerIndex(class UObject* WorldContextObject, int32_t PlayerIndex, bool bPlayAnimation);                  // [0xaa80f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UiUtils.HideHudOfPlayerId
	// void HideHudOfPlayerId(class UObject* WorldContextObject, int32_t ControllerId, bool bPlayAnimation);                    // [0xaa80f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UiUtils.GetSharedMissingTexture
	// class UTexture2D* GetSharedMissingTexture();                                                                             // [0xaa8030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_UiUtils.FinishPlayingAnimation
	// bool FinishPlayingAnimation(class UUserWidget* Widget, class UWidgetAnimation* Animation);                               // [0xaa7b10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_UserInterface.PL_ViewModelBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_ViewModelBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,579) /* FMulticastInlineDelegate */ __um(OnPrePropertyChange);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,580) /* FMulticastInlineDelegate */ __um(OnPropertyChanged);                                  // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_ViewModelBase.PropertyChanged
	// void PropertyChanged(FName& PropertyName);                                                                               // [0xaa90e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewModelBase.PrePropertyChange
	// void PrePropertyChange(FName& PropertyName);                                                                             // [0xaa9040] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewModelBase.OnPropertyChanged__DelegateSignature
	// void OnPropertyChanged__DelegateSignature(FName& PropertyName);                                                          // [0x19ac1c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PL_UserInterface.PL_ViewModelBase.OnPrePropertyChange__DelegateSignature
	// void OnPrePropertyChange__DelegateSignature(FName& PropertyName);                                                        // [0x19ac1c0] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/PL_UserInterface.PL_ViewStackWidget
/// Size: 0x0158 (344 bytes) (0x000130 - 0x000158) align 8 MaxSize: 0x0158
class UPL_ViewStackWidget : public UOverlay
{ 
public:
	class UClass*                                      InitialViewClass;                                           // 0x0130   (0x0008)  
	TArray<class UWidget*>                             Stack;                                                      // 0x0138   (0x0010)  
	TArray<class UWidget*>                             ManagedViews;                                               // 0x0148   (0x0010)  


	/// Functions
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.Reset
	// void Reset();                                                                                                            // [0xaa8ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.PushView
	// void PushView(class UWidget* View);                                                                                      // [0xaa9220] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.PushClass
	// class UUserWidget* PushClass(class UClass* ViewClass);                                                                   // [0xaa9180] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.PopView
	// void PopView(class UWidget* View, EPL_PopViewOptions PopOptions);                                                        // [0xaa8ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.PopToFirst
	// void PopToFirst();                                                                                                       // [0xaa8ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.PopAll
	// void PopAll();                                                                                                           // [0xaa8ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserInterface.PL_ViewStackWidget.Pop
	// void Pop();                                                                                                              // [0xaa8e80] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PL_UserInterface.PL_CollectionChangedArgs
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_CollectionChangedArgs
{ 
	EPL_CollectionChangedAction                        Action;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<class UObject*>                             DeltaEntries;                                               // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_CustomSubtitlesWidget) == 0x02C0); // 704 bytes (0x000260 - 0x0002C0)
static_assert(sizeof(UPL_UserWidget) == 0x02C8); // 712 bytes (0x000260 - 0x0002C8)
static_assert(sizeof(UPL_ListItemBase) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(sizeof(UPL_InteractiveListItemBase) == 0x0340); // 832 bytes (0x0002D8 - 0x000340)
static_assert(sizeof(UPL_ListEntryInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ObservableCollection) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(FPL_UIInteractableWidgetBindings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UPL_SaveGameSlotsContainerWidget) == 0x0340); // 832 bytes (0x000260 - 0x000340)
static_assert(sizeof(UPL_StyledTextBlock) == 0x02B0); // 688 bytes (0x0002A8 - 0x0002B0)
static_assert(sizeof(UPL_SubtitlesWidget) == 0x0278); // 632 bytes (0x000260 - 0x000278)
static_assert(sizeof(FPL_TextShadowStyleDefinition) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPL_TextStyleBaseDefinition) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(FPL_UICommandData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UPL_UICommandListItem) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UPL_UICommandsList) == 0x02A0); // 672 bytes (0x000260 - 0x0002A0)
static_assert(sizeof(UPL_UIInteractableInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_UIListControllerTuple) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_UIListController) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UPL_UIResettableInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_UISaveGamesDataProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_UISaveSlotData) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_UiSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UPL_UiUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ViewModelBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPL_ViewStackWidget) == 0x0158); // 344 bytes (0x000130 - 0x000158)
static_assert(sizeof(FPL_CollectionChangedArgs) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UPL_CustomSubtitlesWidget, LabelSubtitles) == 0x0260);
static_assert(offsetof(UPL_CustomSubtitlesWidget, Subtitles) == 0x0268);
static_assert(offsetof(UPL_UserWidget, InputComponentClass) == 0x02A8);
static_assert(offsetof(UPL_UserWidget, ShownVisibility) == 0x02B0);
static_assert(offsetof(UPL_UserWidget, HiddenVisibility) == 0x02B1);
static_assert(offsetof(UPL_UserWidget, VisualState) == 0x02B2);
static_assert(offsetof(UPL_UserWidget, AnimShow) == 0x02B8);
static_assert(offsetof(UPL_UserWidget, AnimHide) == 0x02C0);
static_assert(offsetof(UPL_ListItemBase, ListEntryData) == 0x02D0);
static_assert(offsetof(UPL_InteractiveListItemBase, FocusedByPlayers) == 0x0330);
static_assert(offsetof(UPL_ObservableCollection, SourceCollection) == 0x0038);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, SaveGamesDataProvider) == 0x0290);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, ShowSlotsForState) == 0x0298);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, SlotItemWidgetClass) == 0x02A0);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, HeaderText) == 0x02B0);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, SaveSlotBindings) == 0x02C8);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, LabelHeader) == 0x0320);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, PanelNoSaves) == 0x0328);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, ListSlots) == 0x0330);
static_assert(offsetof(UPL_SaveGameSlotsContainerWidget, PanelScroll) == 0x0338);
static_assert(offsetof(UPL_StyledTextBlock, TextStyleDefinition) == 0x02A8);
static_assert(offsetof(UPL_SubtitlesWidget, LabelSubtitles) == 0x0268);
static_assert(offsetof(FPL_TextShadowStyleDefinition, ColorAndOpacity) == 0x0000);
static_assert(offsetof(FPL_TextShadowStyleDefinition, Offset) == 0x0010);
static_assert(offsetof(UPL_TextStyleBaseDefinition, ColorAndOpacity) == 0x0028);
static_assert(offsetof(UPL_TextStyleBaseDefinition, FontStyle) == 0x0050);
static_assert(offsetof(UPL_TextStyleBaseDefinition, ShadowStyle) == 0x00A8);
static_assert(offsetof(FPL_UICommandData, CommandAction) == 0x0000);
static_assert(offsetof(FPL_UICommandData, CustomLabel) == 0x0008);
static_assert(offsetof(UPL_UICommandListItem, CommandData) == 0x0270);
static_assert(offsetof(UPL_UICommandsList, ListItemWidgetClass) == 0x0270);
static_assert(offsetof(UPL_UICommandsList, CommandActions) == 0x0278);
static_assert(offsetof(UPL_UICommandsList, CommandsData) == 0x0288);
static_assert(offsetof(UPL_UICommandsList, PanelCommands) == 0x0298);
static_assert(offsetof(FPL_UIListControllerTuple, Model) == 0x0000);
static_assert(offsetof(FPL_UIListControllerTuple, View) == 0x0008);
static_assert(offsetof(UPL_UIListController, ListView) == 0x0068);
static_assert(offsetof(UPL_UIListController, PanelScrollable) == 0x0070);
static_assert(offsetof(UPL_UIListController, Collection) == 0x0078);
static_assert(offsetof(UPL_UIListController, EntryModelViewMap) == 0x0080);
static_assert(offsetof(UPL_UIListController, PlayerSelection) == 0x0090);
static_assert(offsetof(UPL_UIListController, PlayerRunningAsyncActions) == 0x00E0);
static_assert(offsetof(UPL_UISaveSlotData, SaveSlotName) == 0x0028);
static_assert(offsetof(UPL_UISaveSlotData, SaveSlotState) == 0x0038);
static_assert(offsetof(UPL_UiSettings, DefaultTextStyle) == 0x0038);
static_assert(offsetof(UPL_ViewStackWidget, InitialViewClass) == 0x0130);
static_assert(offsetof(UPL_ViewStackWidget, Stack) == 0x0138);
static_assert(offsetof(UPL_ViewStackWidget, ManagedViews) == 0x0148);
static_assert(offsetof(FPL_CollectionChangedArgs, Action) == 0x0000);
static_assert(offsetof(FPL_CollectionChangedArgs, DeltaEntries) == 0x0008);
