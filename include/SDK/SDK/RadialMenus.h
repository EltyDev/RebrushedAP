
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
/// dependency: PL_Cheats
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /PL_Cheats/RadialMenus/BaseWidgets/E_IconAnimationStyles.E_IconAnimationStyles
/// Size: 0x01 (1 bytes)
enum class E_IconAnimationStyles : uint8_t
{
	E_IconAnimationStyles__NewEnumerator0                                            = 0,
	E_IconAnimationStyles__NewEnumerator1                                            = 1,
	E_IconAnimationStyles__NewEnumerator2                                            = 2
};

/// Class /PL_Cheats/RadialMenus/BaseWidgets/BPI_RadialSlot.BPI_RadialSlot_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_RadialSlot_C : public UInterface
{ 
public:


	/// Functions
	// Function /PL_Cheats/RadialMenus/BaseWidgets/BPI_RadialSlot.BPI_RadialSlot_C.OnUnhighlight
	// void OnUnhighlight();                                                                                                    // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/BPI_RadialSlot.BPI_RadialSlot_C.OnHighlight
	// void OnHighlight();                                                                                                      // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C
/// Size: 0x02A8 (680 bytes) (0x000260 - 0x0002A8) align 8 MaxSize: 0x02A8
class UWBP_CheatMenuInputHandeling_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	SDK_UNDEFINED(16,679) /* FMulticastInlineDelegate */ __um(SubmenuCommit);                                      // 0x0268   (0x0010)  
	TArray<FKey>                                       SubmitKeys;                                                 // 0x0278   (0x0010)  
	TArray<FKey>                                       BackKeys;                                                   // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,680) /* FMulticastInlineDelegate */ __um(Cancel);                                             // 0x0298   (0x0010)  


	/// Functions
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x19ac1c0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x19ac1c0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.Submit
	// void Submit();                                                                                                           // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.GoBack
	// void GoBack();                                                                                                           // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.ExecuteUbergraph_WBP_CheatMenuInputHandeling
	// void ExecuteUbergraph_WBP_CheatMenuInputHandeling(int32_t EntryPoint);                                                   // [0x19ac1c0] Final                
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.Cancel__DelegateSignature
	// void Cancel__DelegateSignature();                                                                                        // [0x19ac1c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/WBP_CheatMenuInputHandeling.WBP_CheatMenuInputHandeling_C.SubmenuCommit__DelegateSignature
	// void SubmenuCommit__DelegateSignature(FName Category, FName SubItem);                                                    // [0x19ac1c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C
/// Size: 0x037C (892 bytes) (0x000260 - 0x00037C) align 8 MaxSize: 0x037C
class UUMG_RadialMenu_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      RadialBackground;                                           // 0x0268   (0x0008)  
	class UImage*                                      RadiusDebug;                                                // 0x0270   (0x0008)  
	class UOverlay*                                    RootOverlay;                                                // 0x0278   (0x0008)  
	int32_t                                            Segments;                                                   // 0x0280   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	class UMaterialInterface*                          MaterialBase;                                               // 0x0288   (0x0008)  
	float                                              IndexRaw;                                                   // 0x0290   (0x0004)  
	int32_t                                            Index;                                                      // 0x0294   (0x0004)  
	class UMaterialInstanceDynamic*                    dynaMat;                                                    // 0x0298   (0x0008)  
	TArray<class UUserWidget*>                         Children;                                                   // 0x02A0   (0x0010)  
	bool                                               AllowResizing;                                              // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              ItemOffsetRadius;                                           // 0x02B4   (0x0004)  
	SDK_UNDEFINED(16,681) /* FMulticastInlineDelegate */ __um(SelectionChanged);                                   // 0x02B8   (0x0010)  
	class APlayerController*                           InputController;                                            // 0x02C8   (0x0008)  
	char                                               JoystickToUse;                                              // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02D1   (0x0003)  MISSED
	float                                              MouseDeadzone;                                              // 0x02D4   (0x0004)  
	bool                                               bInDeadzone;                                                // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x02D9   (0x0007)  MISSED
	SDK_UNDEFINED(16,682) /* FMulticastInlineDelegate */ __um(EnteredDeadzone);                                    // 0x02E0   (0x0010)  
	SDK_UNDEFINED(16,683) /* FMulticastInlineDelegate */ __um(ExitedDeadzone);                                     // 0x02F0   (0x0010)  
	FVector2D                                          CurrentInput;                                               // 0x0300   (0x0008)  
	float                                              JoystickDeadzone;                                           // 0x0308   (0x0004)  
	bool                                               DefaultToMouseIfNoJoystick;                                 // 0x030C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x030D   (0x0003)  MISSED
	int32_t                                            DefaultPlayerIndex;                                         // 0x0310   (0x0004)  
	bool                                               UseDeadzoneEvents;                                          // 0x0314   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0315   (0x0003)  MISSED
	class USoundBase*                                  SelectionChangedSound;                                      // 0x0318   (0x0008)  
	bool                                               AutoCenterMouse;                                            // 0x0320   (0x0001)  
	bool                                               AutoRotateForUp;                                            // 0x0321   (0x0001)  
	bool                                               bUseCustomInput;                                            // 0x0322   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x0323   (0x0001)  MISSED
	FVector2D                                          CustomInput;                                                // 0x0324   (0x0008)  
	bool                                               UseCustomTexture;                                           // 0x032C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x032D   (0x0003)  MISSED
	class UTexture*                                    RadialTexture;                                              // 0x0330   (0x0008)  
	bool                                               UseCustomColors;                                            // 0x0338   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0339   (0x0003)  MISSED
	FLinearColor                                       InnterRingColor;                                            // 0x033C   (0x0010)  
	FLinearColor                                       OuterRingColor;                                             // 0x034C   (0x0010)  
	FLinearColor                                       RingMainColor;                                              // 0x035C   (0x0010)  
	FLinearColor                                       UnhighlightColor;                                           // 0x036C   (0x0010)  


	/// Functions
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterialVisuals
	// void UpdateMaterialVisuals();                                                                                            // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.GetCustomInput
	// void GetCustomInput(FVector2D& Input, bool& Valid);                                                                      // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.SetCustomInput
	// void SetCustomInput(FVector2D CustomInput);                                                                              // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithCustomInput
	// void UpdateDirectionWithCustomInput();                                                                                   // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildIndexFromRadialMenu
	// void RemoveChildIndexFromRadialMenu(int32_t IndexToRemove);                                                              // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.RemoveChildWidgetFromRadialMenu
	// void RemoveChildWidgetFromRadialMenu(class UUserWidget*& ItemToFind);                                                    // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.DebugIndex
	// FText DebugIndex();                                                                                                      // [0x19ac1c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.FixInputRotation
	// FVector2D FixInputRotation(FVector2D Input);                                                                             // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.FixMainRotation
	// void FixMainRotation();                                                                                                  // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateInput
	// void UpdateInput();                                                                                                      // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithJoystick
	// void UpdateDirectionWithJoystick();                                                                                      // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.GetCurrentIndex
	// void GetCurrentIndex(int32_t& Index, bool& Valid);                                                                       // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.GetChild
	// void GetChild(int32_t Index, class UUserWidget*& Output, bool& Success);                                                 // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.SetIndex
	// void SetIndex(int32_t Index);                                                                                            // [0x19ac1c0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateAllChildrenPositions
	// void UpdateAllChildrenPositions();                                                                                       // [0x19ac1c0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateChildPosition
	// void UpdateChildPosition(int32_t Index);                                                                                 // [0x19ac1c0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.ClearChildren
	// void ClearChildren();                                                                                                    // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.GetSelectedWidget
	// void GetSelectedWidget(class UUserWidget*& Output);                                                                      // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.AddChildToRadialMenu
	// void AddChildToRadialMenu(class UUserWidget* Content, bool& Success);                                                    // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateDirectionWithMouseCursor
	// void UpdateDirectionWithMouseCursor();                                                                                   // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.GetSectionDegreeSize
	// float GetSectionDegreeSize();                                                                                            // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.SetInputDirection
	// void SetInputDirection(FVector2D Direction);                                                                             // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateSegments
	// void UpdateSegments(int32_t Segments);                                                                                   // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.InDeadzone
	// void InDeadzone(bool InDeadzone);                                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.UpdateMaterials
	// void UpdateMaterials();                                                                                                  // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu
	// void ExecuteUbergraph_UMG_RadialMenu(int32_t EntryPoint);                                                                // [0x19ac1c0] Final                
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.ExitedDeadzone__DelegateSignature
	// void ExitedDeadzone__DelegateSignature();                                                                                // [0x19ac1c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.EnteredDeadzone__DelegateSignature
	// void EnteredDeadzone__DelegateSignature();                                                                               // [0x19ac1c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_RadialMenu.UMG_RadialMenu_C.SelectionChanged__DelegateSignature
	// void SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection);                                    // [0x19ac1c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Struct /PL_Cheats/RadialMenus/BaseWidgets/FBasicIconSettings.FBasicIconSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FFBasicIconSettings
{ 
	TEnumAsByte<E_IconAnimationStyles>                 AnimationStyle_13_C5857E2F4AC7D5363326C8B5363D9ADD;         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       HighlightColor_7_FCF133C849CA59F3A456E984F1122433;          // 0x0004   (0x0010)  
	FLinearColor                                       UnhighlightColor_9_20CEE6F940EC3C0A462D609528F7D138;        // 0x0014   (0x0010)  
	float                                              ColorTransitionSpeed_12_2636B2604C9B6A366DD018A588954C28;   // 0x0024   (0x0004)  
};

/// Class /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C
/// Size: 0x0300 (768 bytes) (0x000260 - 0x000300) align 8 MaxSize: 0x0300
class UUMG_BasicRadialIcon_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            Shake;                                                      // 0x0268   (0x0008)  
	class UWidgetAnimation*                            Grow;                                                       // 0x0270   (0x0008)  
	class UImage*                                      Icon;                                                       // 0x0278   (0x0008)  
	class USizeBox*                                    Sizer;                                                      // 0x0280   (0x0008)  
	class UWidgetSwitcher*                             SwitchIconText;                                             // 0x0288   (0x0008)  
	class UTextBlock*                                  Text;                                                       // 0x0290   (0x0008)  
	class UTexture2D*                                  IconImage;                                                  // 0x0298   (0x0008)  
	float                                              IconSize;                                                   // 0x02A0   (0x0004)  
	FLinearColor                                       CurrentColor;                                               // 0x02A4   (0x0010)  
	bool                                               highlighted;                                                // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02B5   (0x0003)  MISSED
	float                                              Alpha;                                                      // 0x02B8   (0x0004)  
	FFBasicIconSettings                                Settings;                                                   // 0x02BC   (0x0028)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
	FText                                              CategoryText;                                               // 0x02E8   (0x0018)  


	/// Functions
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.Get_Icon_ColorAndOpacity
	// FLinearColor Get_Icon_ColorAndOpacity();                                                                                 // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.OnHighlight
	// void OnHighlight();                                                                                                      // [0x19ac1c0] BlueprintEvent       
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.OnUnhighlight
	// void OnUnhighlight();                                                                                                    // [0x19ac1c0] BlueprintEvent       
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/BaseWidgets/UMG_BasicRadialIcon.UMG_BasicRadialIcon_C.ExecuteUbergraph_UMG_BasicRadialIcon
	// void ExecuteUbergraph_UMG_BasicRadialIcon(int32_t EntryPoint);                                                           // [0x19ac1c0] Final|HasDefaults    
};

/// Class /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C
/// Size: 0x0308 (776 bytes) (0x0002A8 - 0x000308) align 8 MaxSize: 0x0308
class UWBP_CheatMenu_C : public UWBP_CheatMenuInputHandeling_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A8   (0x0008)  
	class UWidgetAnimation*                            ShowBuild;                                                  // 0x02B0   (0x0008)  
	class UUMG_RadialMenu_C*                           CategoryRing;                                               // 0x02B8   (0x0008)  
	class UImage*                                      CenterCircle;                                               // 0x02C0   (0x0008)  
	class UImage*                                      Image;                                                      // 0x02C8   (0x0008)  
	class UUMG_RadialMenu_C*                           SubmenuRing;                                                // 0x02D0   (0x0008)  
	FPL_AvailableCheats                                Cheats;                                                     // 0x02D8   (0x0010)  
	int32_t                                            CurrentSelectedIndex;                                       // 0x02E8   (0x0004)  
	bool                                               PickingItem;                                                // 0x02EC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02ED   (0x0003)  MISSED
	class USoundBase*                                  CategorySelectSound;                                        // 0x02F0   (0x0008)  
	int32_t                                            SubSelectionIndex;                                          // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class USoundBase*                                  GoBackSound;                                                // 0x0300   (0x0008)  


	/// Functions
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.FormatClassDisplayName
	// FText FormatClassDisplayName(class UClass* Class);                                                                       // [0x19ac1c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.PopulateCategories
	// void PopulateCategories();                                                                                               // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.BndEvt__WBP_MyCategories_CategoryRing_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature
	// void BndEvt__WBP_MyCategories_CategoryRing_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection); // [0x19ac1c0] BlueprintEvent       
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.PopulateBuildItems
	// void PopulateBuildItems();                                                                                               // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.Submit
	// void Submit();                                                                                                           // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.BndEvt__WBP_MyCategories_SubmenuRing_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature
	// void BndEvt__WBP_MyCategories_SubmenuRing_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection); // [0x19ac1c0] BlueprintEvent       
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.GoBack
	// void GoBack();                                                                                                           // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.Destruct
	// void Destruct();                                                                                                         // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Cheats/RadialMenus/Core/WBP_CheatMenu.WBP_CheatMenu_C.ExecuteUbergraph_WBP_CheatMenu
	// void ExecuteUbergraph_WBP_CheatMenu(int32_t EntryPoint);                                                                 // [0x19ac1c0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UBPI_RadialSlot_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWBP_CheatMenuInputHandeling_C) == 0x02A8); // 680 bytes (0x000260 - 0x0002A8)
static_assert(sizeof(UUMG_RadialMenu_C) == 0x037C); // 892 bytes (0x000260 - 0x00037C)
static_assert(sizeof(FFBasicIconSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UUMG_BasicRadialIcon_C) == 0x0300); // 768 bytes (0x000260 - 0x000300)
static_assert(sizeof(UWBP_CheatMenu_C) == 0x0308); // 776 bytes (0x0002A8 - 0x000308)
static_assert(offsetof(UWBP_CheatMenuInputHandeling_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_CheatMenuInputHandeling_C, SubmitKeys) == 0x0278);
static_assert(offsetof(UWBP_CheatMenuInputHandeling_C, BackKeys) == 0x0288);
static_assert(offsetof(UUMG_RadialMenu_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UUMG_RadialMenu_C, RadialBackground) == 0x0268);
static_assert(offsetof(UUMG_RadialMenu_C, RadiusDebug) == 0x0270);
static_assert(offsetof(UUMG_RadialMenu_C, RootOverlay) == 0x0278);
static_assert(offsetof(UUMG_RadialMenu_C, MaterialBase) == 0x0288);
static_assert(offsetof(UUMG_RadialMenu_C, dynaMat) == 0x0298);
static_assert(offsetof(UUMG_RadialMenu_C, Children) == 0x02A0);
static_assert(offsetof(UUMG_RadialMenu_C, InputController) == 0x02C8);
static_assert(offsetof(UUMG_RadialMenu_C, CurrentInput) == 0x0300);
static_assert(offsetof(UUMG_RadialMenu_C, SelectionChangedSound) == 0x0318);
static_assert(offsetof(UUMG_RadialMenu_C, CustomInput) == 0x0324);
static_assert(offsetof(UUMG_RadialMenu_C, RadialTexture) == 0x0330);
static_assert(offsetof(UUMG_RadialMenu_C, InnterRingColor) == 0x033C);
static_assert(offsetof(UUMG_RadialMenu_C, OuterRingColor) == 0x034C);
static_assert(offsetof(UUMG_RadialMenu_C, RingMainColor) == 0x035C);
static_assert(offsetof(UUMG_RadialMenu_C, UnhighlightColor) == 0x036C);
static_assert(offsetof(FFBasicIconSettings, AnimationStyle_13_C5857E2F4AC7D5363326C8B5363D9ADD) == 0x0000);
static_assert(offsetof(FFBasicIconSettings, HighlightColor_7_FCF133C849CA59F3A456E984F1122433) == 0x0004);
static_assert(offsetof(FFBasicIconSettings, UnhighlightColor_9_20CEE6F940EC3C0A462D609528F7D138) == 0x0014);
static_assert(offsetof(UUMG_BasicRadialIcon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UUMG_BasicRadialIcon_C, Shake) == 0x0268);
static_assert(offsetof(UUMG_BasicRadialIcon_C, Grow) == 0x0270);
static_assert(offsetof(UUMG_BasicRadialIcon_C, Icon) == 0x0278);
static_assert(offsetof(UUMG_BasicRadialIcon_C, Sizer) == 0x0280);
static_assert(offsetof(UUMG_BasicRadialIcon_C, SwitchIconText) == 0x0288);
static_assert(offsetof(UUMG_BasicRadialIcon_C, Text) == 0x0290);
static_assert(offsetof(UUMG_BasicRadialIcon_C, IconImage) == 0x0298);
static_assert(offsetof(UUMG_BasicRadialIcon_C, CurrentColor) == 0x02A4);
static_assert(offsetof(UUMG_BasicRadialIcon_C, Settings) == 0x02BC);
static_assert(offsetof(UUMG_BasicRadialIcon_C, CategoryText) == 0x02E8);
static_assert(offsetof(UWBP_CheatMenu_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_CheatMenu_C, ShowBuild) == 0x02B0);
static_assert(offsetof(UWBP_CheatMenu_C, CategoryRing) == 0x02B8);
static_assert(offsetof(UWBP_CheatMenu_C, CenterCircle) == 0x02C0);
static_assert(offsetof(UWBP_CheatMenu_C, Image) == 0x02C8);
static_assert(offsetof(UWBP_CheatMenu_C, SubmenuRing) == 0x02D0);
static_assert(offsetof(UWBP_CheatMenu_C, Cheats) == 0x02D8);
static_assert(offsetof(UWBP_CheatMenu_C, CategorySelectSound) == 0x02F0);
static_assert(offsetof(UWBP_CheatMenu_C, GoBackSound) == 0x0300);
