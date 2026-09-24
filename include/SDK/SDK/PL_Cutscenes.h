
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: LevelSequence
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/PL_Cutscenes.EPL_FadeDirection
/// Size: 0x01 (1 bytes)
enum class EPL_FadeDirection : uint8_t
{
	EPL_FadeDirection__Out                                                           = 0,
	EPL_FadeDirection__In                                                            = 1
};

/// Class /Script/PL_Cutscenes.PL_CutsceneFadeNode
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UPL_CutsceneFadeNode : public UBlueprintAsyncActionBase
{ 
public:
	EPL_FadeDirection                                  FadeDirection;                                              // 0x0030   (0x0001)  
	bool                                               bForceFade;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(16,543) /* FMulticastInlineDelegate */ __um(OnFadeCompleted);                                    // 0x0038   (0x0010)  
	class UObject*                                     Instigator;                                                 // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/PL_Cutscenes.PL_CutsceneFadeNode.RequestFade
	// class UPL_CutsceneFadeNode* RequestFade(class UObject* WorldContextObject, EPL_FadeDirection Direction, bool bForceFade); // [0xc4e7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneFadeNode.FadeCompleted
	// void FadeCompleted();                                                                                                    // [0xc4dc20] Final|Native|Protected 
};

/// Class /Script/PL_Cutscenes.PL_CutsceneHandler
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_CutsceneHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,544) /* FMulticastInlineDelegate */ __um(OnSequenceEnded);                                    // 0x0030   (0x0010)  
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x0040   (0x0008)  
	class ALevelSequenceActor*                         SequenceActor;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
	SDK_UNDEFINED(16,545) /* FDelegateProperty */      __um(OnStartSkippingCutscenesDelegate);                     // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/PL_Cutscenes.PL_CutsceneHandler.OnStartSkippingCutscenes
	// void OnStartSkippingCutscenes();                                                                                         // [0xc4de50] Final|Native|Protected 
	// Function /Script/PL_Cutscenes.PL_CutsceneHandler.OnSequenceEnded__DelegateSignature
	// void OnSequenceEnded__DelegateSignature();                                                                               // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Cutscenes.PL_CutsceneHandler.OnAwaitSequenceCallback
	// void OnAwaitSequenceCallback();                                                                                          // [0xc4dc70] Final|Native|Protected 
	// Function /Script/PL_Cutscenes.PL_CutsceneHandler.Activate
	// void Activate();                                                                                                         // [0xc4da40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Cutscenes.PL_CutsceneListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CutsceneListenerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Cutscenes.PL_CutsceneListenerInterface.ReceiveOnCutsceneStarted
	// void ReceiveOnCutsceneStarted(FPL_CutsceneSettings& Settings);                                                           // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PL_Cutscenes.PL_CutsceneListenerInterface.ReceiveOnCutsceneEnded
	// void ReceiveOnCutsceneEnded(FPL_CutsceneSettings& Settings);                                                             // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/PL_Cutscenes.PL_CutsceneSoundMixerEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_CutsceneSoundMixerEntry
{ 
	TWeakObjectPtr<class UObject*>                     Instigator;                                                 // 0x0000   (0x0008)  
	FGameplayTag                                       SoundMixerSettings;                                         // 0x0008   (0x0008)  
};

/// Class /Script/PL_Cutscenes.PL_CutsceneManager
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_CutsceneManager : public UObject
{ 
public:
	SDK_UNDEFINED(16,546) /* FMulticastInlineDelegate */ __um(OnStartSkippingCutscenes);                           // 0x0028   (0x0010)  
	TArray<FPL_CutsceneSoundMixerEntry>                SoundMixerStack;                                            // 0x0038   (0x0010)  
};

/// Class /Script/PL_Cutscenes.PL_CutsceneRootActor
/// Size: 0x02B0 (688 bytes) (0x000288 - 0x0002B0) align 8 MaxSize: 0x02B0
class APL_CutsceneRootActor : public AActor
{ 
public:
	TWeakObjectPtr<class UWorld*>                      OwningWorld;                                                // 0x0288   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0290   (0x0020)  MISSED
};

/// Class /Script/PL_Cutscenes.PL_CutscenesConfig
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_CutscenesConfig : public UObject
{ 
public:
	class UClass*                                      SequenceRootActorClass;                                     // 0x0028   (0x0008)  
};

/// Class /Script/PL_Cutscenes.PL_CutsceneStagingUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CutsceneStagingUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Cutscenes.PL_CutsceneStagingUtils.TeleportToMarker
	// bool TeleportToMarker(class AActor* Target, FGameplayTag PositionMarkerId);                                              // [0xc4ed30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Cutscenes.PL_CutsceneUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CutsceneUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.SkipToSequenceEnd
	// void SkipToSequenceEnd(class ULevelSequencePlayer* LevelSequencePlayer);                                                 // [0xc4ecb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.RequestFadeOutWithOnComplete
	// void RequestFadeOutWithOnComplete(class UObject* Instigator, FDelegateProperty& OnComplete, bool bForceFade);            // [0xc4eb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.RequestFadeOut
	// void RequestFadeOut(class UObject* Instigator, bool bForceFade);                                                         // [0xc4eac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.RequestFadeInWithOnComplete
	// void RequestFadeInWithOnComplete(class UObject* Instigator, FDelegateProperty& OnComplete, bool bForceFade);             // [0xc4e990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.RequestFadeIn
	// void RequestFadeIn(class UObject* Instigator, bool bForceFade);                                                          // [0xc4e8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.RemoveFadeOutCompleteDelegate
	// void RemoveFadeOutCompleteDelegate(class UObject* Instigator, FDelegateProperty& Delegate);                              // [0xc4e6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.RemoveFadeInCompleteDelegate
	// void RemoveFadeInCompleteDelegate(class UObject* Instigator, FDelegateProperty& Delegate);                               // [0xc4e610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.ProvideSequenceRootActor
	// class AActor* ProvideSequenceRootActor(class UObject* WorldContext, bool bShouldCreateIfNotFound);                       // [0xc4e540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.PlaySequenceAndWait
	// class UPL_CutsceneHandler* PlaySequenceAndWait(class UObject* WorldContextObject, TWeakObjectPtr<ULevelSequence*> LevelSequence, bool bIsCutscene, class AActor* SequenceRootActor, bool bDoSequenceRootActorLookup, bool bHideHud, bool bPlayHudAnimation, bool bBlockInput, bool bCancelAbilities, bool bResetCameraOnEnd, FGameplayTag SoundMixerSettings, int32_t LoopCount, float PlayRate, float StartTime, bool bRandomStartTime, bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer, bool bDisableCameraCuts, bool bPauseAtEnd); // [0xc4de70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.OnCutsceneStarted
	// void OnCutsceneStarted(FPL_CutsceneSettings& Settings, class UObject* Instigator);                                       // [0xc4dd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Cutscenes.PL_CutsceneUtils.OnCutsceneEnded
	// void OnCutsceneEnded(FPL_CutsceneSettings& Settings, class UObject* Instigator);                                         // [0xc4dc90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Cutscenes.PL_LevelSequencePlayerProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_LevelSequencePlayerProviderInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Cutscenes.PL_LevelSequencePlayerProviderInterface.CreateLevelSequencePlayer
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings& PlaybackSettings, class ALevelSequenceActor*& OutSequenceActor); // [0xc4da60] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PL_Cutscenes.PL_PositionMarker
/// Size: 0x0290 (656 bytes) (0x000288 - 0x000290) align 8 MaxSize: 0x0290
class APL_PositionMarker : public AActor
{ 
public:
	FGameplayTag                                       ID;                                                         // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/PL_Cutscenes.PL_PositionMarker.OnIntendedForChanged__DelegateSignature
	// void OnIntendedForChanged__DelegateSignature();                                                                          // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Cutscenes.PL_PositionMarker.GetId
	// FGameplayTag GetId();                                                                                                    // [0xc4dc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/PL_Cutscenes.PL_CutsceneSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_CutsceneSettings
{ 
	class AActor*                                      SequenceRootActor;                                          // 0x0000   (0x0008)  
	bool                                               bHideHud;                                                   // 0x0008   (0x0001)  
	bool                                               bPlayHudAnimation;                                          // 0x0009   (0x0001)  
	bool                                               bBlockInput;                                                // 0x000A   (0x0001)  
	bool                                               bCancelAbilities;                                           // 0x000B   (0x0001)  
	bool                                               bResetCameraOnEnd;                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FGameplayTag                                       SoundMixerSettings;                                         // 0x0010   (0x0008)  
};

/// Struct /Script/PL_Cutscenes.PL_CutsceneTransitionSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FPL_CutsceneTransitionSettings
{ 
	bool                                               bForceTransition;                                           // 0x0000   (0x0001)  
	bool                                               bFinishInstantly;                                           // 0x0001   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_CutsceneFadeNode) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UPL_CutsceneHandler) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPL_CutsceneListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_CutsceneSoundMixerEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_CutsceneManager) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(APL_CutsceneRootActor) == 0x02B0); // 688 bytes (0x000288 - 0x0002B0)
static_assert(sizeof(UPL_CutscenesConfig) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_CutsceneStagingUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_CutsceneUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_LevelSequencePlayerProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(APL_PositionMarker) == 0x0290); // 656 bytes (0x000288 - 0x000290)
static_assert(sizeof(FPL_CutsceneSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_CutsceneTransitionSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(offsetof(UPL_CutsceneFadeNode, FadeDirection) == 0x0030);
static_assert(offsetof(UPL_CutsceneFadeNode, Instigator) == 0x0048);
static_assert(offsetof(UPL_CutsceneHandler, SequencePlayer) == 0x0040);
static_assert(offsetof(UPL_CutsceneHandler, SequenceActor) == 0x0048);
static_assert(offsetof(FPL_CutsceneSoundMixerEntry, Instigator) == 0x0000);
static_assert(offsetof(FPL_CutsceneSoundMixerEntry, SoundMixerSettings) == 0x0008);
static_assert(offsetof(UPL_CutsceneManager, SoundMixerStack) == 0x0038);
static_assert(offsetof(APL_CutsceneRootActor, OwningWorld) == 0x0288);
static_assert(offsetof(UPL_CutscenesConfig, SequenceRootActorClass) == 0x0028);
static_assert(offsetof(APL_PositionMarker, ID) == 0x0288);
static_assert(offsetof(FPL_CutsceneSettings, SequenceRootActor) == 0x0000);
static_assert(offsetof(FPL_CutsceneSettings, SoundMixerSettings) == 0x0010);
