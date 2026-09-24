
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Debug
/// dependency: Engine
/// dependency: FMODStudio
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: Niagara
/// dependency: NiagaraUIRenderer
/// dependency: PL_Core
/// dependency: PL_Cutscenes
/// dependency: PL_InputMappingsUtilsModule
/// dependency: PL_InputMappingsWidgetModule
/// dependency: PL_OptionsContainerWidgetModule
/// dependency: PL_PhotoMode
/// dependency: PL_SaveGame
/// dependency: PL_UserHandling
/// dependency: PL_UserInterface
/// dependency: PL_WidgetsUtilsModule
/// dependency: recolored
/// dependency: Sandbox
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/REC/UI/Widgets/WBP_GameCursor.WBP_GameCursor_C
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UWBP_GameCursor_C : public UUserWidget
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_CommandsListItemsTextStyle.BP_CommandsListItemsTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_CommandsListItemsTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_RecRichTextImageDecorator.BP_RecRichTextImageDecorator_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UBP_RecRichTextImageDecorator_C : public URecRichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C
/// Size: 0x02A0 (672 bytes) (0x000270 - 0x0002A0) align 8 MaxSize: 0x02A0
class UWBP_RecDialogueResponseWidget_C : public URecDialogueResponseWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0270   (0x0008)  
	class UWidgetAnimation*                            AnimHighlightAndHide;                                       // 0x0278   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0280   (0x0008)  
	class UHorizontalBox*                              HorizontalBox;                                              // 0x0288   (0x0008)  
	class UImage*                                      ImageIcon;                                                  // 0x0290   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.GetVisualState
	// EPL_WidgetVisualState GetVisualState();                                                                                  // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.SetButtonIcon
	// void SetButtonIcon();                                                                                                    // [0x19ac1c0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.OnCancel_57DAF3D246986309AD6B0E8C6E234221
	// void OnCancel_57DAF3D246986309AD6B0E8C6E234221();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.OnCompleted_57DAF3D246986309AD6B0E8C6E234221
	// void OnCompleted_57DAF3D246986309AD6B0E8C6E234221();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.OnResponseDataSet
	// void OnResponseDataSet();                                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.Show
	// void Show(int32_t ChildIndex);                                                                                           // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.ChangeState
	// void ChangeState(bool bWasSelected);                                                                                     // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_RecDialogueResponseWidget.WBP_RecDialogueResponseWidget_C.ExecuteUbergraph_WBP_RecDialogueResponseWidget
	// void ExecuteUbergraph_WBP_RecDialogueResponseWidget(int32_t EntryPoint);                                                 // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C
/// Size: 0x0318 (792 bytes) (0x000300 - 0x000318) align 8 MaxSize: 0x0318
class UWBP_DialogueBase_C : public URecDialogueWidgetBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	class UWidgetAnimation*                            AnimTalk;                                                   // 0x0308   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0310   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.GetVisualState
	// EPL_WidgetVisualState GetVisualState();                                                                                  // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.Hide
	// void Hide(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.HideWithOnComplete
	// void HideWithOnComplete(FDelegateProperty& OnHiddenOnce, bool bUseAnimation);                                            // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.Show
	// void Show(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.ShowWithOnComplete
	// void ShowWithOnComplete(FDelegateProperty& OnShownOnce, bool bUseAnimation);                                             // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.OnDialogueInfoSet
	// void OnDialogueInfoSet();                                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.OnSentenceComplete
	// void OnSentenceComplete();                                                                                               // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBase.WBP_DialogueBase_C.ExecuteUbergraph_WBP_DialogueBase
	// void ExecuteUbergraph_WBP_DialogueBase(int32_t EntryPoint);                                                              // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/Dialogues/WBP_DialogueHud.WBP_DialogueHud_C
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 8 MaxSize: 0x0390
class UWBP_DialogueHud_C : public URecDialogueWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Dialogues/WBP_NonInteractiveDialogueHud.WBP_NonInteractiveDialogueHud_C
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 8 MaxSize: 0x0390
class UWBP_NonInteractiveDialogueHud_C : public URecDialogueWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C
/// Size: 0x0318 (792 bytes) (0x000300 - 0x000318) align 8 MaxSize: 0x0318
class UWBP_BarkBaseWidget_C : public URecDialogueWidgetBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	class UWidgetAnimation*                            AnimTalk;                                                   // 0x0308   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0310   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.GetVisualState
	// EPL_WidgetVisualState GetVisualState();                                                                                  // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.Hide
	// void Hide(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.HideWithOnComplete
	// void HideWithOnComplete(FDelegateProperty& OnHiddenOnce, bool bUseAnimation);                                            // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.Show
	// void Show(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.ShowWithOnComplete
	// void ShowWithOnComplete(FDelegateProperty& OnShownOnce, bool bUseAnimation);                                             // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.OnDialogueInfoSet
	// void OnDialogueInfoSet();                                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_BarkBaseWidget.WBP_BarkBaseWidget_C.ExecuteUbergraph_WBP_BarkBaseWidget
	// void ExecuteUbergraph_WBP_BarkBaseWidget(int32_t EntryPoint);                                                            // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C
/// Size: 0x03C0 (960 bytes) (0x000390 - 0x0003C0) align 8 MaxSize: 0x03C0
class UWBP_DialogueBarkHud_C : public URecDialogueWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0390   (0x0008)  
	class UWidgetAnimation*                            ShowAnimation;                                              // 0x0398   (0x0008)  
	class UWidgetAnimation*                            HideAnimation;                                              // 0x03A0   (0x0008)  
	class UWidgetAnimation*                            ShowAnimation0;                                             // 0x03A8   (0x0008)  
	SDK_UNDEFINED(16,892) /* FMulticastInlineDelegate */ __um(OnHideCompleted);                                    // 0x03B0   (0x0010)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C.Show_Internal
	// void Show_Internal(bool PlayAnimation, class UWidgetAnimation* Animation);                                               // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C.Finished_FABAE2784DC4AB732FF8688EF41A704A
	// void Finished_FABAE2784DC4AB732FF8688EF41A704A();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C.Show
	// void Show(bool bPlayAnimation);                                                                                          // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C.Hide
	// void Hide(bool bPlayAnimation);                                                                                          // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C.ExecuteUbergraph_WBP_DialogueBarkHud
	// void ExecuteUbergraph_WBP_DialogueBarkHud(int32_t EntryPoint);                                                           // [0x19ac1c0] Final                
	// Function /Game/REC/UI/Widgets/Dialogues/WBP_DialogueBarkHud.WBP_DialogueBarkHud_C.OnHideCompleted__DelegateSignature
	// void OnHideCompleted__DelegateSignature();                                                                               // [0x19ac1c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/REC/Core/SaveGame/BP_RecSaveGameUpgradeData.BP_RecSaveGameUpgradeData_C
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UBP_RecSaveGameUpgradeData_C : public UPL_SaveGameUpgradeData
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C
/// Size: 0x028A (650 bytes) (0x000260 - 0x00028A) align 8 MaxSize: 0x028A
class UWBP_SaveIndicator_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            AnimHide;                                                   // 0x0268   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0270   (0x0008)  
	class UImage*                                      ImageSpinner;                                               // 0x0278   (0x0008)  
	class UNiagaraSystemWidget*                        ParticlesFX;                                                // 0x0280   (0x0008)  
	bool                                               HasHideBeenRequested;                                       // 0x0288   (0x0001)  
	bool                                               HasLivedMin;                                                // 0x0289   (0x0001)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.OnCancel_74798078494934ED6C34AF9FCF9BC32B
	// void OnCancel_74798078494934ED6C34AF9FCF9BC32B();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.OnCompleted_74798078494934ED6C34AF9FCF9BC32B
	// void OnCompleted_74798078494934ED6C34AF9FCF9BC32B();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.OnCancel_6DF661B7476C24F6CD09C0B1BBD30460
	// void OnCancel_6DF661B7476C24F6CD09C0B1BBD30460();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.OnCompleted_6DF661B7476C24F6CD09C0B1BBD30460
	// void OnCompleted_6DF661B7476C24F6CD09C0B1BBD30460();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.HideWidget
	// void HideWidget();                                                                                                       // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.ShowSaveIndicator
	// void ShowSaveIndicator(float MinDisplayTime);                                                                            // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.HideSaveIndicator
	// void HideSaveIndicator(bool bHideInstantly);                                                                             // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_SaveIndicator.WBP_SaveIndicator_C.ExecuteUbergraph_WBP_SaveIndicator
	// void ExecuteUbergraph_WBP_SaveIndicator(int32_t EntryPoint);                                                             // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/Commands/WBP_CommandListItemWidget.WBP_CommandListItemWidget_C
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class UWBP_CommandListItemWidget_C : public UPL_UICommandListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UImage*                                      ImageAction;                                                // 0x0298   (0x0008)  
	class UPL_StyledTextBlock*                         LabelCommand;                                               // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemWidget.WBP_CommandListItemWidget_C.BP_InitCommand
	// void BP_InitCommand();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemWidget.WBP_CommandListItemWidget_C.SetButtonIcon
	// void SetButtonIcon();                                                                                                    // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemWidget.WBP_CommandListItemWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemWidget.WBP_CommandListItemWidget_C.ExecuteUbergraph_WBP_CommandListItemWidget
	// void ExecuteUbergraph_WBP_CommandListItemWidget(int32_t EntryPoint);                                                     // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Styles/BP_PopupCommandsListItemsTextStyle.BP_PopupCommandsListItemsTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_PopupCommandsListItemsTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Commands/WBP_CommandsListWidget.WBP_CommandsListWidget_C
/// Size: 0x02A0 (672 bytes) (0x0002A0 - 0x0002A0) align 8 MaxSize: 0x02A0
class UWBP_CommandsListWidget_C : public UPL_UICommandsList
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Commands/WBP_CommandListItemPopupWidget.WBP_CommandListItemPopupWidget_C
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class UWBP_CommandListItemPopupWidget_C : public UPL_UICommandListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UImage*                                      ImageAction;                                                // 0x0298   (0x0008)  
	class UPL_StyledTextBlock*                         LabelCommand;                                               // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemPopupWidget.WBP_CommandListItemPopupWidget_C.BP_InitCommand
	// void BP_InitCommand();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemPopupWidget.WBP_CommandListItemPopupWidget_C.SetButtonIcon
	// void SetButtonIcon();                                                                                                    // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemPopupWidget.WBP_CommandListItemPopupWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Commands/WBP_CommandListItemPopupWidget.WBP_CommandListItemPopupWidget_C.ExecuteUbergraph_WBP_CommandListItemPopupWidget
	// void ExecuteUbergraph_WBP_CommandListItemPopupWidget(int32_t EntryPoint);                                                // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C
/// Size: 0x0331 (817 bytes) (0x000308 - 0x000331) align 8 MaxSize: 0x0331
class UWBP_PopupDialogue_C : public UPL_PlayerNotificationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0308   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0310   (0x0008)  
	class UWBP_CommandsListWidget_C*                   CommandList;                                                // 0x0318   (0x0008)  
	class UTextBlock*                                  LabelPopupText;                                             // 0x0320   (0x0008)  
	class UTextBlock*                                  LabelPopupTitle;                                            // 0x0328   (0x0008)  
	bool                                               IsShown;                                                    // 0x0330   (0x0001)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.CanAcceptInput
	// bool CanAcceptInput();                                                                                                   // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.ShowNotification
	// int32_t ShowNotification(FPL_PlayerNotificationData& MessageData);                                                       // [0x19ac1c0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.OnCancel_0BD177FB48DD350171FE34AC896356D5
	// void OnCancel_0BD177FB48DD350171FE34AC896356D5();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.OnCompleted_0BD177FB48DD350171FE34AC896356D5
	// void OnCompleted_0BD177FB48DD350171FE34AC896356D5();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.Show
	// void Show(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.Hide
	// void Hide(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Popups/WBP_PopupDialogue.WBP_PopupDialogue_C.ExecuteUbergraph_WBP_PopupDialogue
	// void ExecuteUbergraph_WBP_PopupDialogue(int32_t EntryPoint);                                                             // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/InputComponents/BP_GenericMenuInputComponent.BP_GenericMenuInputComponent_C
/// Size: 0x0228 (552 bytes) (0x000228 - 0x000228) align 8 MaxSize: 0x0228
class UBP_GenericMenuInputComponent_C : public UPL_GenericMenuInputComponent
{ 
public:
};

/// Class /Game/REC/Core/PhotoMode/BP_PhotoModeActor.BP_PhotoModeActor_C
/// Size: 0x0418 (1048 bytes) (0x000418 - 0x000418) align 8 MaxSize: 0x0418
class ABP_PhotoModeActor_C : public ARecPhotoModeActor
{ 
public:
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C
/// Size: 0x0279 (633 bytes) (0x000260 - 0x000279) align 8 MaxSize: 0x0279
class UWBP_InputAxis_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UHorizontalBox*                              Layout;                                                     // 0x0268   (0x0008)  
	FName                                              Axis_Name;                                                  // 0x0270   (0x0008)  
	char                                               ShowAxisInput;                                              // 0x0278   (0x0001)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.TryToAddNegativeIcon
	// void TryToAddNegativeIcon(FPL_AxisInputButtonIcons& IconImage);                                                          // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.TryToAddPositiveIcon
	// void TryToAddPositiveIcon(FPL_AxisInputButtonIcons& IconImage);                                                          // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.AddIcon
	// void AddIcon(class UTexture2D* IconImage);                                                                               // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.AddIcons
	// void AddIcons(FPL_AxisInputButtonIcons& IconImages);                                                                     // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.UpdateIcons
	// void UpdateIcons();                                                                                                      // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputAxis.WBP_InputAxis_C.ExecuteUbergraph_WBP_InputAxis
	// void ExecuteUbergraph_WBP_InputAxis(int32_t EntryPoint);                                                                 // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C
/// Size: 0x027C (636 bytes) (0x000260 - 0x00027C) align 8 MaxSize: 0x027C
class UWBP_InputIcons_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UHorizontalBox*                              Layout;                                                     // 0x0268   (0x0008)  
	FName                                              Action_Name;                                                // 0x0270   (0x0008)  
	int32_t                                            MaxIconsToShow;                                             // 0x0278   (0x0004)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C.AddIcon
	// void AddIcon(class UTexture2D* IconImage);                                                                               // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C.AddIcons
	// void AddIcons(TArray<UTexture2D*>& IconImages);                                                                          // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C.UpdateIcons
	// void UpdateIcons();                                                                                                      // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcons.WBP_InputIcons_C.ExecuteUbergraph_WBP_InputIcons
	// void ExecuteUbergraph_WBP_InputIcons(int32_t EntryPoint);                                                                // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_InputIcon.WBP_InputIcon_C
/// Size: 0x0278 (632 bytes) (0x000260 - 0x000278) align 8 MaxSize: 0x0278
class UWBP_InputIcon_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      ImageIcon;                                                  // 0x0268   (0x0008)  
	FName                                              Action_Name;                                                // 0x0270   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcon.WBP_InputIcon_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcon.WBP_InputIcon_C.UpdateIcon
	// void UpdateIcon();                                                                                                       // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcon.WBP_InputIcon_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputIcon.WBP_InputIcon_C.ExecuteUbergraph_WBP_InputIcon
	// void ExecuteUbergraph_WBP_InputIcon(int32_t EntryPoint);                                                                 // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C
/// Size: 0x0360 (864 bytes) (0x000260 - 0x000360) align 8 MaxSize: 0x0360
class UWBP_PhotoModeOverlay_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class USizeBox*                                    CameraCrosshair;                                            // 0x0268   (0x0008)  
	class UVerticalBox*                                ControlsLegendBox;                                          // 0x0270   (0x0008)  
	class UTextBlock*                                  FilterName;                                                 // 0x0278   (0x0008)  
	class UBorder*                                     FilterNameBorder;                                           // 0x0280   (0x0008)  
	class UScaleBox*                                   MoveIcon;                                                   // 0x0288   (0x0008)  
	class UImage*                                      MoveImage;                                                  // 0x0290   (0x0008)  
	class UTextBlock*                                  MoveLabel;                                                  // 0x0298   (0x0008)  
	class UWBP_InputIcon_C*                            ResetIcon;                                                  // 0x02A0   (0x0008)  
	class UTextBlock*                                  ResetLabel;                                                 // 0x02A8   (0x0008)  
	class UWBP_InputAxis_C*                            RollIcon;                                                   // 0x02B0   (0x0008)  
	class UTextBlock*                                  RollLabel;                                                  // 0x02B8   (0x0008)  
	class UScaleBox*                                   RotateIcon;                                                 // 0x02C0   (0x0008)  
	class UImage*                                      RotateImage;                                                // 0x02C8   (0x0008)  
	class UTextBlock*                                  RotateLabel;                                                // 0x02D0   (0x0008)  
	class UWBP_InputAxis_C*                            UpDownIcon;                                                 // 0x02D8   (0x0008)  
	class UTextBlock*                                  UpDownLabel;                                                // 0x02E0   (0x0008)  
	class UWBP_InputAxis_C*                            ZoomIcon;                                                   // 0x02E8   (0x0008)  
	class UTextBlock*                                  ZoomLabel;                                                  // 0x02F0   (0x0008)  
	FKey                                               MoveKey;                                                    // 0x02F8   (0x0018)  
	FKey                                               RotateKey;                                                  // 0x0310   (0x0018)  
	class AActor*                                      Photo_Mode_Actor;                                           // 0x0328   (0x0008)  
	FText                                              DefaultFilterText;                                          // 0x0330   (0x0018)  
	class USoundBase*                                  ShowOverlay;                                                // 0x0348   (0x0008)  
	class USoundBase*                                  HideOverlay;                                                // 0x0350   (0x0008)  
	FVector2D                                          SteamDeckScale;                                             // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.ToggleOverlay
	// void ToggleOverlay();                                                                                                    // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.UpdateMovementInputIcons
	// void UpdateMovementInputIcons(EPL_InputMode InputMode);                                                                  // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.OnInputMethodChanged
	// void OnInputMethodChanged(EPL_InputMode NewInputMode);                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.SetCurrentPhotoModeActor
	// void SetCurrentPhotoModeActor(class AActor* PhotoModeActor);                                                             // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.On Filter Changed
	// void OnFilterChanged(class UPL_PhotoModeFilter* CurrentFilter);                                                          // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.OnPlayModeChanged
	// void OnPlayModeChanged(ERecPlayMode PlayMode);                                                                           // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.UpdateEnabledInputs
	// void UpdateEnabledInputs();                                                                                              // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotoModeOverlay.WBP_PhotoModeOverlay_C.ExecuteUbergraph_WBP_PhotoModeOverlay
	// void ExecuteUbergraph_WBP_PhotoModeOverlay(int32_t EntryPoint);                                                          // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UWBP_PhotomodeBlockedOverlay_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            AnimHide;                                                   // 0x0268   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0270   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0278   (0x0008)  
	float                                              AutoHideAfterSeconds;                                       // 0x0280   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	FTimerHandle                                       AutoHideTimerHandle;                                        // 0x0288   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.GetVisualState
	// EPL_WidgetVisualState GetVisualState();                                                                                  // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.OnCancel_97768F014546416FDD6FB794C23B16C8
	// void OnCancel_97768F014546416FDD6FB794C23B16C8();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.OnCompleted_97768F014546416FDD6FB794C23B16C8
	// void OnCompleted_97768F014546416FDD6FB794C23B16C8();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.HideWithOnComplete
	// void HideWithOnComplete(FDelegateProperty& OnHiddenOnce, bool bUseAnimation);                                            // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.ShowWithOnComplete
	// void ShowWithOnComplete(FDelegateProperty& OnShownOnce, bool bUseAnimation);                                             // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.Show
	// void Show(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.Hide
	// void Hide(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.OnAutoHide
	// void OnAutoHide();                                                                                                       // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_PhotomodeBlockedOverlay.WBP_PhotomodeBlockedOverlay_C.ExecuteUbergraph_WBP_PhotomodeBlockedOverlay
	// void ExecuteUbergraph_WBP_PhotomodeBlockedOverlay(int32_t EntryPoint);                                                   // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/Core/SaveGame/BP_RecUserSettingsSaveGame.BP_RecUserSettingsSaveGame_C
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UBP_RecUserSettingsSaveGame_C : public URecUserSettingsSaveGame
{ 
public:
};

/// Class /Game/REC/Audio/AmbienceLinks/BP_CombatIntensityChanged.BP_CombatIntensityChanged_C
/// Size: 0x0098 (152 bytes) (0x000038 - 0x000098) align 8 MaxSize: 0x0098
class UBP_CombatIntensityChanged_C : public URecAmbienceLink
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0038   (0x0008)  
	float                                              CombatIntensitySum;                                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TMap<FGameplayTag, float>                          EnemyCombatIntensityValues;                                 // 0x0048   (0x0050)  


	/// Functions
	// Function /Game/REC/Audio/AmbienceLinks/BP_CombatIntensityChanged.BP_CombatIntensityChanged_C.OnEventHappend
	// void OnEventHappend(class URecAmbienceSubSystem* AmbienceSystem);                                                        // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/Audio/AmbienceLinks/BP_CombatIntensityChanged.BP_CombatIntensityChanged_C.ExecuteUbergraph_BP_CombatIntensityChanged
	// void ExecuteUbergraph_BP_CombatIntensityChanged(int32_t EntryPoint);                                                     // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/Audio/AmbienceLinks/BP_PaintThinnerRatioChanged.BP_PaintThinnerRatioChanged_C
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UBP_PaintThinnerRatioChanged_C : public URecAmbienceLink
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0038   (0x0008)  


	/// Functions
	// Function /Game/REC/Audio/AmbienceLinks/BP_PaintThinnerRatioChanged.BP_PaintThinnerRatioChanged_C.OnEventHappend
	// void OnEventHappend(class URecAmbienceSubSystem* AmbienceSystem);                                                        // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/Audio/AmbienceLinks/BP_PaintThinnerRatioChanged.BP_PaintThinnerRatioChanged_C.ExecuteUbergraph_BP_PaintThinnerRatioChanged
	// void ExecuteUbergraph_BP_PaintThinnerRatioChanged(int32_t EntryPoint);                                                   // [0x19ac1c0] Final                
};

/// Class /Game/REC/Audio/AmbienceLinks/BP_GuardiansChanged.BP_GuardiansChanged_C
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UBP_GuardiansChanged_C : public URecAmbienceLink
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0038   (0x0008)  
	FName                                              MoralityParameterName;                                      // 0x0040   (0x0008)  


	/// Functions
	// Function /Game/REC/Audio/AmbienceLinks/BP_GuardiansChanged.BP_GuardiansChanged_C.OnEventHappend
	// void OnEventHappend(class URecAmbienceSubSystem* AmbienceSystem);                                                        // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/Audio/AmbienceLinks/BP_GuardiansChanged.BP_GuardiansChanged_C.ExecuteUbergraph_BP_GuardiansChanged
	// void ExecuteUbergraph_BP_GuardiansChanged(int32_t EntryPoint);                                                           // [0x19ac1c0] Final                
};

/// Class /Game/REC/Audio/AmbienceLinks/BP_MoralityChanged.BP_MoralityChanged_C
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UBP_MoralityChanged_C : public URecAmbienceLink
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0038   (0x0008)  
	FName                                              MoralityParameterName;                                      // 0x0040   (0x0008)  
	FName                                              MoralityMusicParameterName;                                 // 0x0048   (0x0008)  


	/// Functions
	// Function /Game/REC/Audio/AmbienceLinks/BP_MoralityChanged.BP_MoralityChanged_C.OnEventHappend
	// void OnEventHappend(class URecAmbienceSubSystem* AmbienceSystem);                                                        // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/Audio/AmbienceLinks/BP_MoralityChanged.BP_MoralityChanged_C.ExecuteUbergraph_BP_MoralityChanged
	// void ExecuteUbergraph_BP_MoralityChanged(int32_t EntryPoint);                                                            // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Popups/WBP_DialogueThemedPrompt.WBP_DialogueThemedPrompt_C
/// Size: 0x0378 (888 bytes) (0x000368 - 0x000378) align 8 MaxSize: 0x0378
class UWBP_DialogueThemedPrompt_C : public URecDialoguePromptWidget
{ 
public:
	class UHorizontalBox*                              ListResponses;                                              // 0x0368   (0x0008)  
	class UOverlay*                                    RootPanel;                                                  // 0x0370   (0x0008)  
};

/// Class /Game/REC/Maps/MainMenu/MainMenu.MainMenu_C
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class AMainMenu_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/REC/UI/InputComponents/BP_TabbedMenuInputComponent.BP_TabbedMenuInputComponent_C
/// Size: 0x0228 (552 bytes) (0x000228 - 0x000228) align 8 MaxSize: 0x0228
class UBP_TabbedMenuInputComponent_C : public UPL_GenericMenuInputComponent
{ 
public:
};

/// Class /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C
/// Size: 0x03B8 (952 bytes) (0x000368 - 0x0003B8) align 8 MaxSize: 0x03B8
class UWBP_MainMenuWidget_C : public URecMainMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  
	class UWidgetAnimation*                            AnimMenu;                                                   // 0x0370   (0x0008)  
	class UWidgetAnimation*                            AnimPress;                                                  // 0x0378   (0x0008)  
	class UWBP_DebugOverlay_C*                         DebugOverlay;                                               // 0x0380   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0388   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0390   (0x0008)  
	class UImage*                                      ImageSplash;                                                // 0x0398   (0x0008)  
	class UTextBlock*                                  LabelCL;                                                    // 0x03A0   (0x0008)  
	class URichTextBlock*                              LabelPress;                                                 // 0x03A8   (0x0008)  
	class UNiagaraSystemWidget*                        ParticleSystem;                                             // 0x03B0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C.GetVersionInfoForShipping
	// void GetVersionInfoForShipping(FText& txt);                                                                              // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C.OnMenuStateChanged
	// void OnMenuStateChanged();                                                                                               // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C.UpdateLabel
	// void UpdateLabel();                                                                                                      // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/MainMenu/WBP_MainMenuWidget.WBP_MainMenuWidget_C.ExecuteUbergraph_WBP_MainMenuWidget
	// void ExecuteUbergraph_WBP_MainMenuWidget(int32_t EntryPoint);                                                            // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/MainMenu/Options/WBP_MainMenuOptionsContainerWidget.WBP_MainMenuOptionsContainerWidget_C
/// Size: 0x0370 (880 bytes) (0x000360 - 0x000370) align 8 MaxSize: 0x0370
class UWBP_MainMenuOptionsContainerWidget_C : public URecOptionsContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	float                                              WidthOverride;                                              // 0x0368   (0x0004)  
	float                                              HeightOverride;                                             // 0x036C   (0x0004)  


	/// Functions
	// Function /Game/REC/UI/Widgets/MainMenu/Options/WBP_MainMenuOptionsContainerWidget.WBP_MainMenuOptionsContainerWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/MainMenu/Options/WBP_MainMenuOptionsContainerWidget.WBP_MainMenuOptionsContainerWidget_C.BndEvt__WBP_MainMenuOptionsContainerWidget_PanelOptions_K2Node_ComponentBoundEvent_0_OnMenuNavigationSuspensionChanged__DelegateSignature
	// void BndEvt__WBP_MainMenuOptionsContainerWidget_PanelOptions_K2Node_ComponentBoundEvent_0_OnMenuNavigationSuspensionChanged__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/MainMenu/Options/WBP_MainMenuOptionsContainerWidget.WBP_MainMenuOptionsContainerWidget_C.BndEvt__WBP_MainMenuOptionsContainerWidget_PanelOptions_K2Node_ComponentBoundEvent_1_OnMenuNavigationSuspensionChanged__DelegateSignature
	// void BndEvt__WBP_MainMenuOptionsContainerWidget_PanelOptions_K2Node_ComponentBoundEvent_1_OnMenuNavigationSuspensionChanged__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/MainMenu/Options/WBP_MainMenuOptionsContainerWidget.WBP_MainMenuOptionsContainerWidget_C.ExecuteUbergraph_WBP_MainMenuOptionsContainerWidget
	// void ExecuteUbergraph_WBP_MainMenuOptionsContainerWidget(int32_t EntryPoint);                                            // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Options/WBP_PauseMenuOptionsContainerWidget.WBP_PauseMenuOptionsContainerWidget_C
/// Size: 0x0370 (880 bytes) (0x000360 - 0x000370) align 8 MaxSize: 0x0370
class UWBP_PauseMenuOptionsContainerWidget_C : public URecOptionsContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Options/WBP_PauseMenuOptionsContainerWidget.WBP_PauseMenuOptionsContainerWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Options/WBP_PauseMenuOptionsContainerWidget.WBP_PauseMenuOptionsContainerWidget_C.OnTabActivated
	// void OnTabActivated();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Options/WBP_PauseMenuOptionsContainerWidget.WBP_PauseMenuOptionsContainerWidget_C.ExecuteUbergraph_WBP_PauseMenuOptionsContainerWidget
	// void ExecuteUbergraph_WBP_PauseMenuOptionsContainerWidget(int32_t EntryPoint);                                           // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/ControlSchemes/WBP_ControlSchemeBase.WBP_ControlSchemeBase_C
/// Size: 0x03E0 (992 bytes) (0x0003C8 - 0x0003E0) align 8 MaxSize: 0x03E0
class UWBP_ControlSchemeBase_C : public URecControlSchemeBaseWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C8   (0x0008)  
	class UTextBlock*                                  LabelHeader;                                                // 0x03D0   (0x0008)  
	class UVerticalBox*                                PanelHeader;                                                // 0x03D8   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ControlSchemes/WBP_ControlSchemeBase.WBP_ControlSchemeBase_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ControlSchemes/WBP_ControlSchemeBase.WBP_ControlSchemeBase_C.ExecuteUbergraph_WBP_ControlSchemeBase
	// void ExecuteUbergraph_WBP_ControlSchemeBase(int32_t EntryPoint);                                                         // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/PauseMenu/WBP_PauseMenuWidget.WBP_PauseMenuWidget_C
/// Size: 0x0340 (832 bytes) (0x0002F8 - 0x000340) align 8 MaxSize: 0x0340
class UWBP_PauseMenuWidget_C : public URecPauseMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F8   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0300   (0x0008)  
	class UImage*                                      background_image;                                           // 0x0308   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0310   (0x0008)  
	class UTextBlock*                                  LabelDebugMessage;                                          // 0x0318   (0x0008)  
	class UWBP_ExtrasWidget_C*                         PanelExtras;                                                // 0x0320   (0x0008)  
	class UWBP_OverviewWidget_C*                       PanelOverview;                                              // 0x0328   (0x0008)  
	class UWBP_PinsCollectionWidget_C*                 PanelPins;                                                  // 0x0330   (0x0008)  
	class UWBP_QuestsWidget_C*                         PanelQuests;                                                // 0x0338   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_PauseMenuWidget.WBP_PauseMenuWidget_C.OnCancel_6CBF3F974BDA357308E6D481033654C5
	// void OnCancel_6CBF3F974BDA357308E6D481033654C5();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_PauseMenuWidget.WBP_PauseMenuWidget_C.OnCompleted_6CBF3F974BDA357308E6D481033654C5
	// void OnCompleted_6CBF3F974BDA357308E6D481033654C5();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_PauseMenuWidget.WBP_PauseMenuWidget_C.ShowDebugMessage
	// void ShowDebugMessage(FText& Message);                                                                                   // [0x19ac1c0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_PauseMenuWidget.WBP_PauseMenuWidget_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_PauseMenuWidget.WBP_PauseMenuWidget_C.ExecuteUbergraph_WBP_PauseMenuWidget
	// void ExecuteUbergraph_WBP_PauseMenuWidget(int32_t EntryPoint);                                                           // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/Loading/WBP_ActivityIndicator.WBP_ActivityIndicator_C
/// Size: 0x0270 (624 bytes) (0x000260 - 0x000270) align 8 MaxSize: 0x0270
class UWBP_ActivityIndicator_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      ImageGuardians;                                             // 0x0268   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Loading/WBP_ActivityIndicator.WBP_ActivityIndicator_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_ActivityIndicator.WBP_ActivityIndicator_C.ExecuteUbergraph_WBP_ActivityIndicator
	// void ExecuteUbergraph_WBP_ActivityIndicator(int32_t EntryPoint);                                                         // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Overview/WBP_OverviewWidget.WBP_OverviewWidget_C
/// Size: 0x04E8 (1256 bytes) (0x0004A0 - 0x0004E8) align 8 MaxSize: 0x04E8
class UWBP_OverviewWidget_C : public URecOverviewWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A0   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x04A8   (0x0008)  
	class UWBP_OverviewInventoryWidget_C*              FilmReelsCounter;                                           // 0x04B0   (0x0008)  
	class UImage*                                      Image;                                                      // 0x04B8   (0x0008)  
	class UImage*                                      ImageBackSelected;                                          // 0x04C0   (0x0008)  
	class UImage*                                      ImageMainQuestTag;                                          // 0x04C8   (0x0008)  
	class UScrollBox*                                  PanelScroll;                                                // 0x04D0   (0x0008)  
	class UWBP_OverviewInventoryWidget_C*              TicketsCounter;                                             // 0x04D8   (0x0008)  
	class UWBP_Guardians_C*                            WBP_Guardians;                                              // 0x04E0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Overview/WBP_OverviewWidget.WBP_OverviewWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Overview/WBP_OverviewWidget.WBP_OverviewWidget_C.OnTabActivated
	// void OnTabActivated();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Overview/WBP_OverviewWidget.WBP_OverviewWidget_C.OnTabDeactivated
	// void OnTabDeactivated();                                                                                                 // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Overview/WBP_OverviewWidget.WBP_OverviewWidget_C.ExecuteUbergraph_WBP_OverviewWidget
	// void ExecuteUbergraph_WBP_OverviewWidget(int32_t EntryPoint);                                                            // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C
/// Size: 0x0418 (1048 bytes) (0x0003E0 - 0x000418) align 8 MaxSize: 0x0418
class UWBP_PinsCollectionWidget_C : public URecPinsCollectionWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	class UWidgetAnimation*                            AnimLabels;                                                 // 0x03E8   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x03F0   (0x0008)  
	class UButton*                                     ButtonNextPage;                                             // 0x03F8   (0x0008)  
	class UButton*                                     ButtonPrevPage;                                             // 0x0400   (0x0008)  
	class UImage*                                      ImageNextPage;                                              // 0x0408   (0x0008)  
	class UImage*                                      ImagePrevPage;                                              // 0x0410   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.HasHighlight
	// bool HasHighlight();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.SetPinFound
	// void SetPinFound(bool bWasFound);                                                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.OnTabActivated
	// void OnTabActivated();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.SetButtonIcons
	// void SetButtonIcons();                                                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.BndEvt__WBP_PinsCollectionWidget_ButtonPrevPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_PinsCollectionWidget_ButtonPrevPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.BndEvt__WBP_PinsCollectionWidget_ButtonNextPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_PinsCollectionWidget_ButtonNextPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/PauseMenu/Pins/WBP_PinsCollectionWidget.WBP_PinsCollectionWidget_C.ExecuteUbergraph_WBP_PinsCollectionWidget
	// void ExecuteUbergraph_WBP_PinsCollectionWidget(int32_t EntryPoint);                                                      // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C
/// Size: 0x0398 (920 bytes) (0x000340 - 0x000398) align 8 MaxSize: 0x0398
class UWBP_CreditsViewer_C : public URecCreditsViewerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0340   (0x0008)  
	class UWidgetAnimation*                            AnimArtFadeOut;                                             // 0x0348   (0x0008)  
	class UWidgetAnimation*                            AnimArtFadeIn;                                              // 0x0350   (0x0008)  
	class UImage*                                      ButtonSkip;                                                 // 0x0358   (0x0008)  
	class UImage*                                      ImageHalfBlack;                                             // 0x0360   (0x0008)  
	class UImage*                                      ImageMask;                                                  // 0x0368   (0x0008)  
	class UImage*                                      ImageSkipProgress;                                          // 0x0370   (0x0008)  
	class UHorizontalBox*                              PanelMask;                                                  // 0x0378   (0x0008)  
	int32_t                                            NumItems;                                                   // 0x0380   (0x0004)  
	int32_t                                            CurrItem;                                                   // 0x0384   (0x0004)  
	float                                              CurrScale;                                                  // 0x0388   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	FFMODEventInstance                                 CreditsAudioEvent;                                          // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.StopMusic
	// void StopMusic();                                                                                                        // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.StartMusic
	// void StartMusic();                                                                                                       // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.FlipImageMask
	// void FlipImageMask();                                                                                                    // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.SetButtonIcon
	// void SetButtonIcon(EPL_InputMode NewInputMode);                                                                          // [0x19ac1c0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnLoaded_77D9585E46F96543C771049F6EB1A711
	// void OnLoaded_77D9585E46F96543C771049F6EB1A711(class UObject* Loaded);                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCancel_F335E3734ED3DFB398D670BD3B84CA46
	// void OnCancel_F335E3734ED3DFB398D670BD3B84CA46();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCompleted_F335E3734ED3DFB398D670BD3B84CA46
	// void OnCompleted_F335E3734ED3DFB398D670BD3B84CA46();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCancel_C55234944ABB3023A05F7FB6E4BA7F8E
	// void OnCancel_C55234944ABB3023A05F7FB6E4BA7F8E();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCompleted_C55234944ABB3023A05F7FB6E4BA7F8E
	// void OnCompleted_C55234944ABB3023A05F7FB6E4BA7F8E();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCancel_5F541A544B64EBC89139A09EDDD9869E
	// void OnCancel_5F541A544B64EBC89139A09EDDD9869E();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCompleted_5F541A544B64EBC89139A09EDDD9869E
	// void OnCompleted_5F541A544B64EBC89139A09EDDD9869E();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCancel_7914DB844FDF8DF4F974B8A81B1EB0F0
	// void OnCancel_7914DB844FDF8DF4F974B8A81B1EB0F0();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnCompleted_7914DB844FDF8DF4F974B8A81B1EB0F0
	// void OnCompleted_7914DB844FDF8DF4F974B8A81B1EB0F0();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.UpdateSkippingProgress
	// void UpdateSkippingProgress(float InSkippingProgress);                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.StartSlideShow
	// void StartSlideShow();                                                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.ReceiveOnShowComplete
	// void ReceiveOnShowComplete();                                                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.ReceiveOnHideComplete
	// void ReceiveOnHideComplete();                                                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/WBP_CreditsViewer.WBP_CreditsViewer_C.ExecuteUbergraph_WBP_CreditsViewer
	// void ExecuteUbergraph_WBP_CreditsViewer(int32_t EntryPoint);                                                             // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/HUD/WBP_Guardians.WBP_Guardians_C
/// Size: 0x0338 (824 bytes) (0x000320 - 0x000338) align 8 MaxSize: 0x0338
class UWBP_Guardians_C : public URecGuardianWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	class UImage*                                      ImagePaintGlass;                                            // 0x0328   (0x0008)  
	class UImage*                                      ImageThinnerGlass;                                          // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/HUD/WBP_Guardians.WBP_Guardians_C.EnablePaintAffinityBar
	// void EnablePaintAffinityBar(bool bShouldBeEnabled);                                                                      // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_Guardians.WBP_Guardians_C.EnableThinnerAffinityBar
	// void EnableThinnerAffinityBar(bool bShouldBeEnabled);                                                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_Guardians.WBP_Guardians_C.ExecuteUbergraph_WBP_Guardians
	// void ExecuteUbergraph_WBP_Guardians(int32_t EntryPoint);                                                                 // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C
/// Size: 0x0410 (1040 bytes) (0x0003D8 - 0x000410) align 8 MaxSize: 0x0410
class UWBP_QuestsWidget_C : public URecQuestsMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D8   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x03E0   (0x0008)  
	class UButton*                                     ButtonInProgress;                                           // 0x03E8   (0x0008)  
	class UImage*                                      ImageNextCategory;                                          // 0x03F0   (0x0008)  
	class UImage*                                      ImagePrevCategory;                                          // 0x03F8   (0x0008)  
	class UTextBlock*                                  LabelQuestsType;                                            // 0x0400   (0x0008)  
	class UHorizontalBox*                              PanelContent;                                               // 0x0408   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.HasHighlight
	// bool HasHighlight();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.OnTabActivated
	// void OnTabActivated();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.BndEvt__WBP_QuestsWidget_ButtonInProgress_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_QuestsWidget_ButtonInProgress_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();   // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.SetButtonIcons
	// void SetButtonIcons();                                                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.OnDisplayStateChanged
	// void OnDisplayStateChanged(ERecQuestLogDisplayState CurrentDisplayState);                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestsWidget.WBP_QuestsWidget_C.ExecuteUbergraph_WBP_QuestsWidget
	// void ExecuteUbergraph_WBP_QuestsWidget(int32_t EntryPoint);                                                              // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Loading/WBP_LoadingScreen.WBP_LoadingScreen_C
/// Size: 0x0320 (800 bytes) (0x0002F0 - 0x000320) align 8 MaxSize: 0x0320
class UWBP_LoadingScreen_C : public URecLoadingScreenWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F0   (0x0008)  
	class UWidgetAnimation*                            Hide;                                                       // 0x02F8   (0x0008)  
	class UWidgetAnimation*                            Show;                                                       // 0x0300   (0x0008)  
	class UWBP_ActivityIndicator_C*                    ActivityIndicator;                                          // 0x0308   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0310   (0x0008)  
	FFMODEventInstance                                 FMOD_Snapshot;                                              // 0x0318   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Loading/WBP_LoadingScreen.WBP_LoadingScreen_C.OnAnimationFinished
	// void OnAnimationFinished(class UWidgetAnimation* Animation);                                                             // [0x19ac1c0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_LoadingScreen.WBP_LoadingScreen_C.OnTransitionEnter
	// void OnTransitionEnter(FPL_CutsceneTransitionSettings& TransitionSettings);                                              // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_LoadingScreen.WBP_LoadingScreen_C.OnTransitionLeave
	// void OnTransitionLeave(FPL_CutsceneTransitionSettings& TransitionSettings);                                              // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_LoadingScreen.WBP_LoadingScreen_C.OnLoadingScreenReady
	// void OnLoadingScreenReady();                                                                                             // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Loading/WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
	// void ExecuteUbergraph_WBP_LoadingScreen(int32_t EntryPoint);                                                             // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtrasWidget.WBP_ExtrasWidget_C
/// Size: 0x0398 (920 bytes) (0x000388 - 0x000398) align 8 MaxSize: 0x0398
class UWBP_ExtrasWidget_C : public URecExtraContentWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtrasWidget.WBP_ExtrasWidget_C.HasHighlight
	// bool HasHighlight();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtrasWidget.WBP_ExtrasWidget_C.HasNotification
	// bool HasNotification();                                                                                                  // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtrasWidget.WBP_ExtrasWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtrasWidget.WBP_ExtrasWidget_C.OnTabActivated
	// void OnTabActivated();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtrasWidget.WBP_ExtrasWidget_C.ExecuteUbergraph_WBP_ExtrasWidget
	// void ExecuteUbergraph_WBP_ExtrasWidget(int32_t EntryPoint);                                                              // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/HUD/WBP_HealthBar.WBP_HealthBar_C
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UWBP_HealthBar_C : public URecPlayerStatusWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/SaveLoad/WBP_LoadCinemaMenuWidget.WBP_LoadCinemaMenuWidget_C
/// Size: 0x0388 (904 bytes) (0x000388 - 0x000388) align 8 MaxSize: 0x0388
class UWBP_LoadCinemaMenuWidget_C : public URecSaveLoadMenuWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/SaveLoad/WBP_LoadGameMenuWidget.WBP_LoadGameMenuWidget_C
/// Size: 0x0388 (904 bytes) (0x000388 - 0x000388) align 8 MaxSize: 0x0388
class UWBP_LoadGameMenuWidget_C : public URecSaveLoadMenuWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/SaveLoad/WBP_NewGameMenuWidget.WBP_NewGameMenuWidget_C
/// Size: 0x0388 (904 bytes) (0x000388 - 0x000388) align 8 MaxSize: 0x0388
class UWBP_NewGameMenuWidget_C : public URecSaveLoadMenuWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/PauseMenu/WBP_TabsHeaderWidget.WBP_TabsHeaderWidget_C
/// Size: 0x0350 (848 bytes) (0x000328 - 0x000350) align 8 MaxSize: 0x0350
class UWBP_TabsHeaderWidget_C : public URecTabsHeaderWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  
	class UButton*                                     ButtonScrollLeft;                                           // 0x0330   (0x0008)  
	class UButton*                                     ButtonScrollRight;                                          // 0x0338   (0x0008)  
	class UImage*                                      ImageScrollLeft;                                            // 0x0340   (0x0008)  
	class UImage*                                      ImageScrollRight;                                           // 0x0348   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_TabsHeaderWidget.WBP_TabsHeaderWidget_C.SetButtonIcons
	// void SetButtonIcons();                                                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_TabsHeaderWidget.WBP_TabsHeaderWidget_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_TabsHeaderWidget.WBP_TabsHeaderWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/WBP_TabsHeaderWidget.WBP_TabsHeaderWidget_C.ExecuteUbergraph_WBP_TabsHeaderWidget
	// void ExecuteUbergraph_WBP_TabsHeaderWidget(int32_t EntryPoint);                                                          // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Overlays/WBP_MediaPlayer.WBP_MediaPlayer_C
/// Size: 0x03F8 (1016 bytes) (0x0003D8 - 0x0003F8) align 8 MaxSize: 0x03F8
class UWBP_MediaPlayer_C : public URecMediaPlayerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D8   (0x0008)  
	class UImage*                                      ButtonSkip;                                                 // 0x03E0   (0x0008)  
	class UImage*                                      ImageSkipProgress;                                          // 0x03E8   (0x0008)  
	class UClass*                                      NewVar;                                                     // 0x03F0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Overlays/WBP_MediaPlayer.WBP_MediaPlayer_C.SetButtonIcon
	// void SetButtonIcon(EPL_InputMode NewInputMode);                                                                          // [0x19ac1c0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_MediaPlayer.WBP_MediaPlayer_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_MediaPlayer.WBP_MediaPlayer_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_MediaPlayer.WBP_MediaPlayer_C.UpdateSkippingProgress
	// void UpdateSkippingProgress(float InSkippingProgress);                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Overlays/WBP_MediaPlayer.WBP_MediaPlayer_C.ExecuteUbergraph_WBP_MediaPlayer
	// void ExecuteUbergraph_WBP_MediaPlayer(int32_t EntryPoint);                                                               // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Costumes/WBP_CostumesWidget.WBP_CostumesWidget_C
/// Size: 0x03C8 (968 bytes) (0x0003B8 - 0x0003C8) align 8 MaxSize: 0x03C8
class UWBP_CostumesWidget_C : public URecCostumesWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B8   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x03C0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Costumes/WBP_CostumesWidget.WBP_CostumesWidget_C.HasHighlight
	// bool HasHighlight();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Costumes/WBP_CostumesWidget.WBP_CostumesWidget_C.GetTabLabel
	// FText GetTabLabel();                                                                                                     // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/REC/UI/Widgets/PauseMenu/Costumes/WBP_CostumesWidget.WBP_CostumesWidget_C.OnTabActivated
	// void OnTabActivated();                                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Costumes/WBP_CostumesWidget.WBP_CostumesWidget_C.ExecuteUbergraph_WBP_CostumesWidget
	// void ExecuteUbergraph_WBP_CostumesWidget(int32_t EntryPoint);                                                            // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/Paging/WBP_PaginatorWidget.WBP_PaginatorWidget_C
/// Size: 0x02A8 (680 bytes) (0x0002A0 - 0x0002A8) align 8 MaxSize: 0x02A8
class UWBP_PaginatorWidget_C : public URecPaginatorWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Paging/WBP_PaginatorWidget.WBP_PaginatorWidget_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Paging/WBP_PaginatorWidget.WBP_PaginatorWidget_C.SetButtonIcons
	// void SetButtonIcons();                                                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Paging/WBP_PaginatorWidget.WBP_PaginatorWidget_C.OnInputModeChanged
	// void OnInputModeChanged(EPL_InputMode NewInputMode);                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/Paging/WBP_PaginatorWidget.WBP_PaginatorWidget_C.ExecuteUbergraph_WBP_PaginatorWidget
	// void ExecuteUbergraph_WBP_PaginatorWidget(int32_t EntryPoint);                                                           // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Styles/BP_CreditsImageDecorator.BP_CreditsImageDecorator_C
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UBP_CreditsImageDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/REC/UI/Widgets/HUD/WBP_GuardianPoint.WBP_GuardianPoint_C
/// Size: 0x0290 (656 bytes) (0x000268 - 0x000290) align 8 MaxSize: 0x0290
class UWBP_GuardianPoint_C : public URecGuardianPointWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0268   (0x0008)  
	class UWidgetAnimation*                            AnimActive;                                                 // 0x0270   (0x0008)  
	class UImage*                                      ImageGuardian;                                              // 0x0278   (0x0008)  
	class UOverlay*                                    PanelGuardian;                                              // 0x0280   (0x0008)  
	class UNiagaraSystemWidget*                        Particles;                                                  // 0x0288   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/HUD/WBP_GuardianPoint.WBP_GuardianPoint_C.OnStatusChanged
	// void OnStatusChanged();                                                                                                  // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_GuardianPoint.WBP_GuardianPoint_C.OnAffinityChanged
	// void OnAffinityChanged();                                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_GuardianPoint.WBP_GuardianPoint_C.ExecuteUbergraph_WBP_GuardianPoint
	// void ExecuteUbergraph_WBP_GuardianPoint(int32_t EntryPoint);                                                             // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C
/// Size: 0x08C8 (2248 bytes) (0x000380 - 0x0008C8) align 8 MaxSize: 0x08C8
class UWBP_InputActionListItem_C : public UPL_InputActionListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	class UButton*                                     BtnSelect;                                                  // 0x0388   (0x0008)  
	class UThrobber*                                   GamepadListening;                                           // 0x0390   (0x0008)  
	class UImage*                                      ImageModified;                                              // 0x0398   (0x0008)  
	class UImage*                                      ImgButtonIcon;                                              // 0x03A0   (0x0008)  
	class UImage*                                      ImgKeyboardIcon;                                            // 0x03A8   (0x0008)  
	class UWBP_MenuListItemSelection_C*                ItemSelection;                                              // 0x03B0   (0x0008)  
	class UThrobber*                                   KeyboardListening;                                          // 0x03B8   (0x0008)  
	FButtonStyle                                       NormalButtonStyle;                                          // 0x03C0   (0x0278)  
	FButtonStyle                                       HoverButtonStyle;                                           // 0x0638   (0x0278)  
	FText                                              SwitchKeySwapMap;                                           // 0x08B0   (0x0018)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.SwapSwitchButtons
	// void SwapSwitchButtons(FKey InKey, FKey& OutKey);                                                                        // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.UpdateGamepadButtonIcon
	// void UpdateGamepadButtonIcon();                                                                                          // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.BndEvt__WBP_InputActionListItem_BtnSelect_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_InputActionListItem_BtnSelect_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();     // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.SetAsModified
	// void SetAsModified(bool bWasModified);                                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.UpdateKeyboardButtonIcon
	// void UpdateKeyboardButtonIcon();                                                                                         // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.OnMouseKeyboardCapturingStarted
	// void OnMouseKeyboardCapturingStarted();                                                                                  // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.OnGamepadCapturingStarted
	// void OnGamepadCapturingStarted();                                                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.OnGamepadCapturingEnded
	// void OnGamepadCapturingEnded();                                                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.OnMouseKeyboardCapturingEnded
	// void OnMouseKeyboardCapturingEnded();                                                                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.BndEvt__WBP_InputActionListItem_BtnSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_InputActionListItem_BtnSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();   // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_InputActionListItem.WBP_InputActionListItem_C.ExecuteUbergraph_WBP_InputActionListItem
	// void ExecuteUbergraph_WBP_InputActionListItem(int32_t EntryPoint);                                                       // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestItemListItem.WBP_QuestItemListItem_C
/// Size: 0x0280 (640 bytes) (0x000270 - 0x000280) align 8 MaxSize: 0x0280
class UWBP_QuestItemListItem_C : public URecQuestItemListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0270   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestItemListItem.WBP_QuestItemListItem_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestItemListItem.WBP_QuestItemListItem_C.ExecuteUbergraph_WBP_QuestItemListItem
	// void ExecuteUbergraph_WBP_QuestItemListItem(int32_t EntryPoint);                                                         // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C
/// Size: 0x0340 (832 bytes) (0x0002F8 - 0x000340) align 8 MaxSize: 0x0340
class UWBP_ExtraContentEntryWidget_C : public URecExtraContentListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F8   (0x0008)  
	class UButton*                                     ButtonItem;                                                 // 0x0300   (0x0008)  
	class UImage*                                      ImageContent;                                               // 0x0308   (0x0008)  
	class UNiagaraSystemWidget*                        ParticleSystem;                                             // 0x0310   (0x0008)  
	TWeakObjectPtr<class UTexture2D*>                  Icon;                                                       // 0x0318   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0320   (0x0020)  MISSED


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C.BndEvt__WBP_ExtraContentEntryWidget_ButtonItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_ExtraContentEntryWidget_ButtonItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C.BndEvt__WBP_ExtraContentEntryWidget_ButtonItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_ExtraContentEntryWidget_ButtonItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Extras/WBP_ExtraContentEntryWidget.WBP_ExtraContentEntryWidget_C.ExecuteUbergraph_WBP_ExtraContentEntryWidget
	// void ExecuteUbergraph_WBP_ExtraContentEntryWidget(int32_t EntryPoint);                                                   // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C
/// Size: 0x0298 (664 bytes) (0x000278 - 0x000298) align 8 MaxSize: 0x0298
class UWBP_HealthPoint_C : public URecHealthPointWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0278   (0x0008)  
	class UWidgetAnimation*                            AnimBounce;                                                 // 0x0280   (0x0008)  
	class UWidgetAnimation*                            AnimFillLife;                                               // 0x0288   (0x0008)  
	class UPL_Delay*                                   Delay_Handle;                                               // 0x0290   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C.OnCancel_2E7C1DAC45C8B3D5FA3AD08C64B0D8F9
	// void OnCancel_2E7C1DAC45C8B3D5FA3AD08C64B0D8F9();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C.OnCompleted_2E7C1DAC45C8B3D5FA3AD08C64B0D8F9
	// void OnCompleted_2E7C1DAC45C8B3D5FA3AD08C64B0D8F9();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C.SetRandomAnimTimer
	// void SetRandomAnimTimer();                                                                                               // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C.Destruct
	// void Destruct();                                                                                                         // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/HUD/WBP_HealthPoint.WBP_HealthPoint_C.ExecuteUbergraph_WBP_HealthPoint
	// void ExecuteUbergraph_WBP_HealthPoint(int32_t EntryPoint);                                                               // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Overview/WBP_OverviewInventoryWidget.WBP_OverviewInventoryWidget_C
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class UWBP_OverviewInventoryWidget_C : public URecInventoryListItemBase
{ 
public:
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C
/// Size: 0x0398 (920 bytes) (0x000328 - 0x000398) align 8 MaxSize: 0x0398
class UWBP_CinemaSlotListItem_C : public URecCinemaSlotListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  
	class UButton*                                     BtnExecute;                                                 // 0x0330   (0x0008)  
	class UImage*                                      ImageMapPreview;                                            // 0x0338   (0x0008)  
	class UImage*                                      ImageNewGamePlus;                                           // 0x0340   (0x0008)  
	class UImage*                                      ImageSelection;                                             // 0x0348   (0x0008)  
	class UTextBlock*                                  LabelCorruptedSlot;                                         // 0x0350   (0x0008)  
	class UPL_StyledTextBlock*                         LabelDateTime;                                              // 0x0358   (0x0008)  
	class UTextBlock*                                  LabelEmptySlot;                                             // 0x0360   (0x0008)  
	class UTextBlock*                                  LabelFilmReelsCount;                                        // 0x0368   (0x0008)  
	class UTextBlock*                                  LabelPinsCount;                                             // 0x0370   (0x0008)  
	class UPL_StyledTextBlock*                         LabelSlotName;                                              // 0x0378   (0x0008)  
	class UTextBlock*                                  LabelTicketsCount;                                          // 0x0380   (0x0008)  
	class UCircularThrobber*                           LoadingIndicator;                                           // 0x0388   (0x0008)  
	class UVerticalBox*                                PanelSlotContent;                                           // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.BndEvt__WBP_VS_RecCommandOptionListItem_BtnExecute_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_VS_RecCommandOptionListItem_BtnExecute_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.BndEvt__BtnExecute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnExecute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                          // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.OnDataChanged
	// void OnDataChanged();                                                                                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CinemaSlotListItem.WBP_CinemaSlotListItem_C.ExecuteUbergraph_WBP_CinemaSlotListItem
	// void ExecuteUbergraph_WBP_CinemaSlotListItem(int32_t EntryPoint);                                                        // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C
/// Size: 0x0398 (920 bytes) (0x000328 - 0x000398) align 8 MaxSize: 0x0398
class UWBP_SaveSlotListItem_C : public URecSaveSlotListItemBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  
	class UButton*                                     BtnExecute;                                                 // 0x0330   (0x0008)  
	class UImage*                                      ImageMapPreview;                                            // 0x0338   (0x0008)  
	class UImage*                                      ImageNewGamePlus;                                           // 0x0340   (0x0008)  
	class UImage*                                      ImageSelection;                                             // 0x0348   (0x0008)  
	class UTextBlock*                                  LabelCorruptedSlot;                                         // 0x0350   (0x0008)  
	class UPL_StyledTextBlock*                         LabelDateTime;                                              // 0x0358   (0x0008)  
	class UTextBlock*                                  LabelEmptySlot;                                             // 0x0360   (0x0008)  
	class UTextBlock*                                  LabelFilmReelsCount;                                        // 0x0368   (0x0008)  
	class UTextBlock*                                  LabelPinsCount;                                             // 0x0370   (0x0008)  
	class UPL_StyledTextBlock*                         LabelSlotName;                                              // 0x0378   (0x0008)  
	class UTextBlock*                                  LabelTicketsCount;                                          // 0x0380   (0x0008)  
	class UCircularThrobber*                           LoadingIndicator;                                           // 0x0388   (0x0008)  
	class UVerticalBox*                                PanelSlotContent;                                           // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.BndEvt__WBP_VS_RecCommandOptionListItem_BtnExecute_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_VS_RecCommandOptionListItem_BtnExecute_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.BndEvt__BtnExecute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnExecute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                          // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.OnDataChanged
	// void OnDataChanged();                                                                                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_SaveSlotListItem.WBP_SaveSlotListItem_C.ExecuteUbergraph_WBP_SaveSlotListItem
	// void ExecuteUbergraph_WBP_SaveSlotListItem(int32_t EntryPoint);                                                          // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestListItem.WBP_QuestListItem_C
/// Size: 0x02F8 (760 bytes) (0x0002C0 - 0x0002F8) align 8 MaxSize: 0x02F8
class UWBP_QuestListItem_C : public URecQuestMenuListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UWidgetAnimation*                            AnimSelect;                                                 // 0x02C8   (0x0008)  
	class UButton*                                     ButtonBase;                                                 // 0x02D0   (0x0008)  
	class UImage*                                      ImageBackUnselected;                                        // 0x02D8   (0x0008)  
	class UImage*                                      ImageFail;                                                  // 0x02E0   (0x0008)  
	class UImage*                                      ImageSuccess;                                               // 0x02E8   (0x0008)  
	class UHorizontalBox*                              PanelQuestGiver;                                            // 0x02F0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestListItem.WBP_QuestListItem_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestListItem.WBP_QuestListItem_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestListItem.WBP_QuestListItem_C.BndEvt__WBP_QuestListItem_ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_QuestListItem_ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();        // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestListItem.WBP_QuestListItem_C.SetVisualState
	// void SetVisualState(ERecQuestState InQuestState);                                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/PauseMenu/Quests/WBP_QuestListItem.WBP_QuestListItem_C.ExecuteUbergraph_WBP_QuestListItem
	// void ExecuteUbergraph_WBP_QuestListItem(int32_t EntryPoint);                                                             // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_TabListItem.WBP_TabListItem_C
/// Size: 0x02A8 (680 bytes) (0x000288 - 0x0002A8) align 8 MaxSize: 0x02A8
class UWBP_TabListItem_C : public URecTabListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0288   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0290   (0x0008)  
	class UButton*                                     ButtonTab;                                                  // 0x0298   (0x0008)  
	class UImage*                                      ImageBack;                                                  // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_TabListItem.WBP_TabListItem_C.OnTabSelected
	// void OnTabSelected();                                                                                                    // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_TabListItem.WBP_TabListItem_C.OnTabUnselected
	// void OnTabUnselected();                                                                                                  // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_TabListItem.WBP_TabListItem_C.BndEvt__WBP_TabListItem_ButtonTab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_TabListItem_ButtonTab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();           // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_TabListItem.WBP_TabListItem_C.ExecuteUbergraph_WBP_TabListItem
	// void ExecuteUbergraph_WBP_TabListItem(int32_t EntryPoint);                                                               // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/ControlSchemes/WBP_InputMappingOverlay.WBP_InputMappingOverlay_C
/// Size: 0x03A8 (936 bytes) (0x000378 - 0x0003A8) align 8 MaxSize: 0x03A8
class UWBP_InputMappingOverlay_C : public UPL_InputMappingsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0378   (0x0008)  
	class UTextBlock*                                  LabelGamepad;                                               // 0x0380   (0x0008)  
	class USizeBox*                                    PanelMouseKeyboard;                                         // 0x0388   (0x0008)  
	FKey                                               CurrentKey;                                                 // 0x0390   (0x0018)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ControlSchemes/WBP_InputMappingOverlay.WBP_InputMappingOverlay_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ControlSchemes/WBP_InputMappingOverlay.WBP_InputMappingOverlay_C.ExecuteUbergraph_WBP_InputMappingOverlay
	// void ExecuteUbergraph_WBP_InputMappingOverlay(int32_t EntryPoint);                                                       // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C
/// Size: 0x02D9 (729 bytes) (0x0002A0 - 0x0002D9) align 8 MaxSize: 0x02D9
class UWBP_PinListItem_C : public URecPinListItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x02A8   (0x0008)  
	class UWidgetAnimation*                            AnimSelect;                                                 // 0x02B0   (0x0008)  
	class UButton*                                     ButtonSelect;                                               // 0x02B8   (0x0008)  
	class UImage*                                      ImageSelection;                                             // 0x02C0   (0x0008)  
	class UNiagaraSystemWidget*                        ParticleSystem;                                             // 0x02C8   (0x0008)  
	class UPL_Delay*                                   Delay_Handle;                                               // 0x02D0   (0x0008)  
	bool                                               Was_Found;                                                  // 0x02D8   (0x0001)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.OnCancel_D8226E744CC70C50560AE9BCAAD47D50
	// void OnCancel_D8226E744CC70C50560AE9BCAAD47D50();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.OnCompleted_D8226E744CC70C50560AE9BCAAD47D50
	// void OnCompleted_D8226E744CC70C50560AE9BCAAD47D50();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.SetPinFound
	// void SetPinFound(bool bWasFound);                                                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.BndEvt__WBP_PinListItem_ButtonSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_PinListItem_ButtonSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();        // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.AnimateIn
	// void AnimateIn(float WaitTime);                                                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_PinListItem.WBP_PinListItem_C.ExecuteUbergraph_WBP_PinListItem
	// void ExecuteUbergraph_WBP_PinListItem(int32_t EntryPoint);                                                               // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/Overlays/WBP_Subtitles.WBP_Subtitles_C
/// Size: 0x0278 (632 bytes) (0x000278 - 0x000278) align 8 MaxSize: 0x0278
class UWBP_Subtitles_C : public UPL_SubtitlesWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Overlays/WBP_CustomSubtitles.WBP_CustomSubtitles_C
/// Size: 0x02C0 (704 bytes) (0x0002C0 - 0x0002C0) align 16 MaxSize: 0x02C0
class UWBP_CustomSubtitles_C : public UPL_CustomSubtitlesWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C
/// Size: 0x0379 (889 bytes) (0x000330 - 0x000379) align 8 MaxSize: 0x0379
class UWBP_CostumeListItem_C : public URecCostumeListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0338   (0x0008)  
	class UWidgetAnimation*                            AnimSelect;                                                 // 0x0340   (0x0008)  
	class UBackgroundBlur*                             BackgroundBlur;                                             // 0x0348   (0x0008)  
	class UButton*                                     ButtonSelect;                                               // 0x0350   (0x0008)  
	class UImage*                                      ImageEquipped;                                              // 0x0358   (0x0008)  
	class UImage*                                      ImageSelection;                                             // 0x0360   (0x0008)  
	class UNiagaraSystemWidget*                        ParticleSystem;                                             // 0x0368   (0x0008)  
	class UPL_Delay*                                   Delay_Handle;                                               // 0x0370   (0x0008)  
	bool                                               Was_Unlocked;                                               // 0x0378   (0x0001)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.ReceiveOnFocused
	// void ReceiveOnFocused(int32_t PlayerIndex, bool bPlaySound);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.ReceiveOnUnfocused
	// void ReceiveOnUnfocused(int32_t PlayerIndex, bool bPlaySound);                                                           // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.BndEvt__WBP_PinListItem_ButtonSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_PinListItem_ButtonSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();        // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.SetCostumeUnlocked
	// void SetCostumeUnlocked(bool bWasUnlocked, bool bIsDLCPurchasable);                                                      // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.SetCostumeEquipped
	// void SetCostumeEquipped(bool bWasEquipped);                                                                              // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.SetSelectedTint
	// void SetSelectedTint();                                                                                                  // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.SetUnselectedTint
	// void SetUnselectedTint();                                                                                                // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_CostumeListItem.WBP_CostumeListItem_C.ExecuteUbergraph_WBP_CostumeListItem
	// void ExecuteUbergraph_WBP_CostumeListItem(int32_t EntryPoint);                                                           // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/Paging/WBP_PaginatorListItem.WBP_PaginatorListItem_C
/// Size: 0x0298 (664 bytes) (0x000280 - 0x000298) align 8 MaxSize: 0x0298
class UWBP_PaginatorListItem_C : public URecPaginatorListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	class UButton*                                     ButtonSelect;                                               // 0x0288   (0x0008)  
	class UImage*                                      ImageBase;                                                  // 0x0290   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/Paging/WBP_PaginatorListItem.WBP_PaginatorListItem_C.BndEvt__WBP_PaginatorListItem_ButtonSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_PaginatorListItem_ButtonSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();  // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/Paging/WBP_PaginatorListItem.WBP_PaginatorListItem_C.ExecuteUbergraph_WBP_PaginatorListItem
	// void ExecuteUbergraph_WBP_PaginatorListItem(int32_t EntryPoint);                                                         // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C
/// Size: 0x0280 (640 bytes) (0x000260 - 0x000280) align 8 MaxSize: 0x0280
class UWBP_MenuListItemSelection_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x0268   (0x0008)  
	class UImage*                                      ImageMarker;                                                // 0x0270   (0x0008)  
	bool                                               IsShown;                                                    // 0x0278   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0279   (0x0003)  MISSED
	int32_t                                            RandSelection;                                              // 0x027C   (0x0004)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C.GetVisualState
	// EPL_WidgetVisualState GetVisualState();                                                                                  // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C.HideWithOnComplete
	// void HideWithOnComplete(FDelegateProperty& OnHiddenOnce, bool bUseAnimation);                                            // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C.ShowWithOnComplete
	// void ShowWithOnComplete(FDelegateProperty& OnShownOnce, bool bUseAnimation);                                             // [0x19ac1c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C.Show
	// void Show(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C.Hide
	// void Hide(bool bUseAnimation);                                                                                           // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MenuListItemSelection.WBP_MenuListItemSelection_C.ExecuteUbergraph_WBP_MenuListItemSelection
	// void ExecuteUbergraph_WBP_MenuListItemSelection(int32_t EntryPoint);                                                     // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/REC/UI/Widgets/SaveLoad/WBP_SaveGameContainerWidget.WBP_SaveGameContainerWidget_C
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 8 MaxSize: 0x0340
class UWBP_SaveGameContainerWidget_C : public UPL_SaveGameSlotsContainerWidget
{ 
public:
};

/// Class /Game/REC/UI/Widgets/Options/WBP_MenuOptionsContainer.WBP_MenuOptionsContainer_C
/// Size: 0x0330 (816 bytes) (0x000330 - 0x000330) align 8 MaxSize: 0x0330
class UWBP_MenuOptionsContainer_C : public UPL_DynamicOptionsContainerWidget
{ 
public:


	/// Functions
	// Function /Game/REC/UI/Widgets/Options/WBP_MenuOptionsContainer.WBP_MenuOptionsContainer_C.GetWidgetTabLabel
	// FText GetWidgetTabLabel();                                                                                               // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/REC/UI/Styles/BP_QuestUnselectedTitleTextStyle.BP_QuestUnselectedTitleTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_QuestUnselectedTitleTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_TabListItemsSelectedTextStyle.BP_TabListItemsSelectedTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_TabListItemsSelectedTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_MenuListItemsSelectedTextStyle.BP_MenuListItemsSelectedTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_MenuListItemsSelectedTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_MenuListItemsTextStyle.BP_MenuListItemsTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_MenuListItemsTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_QuestSelectedTitleTextStyle.BP_QuestSelectedTitleTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_QuestSelectedTitleTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_TabListItemsTextStyle.BP_TabListItemsTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_TabListItemsTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_MapPOIListItem.WBP_MapPOIListItem_C
/// Size: 0x02F0 (752 bytes) (0x0002E0 - 0x0002F0) align 8 MaxSize: 0x02F0
class UWBP_MapPOIListItem_C : public URecMapPOIListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)  
	class UWidgetAnimation*                            AnimShow;                                                   // 0x02E8   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MapPOIListItem.WBP_MapPOIListItem_C.OnPOIDataSet
	// void OnPOIDataSet();                                                                                                     // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_MapPOIListItem.WBP_MapPOIListItem_C.ExecuteUbergraph_WBP_MapPOIListItem
	// void ExecuteUbergraph_WBP_MapPOIListItem(int32_t EntryPoint);                                                            // [0x19ac1c0] Final                
};

/// Class /Game/REC/Environments/0_Shared/Projectile/BP_MickeyBrushThinProjectile.BP_MickeyBrushThinProjectile_C
/// Size: 0x03A8 (936 bytes) (0x0003A8 - 0x0003A8) align 8 MaxSize: 0x03A8
class ABP_MickeyBrushThinProjectile_C : public ARecPaintProjectile
{ 
public:
};

/// Class /Game/REC/Environments/0_Shared/Projectile/BP_MickeyBrushPaintProjectile.BP_MickeyBrushPaintProjectile_C
/// Size: 0x03A8 (936 bytes) (0x0003A8 - 0x0003A8) align 8 MaxSize: 0x03A8
class ABP_MickeyBrushPaintProjectile_C : public ARecPaintProjectile
{ 
public:
};

/// Class /Game/REC/UI/InputComponents/BP_CostumeMenuInputComponent.BP_CostumeMenuInputComponent_C
/// Size: 0x0228 (552 bytes) (0x000228 - 0x000228) align 8 MaxSize: 0x0228
class UBP_CostumeMenuInputComponent_C : public UBP_GenericMenuInputComponent_C
{ 
public:
};

/// Class /Game/REC/UI/InputComponents/BP_RemappingInputComponent.BP_RemappingInputComponent_C
/// Size: 0x0228 (552 bytes) (0x000228 - 0x000228) align 8 MaxSize: 0x0228
class UBP_RemappingInputComponent_C : public UPL_GenericMenuInputComponent
{ 
public:
};

/// Class /Game/REC/UI/InputComponents/BP_CutsceneInputComponent.BP_CutsceneInputComponent_C
/// Size: 0x0158 (344 bytes) (0x000158 - 0x000158) align 8 MaxSize: 0x0158
class UBP_CutsceneInputComponent_C : public URecCutsceneInputComponent
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_HeaderTextStyle.BP_HeaderTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_HeaderTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_ParagraphTextStyle.BP_ParagraphTextStyle_C
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBP_ParagraphTextStyle_C : public UPL_TextStyleBaseDefinition
{ 
public:
};

/// Class /Game/REC/UI/Styles/BP_RecRichTextImageDecoratorMenu.BP_RecRichTextImageDecoratorMenu_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UBP_RecRichTextImageDecoratorMenu_C : public URecRichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/REC/Characters/Mickey/Brush/BP_Mickey_PaintBrush.BP_Mickey_PaintBrush_C
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align 8 MaxSize: 0x02F0
class ABP_Mickey_PaintBrush_C : public ARecWeapon
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C8   (0x0008)  
	class USkeletalMeshComponent*                      Silhouette;                                                 // 0x02D0   (0x0008)  
	class URecPaintShootOrigin*                        PaintShootOrigin;                                           // 0x02D8   (0x0008)  
	class USphereComponent*                            SphereCollision;                                            // 0x02E0   (0x0008)  
	class USkeletalMeshComponent*                      SK_Mickey_Brush;                                            // 0x02E8   (0x0008)  


	/// Functions
	// Function /Game/REC/Characters/Mickey/Brush/BP_Mickey_PaintBrush.BP_Mickey_PaintBrush_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/Characters/Mickey/Brush/BP_Mickey_PaintBrush.BP_Mickey_PaintBrush_C.ExecuteUbergraph_BP_Mickey_PaintBrush
	// void ExecuteUbergraph_BP_Mickey_PaintBrush(int32_t EntryPoint);                                                          // [0x19ac1c0] Final                
};

/// Class /Game/REC/Environments/0_Shared/Collectables/PowerSpark/BP_Collectable_PowerSpark.BP_Collectable_PowerSpark_C
/// Size: 0x0308 (776 bytes) (0x0002F9 - 0x000308) align 8 MaxSize: 0x0308
class ABP_Collectable_PowerSpark_C : public ABP_PersistentInventoryCollectable_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x02F9   (0x0007)  MISSED
	class UNiagaraComponent*                           NS_PickUp_PowerSpark;                                       // 0x0300   (0x0008)  
};

/// Class /Game/REC/Environments/0_Shared/Collectables/Tickets/BP_Base_Ticket_Spawned.BP_Base_Ticket_Spawned_C
/// Size: 0x0324 (804 bytes) (0x0002F9 - 0x000324) align 8 MaxSize: 0x0324
class ABP_Base_Ticket_Spawned_C : public ABP_PersistentInventoryCollectable_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x7];                                       // 0x02F9   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	class UBP_CollectableMovementComponent_C*          BP_CollectableMovementComponent;                            // 0x0308   (0x0008)  
	class UBP_SpawnInComponent_C*                      BP_SpawnInComponent;                                        // 0x0310   (0x0008)  
	class UBP_FadeOutComponent_C*                      BP_FadeOutComponent;                                        // 0x0318   (0x0008)  
	float                                              horizontalSpawnVFXOffset;                                   // 0x0320   (0x0004)  


	/// Functions
	// Function /Game/REC/Environments/0_Shared/Collectables/Tickets/BP_Base_Ticket_Spawned.BP_Base_Ticket_Spawned_C.ExecuteUbergraph_BP_Base_Ticket_Spawned
	// void ExecuteUbergraph_BP_Base_Ticket_Spawned(int32_t EntryPoint);                                                        // [0x19ac1c0] Final                
};

/// Class /Game/REC/Environments/0_Shared/Collectables/Tickets/BP_Gold_Ticket_Spawned.BP_Gold_Ticket_Spawned_C
/// Size: 0x0324 (804 bytes) (0x000324 - 0x000324) align 8 MaxSize: 0x0324
class ABP_Gold_Ticket_Spawned_C : public ABP_Base_Ticket_Spawned_C
{ 
public:
};

/// Class /Game/REC/Environments/0_Shared/Collectables/Tickets/BP_Red_Ticket_Spawned.BP_Red_Ticket_Spawned_C
/// Size: 0x0324 (804 bytes) (0x000324 - 0x000324) align 8 MaxSize: 0x0324
class ABP_Red_Ticket_Spawned_C : public ABP_Base_Ticket_Spawned_C
{ 
public:
};

/// Class /Game/REC/Environments/0_Shared/Collectables/Tickets/BP_Green_Ticket_Spawned.BP_Green_Ticket_Spawned_C
/// Size: 0x0324 (804 bytes) (0x000324 - 0x000324) align 8 MaxSize: 0x0324
class ABP_Green_Ticket_Spawned_C : public ABP_Base_Ticket_Spawned_C
{ 
public:
};

/// Class /Game/REC/Environments/0_Shared/Collectables/Tickets/BP_Blue_Ticket_Spawned.BP_Blue_Ticket_Spawned_C
/// Size: 0x0324 (804 bytes) (0x000324 - 0x000324) align 8 MaxSize: 0x0324
class ABP_Blue_Ticket_Spawned_C : public ABP_Base_Ticket_Spawned_C
{ 
public:
};

/// Class /Game/REC/Core/VFXInitialization/BP_VFXInitializer_MainMenu.BP_VFXInitializer_MainMenu_C
/// Size: 0x02B4 (692 bytes) (0x000288 - 0x0002B4) align 8 MaxSize: 0x02B4
class ABP_VFXInitializer_MainMenu_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0288   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0290   (0x0008)  
	TArray<class UNiagaraSystem*>                      NiagaraSystemsToInitialize;                                 // 0x0298   (0x0010)  
	FVector                                            _spawnLocation;                                             // 0x02A8   (0x000C)  


	/// Functions
	// Function /Game/REC/Core/VFXInitialization/BP_VFXInitializer_MainMenu.BP_VFXInitializer_MainMenu_C.SpawnAllNiagaraSystems
	// void SpawnAllNiagaraSystems();                                                                                           // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/REC/Core/VFXInitialization/BP_VFXInitializer_MainMenu.BP_VFXInitializer_MainMenu_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/Core/VFXInitialization/BP_VFXInitializer_MainMenu.BP_VFXInitializer_MainMenu_C.ExecuteUbergraph_BP_VFXInitializer_MainMenu
	// void ExecuteUbergraph_BP_VFXInitializer_MainMenu(int32_t EntryPoint);                                                    // [0x19ac1c0] Final                
};

/// Class /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C
/// Size: 0x0328 (808 bytes) (0x000310 - 0x000328) align 8 MaxSize: 0x0328
class UWBP_RecCommandOptionListItem_C : public UPL_CommandOptionListItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UButton*                                     BtnExecute;                                                 // 0x0318   (0x0008)  
	class UWBP_MenuListItemSelection_C*                ItemSelection;                                              // 0x0320   (0x0008)  


	/// Functions
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.BndEvt__WBP_VS_RecCommandOptionListItem_BtnExecute_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_VS_RecCommandOptionListItem_BtnExecute_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.BndEvt__BtnExecute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnExecute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                          // [0x19ac1c0] BlueprintEvent       
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.OnFocused
	// void OnFocused(bool bPlaySound);                                                                                         // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.OnUnfocused
	// void OnUnfocused();                                                                                                      // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.SetVisualState
	// void SetVisualState(EPL_OptionListItemVisualState VisualState);                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/REC/UI/Widgets/ListElements/WBP_RecCommandOptionListItem.WBP_RecCommandOptionListItem_C.ExecuteUbergraph_WBP_RecCommandOptionListItem
	// void ExecuteUbergraph_WBP_RecCommandOptionListItem(int32_t EntryPoint);                                                  // [0x19ac1c0] Final                
};

#pragma pack(pop)


static_assert(sizeof(UWBP_GameCursor_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UBP_CommandsListItemsTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_RecRichTextImageDecorator_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UWBP_RecDialogueResponseWidget_C) == 0x02A0); // 672 bytes (0x000270 - 0x0002A0)
static_assert(sizeof(UWBP_DialogueBase_C) == 0x0318); // 792 bytes (0x000300 - 0x000318)
static_assert(sizeof(UWBP_DialogueHud_C) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(sizeof(UWBP_NonInteractiveDialogueHud_C) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(sizeof(UWBP_BarkBaseWidget_C) == 0x0318); // 792 bytes (0x000300 - 0x000318)
static_assert(sizeof(UWBP_DialogueBarkHud_C) == 0x03C0); // 960 bytes (0x000390 - 0x0003C0)
static_assert(sizeof(UBP_RecSaveGameUpgradeData_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UWBP_SaveIndicator_C) == 0x028A); // 650 bytes (0x000260 - 0x00028A)
static_assert(sizeof(UWBP_CommandListItemWidget_C) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(UBP_PopupCommandsListItemsTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UWBP_CommandsListWidget_C) == 0x02A0); // 672 bytes (0x0002A0 - 0x0002A0)
static_assert(sizeof(UWBP_CommandListItemPopupWidget_C) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(UWBP_PopupDialogue_C) == 0x0331); // 817 bytes (0x000308 - 0x000331)
static_assert(sizeof(UBP_GenericMenuInputComponent_C) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(ABP_PhotoModeActor_C) == 0x0418); // 1048 bytes (0x000418 - 0x000418)
static_assert(sizeof(UWBP_InputAxis_C) == 0x0279); // 633 bytes (0x000260 - 0x000279)
static_assert(sizeof(UWBP_InputIcons_C) == 0x027C); // 636 bytes (0x000260 - 0x00027C)
static_assert(sizeof(UWBP_InputIcon_C) == 0x0278); // 632 bytes (0x000260 - 0x000278)
static_assert(sizeof(UWBP_PhotoModeOverlay_C) == 0x0360); // 864 bytes (0x000260 - 0x000360)
static_assert(sizeof(UWBP_PhotomodeBlockedOverlay_C) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UBP_RecUserSettingsSaveGame_C) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UBP_CombatIntensityChanged_C) == 0x0098); // 152 bytes (0x000038 - 0x000098)
static_assert(sizeof(UBP_PaintThinnerRatioChanged_C) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UBP_GuardiansChanged_C) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UBP_MoralityChanged_C) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UWBP_DialogueThemedPrompt_C) == 0x0378); // 888 bytes (0x000368 - 0x000378)
static_assert(sizeof(AMainMenu_C) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UBP_TabbedMenuInputComponent_C) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UWBP_MainMenuWidget_C) == 0x03B8); // 952 bytes (0x000368 - 0x0003B8)
static_assert(sizeof(UWBP_MainMenuOptionsContainerWidget_C) == 0x0370); // 880 bytes (0x000360 - 0x000370)
static_assert(sizeof(UWBP_PauseMenuOptionsContainerWidget_C) == 0x0370); // 880 bytes (0x000360 - 0x000370)
static_assert(sizeof(UWBP_ControlSchemeBase_C) == 0x03E0); // 992 bytes (0x0003C8 - 0x0003E0)
static_assert(sizeof(UWBP_PauseMenuWidget_C) == 0x0340); // 832 bytes (0x0002F8 - 0x000340)
static_assert(sizeof(UWBP_ActivityIndicator_C) == 0x0270); // 624 bytes (0x000260 - 0x000270)
static_assert(sizeof(UWBP_OverviewWidget_C) == 0x04E8); // 1256 bytes (0x0004A0 - 0x0004E8)
static_assert(sizeof(UWBP_PinsCollectionWidget_C) == 0x0418); // 1048 bytes (0x0003E0 - 0x000418)
static_assert(sizeof(UWBP_CreditsViewer_C) == 0x0398); // 920 bytes (0x000340 - 0x000398)
static_assert(sizeof(UWBP_Guardians_C) == 0x0338); // 824 bytes (0x000320 - 0x000338)
static_assert(sizeof(UWBP_QuestsWidget_C) == 0x0410); // 1040 bytes (0x0003D8 - 0x000410)
static_assert(sizeof(UWBP_LoadingScreen_C) == 0x0320); // 800 bytes (0x0002F0 - 0x000320)
static_assert(sizeof(UWBP_ExtrasWidget_C) == 0x0398); // 920 bytes (0x000388 - 0x000398)
static_assert(sizeof(UWBP_HealthBar_C) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UWBP_LoadCinemaMenuWidget_C) == 0x0388); // 904 bytes (0x000388 - 0x000388)
static_assert(sizeof(UWBP_LoadGameMenuWidget_C) == 0x0388); // 904 bytes (0x000388 - 0x000388)
static_assert(sizeof(UWBP_NewGameMenuWidget_C) == 0x0388); // 904 bytes (0x000388 - 0x000388)
static_assert(sizeof(UWBP_TabsHeaderWidget_C) == 0x0350); // 848 bytes (0x000328 - 0x000350)
static_assert(sizeof(UWBP_MediaPlayer_C) == 0x03F8); // 1016 bytes (0x0003D8 - 0x0003F8)
static_assert(sizeof(UWBP_CostumesWidget_C) == 0x03C8); // 968 bytes (0x0003B8 - 0x0003C8)
static_assert(sizeof(UWBP_PaginatorWidget_C) == 0x02A8); // 680 bytes (0x0002A0 - 0x0002A8)
static_assert(sizeof(UBP_CreditsImageDecorator_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWBP_GuardianPoint_C) == 0x0290); // 656 bytes (0x000268 - 0x000290)
static_assert(sizeof(UWBP_InputActionListItem_C) == 0x08C8); // 2248 bytes (0x000380 - 0x0008C8)
static_assert(sizeof(UWBP_QuestItemListItem_C) == 0x0280); // 640 bytes (0x000270 - 0x000280)
static_assert(sizeof(UWBP_ExtraContentEntryWidget_C) == 0x0340); // 832 bytes (0x0002F8 - 0x000340)
static_assert(sizeof(UWBP_HealthPoint_C) == 0x0298); // 664 bytes (0x000278 - 0x000298)
static_assert(sizeof(UWBP_OverviewInventoryWidget_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UWBP_CinemaSlotListItem_C) == 0x0398); // 920 bytes (0x000328 - 0x000398)
static_assert(sizeof(UWBP_SaveSlotListItem_C) == 0x0398); // 920 bytes (0x000328 - 0x000398)
static_assert(sizeof(UWBP_QuestListItem_C) == 0x02F8); // 760 bytes (0x0002C0 - 0x0002F8)
static_assert(sizeof(UWBP_TabListItem_C) == 0x02A8); // 680 bytes (0x000288 - 0x0002A8)
static_assert(sizeof(UWBP_InputMappingOverlay_C) == 0x03A8); // 936 bytes (0x000378 - 0x0003A8)
static_assert(sizeof(UWBP_PinListItem_C) == 0x02D9); // 729 bytes (0x0002A0 - 0x0002D9)
static_assert(sizeof(UWBP_Subtitles_C) == 0x0278); // 632 bytes (0x000278 - 0x000278)
static_assert(sizeof(UWBP_CustomSubtitles_C) == 0x02C0); // 704 bytes (0x0002C0 - 0x0002C0)
static_assert(sizeof(UWBP_CostumeListItem_C) == 0x0379); // 889 bytes (0x000330 - 0x000379)
static_assert(sizeof(UWBP_PaginatorListItem_C) == 0x0298); // 664 bytes (0x000280 - 0x000298)
static_assert(sizeof(UWBP_MenuListItemSelection_C) == 0x0280); // 640 bytes (0x000260 - 0x000280)
static_assert(sizeof(UWBP_SaveGameContainerWidget_C) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(UWBP_MenuOptionsContainer_C) == 0x0330); // 816 bytes (0x000330 - 0x000330)
static_assert(sizeof(UBP_QuestUnselectedTitleTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_TabListItemsSelectedTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_MenuListItemsSelectedTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_MenuListItemsTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_QuestSelectedTitleTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_TabListItemsTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UWBP_MapPOIListItem_C) == 0x02F0); // 752 bytes (0x0002E0 - 0x0002F0)
static_assert(sizeof(ABP_MickeyBrushThinProjectile_C) == 0x03A8); // 936 bytes (0x0003A8 - 0x0003A8)
static_assert(sizeof(ABP_MickeyBrushPaintProjectile_C) == 0x03A8); // 936 bytes (0x0003A8 - 0x0003A8)
static_assert(sizeof(UBP_CostumeMenuInputComponent_C) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UBP_RemappingInputComponent_C) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UBP_CutsceneInputComponent_C) == 0x0158); // 344 bytes (0x000158 - 0x000158)
static_assert(sizeof(UBP_HeaderTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_ParagraphTextStyle_C) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBP_RecRichTextImageDecoratorMenu_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(ABP_Mickey_PaintBrush_C) == 0x02F0); // 752 bytes (0x0002C8 - 0x0002F0)
static_assert(sizeof(ABP_Collectable_PowerSpark_C) == 0x0308); // 776 bytes (0x0002F9 - 0x000308)
static_assert(sizeof(ABP_Base_Ticket_Spawned_C) == 0x0324); // 804 bytes (0x0002F9 - 0x000324)
static_assert(sizeof(ABP_Gold_Ticket_Spawned_C) == 0x0324); // 804 bytes (0x000324 - 0x000324)
static_assert(sizeof(ABP_Red_Ticket_Spawned_C) == 0x0324); // 804 bytes (0x000324 - 0x000324)
static_assert(sizeof(ABP_Green_Ticket_Spawned_C) == 0x0324); // 804 bytes (0x000324 - 0x000324)
static_assert(sizeof(ABP_Blue_Ticket_Spawned_C) == 0x0324); // 804 bytes (0x000324 - 0x000324)
static_assert(sizeof(ABP_VFXInitializer_MainMenu_C) == 0x02B4); // 692 bytes (0x000288 - 0x0002B4)
static_assert(sizeof(UWBP_RecCommandOptionListItem_C) == 0x0328); // 808 bytes (0x000310 - 0x000328)
static_assert(offsetof(UWBP_RecDialogueResponseWidget_C, UberGraphFrame) == 0x0270);
static_assert(offsetof(UWBP_RecDialogueResponseWidget_C, AnimHighlightAndHide) == 0x0278);
static_assert(offsetof(UWBP_RecDialogueResponseWidget_C, AnimShow) == 0x0280);
static_assert(offsetof(UWBP_RecDialogueResponseWidget_C, HorizontalBox) == 0x0288);
static_assert(offsetof(UWBP_RecDialogueResponseWidget_C, ImageIcon) == 0x0290);
static_assert(offsetof(UWBP_RecDialogueResponseWidget_C, Overlay) == 0x0298);
static_assert(offsetof(UWBP_DialogueBase_C, UberGraphFrame) == 0x0300);
static_assert(offsetof(UWBP_DialogueBase_C, AnimTalk) == 0x0308);
static_assert(offsetof(UWBP_DialogueBase_C, AnimShow) == 0x0310);
static_assert(offsetof(UWBP_BarkBaseWidget_C, UberGraphFrame) == 0x0300);
static_assert(offsetof(UWBP_BarkBaseWidget_C, AnimTalk) == 0x0308);
static_assert(offsetof(UWBP_BarkBaseWidget_C, AnimShow) == 0x0310);
static_assert(offsetof(UWBP_DialogueBarkHud_C, UberGraphFrame) == 0x0390);
static_assert(offsetof(UWBP_DialogueBarkHud_C, ShowAnimation) == 0x0398);
static_assert(offsetof(UWBP_DialogueBarkHud_C, HideAnimation) == 0x03A0);
static_assert(offsetof(UWBP_DialogueBarkHud_C, ShowAnimation0) == 0x03A8);
static_assert(offsetof(UWBP_SaveIndicator_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_SaveIndicator_C, AnimHide) == 0x0268);
static_assert(offsetof(UWBP_SaveIndicator_C, AnimShow) == 0x0270);
static_assert(offsetof(UWBP_SaveIndicator_C, ImageSpinner) == 0x0278);
static_assert(offsetof(UWBP_SaveIndicator_C, ParticlesFX) == 0x0280);
static_assert(offsetof(UWBP_CommandListItemWidget_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(UWBP_CommandListItemWidget_C, ImageAction) == 0x0298);
static_assert(offsetof(UWBP_CommandListItemWidget_C, LabelCommand) == 0x02A0);
static_assert(offsetof(UWBP_CommandListItemPopupWidget_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(UWBP_CommandListItemPopupWidget_C, ImageAction) == 0x0298);
static_assert(offsetof(UWBP_CommandListItemPopupWidget_C, LabelCommand) == 0x02A0);
static_assert(offsetof(UWBP_PopupDialogue_C, UberGraphFrame) == 0x0308);
static_assert(offsetof(UWBP_PopupDialogue_C, AnimShow) == 0x0310);
static_assert(offsetof(UWBP_PopupDialogue_C, CommandList) == 0x0318);
static_assert(offsetof(UWBP_PopupDialogue_C, LabelPopupText) == 0x0320);
static_assert(offsetof(UWBP_PopupDialogue_C, LabelPopupTitle) == 0x0328);
static_assert(offsetof(UWBP_InputAxis_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_InputAxis_C, Layout) == 0x0268);
static_assert(offsetof(UWBP_InputAxis_C, Axis_Name) == 0x0270);
static_assert(offsetof(UWBP_InputIcons_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_InputIcons_C, Layout) == 0x0268);
static_assert(offsetof(UWBP_InputIcons_C, Action_Name) == 0x0270);
static_assert(offsetof(UWBP_InputIcon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_InputIcon_C, ImageIcon) == 0x0268);
static_assert(offsetof(UWBP_InputIcon_C, Action_Name) == 0x0270);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, CameraCrosshair) == 0x0268);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, ControlsLegendBox) == 0x0270);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, FilterName) == 0x0278);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, FilterNameBorder) == 0x0280);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, MoveIcon) == 0x0288);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, MoveImage) == 0x0290);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, MoveLabel) == 0x0298);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, ResetIcon) == 0x02A0);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, ResetLabel) == 0x02A8);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, RollIcon) == 0x02B0);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, RollLabel) == 0x02B8);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, RotateIcon) == 0x02C0);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, RotateImage) == 0x02C8);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, RotateLabel) == 0x02D0);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, UpDownIcon) == 0x02D8);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, UpDownLabel) == 0x02E0);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, ZoomIcon) == 0x02E8);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, ZoomLabel) == 0x02F0);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, MoveKey) == 0x02F8);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, RotateKey) == 0x0310);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, Photo_Mode_Actor) == 0x0328);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, DefaultFilterText) == 0x0330);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, ShowOverlay) == 0x0348);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, HideOverlay) == 0x0350);
static_assert(offsetof(UWBP_PhotoModeOverlay_C, SteamDeckScale) == 0x0358);
static_assert(offsetof(UWBP_PhotomodeBlockedOverlay_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_PhotomodeBlockedOverlay_C, AnimHide) == 0x0268);
static_assert(offsetof(UWBP_PhotomodeBlockedOverlay_C, AnimShow) == 0x0270);
static_assert(offsetof(UWBP_PhotomodeBlockedOverlay_C, Image) == 0x0278);
static_assert(offsetof(UWBP_PhotomodeBlockedOverlay_C, AutoHideTimerHandle) == 0x0288);
static_assert(offsetof(UBP_CombatIntensityChanged_C, UberGraphFrame) == 0x0038);
static_assert(offsetof(UBP_CombatIntensityChanged_C, EnemyCombatIntensityValues) == 0x0048);
static_assert(offsetof(UBP_PaintThinnerRatioChanged_C, UberGraphFrame) == 0x0038);
static_assert(offsetof(UBP_GuardiansChanged_C, UberGraphFrame) == 0x0038);
static_assert(offsetof(UBP_GuardiansChanged_C, MoralityParameterName) == 0x0040);
static_assert(offsetof(UBP_MoralityChanged_C, UberGraphFrame) == 0x0038);
static_assert(offsetof(UBP_MoralityChanged_C, MoralityParameterName) == 0x0040);
static_assert(offsetof(UBP_MoralityChanged_C, MoralityMusicParameterName) == 0x0048);
static_assert(offsetof(UWBP_DialogueThemedPrompt_C, ListResponses) == 0x0368);
static_assert(offsetof(UWBP_DialogueThemedPrompt_C, RootPanel) == 0x0370);
static_assert(offsetof(UWBP_MainMenuWidget_C, UberGraphFrame) == 0x0368);
static_assert(offsetof(UWBP_MainMenuWidget_C, AnimMenu) == 0x0370);
static_assert(offsetof(UWBP_MainMenuWidget_C, AnimPress) == 0x0378);
static_assert(offsetof(UWBP_MainMenuWidget_C, DebugOverlay) == 0x0380);
static_assert(offsetof(UWBP_MainMenuWidget_C, Image) == 0x0388);
static_assert(offsetof(UWBP_MainMenuWidget_C, Image0) == 0x0390);
static_assert(offsetof(UWBP_MainMenuWidget_C, ImageSplash) == 0x0398);
static_assert(offsetof(UWBP_MainMenuWidget_C, LabelCL) == 0x03A0);
static_assert(offsetof(UWBP_MainMenuWidget_C, LabelPress) == 0x03A8);
static_assert(offsetof(UWBP_MainMenuWidget_C, ParticleSystem) == 0x03B0);
static_assert(offsetof(UWBP_MainMenuOptionsContainerWidget_C, UberGraphFrame) == 0x0360);
static_assert(offsetof(UWBP_PauseMenuOptionsContainerWidget_C, UberGraphFrame) == 0x0360);
static_assert(offsetof(UWBP_PauseMenuOptionsContainerWidget_C, AnimShow) == 0x0368);
static_assert(offsetof(UWBP_ControlSchemeBase_C, UberGraphFrame) == 0x03C8);
static_assert(offsetof(UWBP_ControlSchemeBase_C, LabelHeader) == 0x03D0);
static_assert(offsetof(UWBP_ControlSchemeBase_C, PanelHeader) == 0x03D8);
static_assert(offsetof(UWBP_PauseMenuWidget_C, UberGraphFrame) == 0x02F8);
static_assert(offsetof(UWBP_PauseMenuWidget_C, AnimShow) == 0x0300);
static_assert(offsetof(UWBP_PauseMenuWidget_C, background_image) == 0x0308);
static_assert(offsetof(UWBP_PauseMenuWidget_C, Image) == 0x0310);
static_assert(offsetof(UWBP_PauseMenuWidget_C, LabelDebugMessage) == 0x0318);
static_assert(offsetof(UWBP_PauseMenuWidget_C, PanelExtras) == 0x0320);
static_assert(offsetof(UWBP_PauseMenuWidget_C, PanelOverview) == 0x0328);
static_assert(offsetof(UWBP_PauseMenuWidget_C, PanelPins) == 0x0330);
static_assert(offsetof(UWBP_PauseMenuWidget_C, PanelQuests) == 0x0338);
static_assert(offsetof(UWBP_ActivityIndicator_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_ActivityIndicator_C, ImageGuardians) == 0x0268);
static_assert(offsetof(UWBP_OverviewWidget_C, UberGraphFrame) == 0x04A0);
static_assert(offsetof(UWBP_OverviewWidget_C, AnimShow) == 0x04A8);
static_assert(offsetof(UWBP_OverviewWidget_C, FilmReelsCounter) == 0x04B0);
static_assert(offsetof(UWBP_OverviewWidget_C, Image) == 0x04B8);
static_assert(offsetof(UWBP_OverviewWidget_C, ImageBackSelected) == 0x04C0);
static_assert(offsetof(UWBP_OverviewWidget_C, ImageMainQuestTag) == 0x04C8);
static_assert(offsetof(UWBP_OverviewWidget_C, PanelScroll) == 0x04D0);
static_assert(offsetof(UWBP_OverviewWidget_C, TicketsCounter) == 0x04D8);
static_assert(offsetof(UWBP_OverviewWidget_C, WBP_Guardians) == 0x04E0);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, UberGraphFrame) == 0x03E0);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, AnimLabels) == 0x03E8);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, AnimShow) == 0x03F0);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, ButtonNextPage) == 0x03F8);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, ButtonPrevPage) == 0x0400);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, ImageNextPage) == 0x0408);
static_assert(offsetof(UWBP_PinsCollectionWidget_C, ImagePrevPage) == 0x0410);
static_assert(offsetof(UWBP_CreditsViewer_C, UberGraphFrame) == 0x0340);
static_assert(offsetof(UWBP_CreditsViewer_C, AnimArtFadeOut) == 0x0348);
static_assert(offsetof(UWBP_CreditsViewer_C, AnimArtFadeIn) == 0x0350);
static_assert(offsetof(UWBP_CreditsViewer_C, ButtonSkip) == 0x0358);
static_assert(offsetof(UWBP_CreditsViewer_C, ImageHalfBlack) == 0x0360);
static_assert(offsetof(UWBP_CreditsViewer_C, ImageMask) == 0x0368);
static_assert(offsetof(UWBP_CreditsViewer_C, ImageSkipProgress) == 0x0370);
static_assert(offsetof(UWBP_CreditsViewer_C, PanelMask) == 0x0378);
static_assert(offsetof(UWBP_CreditsViewer_C, CreditsAudioEvent) == 0x0390);
static_assert(offsetof(UWBP_Guardians_C, UberGraphFrame) == 0x0320);
static_assert(offsetof(UWBP_Guardians_C, ImagePaintGlass) == 0x0328);
static_assert(offsetof(UWBP_Guardians_C, ImageThinnerGlass) == 0x0330);
static_assert(offsetof(UWBP_QuestsWidget_C, UberGraphFrame) == 0x03D8);
static_assert(offsetof(UWBP_QuestsWidget_C, AnimShow) == 0x03E0);
static_assert(offsetof(UWBP_QuestsWidget_C, ButtonInProgress) == 0x03E8);
static_assert(offsetof(UWBP_QuestsWidget_C, ImageNextCategory) == 0x03F0);
static_assert(offsetof(UWBP_QuestsWidget_C, ImagePrevCategory) == 0x03F8);
static_assert(offsetof(UWBP_QuestsWidget_C, LabelQuestsType) == 0x0400);
static_assert(offsetof(UWBP_QuestsWidget_C, PanelContent) == 0x0408);
static_assert(offsetof(UWBP_LoadingScreen_C, UberGraphFrame) == 0x02F0);
static_assert(offsetof(UWBP_LoadingScreen_C, Hide) == 0x02F8);
static_assert(offsetof(UWBP_LoadingScreen_C, Show) == 0x0300);
static_assert(offsetof(UWBP_LoadingScreen_C, ActivityIndicator) == 0x0308);
static_assert(offsetof(UWBP_LoadingScreen_C, Overlay) == 0x0310);
static_assert(offsetof(UWBP_LoadingScreen_C, FMOD_Snapshot) == 0x0318);
static_assert(offsetof(UWBP_ExtrasWidget_C, UberGraphFrame) == 0x0388);
static_assert(offsetof(UWBP_ExtrasWidget_C, AnimShow) == 0x0390);
static_assert(offsetof(UWBP_TabsHeaderWidget_C, UberGraphFrame) == 0x0328);
static_assert(offsetof(UWBP_TabsHeaderWidget_C, ButtonScrollLeft) == 0x0330);
static_assert(offsetof(UWBP_TabsHeaderWidget_C, ButtonScrollRight) == 0x0338);
static_assert(offsetof(UWBP_TabsHeaderWidget_C, ImageScrollLeft) == 0x0340);
static_assert(offsetof(UWBP_TabsHeaderWidget_C, ImageScrollRight) == 0x0348);
static_assert(offsetof(UWBP_MediaPlayer_C, UberGraphFrame) == 0x03D8);
static_assert(offsetof(UWBP_MediaPlayer_C, ButtonSkip) == 0x03E0);
static_assert(offsetof(UWBP_MediaPlayer_C, ImageSkipProgress) == 0x03E8);
static_assert(offsetof(UWBP_MediaPlayer_C, NewVar) == 0x03F0);
static_assert(offsetof(UWBP_CostumesWidget_C, UberGraphFrame) == 0x03B8);
static_assert(offsetof(UWBP_CostumesWidget_C, AnimShow) == 0x03C0);
static_assert(offsetof(UWBP_PaginatorWidget_C, UberGraphFrame) == 0x02A0);
static_assert(offsetof(UWBP_GuardianPoint_C, UberGraphFrame) == 0x0268);
static_assert(offsetof(UWBP_GuardianPoint_C, AnimActive) == 0x0270);
static_assert(offsetof(UWBP_GuardianPoint_C, ImageGuardian) == 0x0278);
static_assert(offsetof(UWBP_GuardianPoint_C, PanelGuardian) == 0x0280);
static_assert(offsetof(UWBP_GuardianPoint_C, Particles) == 0x0288);
static_assert(offsetof(UWBP_InputActionListItem_C, UberGraphFrame) == 0x0380);
static_assert(offsetof(UWBP_InputActionListItem_C, BtnSelect) == 0x0388);
static_assert(offsetof(UWBP_InputActionListItem_C, GamepadListening) == 0x0390);
static_assert(offsetof(UWBP_InputActionListItem_C, ImageModified) == 0x0398);
static_assert(offsetof(UWBP_InputActionListItem_C, ImgButtonIcon) == 0x03A0);
static_assert(offsetof(UWBP_InputActionListItem_C, ImgKeyboardIcon) == 0x03A8);
static_assert(offsetof(UWBP_InputActionListItem_C, ItemSelection) == 0x03B0);
static_assert(offsetof(UWBP_InputActionListItem_C, KeyboardListening) == 0x03B8);
static_assert(offsetof(UWBP_InputActionListItem_C, NormalButtonStyle) == 0x03C0);
static_assert(offsetof(UWBP_InputActionListItem_C, HoverButtonStyle) == 0x0638);
static_assert(offsetof(UWBP_InputActionListItem_C, SwitchKeySwapMap) == 0x08B0);
static_assert(offsetof(UWBP_QuestItemListItem_C, UberGraphFrame) == 0x0270);
static_assert(offsetof(UWBP_QuestItemListItem_C, AnimShow) == 0x0278);
static_assert(offsetof(UWBP_ExtraContentEntryWidget_C, UberGraphFrame) == 0x02F8);
static_assert(offsetof(UWBP_ExtraContentEntryWidget_C, ButtonItem) == 0x0300);
static_assert(offsetof(UWBP_ExtraContentEntryWidget_C, ImageContent) == 0x0308);
static_assert(offsetof(UWBP_ExtraContentEntryWidget_C, ParticleSystem) == 0x0310);
static_assert(offsetof(UWBP_ExtraContentEntryWidget_C, Icon) == 0x0318);
static_assert(offsetof(UWBP_HealthPoint_C, UberGraphFrame) == 0x0278);
static_assert(offsetof(UWBP_HealthPoint_C, AnimBounce) == 0x0280);
static_assert(offsetof(UWBP_HealthPoint_C, AnimFillLife) == 0x0288);
static_assert(offsetof(UWBP_HealthPoint_C, Delay_Handle) == 0x0290);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, UberGraphFrame) == 0x0328);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, BtnExecute) == 0x0330);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, ImageMapPreview) == 0x0338);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, ImageNewGamePlus) == 0x0340);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, ImageSelection) == 0x0348);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelCorruptedSlot) == 0x0350);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelDateTime) == 0x0358);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelEmptySlot) == 0x0360);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelFilmReelsCount) == 0x0368);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelPinsCount) == 0x0370);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelSlotName) == 0x0378);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LabelTicketsCount) == 0x0380);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, LoadingIndicator) == 0x0388);
static_assert(offsetof(UWBP_CinemaSlotListItem_C, PanelSlotContent) == 0x0390);
static_assert(offsetof(UWBP_SaveSlotListItem_C, UberGraphFrame) == 0x0328);
static_assert(offsetof(UWBP_SaveSlotListItem_C, BtnExecute) == 0x0330);
static_assert(offsetof(UWBP_SaveSlotListItem_C, ImageMapPreview) == 0x0338);
static_assert(offsetof(UWBP_SaveSlotListItem_C, ImageNewGamePlus) == 0x0340);
static_assert(offsetof(UWBP_SaveSlotListItem_C, ImageSelection) == 0x0348);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelCorruptedSlot) == 0x0350);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelDateTime) == 0x0358);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelEmptySlot) == 0x0360);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelFilmReelsCount) == 0x0368);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelPinsCount) == 0x0370);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelSlotName) == 0x0378);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LabelTicketsCount) == 0x0380);
static_assert(offsetof(UWBP_SaveSlotListItem_C, LoadingIndicator) == 0x0388);
static_assert(offsetof(UWBP_SaveSlotListItem_C, PanelSlotContent) == 0x0390);
static_assert(offsetof(UWBP_QuestListItem_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_QuestListItem_C, AnimSelect) == 0x02C8);
static_assert(offsetof(UWBP_QuestListItem_C, ButtonBase) == 0x02D0);
static_assert(offsetof(UWBP_QuestListItem_C, ImageBackUnselected) == 0x02D8);
static_assert(offsetof(UWBP_QuestListItem_C, ImageFail) == 0x02E0);
static_assert(offsetof(UWBP_QuestListItem_C, ImageSuccess) == 0x02E8);
static_assert(offsetof(UWBP_QuestListItem_C, PanelQuestGiver) == 0x02F0);
static_assert(offsetof(UWBP_TabListItem_C, UberGraphFrame) == 0x0288);
static_assert(offsetof(UWBP_TabListItem_C, AnimShow) == 0x0290);
static_assert(offsetof(UWBP_TabListItem_C, ButtonTab) == 0x0298);
static_assert(offsetof(UWBP_TabListItem_C, ImageBack) == 0x02A0);
static_assert(offsetof(UWBP_InputMappingOverlay_C, UberGraphFrame) == 0x0378);
static_assert(offsetof(UWBP_InputMappingOverlay_C, LabelGamepad) == 0x0380);
static_assert(offsetof(UWBP_InputMappingOverlay_C, PanelMouseKeyboard) == 0x0388);
static_assert(offsetof(UWBP_InputMappingOverlay_C, CurrentKey) == 0x0390);
static_assert(offsetof(UWBP_PinListItem_C, UberGraphFrame) == 0x02A0);
static_assert(offsetof(UWBP_PinListItem_C, AnimShow) == 0x02A8);
static_assert(offsetof(UWBP_PinListItem_C, AnimSelect) == 0x02B0);
static_assert(offsetof(UWBP_PinListItem_C, ButtonSelect) == 0x02B8);
static_assert(offsetof(UWBP_PinListItem_C, ImageSelection) == 0x02C0);
static_assert(offsetof(UWBP_PinListItem_C, ParticleSystem) == 0x02C8);
static_assert(offsetof(UWBP_PinListItem_C, Delay_Handle) == 0x02D0);
static_assert(offsetof(UWBP_CostumeListItem_C, UberGraphFrame) == 0x0330);
static_assert(offsetof(UWBP_CostumeListItem_C, AnimShow) == 0x0338);
static_assert(offsetof(UWBP_CostumeListItem_C, AnimSelect) == 0x0340);
static_assert(offsetof(UWBP_CostumeListItem_C, BackgroundBlur) == 0x0348);
static_assert(offsetof(UWBP_CostumeListItem_C, ButtonSelect) == 0x0350);
static_assert(offsetof(UWBP_CostumeListItem_C, ImageEquipped) == 0x0358);
static_assert(offsetof(UWBP_CostumeListItem_C, ImageSelection) == 0x0360);
static_assert(offsetof(UWBP_CostumeListItem_C, ParticleSystem) == 0x0368);
static_assert(offsetof(UWBP_CostumeListItem_C, Delay_Handle) == 0x0370);
static_assert(offsetof(UWBP_PaginatorListItem_C, UberGraphFrame) == 0x0280);
static_assert(offsetof(UWBP_PaginatorListItem_C, ButtonSelect) == 0x0288);
static_assert(offsetof(UWBP_PaginatorListItem_C, ImageBase) == 0x0290);
static_assert(offsetof(UWBP_MenuListItemSelection_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_MenuListItemSelection_C, AnimShow) == 0x0268);
static_assert(offsetof(UWBP_MenuListItemSelection_C, ImageMarker) == 0x0270);
static_assert(offsetof(UWBP_MapPOIListItem_C, UberGraphFrame) == 0x02E0);
static_assert(offsetof(UWBP_MapPOIListItem_C, AnimShow) == 0x02E8);
static_assert(offsetof(ABP_Mickey_PaintBrush_C, UberGraphFrame) == 0x02C8);
static_assert(offsetof(ABP_Mickey_PaintBrush_C, Silhouette) == 0x02D0);
static_assert(offsetof(ABP_Mickey_PaintBrush_C, PaintShootOrigin) == 0x02D8);
static_assert(offsetof(ABP_Mickey_PaintBrush_C, SphereCollision) == 0x02E0);
static_assert(offsetof(ABP_Mickey_PaintBrush_C, SK_Mickey_Brush) == 0x02E8);
static_assert(offsetof(ABP_Collectable_PowerSpark_C, NS_PickUp_PowerSpark) == 0x0300);
static_assert(offsetof(ABP_Base_Ticket_Spawned_C, UberGraphFrame) == 0x0300);
static_assert(offsetof(ABP_Base_Ticket_Spawned_C, BP_CollectableMovementComponent) == 0x0308);
static_assert(offsetof(ABP_Base_Ticket_Spawned_C, BP_SpawnInComponent) == 0x0310);
static_assert(offsetof(ABP_Base_Ticket_Spawned_C, BP_FadeOutComponent) == 0x0318);
static_assert(offsetof(ABP_VFXInitializer_MainMenu_C, UberGraphFrame) == 0x0288);
static_assert(offsetof(ABP_VFXInitializer_MainMenu_C, DefaultSceneRoot) == 0x0290);
static_assert(offsetof(ABP_VFXInitializer_MainMenu_C, NiagaraSystemsToInitialize) == 0x0298);
static_assert(offsetof(ABP_VFXInitializer_MainMenu_C, _spawnLocation) == 0x02A8);
static_assert(offsetof(UWBP_RecCommandOptionListItem_C, UberGraphFrame) == 0x0310);
static_assert(offsetof(UWBP_RecCommandOptionListItem_C, BtnExecute) == 0x0318);
static_assert(offsetof(UWBP_RecCommandOptionListItem_C, ItemSelection) == 0x0320);
