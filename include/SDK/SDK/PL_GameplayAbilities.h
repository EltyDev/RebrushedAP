
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: Niagara
/// dependency: PL_Core

#pragma pack(push, 0x1)

/// Class /Script/PL_GameplayAbilities.PL_AbilityEffectsAppliedByAbilityBeingGivenInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_AbilityEffectsAppliedByAbilityBeingGivenInterface : public UInterface
{ 
public:
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayEffectToApply
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_GameplayEffectToApply
{ 
	class UClass*                                      Effect;                                                     // 0x0000   (0x0008)  
	float                                              Level;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayEffectsToApply
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_GameplayEffectsToApply
{ 
	TArray<FPL_GameplayEffectToApply>                  GameplayEffectsToApply;                                     // 0x0000   (0x0010)  
};

/// Struct /Script/PL_GameplayAbilities.PL_AppliedAbilityEffectsForAbility
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_AppliedAbilityEffectsForAbility
{ 
	TArray<FActiveGameplayEffectHandle>                EffectsHandlers;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/PL_GameplayAbilities.PendingAbilityActivation
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPendingAbilityActivation
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_AbilitySystemComponent
/// Size: 0x14A8 (5288 bytes) (0x001318 - 0x0014A8) align 8 MaxSize: 0x14A8
class UPL_AbilitySystemComponent : public UAbilitySystemComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x1318   (0x0008)  MISSED
	SDK_UNDEFINED(16,598) /* FMulticastInlineDelegate */ __um(BP_OnAbilityEnded);                                  // 0x1320   (0x0010)  
	TMap<FGameplayTag, FPL_GameplayEffectsToApply>     GameplayEventTriggeredEffects;                              // 0x1330   (0x0050)  
	TArray<class UClass*>                              DefaultAttributeSetClasses;                                 // 0x1380   (0x0010)  
	TArray<class UClass*>                              StartUpGameplayEffects;                                     // 0x1390   (0x0010)  
	TMap<class UClass*, FPL_AppliedAbilityEffectsForAbility> AppliedAbilityEffectsForAbilities;                    // 0x13A0   (0x0050)  
	TMap<FGameplayAbilitySpecHandle, FPL_AppliedAbilityEffectsForAbility> EffectsRemovedOnAbilityDeactivation;     // 0x13F0   (0x0050)  
	TArray<class UPL_AttributeSet*>                    DefaultAttributeSets;                                       // 0x1440   (0x0010)  
	TMap<class UPL_GameplayAbility*, FPendingAbilityActivation> PendingAbilityActivations;                         // 0x1450   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x14A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_AbilitySystemComponent.CancelPendingAbilitiesWithTags
	// void CancelPendingAbilitiesWithTags(FGameplayTagContainer& WithTags, FGameplayTagContainer& WithoutTags);                // [0xbdb5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AbilitySystemComponent.CancelAllActiveAbilities
	// void CancelAllActiveAbilities();                                                                                         // [0xbdb590] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AbilitySystemComponent.CancelAbilityByClass
	// void CancelAbilityByClass(class UClass* AbilityClassToCancel);                                                           // [0xbdb500] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AbilitySystemComponent.CancelAbilitiesWithTags
	// void CancelAbilitiesWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags, class UGameplayAbility* Ignore); // [0xbdb350] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_GameplayAbilities.PL_AbilityTask_PlayMontageAndWaitForEvent
/// Size: 0x0200 (512 bytes) (0x000080 - 0x000200) align 8 MaxSize: 0x0200
class UPL_AbilityTask_PlayMontageAndWaitForEvent : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,599) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,600) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,601) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,602) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,603) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x00C0   (0x0010)  
	FGameplayEventData                                 LastEventData;                                              // 0x00D0   (0x00B0)  
	FPL_MontageSettings                                MontageSettings;                                            // 0x0180   (0x0028)  
	FGameplayTagContainer                              EventTags;                                                  // 0x01A8   (0x0020)  
	float                                              AnimRootMotionTranslationScale;                             // 0x01C8   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x33];                                      // 0x01CD   (0x0033)  MISSED


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_AbilityTask_PlayMontageAndWaitForEvent.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                        // [0xbdde00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AbilityTask_PlayMontageAndWaitForEvent.SetNextSection
	// void SetNextSection(FName FromSection, FName NextSection);                                                               // [0xbddd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AbilityTask_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
	// class UPL_AbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FPL_MontageSettings InMontageSettings, FGameplayTagContainer InEventTags, bool bInStopWhenAbilityEnds, float InAnimRootMotionTranslationScale); // [0xbdd3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AbilityTask_PlayMontageAndWaitForEvent.JumpToSection
	// void JumpToSection(FName MontageSection);                                                                                // [0xbdc220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_GameplayAbilities.PL_AbilityTask_MontageMovedOverlaps
/// Size: 0x0308 (776 bytes) (0x000200 - 0x000308) align 8 MaxSize: 0x0308
class UPL_AbilityTask_MontageMovedOverlaps : public UPL_AbilityTask_PlayMontageAndWaitForEvent
{ 
public:
	SDK_UNDEFINED(16,604) /* FMulticastInlineDelegate */ __um(OnSweepOverlapFound);                                // 0x0200   (0x0010)  
	FPL_SweepColliders                                 SweepColliders;                                             // 0x0210   (0x00C0)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x02D0   (0x0038)  MISSED


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_AbilityTask_MontageMovedOverlaps.SweepOverlapFound
	// void SweepOverlapFound(FHitResult& Hit, class UPrimitiveComponent* Collider);                                            // [0xbdde80] Final|Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_AbilityTask_MontageMovedOverlaps.PlayMontageAndWaitForOverlaps
	// class UPL_AbilityTask_MontageMovedOverlaps* PlayMontageAndWaitForOverlaps(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FPL_MontageSettings InMontageSettings, FGameplayTagContainer InEventTags, FPL_AbilityTask_MontageMovedOverlaps_PlayData InPlayData, FPL_SweepCollidersSettingSetup& SweepCollidersSettingSetup, TArray<AActor*>& IgnoredActors, bool bInStopWhenAbilityEnds, float InAnimRootMotionTranslationScale); // [0xbdd5f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_GameplayAbilities.PL_ActorWithAbilitySystem
/// Size: 0x02A0 (672 bytes) (0x000288 - 0x0002A0) align 8 MaxSize: 0x02A0
class APL_ActorWithAbilitySystem : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0288   (0x0010)  MISSED
	class UPL_AbilitySystemComponent*                  AbilitySystemComponent;                                     // 0x0298   (0x0008)  
};

/// Class /Script/PL_GameplayAbilities.PL_AnimNotify_GamePlayEventByTag
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UPL_AnimNotify_GamePlayEventByTag : public UAnimNotify
{ 
public:
	FGameplayTag                                       EventTag;                                                   // 0x0038   (0x0008)  
	bool                                               bNotifyAbilitySystem;                                       // 0x0040   (0x0001)  
	bool                                               bNotifyAnimation;                                           // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_AnimNotify_GamePlayEventStateByTag
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UPL_AnimNotify_GamePlayEventStateByTag : public UAnimNotifyState
{ 
public:
	FGameplayTag                                       BeginEventTag;                                              // 0x0030   (0x0008)  
	FGameplayTag                                       EndEventTag;                                                // 0x0038   (0x0008)  
	bool                                               bNotifyAbilitySystem;                                       // 0x0040   (0x0001)  
	bool                                               bNotifyAnimation;                                           // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_AnimNotify_LooseGamePlayTagState
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_AnimNotify_LooseGamePlayTagState : public UAnimNotifyState
{ 
public:
	FGameplayTag                                       GameplayTag;                                                // 0x0030   (0x0008)  
};

/// Class /Script/PL_GameplayAbilities.PL_AsyncTaskAttributeChanged
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UPL_AsyncTaskAttributeChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,605) /* FMulticastInlineDelegate */ __um(OnAttributeChanged);                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_AsyncTaskAttributeChanged.ListenForAttributesChange
	// class UPL_AsyncTaskAttributeChanged* ListenForAttributesChange(class UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayAttribute> Attributes); // [0xbdc4c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AsyncTaskAttributeChanged.ListenForAttributeChange
	// class UPL_AsyncTaskAttributeChanged* ListenForAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute); // [0xbdc2b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AsyncTaskAttributeChanged.EndTask
	// void EndTask();                                                                                                          // [0xbdb700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_GameplayAbilities.PL_AsyncTaskGameplayTagEvent
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UPL_AsyncTaskGameplayTagEvent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,606) /* FMulticastInlineDelegate */ __um(OnGameplayTagEvent);                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_AsyncTaskGameplayTagEvent.ListenForGameplayTagEvent
	// class UPL_AsyncTaskGameplayTagEvent* ListenForGameplayTagEvent(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag& GameplayTag, bool bOnlyListenToNewOrRemoved); // [0xbdc600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_AsyncTaskGameplayTagEvent.EndTask
	// void EndTask();                                                                                                          // [0xbdb720] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_GameplayAbilities.PL_AttributeSet
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPL_AttributeSet : public UAttributeSet
{ 
public:
};

/// Class /Script/PL_GameplayAbilities.PL_CharacterWithAbilitySystem
/// Size: 0x0530 (1328 bytes) (0x000518 - 0x000530) align 16 MaxSize: 0x0530
class APL_CharacterWithAbilitySystem : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0518   (0x0010)  MISSED
	class UPL_AbilitySystemComponent*                  AbilitySystemComponent;                                     // 0x0528   (0x0008)  
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayAbility
/// Size: 0x0478 (1144 bytes) (0x0003B0 - 0x000478) align 8 MaxSize: 0x0478
class UPL_GameplayAbility : public UGameplayAbility
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x03B0   (0x0008)  MISSED
	TArray<FPL_GameplayEffectToApply>                  EffectsAppliedOnAbilityBeingGiven;                          // 0x03B8   (0x0010)  
	TArray<FPL_GameplayEffectToApply>                  EffectsAppliedOnAbilityBeingActivated;                      // 0x03C8   (0x0010)  
	TArray<FPL_GameplayEffectToApply>                  EffectsAppliedOnAbilityEnding;                              // 0x03D8   (0x0010)  
	TArray<FPL_GameplayEffectToApply>                  EffectsAppliedOnAbilityCancelling;                          // 0x03E8   (0x0010)  
	TArray<FGameplayTag>                               GameplayCues;                                               // 0x03F8   (0x0010)  
	bool                                               bActivateAbilityOnGranted;                                  // 0x0408   (0x0001)  
	bool                                               bActivateAbilityOnInput;                                    // 0x0409   (0x0001)  
	bool                                               bActivateAbilityOnContinuousInput;                          // 0x040A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x040B   (0x0005)  MISSED
	FScalableFloat                                     CooldownDuration;                                           // 0x0410   (0x0028)  
	FGameplayTagContainer                              CooldownTags;                                               // 0x0438   (0x0020)  
	FGameplayTagContainer                              TempCooldownTags;                                           // 0x0458   (0x0020)  


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbility.GetEffectsAppliedOnAbilityBeingGiven
	// TArray<FPL_GameplayEffectToApply> GetEffectsAppliedOnAbilityBeingGiven();                                                // [0xbdb870] Native|Public|Const  
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbility.BP_InputReleased
	// void BP_InputReleased(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActivationInfo ActivationInfo);                 // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbility.BP_InputPressed
	// void BP_InputPressed(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActivationInfo ActivationInfo);                  // [0x19ac1c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_GameplayAbilityUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.RemoveLooseGameplayTags
	// void RemoveLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags);                                  // [0xbddc40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.RemoveLooseGameplayTag
	// void RemoveLooseGameplayTag(class AActor* Actor, FGameplayTag& GameplayTag);                                             // [0xbddb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.RemoveActiveGameplayEffect
	// bool RemoveActiveGameplayEffect(class AActor* Target, FActiveGameplayEffectHandle& EffectHandle, int32_t StacksToRemove); // [0xbdda50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.IsAttributeTargetOfModifier
	// bool IsAttributeTargetOfModifier(FGameplayAttribute& AttributeInQuestion, FGameplayModifierInfo& ModifierInfo);          // [0xbdbf40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(class UObject* Object, FGameplayTag& GameplayTag);                                           // [0xbdbe60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.HasAnyMatchingGameplayTagsInContainer
	// bool HasAnyMatchingGameplayTagsInContainer(FGameplayTagContainer& GameplayTags, class UObject* Object);                  // [0xbdbd50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.HasAnyMatchingGameplayTags
	// bool HasAnyMatchingGameplayTags(class UObject* Object, FGameplayTagContainer& GameplayTags);                             // [0xbdbc50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.HasAllMatchingGameplayTagsInContainer
	// bool HasAllMatchingGameplayTagsInContainer(FGameplayTagContainer& GameplayTags, class UObject* Object);                  // [0xbdbb40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(class UObject* Object, FGameplayTagContainer& GameplayTags);                             // [0xbdba40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.GiveAbilityToActor
	// void GiveAbilityToActor(class AActor* Actor, class UClass* AbilityClass, int32_t Level, int32_t InputID, class UObject* SourceObject); // [0xbdb8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.GetAttributeName
	// FString GetAttributeName(FGameplayAttribute& Attribute);                                                                 // [0xbdb740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.ApplyGameplayEffectToTargetWithoutAbilitySystem
	// bool ApplyGameplayEffectToTargetWithoutAbilitySystem(class UAbilitySystemComponent* ThisComponent, FHitResult& Hit, class UClass* Effect, bool bShouldAlwaysTriggerCues); // [0xbdb1c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.ApplyGameplayEffectToTarget
	// FActiveGameplayEffectHandle ApplyGameplayEffectToTarget(class UObject* SourceObject, class AActor* Target, class UClass* GameplayEffectClass, float Level); // [0xbdb060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.ApplyGameplayEffectSpecToTarget
	// FActiveGameplayEffectHandle ApplyGameplayEffectSpecToTarget(class AActor* Target, FGameplayEffectSpecHandle& Spec);      // [0xbdaf50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.ApplyCueToWorld
	// void ApplyCueToWorld(class UObject* WorldContextObject, FGameplayTag& CueTag, FVector& Location, FRotator& Rotation);    // [0xbdadf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.AddLooseGameplayTags
	// void AddLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags);                                     // [0xbdad00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_GameplayAbilities.PL_GameplayAbilityUtils.AddLooseGameplayTag
	// void AddLooseGameplayTag(class AActor* Actor, FGameplayTag& GameplayTag);                                                // [0xbdac30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueManager
/// Size: 0x0360 (864 bytes) (0x000310 - 0x000360) align 8 MaxSize: 0x0360
class UPL_GameplayCueManager : public UGameplayCueManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0310   (0x0050)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueNotify_CharacterAttachedSfxAndParticle
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0040   (0x0008)  
	class USoundBase*                                  Sound2D;                                                    // 0x0048   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0050   (0x0008)  
	class UNiagaraSystem*                              NiagaraParticleSystem;                                      // 0x0058   (0x0008)  
	FName                                              SocketName;                                                 // 0x0060   (0x0008)  
};

/// Struct /Script/PL_GameplayAbilities.PL_HitEffect
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPL_HitEffect
{ 
	FGameplayTagContainer                              SoundActivationBlockedTags;                                 // 0x0000   (0x0020)  
	class USoundBase*                                  Sound;                                                      // 0x0020   (0x0008)  
	FGameplayTagContainer                              ParticleActivationBlockedTags;                              // 0x0028   (0x0020)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0048   (0x0008)  
	class UNiagaraSystem*                              NiagaraParticleSystem;                                      // 0x0050   (0x0008)  
};

/// Struct /Script/PL_GameplayAbilities.PL_TargetHitEffect
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
struct FPL_TargetHitEffect : FPL_HitEffect
{ 
	class UClass*                                      TargetClass;                                                // 0x0058   (0x0008)  
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueNotify_HitImpact
/// Size: 0x00A8 (168 bytes) (0x000040 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPL_GameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	TArray<FPL_TargetHitEffect>                        HitEffects;                                                 // 0x0040   (0x0010)  
	FPL_HitEffect                                      DefaultHitEffect;                                           // 0x0050   (0x0058)  
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueNotify_SfxAndParticle
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
class UPL_GameplayCueNotify_SfxAndParticle : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0040   (0x0008)  
	class USoundBase*                                  Sound2D;                                                    // 0x0048   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0050   (0x0008)  
	class UNiagaraSystem*                              NiagaraParticleSystem;                                      // 0x0058   (0x0008)  
	class UClass*                                      ActorToBeSpawned;                                           // 0x0060   (0x0008)  
	ESpawnActorCollisionHandlingMethod                 ActorToBeSpawnedCollisionHandling;                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x006C   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0074   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueNotify_SfxAndParticleActor
/// Size: 0x0318 (792 bytes) (0x0002E8 - 0x000318) align 8 MaxSize: 0x0318
class APL_GameplayCueNotify_SfxAndParticleActor : public AGameplayCueNotify_Actor
{ 
public:
	float                                              Duration;                                                   // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02EC   (0x0004)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x02F0   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x02F8   (0x0008)  
	class UParticleSystemComponent*                    OldParticleSystem;                                          // 0x0300   (0x0008)  
	class UNiagaraComponent*                           ParticleSystem;                                             // 0x0308   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0310   (0x0008)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_GameplayCueSettings : public UObject
{ 
public:
	bool                                               bShouldSyncScanRuntimeObjectLibraries;                      // 0x0028   (0x0001)  
	bool                                               bShouldSyncLoadRuntimeObjectLibraries;                      // 0x0029   (0x0001)  
	bool                                               bShouldAsyncLoadRuntimeObjectLibraries;                     // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayCueUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_GameplayCueUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayEventSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_GameplayEventSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayInteractingAnimInstance
/// Size: 0x02E0 (736 bytes) (0x0002B8 - 0x0002E0) align 16 MaxSize: 0x02E0
class UPL_GameplayInteractingAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x02B8   (0x0010)  MISSED
	SDK_UNDEFINED(16,607) /* FMulticastInlineDelegate */ __um(OnGameplayEventFromSource);                          // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02D8   (0x0008)  MISSED
};

/// Class /Script/PL_GameplayAbilities.PL_GameplayTagsComponent
/// Size: 0x00E0 (224 bytes) (0x0000B8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPL_GameplayTagsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x00C0   (0x0020)  
};

/// Class /Script/PL_GameplayAbilities.PL_HealthAttributeSet
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UPL_HealthAttributeSet : public UPL_AttributeSet
{ 
public:
	FGameplayAttributeData                             Health;                                                     // 0x0030   (0x0010)  
	FGameplayAttributeData                             MaxHealth;                                                  // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_HealthAttributeSet.OnRep_MaxHealth
	// void OnRep_MaxHealth(FGameplayAttributeData& OldMaxHealth);                                                              // [0xbdd0e0] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_HealthAttributeSet.OnRep_Health
	// void OnRep_Health(FGameplayAttributeData& OldHealth);                                                                    // [0xbdce20] Native|Protected|HasOutParms 
};

/// Class /Script/PL_GameplayAbilities.PL_ListenToGamePlayEventsInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ListenToGamePlayEventsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_ListenToGamePlayEventsInterface.OnGameplayEventToActor
	// void OnGameplayEventToActor(FGameplayTag EventTag, FGameplayEventData Payload);                                          // [0xbdc720] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PL_GameplayAbilities.PL_ManageEffectsToBeRemovedOnAbilityDeactivationInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ManageEffectsToBeRemovedOnAbilityDeactivationInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_GameplayAbilities.PL_MovementAttributeSet
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class UPL_MovementAttributeSet : public UPL_AttributeSet
{ 
public:
	FGameplayAttributeData                             MaxAcceleration;                                            // 0x0030   (0x0010)  
	FGameplayAttributeData                             MaxWalkSpeed;                                               // 0x0040   (0x0010)  
	FGameplayAttributeData                             MinAnalogWalkSpeed;                                         // 0x0050   (0x0010)  
	FGameplayAttributeData                             RotationRate;                                               // 0x0060   (0x0010)  
	FGameplayAttributeData                             MaxFlySpeed;                                                // 0x0070   (0x0010)  
	FGameplayAttributeData                             JumpZVelocity;                                              // 0x0080   (0x0010)  
	FGameplayAttributeData                             AirControl;                                                 // 0x0090   (0x0010)  
	FGameplayAttributeData                             AirControlBoostMultiplier;                                  // 0x00A0   (0x0010)  
	FGameplayAttributeData                             AirControlBoostVelocityThreshold;                           // 0x00B0   (0x0010)  
	FGameplayAttributeData                             GravityScale;                                               // 0x00C0   (0x0010)  
	FGameplayAttributeData                             BrakingFriction;                                            // 0x00D0   (0x0010)  
	FGameplayAttributeData                             GroundFriction;                                             // 0x00E0   (0x0010)  
	FGameplayAttributeData                             WalkableFloorAngle;                                         // 0x00F0   (0x0010)  
	FGameplayAttributeData                             bMaintainHorizontalGroundVelocity;                          // 0x0100   (0x0010)  
	FGameplayAttributeData                             bForceMaxAccel;                                             // 0x0110   (0x0010)  


	/// Functions
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_WalkableFloorAngle
	// void OnRep_WalkableFloorAngle(FGameplayAttributeData& OldWalkableFloorAngle);                                            // [0xbdd2f0] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_RotationRate
	// void OnRep_RotationRate(FGameplayAttributeData& OldRotationRate);                                                        // [0xbdd240] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_MinAnalogWalkSpeed
	// void OnRep_MinAnalogWalkSpeed(FGameplayAttributeData& OldMinAnalogWalkSpeed);                                            // [0xbdd190] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_MaxWalkSpeed
	// void OnRep_MaxWalkSpeed(FGameplayAttributeData& OldMaxWalkSpeed);                                                        // [0xbdd0e0] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_MaxFlySpeed
	// void OnRep_MaxFlySpeed(FGameplayAttributeData& OldMaxFlySpeed);                                                          // [0xbdd030] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_MaxAcceleration
	// void OnRep_MaxAcceleration(FGameplayAttributeData& OldMaxAcceleration);                                                  // [0xbdce20] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_MaintainHorizontalGroundVelocity
	// void OnRep_MaintainHorizontalGroundVelocity(FGameplayAttributeData& OldWalkableFloorAngle);                              // [0xbdcf80] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_JumpZVelocity
	// void OnRep_JumpZVelocity(FGameplayAttributeData& OldJumpZVelocity);                                                      // [0xbdced0] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_GroundFriction
	// void OnRep_GroundFriction(FGameplayAttributeData& OldGroundFriction);                                                    // [0xbdcd70] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_GravityScale
	// void OnRep_GravityScale(FGameplayAttributeData& OldGravityScale);                                                        // [0xbdccc0] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_ForceMaxAccel
	// void OnRep_ForceMaxAccel(FGameplayAttributeData& OldForceMaxAccel);                                                      // [0xbdcc10] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_BrakingFriction
	// void OnRep_BrakingFriction(FGameplayAttributeData& OldBrakingFriction);                                                  // [0xbdcb60] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_AirControlBoostVelocityThreshold
	// void OnRep_AirControlBoostVelocityThreshold(FGameplayAttributeData& OldAirControlBoostVelocityThreshold);                // [0xbdcab0] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_AirControlBoostMultiplier
	// void OnRep_AirControlBoostMultiplier(FGameplayAttributeData& OldAirControlBoostMultiplier);                              // [0xbdca00] Native|Protected|HasOutParms 
	// Function /Script/PL_GameplayAbilities.PL_MovementAttributeSet.OnRep_AirControl
	// void OnRep_AirControl(FGameplayAttributeData& OldAirControl);                                                            // [0xbdc950] Native|Protected|HasOutParms 
};

/// Class /Script/PL_GameplayAbilities.PL_PawnWithAbilitySystem
/// Size: 0x0300 (768 bytes) (0x0002E8 - 0x000300) align 8 MaxSize: 0x0300
class APL_PawnWithAbilitySystem : public APawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x02E8   (0x0010)  MISSED
	class UPL_AbilitySystemComponent*                  AbilitySystemComponent;                                     // 0x02F8   (0x0008)  
};

/// Class /Script/PL_GameplayAbilities.PL_DamageGameplayEffect
/// Size: 0x0810 (2064 bytes) (0x000800 - 0x000810) align 8 MaxSize: 0x0810
class UPL_DamageGameplayEffect : public UGameplayEffect
{ 
public:
	class UClass*                                      FallbackDamageClass;                                        // 0x0800   (0x0008)  
	float                                              FallBackDamage;                                             // 0x0808   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x080C   (0x0004)  MISSED
};

/// Struct /Script/PL_GameplayAbilities.PL_MaxEndTimeForEffectResult
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPL_MaxEndTimeForEffectResult
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PL_GameplayAbilities.PL_AbilityTask_MontageMovedOverlaps_PlayData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_AbilityTask_MontageMovedOverlaps_PlayData
{ 
	TWeakObjectPtr<class UObject*>                     SweepColliderSource;                                        // 0x0000   (0x0008)  
	TArray<FPL_SweepCollider>                          SweepColliders;                                             // 0x0008   (0x0010)  
	bool                                               bStartSweepImmediately;                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FGameplayTag                                       StartSweepTag;                                              // 0x001C   (0x0008)  
	FGameplayTag                                       StopSweepTag;                                               // 0x0024   (0x0008)  
	bool                                               bOnlyActorsThatCanBeDamaged;                                // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayAbilityTargetData
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_GameplayAbilityTargetData : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x00A0 (160 bytes) (0x000010 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FPL_GameplayAbilityTargetData_SingleTargetHit : FPL_GameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0010   (0x0088)  
	bool                                               bHitReplaced;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayAbilityTargetData_ActorArray
/// Size: 0x0090 (144 bytes) (0x000010 - 0x000090) align 16 MaxSize: 0x0090
struct FPL_GameplayAbilityTargetData_ActorArray : FPL_GameplayAbilityTargetData
{ 
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	SDK_UNDEFINED(16,608) /* TArray<TWeakObjectPtr<AActor*>> */ __um(TargetActorArray);                            // 0x0080   (0x0010)  
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayAbilityTargetData_LocationInfo
/// Size: 0x00F0 (240 bytes) (0x000010 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FPL_GameplayAbilityTargetData_LocationInfo : FPL_GameplayAbilityTargetData
{ 
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x0080   (0x0070)  
};

/// Struct /Script/PL_GameplayAbilities.PL_GameplayCueTarget
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_GameplayCueTarget
{ 
	class AActor*                                      Target;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0008   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPL_AbilityEffectsAppliedByAbilityBeingGivenInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_GameplayEffectToApply) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_GameplayEffectsToApply) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_AppliedAbilityEffectsForAbility) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPendingAbilityActivation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_AbilitySystemComponent) == 0x14A8); // 5288 bytes (0x001318 - 0x0014A8)
static_assert(sizeof(UPL_AbilityTask_PlayMontageAndWaitForEvent) == 0x0200); // 512 bytes (0x000080 - 0x000200)
static_assert(sizeof(UPL_AbilityTask_MontageMovedOverlaps) == 0x0308); // 776 bytes (0x000200 - 0x000308)
static_assert(sizeof(APL_ActorWithAbilitySystem) == 0x02A0); // 672 bytes (0x000288 - 0x0002A0)
static_assert(sizeof(UPL_AnimNotify_GamePlayEventByTag) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UPL_AnimNotify_GamePlayEventStateByTag) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPL_AnimNotify_LooseGamePlayTagState) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_AsyncTaskAttributeChanged) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UPL_AsyncTaskGameplayTagEvent) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UPL_AttributeSet) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(APL_CharacterWithAbilitySystem) == 0x0530); // 1328 bytes (0x000518 - 0x000530)
static_assert(sizeof(UPL_GameplayAbility) == 0x0478); // 1144 bytes (0x0003B0 - 0x000478)
static_assert(sizeof(UPL_GameplayAbilityUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_GameplayCueManager) == 0x0360); // 864 bytes (0x000310 - 0x000360)
static_assert(sizeof(UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(FPL_HitEffect) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FPL_TargetHitEffect) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UPL_GameplayCueNotify_HitImpact) == 0x00A8); // 168 bytes (0x000040 - 0x0000A8)
static_assert(sizeof(UPL_GameplayCueNotify_SfxAndParticle) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(APL_GameplayCueNotify_SfxAndParticleActor) == 0x0318); // 792 bytes (0x0002E8 - 0x000318)
static_assert(sizeof(UPL_GameplayCueSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_GameplayCueUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_GameplayEventSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_GameplayInteractingAnimInstance) == 0x02E0); // 736 bytes (0x0002B8 - 0x0002E0)
static_assert(sizeof(UPL_GameplayTagsComponent) == 0x00E0); // 224 bytes (0x0000B8 - 0x0000E0)
static_assert(sizeof(UPL_HealthAttributeSet) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UPL_ListenToGamePlayEventsInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ManageEffectsToBeRemovedOnAbilityDeactivationInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_MovementAttributeSet) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(APL_PawnWithAbilitySystem) == 0x0300); // 768 bytes (0x0002E8 - 0x000300)
static_assert(sizeof(UPL_DamageGameplayEffect) == 0x0810); // 2064 bytes (0x000800 - 0x000810)
static_assert(sizeof(FPL_MaxEndTimeForEffectResult) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_AbilityTask_MontageMovedOverlaps_PlayData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPL_GameplayAbilityTargetData) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FPL_GameplayAbilityTargetData_SingleTargetHit) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(sizeof(FPL_GameplayAbilityTargetData_ActorArray) == 0x0090); // 144 bytes (0x000010 - 0x000090)
static_assert(sizeof(FPL_GameplayAbilityTargetData_LocationInfo) == 0x00F0); // 240 bytes (0x000010 - 0x0000F0)
static_assert(sizeof(FPL_GameplayCueTarget) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FPL_GameplayEffectToApply, Effect) == 0x0000);
static_assert(offsetof(FPL_GameplayEffectsToApply, GameplayEffectsToApply) == 0x0000);
static_assert(offsetof(FPL_AppliedAbilityEffectsForAbility, EffectsHandlers) == 0x0000);
static_assert(offsetof(UPL_AbilitySystemComponent, GameplayEventTriggeredEffects) == 0x1330);
static_assert(offsetof(UPL_AbilitySystemComponent, DefaultAttributeSetClasses) == 0x1380);
static_assert(offsetof(UPL_AbilitySystemComponent, StartUpGameplayEffects) == 0x1390);
static_assert(offsetof(UPL_AbilitySystemComponent, AppliedAbilityEffectsForAbilities) == 0x13A0);
static_assert(offsetof(UPL_AbilitySystemComponent, EffectsRemovedOnAbilityDeactivation) == 0x13F0);
static_assert(offsetof(UPL_AbilitySystemComponent, DefaultAttributeSets) == 0x1440);
static_assert(offsetof(UPL_AbilitySystemComponent, PendingAbilityActivations) == 0x1450);
static_assert(offsetof(UPL_AbilityTask_PlayMontageAndWaitForEvent, LastEventData) == 0x00D0);
static_assert(offsetof(UPL_AbilityTask_PlayMontageAndWaitForEvent, MontageSettings) == 0x0180);
static_assert(offsetof(UPL_AbilityTask_PlayMontageAndWaitForEvent, EventTags) == 0x01A8);
static_assert(offsetof(UPL_AbilityTask_MontageMovedOverlaps, SweepColliders) == 0x0210);
static_assert(offsetof(APL_ActorWithAbilitySystem, AbilitySystemComponent) == 0x0298);
static_assert(offsetof(UPL_AnimNotify_GamePlayEventByTag, EventTag) == 0x0038);
static_assert(offsetof(UPL_AnimNotify_GamePlayEventStateByTag, BeginEventTag) == 0x0030);
static_assert(offsetof(UPL_AnimNotify_GamePlayEventStateByTag, EndEventTag) == 0x0038);
static_assert(offsetof(UPL_AnimNotify_LooseGamePlayTagState, GameplayTag) == 0x0030);
static_assert(offsetof(APL_CharacterWithAbilitySystem, AbilitySystemComponent) == 0x0528);
static_assert(offsetof(UPL_GameplayAbility, EffectsAppliedOnAbilityBeingGiven) == 0x03B8);
static_assert(offsetof(UPL_GameplayAbility, EffectsAppliedOnAbilityBeingActivated) == 0x03C8);
static_assert(offsetof(UPL_GameplayAbility, EffectsAppliedOnAbilityEnding) == 0x03D8);
static_assert(offsetof(UPL_GameplayAbility, EffectsAppliedOnAbilityCancelling) == 0x03E8);
static_assert(offsetof(UPL_GameplayAbility, GameplayCues) == 0x03F8);
static_assert(offsetof(UPL_GameplayAbility, CooldownDuration) == 0x0410);
static_assert(offsetof(UPL_GameplayAbility, CooldownTags) == 0x0438);
static_assert(offsetof(UPL_GameplayAbility, TempCooldownTags) == 0x0458);
static_assert(offsetof(UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle, Sound) == 0x0040);
static_assert(offsetof(UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle, Sound2D) == 0x0048);
static_assert(offsetof(UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle, ParticleSystem) == 0x0050);
static_assert(offsetof(UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle, NiagaraParticleSystem) == 0x0058);
static_assert(offsetof(UPL_GameplayCueNotify_CharacterAttachedSfxAndParticle, SocketName) == 0x0060);
static_assert(offsetof(FPL_HitEffect, SoundActivationBlockedTags) == 0x0000);
static_assert(offsetof(FPL_HitEffect, Sound) == 0x0020);
static_assert(offsetof(FPL_HitEffect, ParticleActivationBlockedTags) == 0x0028);
static_assert(offsetof(FPL_HitEffect, ParticleSystem) == 0x0048);
static_assert(offsetof(FPL_HitEffect, NiagaraParticleSystem) == 0x0050);
static_assert(offsetof(FPL_TargetHitEffect, TargetClass) == 0x0058);
static_assert(offsetof(UPL_GameplayCueNotify_HitImpact, HitEffects) == 0x0040);
static_assert(offsetof(UPL_GameplayCueNotify_HitImpact, DefaultHitEffect) == 0x0050);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, Sound) == 0x0040);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, Sound2D) == 0x0048);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, ParticleSystem) == 0x0050);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, NiagaraParticleSystem) == 0x0058);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, ActorToBeSpawned) == 0x0060);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, ActorToBeSpawnedCollisionHandling) == 0x0068);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, SocketName) == 0x006C);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, LocationOffset) == 0x0074);
static_assert(offsetof(UPL_GameplayCueNotify_SfxAndParticle, RotationOffset) == 0x0080);
static_assert(offsetof(APL_GameplayCueNotify_SfxAndParticleActor, SceneComponent) == 0x02F0);
static_assert(offsetof(APL_GameplayCueNotify_SfxAndParticleActor, Audio) == 0x02F8);
static_assert(offsetof(APL_GameplayCueNotify_SfxAndParticleActor, OldParticleSystem) == 0x0300);
static_assert(offsetof(APL_GameplayCueNotify_SfxAndParticleActor, ParticleSystem) == 0x0308);
static_assert(offsetof(UPL_GameplayTagsComponent, GameplayTags) == 0x00C0);
static_assert(offsetof(UPL_HealthAttributeSet, Health) == 0x0030);
static_assert(offsetof(UPL_HealthAttributeSet, MaxHealth) == 0x0040);
static_assert(offsetof(UPL_MovementAttributeSet, MaxAcceleration) == 0x0030);
static_assert(offsetof(UPL_MovementAttributeSet, MaxWalkSpeed) == 0x0040);
static_assert(offsetof(UPL_MovementAttributeSet, MinAnalogWalkSpeed) == 0x0050);
static_assert(offsetof(UPL_MovementAttributeSet, RotationRate) == 0x0060);
static_assert(offsetof(UPL_MovementAttributeSet, MaxFlySpeed) == 0x0070);
static_assert(offsetof(UPL_MovementAttributeSet, JumpZVelocity) == 0x0080);
static_assert(offsetof(UPL_MovementAttributeSet, AirControl) == 0x0090);
static_assert(offsetof(UPL_MovementAttributeSet, AirControlBoostMultiplier) == 0x00A0);
static_assert(offsetof(UPL_MovementAttributeSet, AirControlBoostVelocityThreshold) == 0x00B0);
static_assert(offsetof(UPL_MovementAttributeSet, GravityScale) == 0x00C0);
static_assert(offsetof(UPL_MovementAttributeSet, BrakingFriction) == 0x00D0);
static_assert(offsetof(UPL_MovementAttributeSet, GroundFriction) == 0x00E0);
static_assert(offsetof(UPL_MovementAttributeSet, WalkableFloorAngle) == 0x00F0);
static_assert(offsetof(UPL_MovementAttributeSet, bMaintainHorizontalGroundVelocity) == 0x0100);
static_assert(offsetof(UPL_MovementAttributeSet, bForceMaxAccel) == 0x0110);
static_assert(offsetof(APL_PawnWithAbilitySystem, AbilitySystemComponent) == 0x02F8);
static_assert(offsetof(UPL_DamageGameplayEffect, FallbackDamageClass) == 0x0800);
static_assert(offsetof(FPL_AbilityTask_MontageMovedOverlaps_PlayData, SweepColliderSource) == 0x0000);
static_assert(offsetof(FPL_AbilityTask_MontageMovedOverlaps_PlayData, SweepColliders) == 0x0008);
static_assert(offsetof(FPL_AbilityTask_MontageMovedOverlaps_PlayData, StartSweepTag) == 0x001C);
static_assert(offsetof(FPL_AbilityTask_MontageMovedOverlaps_PlayData, StopSweepTag) == 0x0024);
static_assert(offsetof(FPL_GameplayAbilityTargetData_SingleTargetHit, HitResult) == 0x0010);
static_assert(offsetof(FPL_GameplayAbilityTargetData_ActorArray, SourceLocation) == 0x0010);
static_assert(offsetof(FPL_GameplayAbilityTargetData_LocationInfo, SourceLocation) == 0x0010);
static_assert(offsetof(FPL_GameplayAbilityTargetData_LocationInfo, TargetLocation) == 0x0080);
static_assert(offsetof(FPL_GameplayCueTarget, Target) == 0x0000);
