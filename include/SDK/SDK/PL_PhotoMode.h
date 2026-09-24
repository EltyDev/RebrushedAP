
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

/// Class /Script/PL_PhotoMode.PL_DefaultPhotoModeActor
/// Size: 0x0418 (1048 bytes) (0x0002E8 - 0x000418) align 8 MaxSize: 0x0418
class APL_DefaultPhotoModeActor : public APawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02E8   (0x0008)  MISSED
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(OnPhotoModeFilterChanged);                           // 0x02F0   (0x0010)  
	class UPrimitiveComponent*                         RootColliderComponent;                                      // 0x0300   (0x0008)  
	class UCameraComponent*                            CameraCameraComponent;                                      // 0x0308   (0x0008)  
	class UPawnMovementComponent*                      PawnMovementComponent;                                      // 0x0310   (0x0008)  
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                    // 0x0318   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0320   (0x000C)  MISSED
	float                                              InputPitchScale;                                            // 0x032C   (0x0004)  
	float                                              InputYawScale;                                              // 0x0330   (0x0004)  
	float                                              InputRollScale;                                             // 0x0334   (0x0004)  
	float                                              BaseTurnRate;                                               // 0x0338   (0x0004)  
	float                                              TakePictureDelay;                                           // 0x033C   (0x0004)  
	class USoundBase*                                  TakePhotoSfx;                                               // 0x0340   (0x0008)  
	class USoundBase*                                  StartPhotoModeSfx;                                          // 0x0348   (0x0008)  
	class USoundBase*                                  StopPhotoModeSfx;                                           // 0x0350   (0x0008)  
	class USoundBase*                                  ApplyFilterSfx;                                             // 0x0358   (0x0008)  
	class USoundBase*                                  ApplyNoFilterSfx;                                           // 0x0360   (0x0008)  
	class USoundBase*                                  ResetRollAndZoomSfx;                                        // 0x0368   (0x0008)  
	class USoundBase*                                  RollSfx;                                                    // 0x0370   (0x0008)  
	class USoundBase*                                  ZoomInSfx;                                                  // 0x0378   (0x0008)  
	class USoundBase*                                  ZoomOutSfx;                                                 // 0x0380   (0x0008)  
	float                                              SavedTimeDilation;                                          // 0x0388   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget2D;                                             // 0x0390   (0x0008)  
	class APlayerController*                           ActivePlayerController;                                     // 0x0398   (0x0008)  
	class UUserWidget*                                 CurrentPhotoWidget;                                         // 0x03A0   (0x0008)  
	class UUserWidget*                                 Gallery;                                                    // 0x03A8   (0x0008)  
	class UUserWidget*                                 PhotoModeOverlayWidget;                                     // 0x03B0   (0x0008)  
	class UInputComponent*                             ControllingInputComponent;                                  // 0x03B8   (0x0008)  
	TArray<class UPL_PhotoModeFilter*>                 Filters;                                                    // 0x03C0   (0x0010)  
	class UAudioComponent*                             RollSound;                                                  // 0x03D0   (0x0008)  
	class UAudioComponent*                             ZoomInSound;                                                // 0x03D8   (0x0008)  
	class UAudioComponent*                             ZoomOutSound;                                               // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x30];                                      // 0x03E8   (0x0030)  MISSED


	/// Functions
	// Function /Script/PL_PhotoMode.PL_DefaultPhotoModeActor.GetCurrentFilter
	// class UPL_PhotoModeFilter* GetCurrentFilter();                                                                           // [0x128b100] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeCameraControlInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeCameraControlInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeCameraControlInterface.SetActivePlayerController
	// void SetActivePlayerController(class APlayerController* InActivePlayerController);                                       // [0x83e910] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeCurrentPhotoWidgetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeCurrentPhotoWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeCurrentPhotoWidgetInterface.SetPhotoRender
	// void SetPhotoRender(class UTexture* RenderedTexture);                                                                    // [0x83e880] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeCurrentPhotoWidgetInterface.PhotoModeTick
	// void PhotoModeTick(float DeltaTime);                                                                                     // [0xaf2f80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeCurrentSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_PhotoModeCurrentSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeProjectSpecificActions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeProjectSpecificActions : public UObject
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeProjectSpecificActions.OnPhotoModeStopped
	// void OnPhotoModeStopped(class UPL_PhotoModeSystem* PhotoModeSystem, class APlayerController* PlayerController);          // [0x128b500] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeProjectSpecificActions.OnPhotoModeStarted
	// void OnPhotoModeStarted(class UPL_PhotoModeSystem* PhotoModeSystem, class APlayerController* PlayerController);          // [0x128b430] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeProjectSpecificActions.OnInitialize
	// void OnInitialize(class UPL_PhotoModeSystem* PhotoModeSystem);                                                           // [0x128b3a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeProjectSpecificActions.OnDeinitialize
	// void OnDeinitialize(class UPL_PhotoModeSystem* PhotoModeSystem);                                                         // [0xc66d10] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeDefaultTogglePhotoModeListener
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UPL_PhotoModeDefaultTogglePhotoModeListener : public UPL_PhotoModeProjectSpecificActions
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TMap<class APlayerController*, class UInputComponent*> ListeningPlayerController;                              // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeDefaultTogglePhotoModeListener.OnTogglePhotoMode
	// void OnTogglePhotoMode(class UInputComponent* ShowHideInputComponent);                                                   // [0x128b6a0] Final|Native|Public  
	// Function /Script/PL_PhotoMode.PL_PhotoModeDefaultTogglePhotoModeListener.OnPlayerControllerEndPlay
	// void OnPlayerControllerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0x128b5d0] Final|Native|Public  
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeFilter
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_PhotoModeFilter : public UObject
{ 
public:
	FText                                              FilterName;                                                 // 0x0028   (0x0018)  


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeFilter.TryToApply
	// bool TryToApply(class APlayerController* ActivePlayerController, class AActor* PhotoModeActor);                          // [0x128c0e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeFilter.Remove
	// void Remove(class APlayerController* ActivePlayerController, class AActor* PhotoModeActor);                              // [0x128b500] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeFilter_Combined
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PhotoModeFilter_Combined : public UPL_PhotoModeFilter
{ 
public:
	TArray<class UClass*>                              FilterClasses;                                              // 0x0040   (0x0010)  
	TArray<class UPL_PhotoModeFilter*>                 Filters;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeFilter_PostProcess
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UPL_PhotoModeFilter_PostProcess : public UPL_PhotoModeFilter
{ 
public:
	class UMaterialInterface*                          PostProcessMaterial;                                        // 0x0040   (0x0008)  
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeFilter_PostProcessSettings
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UPL_PhotoModeFilter_PostProcessSettings : public UPL_PhotoModeFilter
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeFilter_PostProcessSettings.RemoveSetting
	// FPostProcessSettings RemoveSetting(FPostProcessSettings& InOutPostProcessSettings);                                      // [0x128b970] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeFilter_PostProcessSettings.ApplySetting
	// FPostProcessSettings ApplySetting(FPostProcessSettings& InOutPostProcessSettings);                                       // [0x128ad50] Native|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeGalleryUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeGalleryUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeGalleryUtils.ReplaceOldestPhoto
	// void ReplaceOldestPhoto(FPL_PhotoModeGalleryData& Data, class UTextureRenderTarget2D* NewPhoto);                         // [0x128ba90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeGalleryUtils.RemovePhoto
	// void RemovePhoto(FPL_PhotoModeGalleryData& Data, class UTextureRenderTarget2D* PhotoToRemove);                           // [0x128b730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeGalleryUtils.AddPhoto
	// void AddPhoto(FPL_PhotoModeGalleryData& Data, class UTextureRenderTarget2D* NewPhoto);                                   // [0x128ab10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeHideWidgetLayerWhileActive
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_PhotoModeHideWidgetLayerWhileActive : public UPL_PhotoModeProjectSpecificActions
{ 
public:
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeLimitedMovementRangeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeLimitedMovementRangeInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeLimitedMovementRangeInterface.SetPlayerPawn
	// void SetPlayerPawn(class APawn* InPlayerPawn);                                                                           // [0x83e910] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeLimitedRangeMovement
/// Size: 0x0168 (360 bytes) (0x000158 - 0x000168) align 8 MaxSize: 0x0168
class UPL_PhotoModeLimitedRangeMovement : public UFloatingPawnMovement
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0158   (0x0008)  MISSED
	class APawn*                                       PlayerPawn;                                                 // 0x0160   (0x0008)  
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeOverlayWidgetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeOverlayWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeOverlayWidgetInterface.ToggleOverlay
	// void ToggleOverlay();                                                                                                    // [0xbeb9f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeOverlayWidgetInterface.SetCurrentPhotoModeActor
	// void SetCurrentPhotoModeActor(class AActor* PhotoModeActor);                                                             // [0x83e910] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModePlayerCameraManagerDisableModifiers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModePlayerCameraManagerDisableModifiers : public UInterface
{ 
public:
};

/// Class /Script/PL_PhotoMode.PL_PhotoModePlayerControllerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModePlayerControllerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModePlayerControllerInterface.SetShouldPerformFullTickWhenPaused
	// void SetShouldPerformFullTickWhenPaused(bool bInShouldPerformFullTickWhenPaused);                                        // [0xaae850] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModePlayerControllerInterface.SetForceFeedbackBlocked
	// void SetForceFeedbackBlocked(bool bShouldBeBlocked);                                                                     // [0x128be10] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModePlayerControllerInterface.GetShouldPerformFullTickWhenPaused
	// bool GetShouldPerformFullTickWhenPaused();                                                                               // [0xe8d500] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/PL_PhotoMode.PL_ProjectSpecificPhotoModeSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ProjectSpecificPhotoModeSettings : public UObject
{ 
public:
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeSettings
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 8 MaxSize: 0x0140
class UPL_PhotoModeSettings : public UObject
{ 
public:
	TArray<class UClass*>                              ProjectSpecificActionsClasses;                              // 0x0028   (0x0010)  
	class UClass*                                      PhotoModeCameraActorClass;                                  // 0x0038   (0x0008)  
	class UClass*                                      PhotoModeStateClass;                                        // 0x0040   (0x0008)  
	bool                                               bIsOnlyAllowedToMoveACertainDistanceAwayFromPlayer;         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              MaxDistanceFromPlayerCharacter;                             // 0x004C   (0x0004)  
	float                                              MinDistanceFromPlayer;                                      // 0x0050   (0x0004)  
	TEnumAsByte<ETextureRenderTargetFormat>            PhotoRenderFormat;                                          // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              RenderTargetTargetGamma;                                    // 0x0058   (0x0004)  
	float                                              FovChangeRate;                                              // 0x005C   (0x0004)  
	float                                              MinFov;                                                     // 0x0060   (0x0004)  
	float                                              MaxFov;                                                     // 0x0064   (0x0004)  
	float                                              LeavePhotoModeBlendTime;                                    // 0x0068   (0x0004)  
	bool                                               bDeactivateTimeDilationDuringPhotoMode;                     // 0x006C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	class UClass*                                      CurrentSettingsClass;                                       // 0x0070   (0x0008)  
	class UClass*                                      CurrentPhotoWidgetClass;                                    // 0x0078   (0x0008)  
	class UClass*                                      PhotoModeOverlayWidgetClass;                                // 0x0080   (0x0008)  
	class UClass*                                      PhotoModeBlockedOverlayWidgetClass;                         // 0x0088   (0x0008)  
	int32_t                                            OverlayWidgetZOrder;                                        // 0x0090   (0x0004)  
	bool                                               bEnableInGameGalleryOnlyInDevelopment;                      // 0x0094   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	class UClass*                                      GalleryWidgetClass;                                         // 0x0098   (0x0008)  
	int32_t                                            MaxPhotosInGallery;                                         // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<class UClass*>                              FilterClasses;                                              // 0x00A8   (0x0010)  
	FName                                              TogglePhotoModeActionName;                                  // 0x00B8   (0x0008)  
	FName                                              MoveForwardActionName;                                      // 0x00C0   (0x0008)  
	FName                                              MoveRightActionName;                                        // 0x00C8   (0x0008)  
	FName                                              MoveUpActionName;                                           // 0x00D0   (0x0008)  
	FName                                              TurnActionName;                                             // 0x00D8   (0x0008)  
	FName                                              TurnAtRateActionName;                                       // 0x00E0   (0x0008)  
	FName                                              LookUpActionName;                                           // 0x00E8   (0x0008)  
	FName                                              LookUpAtRateActionName;                                     // 0x00F0   (0x0008)  
	FName                                              RollAtRateActionName;                                       // 0x00F8   (0x0008)  
	FName                                              ZoomAtRateActionName;                                       // 0x0100   (0x0008)  
	FName                                              TakePhotoActionName;                                        // 0x0108   (0x0008)  
	FName                                              ToggleGalleryActionName;                                    // 0x0110   (0x0008)  
	FName                                              ToggleOverlayActionName;                                    // 0x0118   (0x0008)  
	FName                                              StopActionName;                                             // 0x0120   (0x0008)  
	FName                                              NextFilterActionName;                                       // 0x0128   (0x0008)  
	FName                                              PreviousFilterActionName;                                   // 0x0130   (0x0008)  
	FName                                              ResetCameraActionName;                                      // 0x0138   (0x0008)  
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeState
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_PhotoModeState : public UObject
{ 
public:
	class AActor*                                      ViewTargetBeforePhotoMode;                                  // 0x0028   (0x0008)  
	class AActor*                                      PhotoModeActor;                                             // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeState.Stop
	// void Stop(class APlayerController* PlayerController);                                                                    // [0xbfe090] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_PhotoMode.PL_PhotoModeState.Start
	// bool Start(class APlayerController* PlayerController);                                                                   // [0x128bea0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/PL_PhotoMode.PL_PhotoModeGalleryData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_PhotoModeGalleryData
{ 
	TArray<class UTextureRenderTarget2D*>              Gallery;                                                    // 0x0000   (0x0010)  
	int32_t                                            IndexOfOldestEntry;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeSystem
/// Size: 0x0138 (312 bytes) (0x000030 - 0x000138) align 8 MaxSize: 0x0138
class UPL_PhotoModeSystem : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnPhotoModeStarted);                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(OnPhotoModeEnded);                                   // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnPhotoModeTookPicture);                             // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnGalleryChanged);                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0070   (0x0038)  MISSED
	TMap<class APlayerController*, class UPL_PhotoModeState*> ActivePhotoModeStates;                               // 0x00A8   (0x0050)  
	TArray<class UPL_PhotoModeProjectSpecificActions*> ProjectSpecificActions;                                     // 0x00F8   (0x0010)  
	FPL_PhotoModeGalleryData                           GalleryData;                                                // 0x0108   (0x0018)  
	class UPL_PhotoModeCurrentSettings*                CurrentSettings;                                            // 0x0120   (0x0008)  
	class UUserWidget*                                 PhotoModeBlockedOverlayWidget;                              // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeSystem.TogglePhotoMode
	// void TogglePhotoMode(class APlayerController* PlayerController);                                                         // [0x128c050] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeSystem.StopPhotoMode
	// void StopPhotoMode(class APlayerController* PlayerController);                                                           // [0x128bfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeSystem.ReplaceOldestPhotoInGallery
	// void ReplaceOldestPhotoInGallery(class UTextureRenderTarget2D* NewPhoto);                                                // [0x128bb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeSystem.RemovePhotoFromGallery
	// void RemovePhotoFromGallery(class UTextureRenderTarget2D* PhotoToRemove);                                                // [0x128b820] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeSystem.GetGalleryData
	// FPL_PhotoModeGalleryData GetGalleryData();                                                                               // [0x128b250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_PhotoMode.PL_PhotoModeSystem.AddPhotoToGallery
	// void AddPhotoToGallery(class UTextureRenderTarget2D* NewPhoto);                                                          // [0x128ac00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_PhotoMode.PL_PhotoModeUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PhotoModeUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.UnBindPhotoModeTookPicture
	// void UnBindPhotoModeTookPicture(class UObject* WorldContextObject, FDelegateProperty& Event);                            // [0x128c1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.StartPhotoMode
	// void StartPhotoMode(class APlayerController* PlayerController);                                                          // [0x128bf40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.SetCurrentFilterIndex
	// void SetCurrentFilterIndex(class UObject* WorldContextObject, int32_t InCurrentFilterIndex);                             // [0x128bd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.ResetCurrentFilterIndex
	// void ResetCurrentFilterIndex(class UObject* WorldContextObject);                                                         // [0x128bcd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.ReplaceOldestPhotoInGallery
	// void ReplaceOldestPhotoInGallery(class UObject* WorldContextObject, class UTextureRenderTarget2D* NewPhoto);             // [0x128bc10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.RemovePhotoFromGallery
	// void RemovePhotoFromGallery(class UObject* WorldContextObject, class UTextureRenderTarget2D* PhotoToRemove);             // [0x128b8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.GetPhotoModeState
	// class UPL_PhotoModeState* GetPhotoModeState(class APlayerController* PlayerController);                                  // [0x128b310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.GetPhotoMode
	// class UPL_PhotoModeSystem* GetPhotoMode(class UObject* WorldContextObject);                                              // [0x128b280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.GetCurrentPhotoModeSettings
	// class UPL_PhotoModeCurrentSettings* GetCurrentPhotoModeSettings(class UObject* WorldContextObject);                      // [0x128b1c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.GetCurrentFilterIndex
	// int32_t GetCurrentFilterIndex(class UObject* WorldContextObject);                                                        // [0x128b130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.CanEnterPhotoMode
	// bool CanEnterPhotoMode(class UObject* WorldContextObject);                                                               // [0x128af50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.BindPhotoModeTookPicture
	// void BindPhotoModeTookPicture(class UObject* WorldContextObject, FDelegateProperty& Event);                              // [0x128ae70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_PhotoMode.PL_PhotoModeUtils.AddPhotoToGallery
	// void AddPhotoToGallery(class UObject* WorldContextObject, class UTextureRenderTarget2D* NewPhoto);                       // [0x128ac90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_PhotoMode.PL_ScreenshotUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ScreenshotUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_PhotoMode.PL_ScreenshotUtils.CreateScreenshotFromRenderTarget
	// bool CreateScreenshotFromRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* Photo, FString FullFilePath); // [0x128afe0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(APL_DefaultPhotoModeActor) == 0x0418); // 1048 bytes (0x0002E8 - 0x000418)
static_assert(sizeof(UPL_PhotoModeCameraControlInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModeCurrentPhotoWidgetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModeCurrentSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_PhotoModeProjectSpecificActions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModeDefaultTogglePhotoModeListener) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UPL_PhotoModeFilter) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_PhotoModeFilter_Combined) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UPL_PhotoModeFilter_PostProcess) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UPL_PhotoModeFilter_PostProcessSettings) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UPL_PhotoModeGalleryUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModeHideWidgetLayerWhileActive) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_PhotoModeLimitedMovementRangeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModeLimitedRangeMovement) == 0x0168); // 360 bytes (0x000158 - 0x000168)
static_assert(sizeof(UPL_PhotoModeOverlayWidgetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModePlayerCameraManagerDisableModifiers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModePlayerControllerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ProjectSpecificPhotoModeSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PhotoModeSettings) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UPL_PhotoModeState) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FPL_PhotoModeGalleryData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPL_PhotoModeSystem) == 0x0138); // 312 bytes (0x000030 - 0x000138)
static_assert(sizeof(UPL_PhotoModeUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ScreenshotUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(APL_DefaultPhotoModeActor, RootColliderComponent) == 0x0300);
static_assert(offsetof(APL_DefaultPhotoModeActor, CameraCameraComponent) == 0x0308);
static_assert(offsetof(APL_DefaultPhotoModeActor, PawnMovementComponent) == 0x0310);
static_assert(offsetof(APL_DefaultPhotoModeActor, SceneCaptureComponent2D) == 0x0318);
static_assert(offsetof(APL_DefaultPhotoModeActor, TakePhotoSfx) == 0x0340);
static_assert(offsetof(APL_DefaultPhotoModeActor, StartPhotoModeSfx) == 0x0348);
static_assert(offsetof(APL_DefaultPhotoModeActor, StopPhotoModeSfx) == 0x0350);
static_assert(offsetof(APL_DefaultPhotoModeActor, ApplyFilterSfx) == 0x0358);
static_assert(offsetof(APL_DefaultPhotoModeActor, ApplyNoFilterSfx) == 0x0360);
static_assert(offsetof(APL_DefaultPhotoModeActor, ResetRollAndZoomSfx) == 0x0368);
static_assert(offsetof(APL_DefaultPhotoModeActor, RollSfx) == 0x0370);
static_assert(offsetof(APL_DefaultPhotoModeActor, ZoomInSfx) == 0x0378);
static_assert(offsetof(APL_DefaultPhotoModeActor, ZoomOutSfx) == 0x0380);
static_assert(offsetof(APL_DefaultPhotoModeActor, RenderTarget2D) == 0x0390);
static_assert(offsetof(APL_DefaultPhotoModeActor, ActivePlayerController) == 0x0398);
static_assert(offsetof(APL_DefaultPhotoModeActor, CurrentPhotoWidget) == 0x03A0);
static_assert(offsetof(APL_DefaultPhotoModeActor, Gallery) == 0x03A8);
static_assert(offsetof(APL_DefaultPhotoModeActor, PhotoModeOverlayWidget) == 0x03B0);
static_assert(offsetof(APL_DefaultPhotoModeActor, ControllingInputComponent) == 0x03B8);
static_assert(offsetof(APL_DefaultPhotoModeActor, Filters) == 0x03C0);
static_assert(offsetof(APL_DefaultPhotoModeActor, RollSound) == 0x03D0);
static_assert(offsetof(APL_DefaultPhotoModeActor, ZoomInSound) == 0x03D8);
static_assert(offsetof(APL_DefaultPhotoModeActor, ZoomOutSound) == 0x03E0);
static_assert(offsetof(UPL_PhotoModeDefaultTogglePhotoModeListener, ListeningPlayerController) == 0x0038);
static_assert(offsetof(UPL_PhotoModeFilter, FilterName) == 0x0028);
static_assert(offsetof(UPL_PhotoModeFilter_Combined, FilterClasses) == 0x0040);
static_assert(offsetof(UPL_PhotoModeFilter_Combined, Filters) == 0x0050);
static_assert(offsetof(UPL_PhotoModeFilter_PostProcess, PostProcessMaterial) == 0x0040);
static_assert(offsetof(UPL_PhotoModeHideWidgetLayerWhileActive, LayerName) == 0x0028);
static_assert(offsetof(UPL_PhotoModeLimitedRangeMovement, PlayerPawn) == 0x0160);
static_assert(offsetof(UPL_PhotoModeSettings, ProjectSpecificActionsClasses) == 0x0028);
static_assert(offsetof(UPL_PhotoModeSettings, PhotoModeCameraActorClass) == 0x0038);
static_assert(offsetof(UPL_PhotoModeSettings, PhotoModeStateClass) == 0x0040);
static_assert(offsetof(UPL_PhotoModeSettings, PhotoRenderFormat) == 0x0054);
static_assert(offsetof(UPL_PhotoModeSettings, CurrentSettingsClass) == 0x0070);
static_assert(offsetof(UPL_PhotoModeSettings, CurrentPhotoWidgetClass) == 0x0078);
static_assert(offsetof(UPL_PhotoModeSettings, PhotoModeOverlayWidgetClass) == 0x0080);
static_assert(offsetof(UPL_PhotoModeSettings, PhotoModeBlockedOverlayWidgetClass) == 0x0088);
static_assert(offsetof(UPL_PhotoModeSettings, GalleryWidgetClass) == 0x0098);
static_assert(offsetof(UPL_PhotoModeSettings, FilterClasses) == 0x00A8);
static_assert(offsetof(UPL_PhotoModeSettings, TogglePhotoModeActionName) == 0x00B8);
static_assert(offsetof(UPL_PhotoModeSettings, MoveForwardActionName) == 0x00C0);
static_assert(offsetof(UPL_PhotoModeSettings, MoveRightActionName) == 0x00C8);
static_assert(offsetof(UPL_PhotoModeSettings, MoveUpActionName) == 0x00D0);
static_assert(offsetof(UPL_PhotoModeSettings, TurnActionName) == 0x00D8);
static_assert(offsetof(UPL_PhotoModeSettings, TurnAtRateActionName) == 0x00E0);
static_assert(offsetof(UPL_PhotoModeSettings, LookUpActionName) == 0x00E8);
static_assert(offsetof(UPL_PhotoModeSettings, LookUpAtRateActionName) == 0x00F0);
static_assert(offsetof(UPL_PhotoModeSettings, RollAtRateActionName) == 0x00F8);
static_assert(offsetof(UPL_PhotoModeSettings, ZoomAtRateActionName) == 0x0100);
static_assert(offsetof(UPL_PhotoModeSettings, TakePhotoActionName) == 0x0108);
static_assert(offsetof(UPL_PhotoModeSettings, ToggleGalleryActionName) == 0x0110);
static_assert(offsetof(UPL_PhotoModeSettings, ToggleOverlayActionName) == 0x0118);
static_assert(offsetof(UPL_PhotoModeSettings, StopActionName) == 0x0120);
static_assert(offsetof(UPL_PhotoModeSettings, NextFilterActionName) == 0x0128);
static_assert(offsetof(UPL_PhotoModeSettings, PreviousFilterActionName) == 0x0130);
static_assert(offsetof(UPL_PhotoModeSettings, ResetCameraActionName) == 0x0138);
static_assert(offsetof(UPL_PhotoModeState, ViewTargetBeforePhotoMode) == 0x0028);
static_assert(offsetof(UPL_PhotoModeState, PhotoModeActor) == 0x0030);
static_assert(offsetof(FPL_PhotoModeGalleryData, Gallery) == 0x0000);
static_assert(offsetof(UPL_PhotoModeSystem, ActivePhotoModeStates) == 0x00A8);
static_assert(offsetof(UPL_PhotoModeSystem, ProjectSpecificActions) == 0x00F8);
static_assert(offsetof(UPL_PhotoModeSystem, GalleryData) == 0x0108);
static_assert(offsetof(UPL_PhotoModeSystem, CurrentSettings) == 0x0120);
static_assert(offsetof(UPL_PhotoModeSystem, PhotoModeBlockedOverlayWidget) == 0x0128);
