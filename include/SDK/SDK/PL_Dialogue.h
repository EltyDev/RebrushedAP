
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
/// dependency: PL_Conditionals
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_Dialogue.EDialogueEndReason
/// Size: 0x01 (1 bytes)
enum class EDialogueEndReason : uint8_t
{
	EDialogueEndReason__Completed                                                    = 0,
	EDialogueEndReason__Cancelled                                                    = 1,
	EDialogueEndReason__WorldReset                                                   = 2,
	EDialogueEndReason__WorldTeardown                                                = 3
};

/// Enum /Script/PL_Dialogue.EPL_NoExecThen
/// Size: 0x01 (1 bytes)
enum class EPL_NoExecThen : uint8_t
{
	EPL_NoExecThen__NONE                                                             = 0
};

/// Enum /Script/PL_Dialogue.EPL_DialoguePickMethod
/// Size: 0x01 (1 bytes)
enum class EPL_DialoguePickMethod : uint8_t
{
	EPL_DialoguePickMethod__Sequential                                               = 0,
	EPL_DialoguePickMethod__Random                                                   = 1
};

/// Enum /Script/PL_Dialogue.EPL_DialogueLineFade
/// Size: 0x01 (1 bytes)
enum class EPL_DialogueLineFade : uint8_t
{
	EPL_DialogueLineFade__None                                                       = 0,
	EPL_DialogueLineFade__FadeIn                                                     = 1,
	EPL_DialogueLineFade__FadeOut                                                    = 2,
	EPL_DialogueLineFade__FadeInAndOut                                               = 3
};

/// Enum /Script/PL_Dialogue.EPL_DialogueMood
/// Size: 0x01 (1 bytes)
enum class EPL_DialogueMood : uint8_t
{
	EPL_DialogueMood__Default                                                        = 0,
	EPL_DialogueMood__Afraid                                                         = 1,
	EPL_DialogueMood__Angry                                                          = 2,
	EPL_DialogueMood__Annoyed                                                        = 3,
	EPL_DialogueMood__Bored                                                          = 4,
	EPL_DialogueMood__Embarrased                                                     = 5,
	EPL_DialogueMood__Enraged                                                        = 6,
	EPL_DialogueMood__Excited                                                        = 7,
	EPL_DialogueMood__Frustrated                                                     = 8,
	EPL_DialogueMood__Happy                                                          = 9,
	EPL_DialogueMood__Nervous                                                        = 10,
	EPL_DialogueMood__Puzzled                                                        = 11,
	EPL_DialogueMood__Sad                                                            = 12,
	EPL_DialogueMood__Surprised                                                      = 13,
	EPL_DialogueMood__Upset                                                          = 14
};

/// Enum /Script/PL_Dialogue.EPL_ObjectResolverFailPolicy
/// Size: 0x01 (1 bytes)
enum class EPL_ObjectResolverFailPolicy : uint8_t
{
	EPL_ObjectResolverFailPolicy__AllowNull                                          = 0,
	EPL_ObjectResolverFailPolicy__AssertAndReturnNull                                = 1
};

/// Class /Script/PL_Dialogue.PL_PreloadedReferences
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UPL_PreloadedReferences : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<class UObject*>                             PreloadedObjects;                                           // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/PL_Dialogue.PL_Dialogue
/// Size: 0x0398 (920 bytes) (0x000288 - 0x000398) align 8 MaxSize: 0x0398
class APL_Dialogue : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0288   (0x0008)  MISSED
	SDK_UNDEFINED(16,581) /* FMulticastInlineDelegate */ __um(OnDialogueStarted);                                  // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,582) /* FMulticastInlineDelegate */ __um(OnDialogueEnded);                                    // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,583) /* FMulticastInlineDelegate */ __um(OnPresenterVisibilityChanged);                       // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,584) /* FMulticastInlineDelegate */ __um(OnStartSkipping);                                    // 0x02C0   (0x0010)  
	FGameplayTag                                       DialogueType;                                               // 0x02D0   (0x0008)  
	char                                               ImportanceLevel;                                            // 0x02D8   (0x0001)  
	bool                                               bShowPresenterFromStart;                                    // 0x02D9   (0x0001)  
	bool                                               bHidePlayerHudDuringDialogue;                               // 0x02DA   (0x0001)  
	bool                                               bPlayAnimationWhenTogglingPlayerHud;                        // 0x02DB   (0x0001)  
	FGameplayTag                                       SoundMixerSettings;                                         // 0x02DC   (0x0008)  
	FGameplayTag                                       StartDialogueAudioEventId;                                  // 0x02E4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02EC   (0x0004)  MISSED
	TMap<FName, class UPL_DialogueLine*>               DialogueLines;                                              // 0x02F0   (0x0050)  
	SDK_UNDEFINED(16,585) /* TScriptInterface<Class> */ __um(DialoguePresenterInstance);                           // 0x0340   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0350   (0x0008)  MISSED
	class AActor*                                      SequenceRootActor;                                          // 0x0358   (0x0008)  
	TArray<class AActor*>                              ManagedTemporaryActors;                                     // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,586) /* FMulticastInlineDelegate */ __um(OnCue);                                              // 0x0370   (0x0010)  
	class UPL_PreloadedReferences*                     PreloadedReferences;                                        // 0x0380   (0x0008)  
	TWeakObjectPtr<class AActor*>                      CurrentSpeaker;                                             // 0x0388   (0x0008)  
	TWeakObjectPtr<class UPL_DialogueLine*>            CurrentDialogueLine;                                        // 0x0390   (0x0008)  


	/// Functions
	// Function /Script/PL_Dialogue.PL_Dialogue.TriggerCue
	// void TriggerCue(FGameplayTag& Name);                                                                                     // [0xbeac60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.StopRunningDialogueSequence
	// void StopRunningDialogueSequence();                                                                                      // [0xbeb9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.StartDialogue
	// void StartDialogue();                                                                                                    // [0xbeb9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.SpawnTemporaryDialogueActor
	// class AActor* SpawnTemporaryDialogueActor(class UClass* Class, FVector Location, FRotator Rotation);                     // [0xbeb870] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.ShowPresenter
	// void ShowPresenter(bool bPlayAnimation);                                                                                 // [0xbeb5c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.SetSequenceRootActor
	// void SetSequenceRootActor(class AActor* Actor);                                                                          // [0xbeb270] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.ReceivedOnCue
	// void ReceivedOnCue(FGameplayTag& Name);                                                                                  // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_Dialogue.ReceivedDialogueStarted
	// void ReceivedDialogueStarted();                                                                                          // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_Dialogue.ReceivedDialogueEnded
	// void ReceivedDialogueEnded(EDialogueEndReason Reason);                                                                   // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_Dialogue.PickDialogueLine
	// FName PickDialogueLine(class AActor* Speaker, EPL_DialoguePickMethod PickMethod);                                        // [0xbeaec0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnStartSkipping__DelegateSignature
	// void OnStartSkipping__DelegateSignature();                                                                               // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnSequencePlayerShowPresenter
	// void OnSequencePlayerShowPresenter(bool bPlayAnimation);                                                                 // [0xbeae10] Final|Native|Protected 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnSequencePlayerHidePresenter
	// void OnSequencePlayerHidePresenter(bool bPlayAnimation);                                                                 // [0xbead80] Final|Native|Protected 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnSequencePlayerDestroyed
	// void OnSequencePlayerDestroyed(class ULevelSequencePlayer* SequencePlayer);                                              // [0xbeacf0] Final|Native|Protected 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnSequencePlayerCue
	// void OnSequencePlayerCue(FGameplayTag& Name);                                                                            // [0xbeac60] Final|Native|Protected|HasOutParms 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnPresenterVisibilityChanged__DelegateSignature
	// void OnPresenterVisibilityChanged__DelegateSignature(bool bIsShown);                                                     // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnManagedTemporaryActorDestroyed
	// void OnManagedTemporaryActorDestroyed(class AActor* DestroyedActor);                                                     // [0xbeab40] Final|Native|Protected 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnDialogueStarted__DelegateSignature
	// void OnDialogueStarted__DelegateSignature();                                                                             // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Dialogue.PL_Dialogue.OnDialogueEnded__DelegateSignature
	// void OnDialogueEnded__DelegateSignature(EDialogueEndReason Reason);                                                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Dialogue.PL_Dialogue.HidePresenter
	// void HidePresenter(bool bPlayAnimation);                                                                                 // [0xbea4f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.GetStartDialogueAudioEventId
	// FGameplayTag GetStartDialogueAudioEventId();                                                                             // [0xbea2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.GetSoundMixerSettings
	// FGameplayTag GetSoundMixerSettings();                                                                                    // [0xbea280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.GetImportanceLevel
	// char GetImportanceLevel();                                                                                               // [0xbea130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.GetDialogueLineDuration
	// float GetDialogueLineDuration(FName DialogueLineKey);                                                                    // [0xbe9dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.GetDialogueLine
	// class UPL_DialogueLine* GetDialogueLine(FName Key);                                                                      // [0xbe9d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.GetDialogueActors
	// TArray<TWeakObjectPtr<AActor*>> GetDialogueActors();                                                                     // [0xbe9ba0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Dialogue.PL_Dialogue.EndDialogue_NoThen
	// void EndDialogue_NoThen(EPL_NoExecThen& _, EDialogueEndReason Reason);                                                   // [0xbe9ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.EndDialogue
	// void EndDialogue(EDialogueEndReason Reason);                                                                             // [0xbe9a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_Dialogue.CreateDialogueLevelSequencePlayer
	// class UPL_DialogueLevelSequencePlayer* CreateDialogueLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings& PlaybackSettings, class ALevelSequenceActor*& OutSequenceActor); // [0xbe97f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_DialogueActorComponent
/// Size: 0x00E0 (224 bytes) (0x0000B8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPL_DialogueActorComponent : public UActorComponent
{ 
public:
	FText                                              DisplayName;                                                // 0x00B8   (0x0018)  
	class UPL_DialogueImageAsset*                      ImageAsset;                                                 // 0x00D0   (0x0008)  
	FName                                              LastSpokenLine;                                             // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueActorComponent.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0xbea060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Dialogue.PL_DialogueActorComponent.GetDialogueImage
	// class UTexture2D* GetDialogueImage(EPL_DialogueMood Mood);                                                               // [0xbe9c90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_DialogueActorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DialogueActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueActorInterface.ReceiveOnStopTalking
	// void ReceiveOnStopTalking(class UPL_DialogueLine* DialogueLine);                                                         // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialogueActorInterface.ReceiveOnStartTalking
	// void ReceiveOnStartTalking(class UPL_DialogueLine* DialogueLine);                                                        // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialogueActorInterface.ReceiveOnDialogueStarted
	// void ReceiveOnDialogueStarted(class APL_Dialogue* Dialogue);                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialogueActorInterface.ReceiveOnDialogueEnded
	// void ReceiveOnDialogueEnded(class APL_Dialogue* Dialogue, EDialogueEndReason Reason);                                    // [0x19ac1c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_Dialogue.PL_DialogueHandler
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UPL_DialogueHandler : public UObject
{ 
public:
	SDK_UNDEFINED(16,587) /* FMulticastInlineDelegate */ __um(OnDialogueResponse);                                 // 0x0028   (0x0010)  
	class APL_Dialogue*                                Dialogue;                                                   // 0x0038   (0x0008)  
	class UPL_DialogueLine*                            DialogueLine;                                               // 0x0040   (0x0008)  
	class UPL_DialogueNotifier*                        ContinueNotifier;                                           // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueHandler.RespondWithIndex
	// void RespondWithIndex(int32_t ResponseIndex);                                                                            // [0xbeb0a0] Final|Native|Public  
	// Function /Script/PL_Dialogue.PL_DialogueHandler.OnDialogueResponse__DelegateSignature
	// void OnDialogueResponse__DelegateSignature(FPL_DialogueResponse& Response);                                              // [0x19ac1c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PL_Dialogue.PL_DialogueHandler.OnAwaitResponseCallback
	// void OnAwaitResponseCallback(FPL_DialogueResponse& Response);                                                            // [0xbea970] Final|Native|Protected|HasOutParms 
	// Function /Script/PL_Dialogue.PL_DialogueHandler.Activate
	// void Activate();                                                                                                         // [0xbe9480] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_DialogueImageAsset
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UPL_DialogueImageAsset : public UDataAsset
{ 
public:
	class UTexture2D*                                  DefaultImage;                                               // 0x0030   (0x0008)  
	TMap<EPL_DialogueMood, class UTexture2D*>          ImageList;                                                  // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueImageAsset.GetImage
	// class UTexture2D* GetImage(EPL_DialogueMood Mood);                                                                       // [0xbea0a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_DialogueLevelSequenceActor
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class APL_DialogueLevelSequenceActor : public ALevelSequenceActor
{ 
public:
};

/// Class /Script/PL_Dialogue.PL_DialogueLevelSequenceDirector
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UPL_DialogueLevelSequenceDirector : public ULevelSequenceDirector
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueLevelSequenceDirector.TriggerCue
	// void TriggerCue(FGameplayTag Name);                                                                                      // [0xbeba10] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueLevelSequenceDirector.ShowDialoguePresenter
	// void ShowDialoguePresenter(bool bPlayAnimation);                                                                         // [0xbeb530] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueLevelSequenceDirector.HideDialoguePresenter
	// void HideDialoguePresenter(bool bPlayAnimation);                                                                         // [0xbea460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_DialogueLevelSequencePlayer
/// Size: 0x0640 (1600 bytes) (0x000600 - 0x000640) align 8 MaxSize: 0x0640
class UPL_DialogueLevelSequencePlayer : public ULevelSequencePlayer
{ 
public:
	SDK_UNDEFINED(16,588) /* FMulticastInlineDelegate */ __um(OnDestroyed);                                        // 0x0600   (0x0010)  
	SDK_UNDEFINED(16,589) /* FMulticastInlineDelegate */ __um(OnShowDialoguePresenter);                            // 0x0610   (0x0010)  
	SDK_UNDEFINED(16,590) /* FMulticastInlineDelegate */ __um(OnHideDialoguePresenter);                            // 0x0620   (0x0010)  
	SDK_UNDEFINED(16,591) /* FMulticastInlineDelegate */ __um(OnCue);                                              // 0x0630   (0x0010)  
};

/// Struct /Script/PL_Dialogue.PL_DialogueResponse
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_DialogueResponse
{ 
	int32_t                                            OptionValue;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FText                                              UiText;                                                     // 0x0008   (0x0018)  
	TArray<FName>                                      InputAction;                                                // 0x0020   (0x0010)  
};

/// Class /Script/PL_Dialogue.PL_DialogueLine
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPL_DialogueLine : public UObject
{ 
public:
	FText                                              UiText;                                                     // 0x0028   (0x0018)  
	EPL_DialogueMood                                   SpeakerMood;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TWeakObjectPtr<class ULevelSequence*>              LeadUpSequence;                                             // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	TWeakObjectPtr<class ULevelSequence*>              LoopedSequence;                                             // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	bool                                               bStopSequenceOnContinue;                                    // 0x0098   (0x0001)  
	EPL_DialogueLineFade                               CrossFade;                                                  // 0x0099   (0x0001)  
	bool                                               bCanBeSkipped;                                              // 0x009A   (0x0001)  
	bool                                               bTransitionCameraAtEnd;                                     // 0x009B   (0x0001)  
	bool                                               bUseCustomCameraEndTransitionDuration;                      // 0x009C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              CustomCameraEndTransitionDuration;                          // 0x00A0   (0x0004)  
	FGameplayTag                                       LineStartedAudioEventId;                                    // 0x00A4   (0x0008)  
	int32_t                                            DefaultResponse;                                            // 0x00AC   (0x0004)  
	TArray<FPL_DialogueResponse>                       Responses;                                                  // 0x00B0   (0x0010)  
};

/// Struct /Script/PL_Dialogue.PL_DialogueListEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_DialogueListEntry
{ 
	class UClass*                                      DialogueClass;                                              // 0x0000   (0x0008)  
	class UPL_Conditional*                             StartCondition;                                             // 0x0008   (0x0008)  
};

/// Class /Script/PL_Dialogue.PL_DialogueListAsset
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UPL_DialogueListAsset : public UDataAsset
{ 
public:
	EPL_DialoguePickMethod                             PickMethod;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FPL_DialogueListEntry>                      Entries;                                                    // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueListAsset.HasStartableEntry
	// bool HasStartableEntry(FPL_DialogueListInstancedProperties& InstancedProperties, class UPL_ConditionalContext* Context); // [0xbea2e0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PL_Dialogue.PL_DialogueListAsset.GetNextEntry
	// FPL_DialogueListEntry GetNextEntry(FPL_DialogueListInstancedProperties& InstancedProperties, class UPL_ConditionalContext* Context); // [0xbea160] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/PL_Dialogue.PL_DialogueListAssetUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DialogueListAssetUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueListAssetUtils.IsEmptyEntryBranch
	// bool IsEmptyEntryBranch(FPL_DialogueListEntry& Entry);                                                                   // [0xbea750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueListAssetUtils.IsEmptyEntry
	// bool IsEmptyEntry(FPL_DialogueListEntry& Entry);                                                                         // [0xbea750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Dialogue.PL_DialogueNotifier
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_DialogueNotifier : public UObject
{ 
public:
	SDK_UNDEFINED(16,592) /* FMulticastInlineDelegate */ __um(OnDialogueNotifier);                                 // 0x0028   (0x0010)  
};

/// Class /Script/PL_Dialogue.PL_DialogueNotifierUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DialogueNotifierUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueNotifierUtils.ConvertNotifierWrapperToNotifier
	// class UPL_DialogueNotifier* ConvertNotifierWrapperToNotifier(FPL_DialogueNotifierWrapper& Wrapper);                      // [0xbe9580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Dialogue.PL_DialogueNotifierUtils.Broadcast
	// void Broadcast(class UPL_DialogueNotifier* Notifier, int32_t ResponseIndex);                                             // [0xbe94c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_DialoguePresenterInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DialoguePresenterInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.TrySkipToNextSequenceEvent
	// bool TrySkipToNextSequenceEvent();                                                                                       // [0xbebac0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.TrySkipAhead
	// void TrySkipAhead();                                                                                                     // [0xbebaa0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.StopRunningDialogueSequence
	// void StopRunningDialogueSequence();                                                                                      // [0xbeb9f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.Show
	// void Show(bool bPlayAnimation);                                                                                          // [0xbeb300] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.SetPlayerHudVisibility
	// void SetPlayerHudVisibility(TArray<APlayerController*>& PlayerControllers, bool bVisible, bool bPlayAnimation);          // [0xbeb130] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.PresentDialogueLine
	// void PresentDialogueLine(class AActor* Speaker, class UPL_DialogueLine* Line, class UPL_DialogueNotifier* ResponseNotifier); // [0xbeafa0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.IsShown
	// bool IsShown();                                                                                                          // [0xbea7f0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.InitializeDialoguePresenter
	// void InitializeDialoguePresenter(class APL_Dialogue* Dialogue, class APlayerController* Controller, class AActor* RootActor); // [0xbea650] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.Hide
	// void Hide(bool bPlayAnimation);                                                                                          // [0xbea3d0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.GetPreferredOrder
	// int32_t GetPreferredOrder();                                                                                             // [0xbea250] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.GetDialogueLineDuration
	// float GetDialogueLineDuration(class UPL_DialogueLine* DialogueLine);                                                     // [0xbe9e60] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.DialogueStarted
	// void DialogueStarted();                                                                                                  // [0xbe9a30] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Dialogue.PL_DialoguePresenterInterface.DialogueEnded
	// void DialogueEnded(EDialogueEndReason Reason);                                                                           // [0xbe99b0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_Dialogue.PL_DialogueResponseProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UPL_DialogueResponseProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,593) /* FMulticastInlineDelegate */ __um(OnSelected);                                         // 0x0028   (0x0010)  
	class UInputComponent*                             DialogueInputComponent;                                     // 0x0038   (0x0008)  
	TArray<int32_t>                                    ActionBindingHandles;                                       // 0x0040   (0x0010)  
	class UWidget*                                     ResponseWidget;                                             // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0058   (0x0038)  MISSED


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueResponseProxy.OnResponseSelected__DelegateSignature
	// void OnResponseSelected__DelegateSignature(int32_t ResponseIndex);                                                       // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Dialogue.PL_DialogueResponseProxy.OnInputAction
	// void OnInputAction();                                                                                                    // [0xbeab20] Final|Native|Private 
};

/// Class /Script/PL_Dialogue.PL_DialogueSettings
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UPL_DialogueSettings : public UObject
{ 
public:
	float                                              MinDisplayDuration;                                         // 0x0028   (0x0004)  
	float                                              DisplayDurationPerCharacter;                                // 0x002C   (0x0004)  
	TMap<FGameplayTag, class UClass*>                  DialoguePresenterClassesByType;                             // 0x0030   (0x0050)  
	float                                              SequenceEndCameraTransitionDuration;                        // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/PL_Dialogue.PL_DialogueUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DialogueUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueUtils.WaitForCue
	// class UPL_DialogueWaitForCueHandler* WaitForCue(class APL_Dialogue* Dialogue, FGameplayTag Name);                        // [0xbebaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueUtils.ShowTimedDialogueLine
	// class UPL_DialogueHandler* ShowTimedDialogueLine(class APL_Dialogue* Dialogue, class AActor* Speaker, FName DialogueLineKey, float DisplayDuration); // [0xbeb720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueUtils.ShowDialogueLine
	// class UPL_DialogueHandler* ShowDialogueLine(class APL_Dialogue* Dialogue, class AActor* Speaker, FName DialogueLineKey, bool UseCustomNotifier, class UPL_DialogueNotifier* CustomContinueNotifier); // [0xbeb390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueUtils.NewDialogue
	// class APL_Dialogue* NewDialogue(class UObject* WorldContextObject, class UClass* DialogueClass, class AActor* SequenceRootActor, bool bAutoStart); // [0xbea820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_DialogueUtils.GetDialoguePresenterClass
	// class UClass* GetDialoguePresenterClass(FGameplayTag DialogueType);                                                      // [0xbe9fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Dialogue.PL_DialogueUtils.GetDialogueLineDuration
	// float GetDialogueLineDuration(class APL_Dialogue* Dialogue, FName DialogueLineKey);                                      // [0xbe9f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Dialogue.PL_DialogueWaitForCueHandler
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_DialogueWaitForCueHandler : public UObject
{ 
public:
	SDK_UNDEFINED(16,594) /* FMulticastInlineDelegate */ __um(OnContinue);                                         // 0x0028   (0x0010)  
	class APL_Dialogue*                                Dialogue;                                                   // 0x0038   (0x0008)  
	FGameplayTag                                       CueName;                                                    // 0x0040   (0x0008)  
	SDK_UNDEFINED(16,595) /* FDelegateProperty */      __um(OnCueDelegate);                                        // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_Dialogue.PL_DialogueWaitForCueHandler.OnStartSkipping
	// void OnStartSkipping();                                                                                                  // [0xbeaea0] Final|Native|Protected 
	// Function /Script/PL_Dialogue.PL_DialogueWaitForCueHandler.OnCue
	// void OnCue(FGameplayTag& Name);                                                                                          // [0xbeaa90] Final|Native|Protected|HasOutParms 
	// Function /Script/PL_Dialogue.PL_DialogueWaitForCueHandler.Activate
	// void Activate();                                                                                                         // [0xbe94a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Dialogue.PL_ObjectResolverMethod
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_ObjectResolverMethod : public UObject
{ 
public:
	EPL_ObjectResolverFailPolicy                       FailPolicy;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/PL_Dialogue.PL_PlayerCharacterResolver
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_PlayerCharacterResolver : public UPL_ObjectResolverMethod
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/PL_Dialogue.PL_ActorClassResolver
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_ActorClassResolver : public UPL_ObjectResolverMethod
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/PL_Dialogue.PL_ActorInstanceResolver
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UPL_ActorInstanceResolver : public UPL_ObjectResolverMethod
{ 
public:
	TWeakObjectPtr<class AActor*>                      ActorInstance;                                              // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/PL_Dialogue.PL_ConditionalActorResolver
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_ConditionalActorResolver : public UPL_ObjectResolverMethod
{ 
public:
	class UPL_Conditional*                             Condition;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/PL_Dialogue.PL_ObjectResolverUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ObjectResolverUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Dialogue.PL_ObjectResolverUtils.ConvertObjectResolverToUObject
	// class UObject* ConvertObjectResolverToUObject(FPL_ObjectResolver& Resolver, class UObject* WorldContextObject);          // [0xbe9700] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Dialogue.PL_ObjectResolverUtils.ConvertObjectResolverToAActor
	// class AActor* ConvertObjectResolverToAActor(FPL_ObjectResolver& Resolver, class UObject* WorldContextObject);            // [0xbe9610] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PL_Dialogue.PL_ShowHideDialoguePresenter
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UPL_ShowHideDialoguePresenter : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,596) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0030   (0x0010)  
	bool                                               bPlayAnimation;                                             // 0x0040   (0x0001)  
	bool                                               bShouldShow;                                                // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	class APL_Dialogue*                                Dialogue;                                                   // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/PL_Dialogue.PL_ShowHideDialoguePresenter.ShowPresenterAndWait
	// class UPL_ShowHideDialoguePresenter* ShowPresenterAndWait(class APL_Dialogue* Target, bool bPlayAnimation);              // [0xbeb650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Dialogue.PL_ShowHideDialoguePresenter.OnPresenterVisibilityChanged
	// void OnPresenterVisibilityChanged(bool bIsShown);                                                                        // [0xbeabd0] Final|Native|Private 
	// Function /Script/PL_Dialogue.PL_ShowHideDialoguePresenter.OnCompleted__DelegateSignature
	// void OnCompleted__DelegateSignature();                                                                                   // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Dialogue.PL_ShowHideDialoguePresenter.HidePresenterAndWait
	// class UPL_ShowHideDialoguePresenter* HidePresenterAndWait(class APL_Dialogue* Target, bool bPlayAnimation);              // [0xbea580] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/PL_Dialogue.PL_DialogueListInstancedProperties
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPL_DialogueListInstancedProperties
{ 
	int32_t                                            LastEntryIndex;                                             // 0x0000   (0x0004)  
};

/// Struct /Script/PL_Dialogue.PL_DialogueNotifierWrapper
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPL_DialogueNotifierWrapper
{ 
	class UPL_DialogueNotifier*                        DialogueNotifier;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/PL_Dialogue.PL_ObjectResolver
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ObjectResolver
{ 
	class UPL_ObjectResolverMethod*                    ResolverMethod;                                             // 0x0000   (0x0008)  
	TWeakObjectPtr<class UObject*>                     CachedObject;                                               // 0x0008   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_PreloadedReferences) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(APL_Dialogue) == 0x0398); // 920 bytes (0x000288 - 0x000398)
static_assert(sizeof(UPL_DialogueActorComponent) == 0x00E0); // 224 bytes (0x0000B8 - 0x0000E0)
static_assert(sizeof(UPL_DialogueActorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DialogueHandler) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UPL_DialogueImageAsset) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(APL_DialogueLevelSequenceActor) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UPL_DialogueLevelSequenceDirector) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UPL_DialogueLevelSequencePlayer) == 0x0640); // 1600 bytes (0x000600 - 0x000640)
static_assert(sizeof(FPL_DialogueResponse) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UPL_DialogueLine) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(FPL_DialogueListEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_DialogueListAsset) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPL_DialogueListAssetUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DialogueNotifier) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_DialogueNotifierUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DialoguePresenterInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DialogueResponseProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UPL_DialogueSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UPL_DialogueUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DialogueWaitForCueHandler) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPL_ObjectResolverMethod) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_PlayerCharacterResolver) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_ActorClassResolver) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_ActorInstanceResolver) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UPL_ConditionalActorResolver) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_ObjectResolverUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ShowHideDialoguePresenter) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FPL_DialogueListInstancedProperties) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPL_DialogueNotifierWrapper) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_ObjectResolver) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UPL_PreloadedReferences, PreloadedObjects) == 0x0038);
static_assert(offsetof(APL_Dialogue, DialogueType) == 0x02D0);
static_assert(offsetof(APL_Dialogue, SoundMixerSettings) == 0x02DC);
static_assert(offsetof(APL_Dialogue, StartDialogueAudioEventId) == 0x02E4);
static_assert(offsetof(APL_Dialogue, DialogueLines) == 0x02F0);
static_assert(offsetof(APL_Dialogue, SequenceRootActor) == 0x0358);
static_assert(offsetof(APL_Dialogue, ManagedTemporaryActors) == 0x0360);
static_assert(offsetof(APL_Dialogue, PreloadedReferences) == 0x0380);
static_assert(offsetof(APL_Dialogue, CurrentSpeaker) == 0x0388);
static_assert(offsetof(APL_Dialogue, CurrentDialogueLine) == 0x0390);
static_assert(offsetof(UPL_DialogueActorComponent, DisplayName) == 0x00B8);
static_assert(offsetof(UPL_DialogueActorComponent, ImageAsset) == 0x00D0);
static_assert(offsetof(UPL_DialogueActorComponent, LastSpokenLine) == 0x00D8);
static_assert(offsetof(UPL_DialogueHandler, Dialogue) == 0x0038);
static_assert(offsetof(UPL_DialogueHandler, DialogueLine) == 0x0040);
static_assert(offsetof(UPL_DialogueHandler, ContinueNotifier) == 0x0048);
static_assert(offsetof(UPL_DialogueImageAsset, DefaultImage) == 0x0030);
static_assert(offsetof(UPL_DialogueImageAsset, ImageList) == 0x0038);
static_assert(offsetof(FPL_DialogueResponse, UiText) == 0x0008);
static_assert(offsetof(FPL_DialogueResponse, InputAction) == 0x0020);
static_assert(offsetof(UPL_DialogueLine, UiText) == 0x0028);
static_assert(offsetof(UPL_DialogueLine, SpeakerMood) == 0x0040);
static_assert(offsetof(UPL_DialogueLine, LeadUpSequence) == 0x0048);
static_assert(offsetof(UPL_DialogueLine, LoopedSequence) == 0x0070);
static_assert(offsetof(UPL_DialogueLine, CrossFade) == 0x0099);
static_assert(offsetof(UPL_DialogueLine, LineStartedAudioEventId) == 0x00A4);
static_assert(offsetof(UPL_DialogueLine, Responses) == 0x00B0);
static_assert(offsetof(FPL_DialogueListEntry, DialogueClass) == 0x0000);
static_assert(offsetof(FPL_DialogueListEntry, StartCondition) == 0x0008);
static_assert(offsetof(UPL_DialogueListAsset, PickMethod) == 0x0030);
static_assert(offsetof(UPL_DialogueListAsset, Entries) == 0x0038);
static_assert(offsetof(UPL_DialogueResponseProxy, DialogueInputComponent) == 0x0038);
static_assert(offsetof(UPL_DialogueResponseProxy, ActionBindingHandles) == 0x0040);
static_assert(offsetof(UPL_DialogueResponseProxy, ResponseWidget) == 0x0050);
static_assert(offsetof(UPL_DialogueSettings, DialoguePresenterClassesByType) == 0x0030);
static_assert(offsetof(UPL_DialogueWaitForCueHandler, Dialogue) == 0x0038);
static_assert(offsetof(UPL_DialogueWaitForCueHandler, CueName) == 0x0040);
static_assert(offsetof(UPL_ObjectResolverMethod, FailPolicy) == 0x0028);
static_assert(offsetof(UPL_ActorClassResolver, ActorClass) == 0x0030);
static_assert(offsetof(UPL_ActorInstanceResolver, ActorInstance) == 0x0030);
static_assert(offsetof(UPL_ConditionalActorResolver, Condition) == 0x0030);
static_assert(offsetof(UPL_ShowHideDialoguePresenter, Dialogue) == 0x0048);
static_assert(offsetof(FPL_DialogueNotifierWrapper, DialogueNotifier) == 0x0000);
static_assert(offsetof(FPL_ObjectResolver, ResolverMethod) == 0x0000);
static_assert(offsetof(FPL_ObjectResolver, CachedObject) == 0x0008);
