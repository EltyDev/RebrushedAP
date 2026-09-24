
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_OptionsContainerWidgetModule
/// dependency: PL_UserInterface
/// dependency: Slate
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem
/// Size: 0x0380 (896 bytes) (0x000260 - 0x000380) align 8 MaxSize: 0x0380
class UPL_InputActionListItem : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0260   (0x0008)  MISSED
	SDK_UNDEFINED(16,621) /* FMulticastInlineDelegate */ __um(OnCurrentMappedInputChanged);                        // 0x0268   (0x0010)  
	class UClass*                                      UnSelectedTextStyleDefinition;                              // 0x0278   (0x0008)  
	class UClass*                                      SelectedTextStyleDefinition;                                // 0x0280   (0x0008)  
	class UPL_StyledTextBlock*                         LabelActionDescription;                                     // 0x0288   (0x0008)  
	class UTextBlock*                                  LabelGroupName;                                             // 0x0290   (0x0008)  
	class UInputKeySelector*                           IKSMouseKeyboard;                                           // 0x0298   (0x0008)  
	class UInputKeySelector*                           IKSGamepad;                                                 // 0x02A0   (0x0008)  
	class USoundBase*                                  SelectSound;                                                // 0x02A8   (0x0008)  
	SDK_UNDEFINED(16,622) /* FMulticastInlineDelegate */ __um(OnRequestFocus);                                     // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,623) /* FMulticastInlineDelegate */ __um(OnRequestConfirm);                                   // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData01_7[0xB0];                                      // 0x02D0   (0x00B0)  MISSED


	/// Functions
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.UpdateKeyboardButtonIcon
	// void UpdateKeyboardButtonIcon();                                                                                         // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.UpdateGamepadButtonIcon
	// void UpdateGamepadButtonIcon();                                                                                          // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.SetNewInputActionMapping
	// void SetNewInputActionMapping(FInputChord& NewKey, bool bForGamepad);                                                    // [0xabfb80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.SetAsModified
	// void SetAsModified(bool bWasModified);                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.RequestFocus
	// void RequestFocus(int32_t PlayerIndex);                                                                                  // [0xabfaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.RequestConfirm
	// void RequestConfirm(int32_t PlayerIndex);                                                                                // [0xabfa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnMouseKeyboardKeySelected
	// void OnMouseKeyboardKeySelected(FInputChord SelectedKey);                                                                // [0xabf950] Final|Native|Protected 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnMouseKeyboardIsSelectingKeyChanged
	// void OnMouseKeyboardIsSelectingKeyChanged();                                                                             // [0xabf930] Final|Native|Protected 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnMouseKeyboardCapturingStarted
	// void OnMouseKeyboardCapturingStarted();                                                                                  // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnMouseKeyboardCapturingEnded
	// void OnMouseKeyboardCapturingEnded();                                                                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnGamepadKeySelected
	// void OnGamepadKeySelected(FInputChord SelectedKey);                                                                      // [0xabf820] Final|Native|Protected 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnGamepadIsSelectingKeyChanged
	// void OnGamepadIsSelectingKeyChanged();                                                                                   // [0xabf800] Final|Native|Protected 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnGamepadCapturingStarted
	// void OnGamepadCapturingStarted();                                                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnGamepadCapturingEnded
	// void OnGamepadCapturingEnded();                                                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputActionListItem.OnCurrentMappedInputChangedDelegate__DelegateSignature
	// void OnCurrentMappedInputChangedDelegate__DelegateSignature(class UUserWidget* ChangedInputAction);                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget
/// Size: 0x0378 (888 bytes) (0x000290 - 0x000378) align 8 MaxSize: 0x0378
class UPL_InputMappingsWidget : public UPL_WidgetWithCommandsBase
{ 
public:
	FText                                              HeaderText;                                                 // 0x0290   (0x0018)  
	FText                                              PendingChangesWarningMessage;                               // 0x02A8   (0x0018)  
	FText                                              SaveProfileSuccessMessage;                                  // 0x02C0   (0x0018)  
	FText                                              SaveProfileErrorMessage;                                    // 0x02D8   (0x0018)  
	class UClass*                                      InputActionListItemClass;                                   // 0x02F0   (0x0008)  
	float                                              ScrollPadding;                                              // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02FC   (0x0004)  MISSED
	SDK_UNDEFINED(16,624) /* FMulticastInlineDelegate */ __um(OnInputProfileSaved);                                // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,625) /* FMulticastInlineDelegate */ __um(OnInputProfileError);                                // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,626) /* FMulticastInlineDelegate */ __um(OnInputMappingsCommandsChanged);                     // 0x0320   (0x0010)  
	class UTextBlock*                                  LabelHeader;                                                // 0x0330   (0x0008)  
	class UTextBlock*                                  LabelMouseKeyboardCol;                                      // 0x0338   (0x0008)  
	class UVerticalBox*                                ListActionsContainer;                                       // 0x0340   (0x0008)  
	class UScrollBox*                                  ScrollBoxActions;                                           // 0x0348   (0x0008)  
	class URichTextBlock*                              LabelTooltip;                                               // 0x0350   (0x0008)  
	TArray<class UWidget*>                             InputActionListItems;                                       // 0x0358   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0368   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnProfileSaved
	// void OnProfileSaved();                                                                                                   // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnInputProfileSavedDelegate__DelegateSignature
	// void OnInputProfileSavedDelegate__DelegateSignature();                                                                   // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnInputProfileErrorDelegate__DelegateSignature
	// void OnInputProfileErrorDelegate__DelegateSignature();                                                                   // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnInputMappingsCommandsChanged__DelegateSignature
	// void OnInputMappingsCommandsChanged__DelegateSignature();                                                                // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnFocusedItemConfirmed
	// void OnFocusedItemConfirmed(int32_t PlayerIndex, class UWidget* FocusedItem);                                            // [0xabf730] Final|Native|Protected 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnFocusedItemChanged
	// void OnFocusedItemChanged(int32_t PlayerIndex, class UWidget* FocusedItem);                                              // [0xabf660] Final|Native|Protected 
	// Function /Script/PL_InputMappingsWidgetModule.PL_InputMappingsWidget.OnCurrentMappedInputChanged
	// void OnCurrentMappedInputChanged(class UUserWidget* ChangedInputAction);                                                 // [0xabf5d0] Final|Native|Protected 
};

#pragma pack(pop)


static_assert(sizeof(UPL_InputActionListItem) == 0x0380); // 896 bytes (0x000260 - 0x000380)
static_assert(sizeof(UPL_InputMappingsWidget) == 0x0378); // 888 bytes (0x000290 - 0x000378)
static_assert(offsetof(UPL_InputActionListItem, UnSelectedTextStyleDefinition) == 0x0278);
static_assert(offsetof(UPL_InputActionListItem, SelectedTextStyleDefinition) == 0x0280);
static_assert(offsetof(UPL_InputActionListItem, LabelActionDescription) == 0x0288);
static_assert(offsetof(UPL_InputActionListItem, LabelGroupName) == 0x0290);
static_assert(offsetof(UPL_InputActionListItem, IKSMouseKeyboard) == 0x0298);
static_assert(offsetof(UPL_InputActionListItem, IKSGamepad) == 0x02A0);
static_assert(offsetof(UPL_InputActionListItem, SelectSound) == 0x02A8);
static_assert(offsetof(UPL_InputMappingsWidget, HeaderText) == 0x0290);
static_assert(offsetof(UPL_InputMappingsWidget, PendingChangesWarningMessage) == 0x02A8);
static_assert(offsetof(UPL_InputMappingsWidget, SaveProfileSuccessMessage) == 0x02C0);
static_assert(offsetof(UPL_InputMappingsWidget, SaveProfileErrorMessage) == 0x02D8);
static_assert(offsetof(UPL_InputMappingsWidget, InputActionListItemClass) == 0x02F0);
static_assert(offsetof(UPL_InputMappingsWidget, LabelHeader) == 0x0330);
static_assert(offsetof(UPL_InputMappingsWidget, LabelMouseKeyboardCol) == 0x0338);
static_assert(offsetof(UPL_InputMappingsWidget, ListActionsContainer) == 0x0340);
static_assert(offsetof(UPL_InputMappingsWidget, ScrollBoxActions) == 0x0348);
static_assert(offsetof(UPL_InputMappingsWidget, LabelTooltip) == 0x0350);
static_assert(offsetof(UPL_InputMappingsWidget, InputActionListItems) == 0x0358);
