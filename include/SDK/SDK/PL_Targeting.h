
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
/// dependency: PL_Conditionals

#pragma pack(push, 0x1)

/// Class /Script/PL_Targeting.PL_TargetingGroupIndication
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPL_TargetingGroupIndication : public UObject
{ 
public:
	class UPL_TargetingContext*                        Context;                                                    // 0x0028   (0x0008)  
	TMap<class UPrimitiveComponent*, class AActor*>    ActiveIndications;                                          // 0x0030   (0x0050)  
};

/// Class /Script/PL_Targeting.PL_DefaultTargetIndication
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UPL_DefaultTargetIndication : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UClass*                                      TargetIndicatorClass;                                       // 0x0030   (0x0008)  
	TArray<class AActor*>                              AvailableIndicators;                                        // 0x0038   (0x0010)  
	TArray<class UPL_TargetingGroupIndication*>        GroupIndications;                                           // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/PL_Targeting.PL_DefaultTargetIndication.StopIndicatingTargets
	// void StopIndicatingTargets(class UPL_TargetingContext* Context);                                                         // [0xacbcf0] Native|Public        
	// Function /Script/PL_Targeting.PL_DefaultTargetIndication.IndicateTargets
	// void IndicateTargets(class UPL_TargetingContext* Context, TArray<UPrimitiveComponent*>& Targets);                        // [0xacb230] Native|Public|HasOutParms 
	// Function /Script/PL_Targeting.PL_DefaultTargetIndication.Clear
	// void Clear();                                                                                                            // [0xacaf80] Native|Public        
};

/// Class /Script/PL_Targeting.PL_TargetScorerObject
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_TargetScorerObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/PL_Targeting.PL_DistanceTargetScorer
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPL_DistanceTargetScorer : public UPL_TargetScorerObject
{ 
public:
	float                                              MaxDistanceToScore;                                         // 0x0030   (0x0004)  
	float                                              MaxScore;                                                   // 0x0034   (0x0004)  
	float                                              Weight;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/PL_Targeting.PL_HorizontalAngleTargetScorer
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UPL_HorizontalAngleTargetScorer : public UPL_TargetScorerObject
{ 
public:
	float                                              TargetingAngle;                                             // 0x0030   (0x0004)  
	float                                              MaxScore;                                                   // 0x0034   (0x0004)  
	float                                              Weight;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x003C   (0x0014)  MISSED
	float                                              MaxCosAngleToViewDirection;                                 // 0x0050   (0x0004)  
	float                                              AcceptableDelta;                                            // 0x0054   (0x0004)  
};

/// Class /Script/PL_Targeting.PL_TargetingFilter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetingFilter : public UObject
{ 
public:
};

/// Class /Script/PL_Targeting.PL_OrFilterContainer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_OrFilterContainer : public UPL_TargetingFilter
{ 
public:
	TArray<class UPL_TargetingFilter*>                 Filters;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/PL_Targeting.PL_AndFilterContainer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_AndFilterContainer : public UPL_TargetingFilter
{ 
public:
	TArray<class UPL_TargetingFilter*>                 Filters;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/PL_Targeting.PL_NotFilterContainer
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_NotFilterContainer : public UPL_TargetingFilter
{ 
public:
	class UPL_TargetingFilter*                         Filter;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/PL_Targeting.PL_TargetingDistanceCheckEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_TargetingDistanceCheckEntry
{ 
	class UPrimitiveComponent*                         Target;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/PL_Targeting.PL_OverlapTargetProviderComponent
/// Size: 0x0168 (360 bytes) (0x0000B8 - 0x000168) align 8 MaxSize: 0x0168
class UPL_OverlapTargetProviderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FComponentReference                                OverlapComponent;                                           // 0x00C0   (0x0028)  
	float                                              ExtendedKeepAsTargetDistance;                               // 0x00E8   (0x0004)  
	bool                                               bShouldOnlyTargetWhenControlledByPlayer;                    // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	TArray<class UPrimitiveComponent*>                 PotentialTargets;                                           // 0x00F0   (0x0010)  
	TMap<class AActor*, char>                          PotentialTargetActors;                                      // 0x0100   (0x0050)  
	TArray<FPL_TargetingDistanceCheckEntry>            TargetsToDistanceCheck;                                     // 0x0150   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0160   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_Targeting.PL_OverlapTargetProviderComponent.OnUnPossessed
	// void OnUnPossessed();                                                                                                    // [0xacb910] Final|Native|Private 
	// Function /Script/PL_Targeting.PL_OverlapTargetProviderComponent.OnPotentialTargetEndedPlay
	// void OnPotentialTargetEndedPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                         // [0xacb840] Final|Native|Private 
	// Function /Script/PL_Targeting.PL_OverlapTargetProviderComponent.OnPossessedBy
	// void OnPossessedBy(class AController* NewController);                                                                    // [0xacb7b0] Final|Native|Private 
	// Function /Script/PL_Targeting.PL_OverlapTargetProviderComponent.OnComponentEndToOverlap
	// void OnComponentEndToOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xacb650] Final|Native|Private 
	// Function /Script/PL_Targeting.PL_OverlapTargetProviderComponent.OnComponentBeginningToOverlap
	// void OnComponentBeginningToOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xacb430] Final|Native|Private|HasOutParms 
};

/// Class /Script/PL_Targeting.ListenerInfo
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UListenerInfo : public UObject
{ 
public:
	class UPL_TargetingContext*                        Context;                                                    // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,662) /* TScriptInterface<Class> */ __um(Listener);                                            // 0x0030   (0x0010)  
};

/// Class /Script/PL_Targeting.GroupListenerContainer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGroupListenerContainer : public UObject
{ 
public:
	TArray<class UListenerInfo*>                       ListenerInfos;                                              // 0x0028   (0x0010)  
};

/// Class /Script/PL_Targeting.PL_PlayerTargetingComponent
/// Size: 0x0118 (280 bytes) (0x0000B8 - 0x000118) align 8 MaxSize: 0x0118
class UPL_PlayerTargetingComponent : public UActorComponent
{ 
public:
	TArray<class UPL_TargetingGroup*>                  TargetingGroups;                                            // 0x00B8   (0x0010)  
	TMap<class UPL_TargetingGroup*, class UGroupListenerContainer*> Listeners;                                     // 0x00C8   (0x0050)  
};

/// Class /Script/PL_Targeting.PL_TargetIndicationInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetIndicationInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Targeting.PL_TargetIndicationInterface.StopIndicatingTargets
	// void StopIndicatingTargets(class UPL_TargetingContext* Context);                                                         // [0xacbc60] Native|Public        
	// Function /Script/PL_Targeting.PL_TargetIndicationInterface.IndicateTargets
	// void IndicateTargets(class UPL_TargetingContext* Context, TArray<UPrimitiveComponent*>& Targets);                        // [0xacb140] Native|Public|HasOutParms 
	// Function /Script/PL_Targeting.PL_TargetIndicationInterface.Clear
	// void Clear();                                                                                                            // [0xacaf60] Native|Public        
};

/// Class /Script/PL_Targeting.PL_TargetIndicatorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetIndicatorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Targeting.PL_TargetIndicatorInterface.StopBeingTargeted
	// void StopBeingTargeted(class UPL_TargetingContext* TargetingContext);                                                    // [0x83e910] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Targeting.PL_TargetIndicatorInterface.StartBeingTargeted
	// void StartBeingTargeted(class UPL_TargetingContext* TargetingContext);                                                   // [0x83e880] Native|Event|Public|BlueprintEvent 
	// Function /Script/PL_Targeting.PL_TargetIndicatorInterface.DoesSupportTargetingGroup
	// bool DoesSupportTargetingGroup(class UPL_TargetingContext* TargetingContext);                                            // [0xaa7920] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PL_Targeting.PL_TargetingContext
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPL_TargetingContext : public UPL_SourceAndTargetConditionalContext
{ 
public:
	FGameplayTag                                       TargetingGroupTag;                                          // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/PL_Targeting.PL_TargetingContext.SetTargetingGroupTag
	// void SetTargetingGroupTag(FGameplayTag& TargetingGroupTag);                                                              // [0xacbbc0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Targeting.PL_TargetingContext.GetTargetingGroupTag
	// FGameplayTag GetTargetingGroupTag();                                                                                     // [0xacb080] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Targeting.PL_TargetingDebugInfoWrapper
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UPL_TargetingDebugInfoWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Class /Script/PL_Targeting.PL_TargetingFilterAsset
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_TargetingFilterAsset : public UDataAsset
{ 
public:
	class UPL_TargetingFilter*                         Filter;                                                     // 0x0030   (0x0008)  
};

/// Class /Script/PL_Targeting.PL_TargetingFilter_Class
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_TargetingFilter_Class : public UPL_TargetingFilter
{ 
public:
	class UClass*                                      FilterClass;                                                // 0x0028   (0x0008)  
};

/// Class /Script/PL_Targeting.PL_TargetingFilter_CollisionChannel
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_TargetingFilter_CollisionChannel : public UPL_TargetingFilter
{ 
public:
	SDK_UNDEFINED(16,663) /* TArray<TEnumAsByte<ECollisionChannel>> */ __um(CollisionChannels);                    // 0x0028   (0x0010)  
};

/// Class /Script/PL_Targeting.PL_TargetingFilter_Overlap
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_TargetingFilter_Overlap : public UPL_TargetingFilter
{ 
public:
	bool                                               bShouldOverlap;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/PL_Targeting.PL_TargetingFilter_Range
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_TargetingFilter_Range : public UPL_TargetingFilter
{ 
public:
	bool                                               bIgnoreZ;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              MinRange;                                                   // 0x002C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0030   (0x0004)  MISSED
	float                                              MaxRange;                                                   // 0x0034   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/PL_Targeting.PL_TargetingFilterTags
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_TargetingFilterTags : public UPL_TargetingFilter
{ 
public:
	FGameplayTagContainer                              RequiredTags;                                               // 0x0028   (0x0020)  
	FGameplayTagContainer                              BlockedTags;                                                // 0x0048   (0x0020)  
};

/// Class /Script/PL_Targeting.PL_TargetingGroup
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_TargetingGroup : public UObject
{ 
public:
	FGameplayTag                                       IdTag;                                                      // 0x0028   (0x0008)  
	int32_t                                            MaxNumTargets;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,664) /* TScriptInterface<Class> */ __um(TargetProvider);                                      // 0x0038   (0x0010)  
	TArray<class UPL_Conditional*>                     FilterConditions;                                           // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,665) /* TArray<TScriptInterface<Class>> */ __um(TargetScorers);                               // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,666) /* TScriptInterface<Class> */ __um(TargetIndication);                                    // 0x0068   (0x0010)  
};

/// Class /Script/PL_Targeting.PL_TargetingGroupListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetingGroupListenerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Targeting.PL_TargetingGroupListenerInterface.SetAvailableTargets
	// void SetAvailableTargets(TArray<UPrimitiveComponent*>& Targets);                                                         // [0xacbb10] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PL_Targeting.PL_TargetingUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetingUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Targeting.PL_TargetingUtils.UnRegisterTargetingGroup
	// void UnRegisterTargetingGroup(FGameplayTag TargetingGroupTag, class UObject* WorldContextObject, int32_t PlayerIndex);   // [0xacbd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Targeting.PL_TargetingUtils.RemoveTargetingGroupListener
	// void RemoveTargetingGroupListener(class UPL_TargetingContext* Context, TScriptInterface<Class> Listener, int32_t PlayerIndex); // [0xacb9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Targeting.PL_TargetingUtils.RegisterTargetingGroup
	// void RegisterTargetingGroup(class UPL_TargetingGroup* TargetingGroup, int32_t PlayerIndex);                              // [0xacb930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Targeting.PL_TargetingUtils.MakeContext
	// class UPL_TargetingContext* MakeContext(class UObject* WorldContextObject, class AActor* Initiator, FGameplayTag& TargetingGroupTag); // [0xacb320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Targeting.PL_TargetingUtils.GetPlayerTargetProvider
	// TScriptInterface<Class> GetPlayerTargetProvider(class UObject* WorldContextObject, int32_t PlayerIndex);                 // [0xacafa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Targeting.PL_TargetingUtils.AddTargetingGroupListener
	// void AddTargetingGroupListener(class UPL_TargetingContext* Context, TScriptInterface<Class> Listener, int32_t PlayerIndex); // [0xacae40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Targeting.PL_TargetProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetProviderInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Targeting.PL_TargetProviderInterface.GetTargets
	// TArray<UPrimitiveComponent*> GetTargets();                                                                               // [0xacb0c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PL_Targeting.PL_TargetScorerAsset
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UPL_TargetScorerAsset : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,667) /* TArray<TScriptInterface<Class>> */ __um(Scorers);                                     // 0x0038   (0x0010)  
};

/// Class /Script/PL_Targeting.PL_TargetScorerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_TargetScorerInterface : public UInterface
{ 
public:
};

/// Struct /Script/PL_Targeting.PL_TargetSpecificGroupDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_TargetSpecificGroupDebugInfo
{ 
	FGameplayTag                                       TargetingGroupTag;                                          // 0x0000   (0x0008)  
	FString                                            GroupName;                                                  // 0x0008   (0x0010)  
	FString                                            FilteredOutByCondition;                                     // 0x0018   (0x0010)  
	float                                              Score;                                                      // 0x0028   (0x0004)  
	bool                                               bTargetIsSelected;                                          // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/PL_Targeting.PL_TargetDebugInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_TargetDebugInfo
{ 
	class UPrimitiveComponent*                         TargetComponent;                                            // 0x0000   (0x0008)  
	FString                                            TargetName;                                                 // 0x0008   (0x0010)  
	TArray<FPL_TargetSpecificGroupDebugInfo>           GroupInfos;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/PL_Targeting.PL_TargetingDebugInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPL_TargetingDebugInfo
{ 
	bool                                               bDebugInfoIsAvailable;                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ReasonForUnAvailability;                                    // 0x0008   (0x0010)  
	TArray<FPL_TargetDebugInfo>                        Targets;                                                    // 0x0018   (0x0010)  
	TArray<FGameplayTag>                               Groups;                                                     // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_TargetingGroupIndication) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UPL_DefaultTargetIndication) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UPL_TargetScorerObject) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_DistanceTargetScorer) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPL_HorizontalAngleTargetScorer) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UPL_TargetingFilter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_OrFilterContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_AndFilterContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_NotFilterContainer) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FPL_TargetingDistanceCheckEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_OverlapTargetProviderComponent) == 0x0168); // 360 bytes (0x0000B8 - 0x000168)
static_assert(sizeof(UListenerInfo) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGroupListenerContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_PlayerTargetingComponent) == 0x0118); // 280 bytes (0x0000B8 - 0x000118)
static_assert(sizeof(UPL_TargetIndicationInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TargetIndicatorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TargetingContext) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UPL_TargetingDebugInfoWrapper) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UPL_TargetingFilterAsset) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_TargetingFilter_Class) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_TargetingFilter_CollisionChannel) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_TargetingFilter_Overlap) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_TargetingFilter_Range) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_TargetingFilterTags) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPL_TargetingGroup) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UPL_TargetingGroupListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TargetingUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TargetProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_TargetScorerAsset) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPL_TargetScorerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_TargetSpecificGroupDebugInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPL_TargetDebugInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPL_TargetingDebugInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(UPL_TargetingGroupIndication, Context) == 0x0028);
static_assert(offsetof(UPL_TargetingGroupIndication, ActiveIndications) == 0x0030);
static_assert(offsetof(UPL_DefaultTargetIndication, TargetIndicatorClass) == 0x0030);
static_assert(offsetof(UPL_DefaultTargetIndication, AvailableIndicators) == 0x0038);
static_assert(offsetof(UPL_DefaultTargetIndication, GroupIndications) == 0x0048);
static_assert(offsetof(UPL_OrFilterContainer, Filters) == 0x0028);
static_assert(offsetof(UPL_AndFilterContainer, Filters) == 0x0028);
static_assert(offsetof(UPL_NotFilterContainer, Filter) == 0x0028);
static_assert(offsetof(FPL_TargetingDistanceCheckEntry, Target) == 0x0000);
static_assert(offsetof(UPL_OverlapTargetProviderComponent, OverlapComponent) == 0x00C0);
static_assert(offsetof(UPL_OverlapTargetProviderComponent, PotentialTargets) == 0x00F0);
static_assert(offsetof(UPL_OverlapTargetProviderComponent, PotentialTargetActors) == 0x0100);
static_assert(offsetof(UPL_OverlapTargetProviderComponent, TargetsToDistanceCheck) == 0x0150);
static_assert(offsetof(UListenerInfo, Context) == 0x0028);
static_assert(offsetof(UGroupListenerContainer, ListenerInfos) == 0x0028);
static_assert(offsetof(UPL_PlayerTargetingComponent, TargetingGroups) == 0x00B8);
static_assert(offsetof(UPL_PlayerTargetingComponent, Listeners) == 0x00C8);
static_assert(offsetof(UPL_TargetingContext, TargetingGroupTag) == 0x00D8);
static_assert(offsetof(UPL_TargetingFilterAsset, Filter) == 0x0030);
static_assert(offsetof(UPL_TargetingFilter_Class, FilterClass) == 0x0028);
static_assert(offsetof(UPL_TargetingFilterTags, RequiredTags) == 0x0028);
static_assert(offsetof(UPL_TargetingFilterTags, BlockedTags) == 0x0048);
static_assert(offsetof(UPL_TargetingGroup, IdTag) == 0x0028);
static_assert(offsetof(UPL_TargetingGroup, FilterConditions) == 0x0048);
static_assert(offsetof(FPL_TargetSpecificGroupDebugInfo, TargetingGroupTag) == 0x0000);
static_assert(offsetof(FPL_TargetSpecificGroupDebugInfo, GroupName) == 0x0008);
static_assert(offsetof(FPL_TargetSpecificGroupDebugInfo, FilteredOutByCondition) == 0x0018);
static_assert(offsetof(FPL_TargetDebugInfo, TargetComponent) == 0x0000);
static_assert(offsetof(FPL_TargetDebugInfo, TargetName) == 0x0008);
static_assert(offsetof(FPL_TargetDebugInfo, GroupInfos) == 0x0018);
static_assert(offsetof(FPL_TargetingDebugInfo, ReasonForUnAvailability) == 0x0008);
static_assert(offsetof(FPL_TargetingDebugInfo, Targets) == 0x0018);
static_assert(offsetof(FPL_TargetingDebugInfo, Groups) == 0x0028);
