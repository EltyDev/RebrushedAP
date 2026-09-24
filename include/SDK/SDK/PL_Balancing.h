
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_PropertyUtils

#pragma pack(push, 0x1)

/// Enum /Script/PL_Balancing.EPL_BalancingProfilePauseMode
/// Size: 0x01 (1 bytes)
enum class EPL_BalancingProfilePauseMode : uint8_t
{
	EPL_BalancingProfilePauseMode__ProjectDefaultSetting                             = 0,
	EPL_BalancingProfilePauseMode__PauseDuringBalancing                              = 1,
	EPL_BalancingProfilePauseMode__KeepPlayingDuringBalancing                        = 2
};

/// Class /Script/PL_Balancing.PL_BalancingController
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingController : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,549) /* FMulticastInlineDelegate */ __um(OnRemovedDuplicateBalancingProfiles);                // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,550) /* FMulticastInlineDelegate */ __um(OnBalancingAppliedTo);                               // 0x0040   (0x0010)  
	TArray<class UPL_BalancingProfile*>                ActiveProfiles;                                             // 0x0050   (0x0010)  
	class APL_LevelBalancingManager*                   ActiveLevelBalancingManager;                                // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingController.OnLoadMapComplete
	// void OnLoadMapComplete(FString MapName);                                                                                 // [0xbfe5d0] Final|Native|Private 
	// Function /Script/PL_Balancing.PL_BalancingController.OnActorSpawned
	// void OnActorSpawned(class AActor* Actor);                                                                                // [0xbfe470] Final|Native|Private 
	// Function /Script/PL_Balancing.PL_BalancingController.BalancingSubLevelLoaded
	// void BalancingSubLevelLoaded();                                                                                          // [0xa786d0] Final|Native|Private 
};

/// Class /Script/PL_Balancing.PL_BalancingProfile
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UPL_BalancingProfile : public UObject
{ 
public:
	FString                                            ProfileName;                                                // 0x0028   (0x0010)  
	FString                                            CustomName;                                                 // 0x0038   (0x0010)  
	bool                                               bExactClass;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	class UClass*                                      TargetClass;                                                // 0x0050   (0x0008)  
	class AActor*                                      DefaultActor;                                               // 0x0058   (0x0008)  
	EPL_BalancingProfilePauseMode                      PauseMode;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<class UPL_BalancingValue*>                  BalancingValues;                                            // 0x0068   (0x0010)  
	TArray<class AActor*>                              Targets;                                                    // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingProfile.OnActorDespawned
	// void OnActorDespawned(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                   // [0xbfe3a0] Final|Native|Private 
	// Function /Script/PL_Balancing.PL_BalancingProfile.AddBalancingValue
	// class UPL_BalancingValue* AddBalancingValue(class UClass* BalancingValueClass);                                          // [0xbfdff0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PL_Balancing.PL_BalancingPropertyValueDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_BalancingPropertyValueDefinition
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	FString                                            Tooltip;                                                    // 0x0010   (0x0010)  
	float                                              ChangeValuePerIncrement;                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/PL_Balancing.PL_BalancingProfileSet
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UPL_BalancingProfileSet : public UDataAsset
{ 
public:
	FString                                            ProfileName;                                                // 0x0030   (0x0010)  
	bool                                               bExactClass;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UClass*                                      TargetClass;                                                // 0x0048   (0x0008)  
	TArray<class UClass*>                              BalancingValueClasses;                                      // 0x0050   (0x0010)  
	TArray<FPL_BalancingPropertyValueDefinition>       BalancingPropertyValueDefinitions;                          // 0x0060   (0x0010)  
	EPL_BalancingProfilePauseMode                      PauseMode;                                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingProfileSet.ValidateNames
	// void ValidateNames();                                                                                                    // [0xbfe700] Final|Native|Public  
	// Function /Script/PL_Balancing.PL_BalancingProfileSet.ScanForToolTips
	// void ScanForToolTips();                                                                                                  // [0xa786d0] Final|Native|Public  
};

/// Class /Script/PL_Balancing.PL_BalancingProfileSets
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPL_BalancingProfileSets : public UDataAsset
{ 
public:
	TArray<class UPL_BalancingProfileSet*>             AvailableSets;                                              // 0x0030   (0x0010)  
};

/// Class /Script/PL_Balancing.PL_BalancingValue
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_BalancingValue : public UObject
{ 
public:
	FText                                              BalancingName;                                              // 0x0028   (0x0018)  


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingValue.ApplyBalancingOnActorSpawned
	// void ApplyBalancingOnActorSpawned(class AActor* Actor);                                                                  // [0xbfe090] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/PL_Balancing.PL_BalancingPropertyValue
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UPL_BalancingPropertyValue : public UPL_BalancingValue
{ 
public:
	FString                                            PropertyName;                                               // 0x0040   (0x0010)  
	FString                                            Tooltip;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/PL_Balancing.PL_BalancingPropertySingleValue
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPL_BalancingPropertySingleValue : public UPL_BalancingPropertyValue
{ 
public:
	bool                                               bIsDefaultValue;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/PL_Balancing.PL_BalancingPropertyThreeValues
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingPropertyThreeValues : public UPL_BalancingPropertyValue
{ 
public:
	TArray<bool>                                       IsDefaultValues;                                            // 0x0060   (0x0010)  
};

/// Class /Script/PL_Balancing.PL_BalancingEnumPropertyValue
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingEnumPropertyValue : public UPL_BalancingPropertySingleValue
{ 
public:
	FName                                              CurrentValue;                                               // 0x0068   (0x0008)  
};

/// Class /Script/PL_Balancing.PL_BalancingBoolPropertyValue
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingBoolPropertyValue : public UPL_BalancingPropertySingleValue
{ 
public:
	bool                                               CurrentValue;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/PL_Balancing.PL_BalancingInt32PropertyValue
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingInt32PropertyValue : public UPL_BalancingPropertySingleValue
{ 
public:
	int32_t                                            ChangeValuePerIncrement;                                    // 0x0068   (0x0004)  
	int32_t                                            CurrentValue;                                               // 0x006C   (0x0004)  
};

/// Class /Script/PL_Balancing.PL_BalancingFloatPropertyValue
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UPL_BalancingFloatPropertyValue : public UPL_BalancingPropertySingleValue
{ 
public:
	float                                              ChangeValuePerIncrement;                                    // 0x0068   (0x0004)  
	float                                              CurrentValue;                                               // 0x006C   (0x0004)  
};

/// Class /Script/PL_Balancing.PL_BalancingVectorPropertyValue
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UPL_BalancingVectorPropertyValue : public UPL_BalancingPropertyThreeValues
{ 
public:
	float                                              ChangeValuePerIncrement;                                    // 0x0070   (0x0004)  
	FVector                                            CurrentValue;                                               // 0x0074   (0x000C)  
};

/// Class /Script/PL_Balancing.PL_BalancingRotatorPropertyValue
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UPL_BalancingRotatorPropertyValue : public UPL_BalancingPropertyThreeValues
{ 
public:
	float                                              ChangeValuePerIncrement;                                    // 0x0070   (0x0004)  
	FRotator                                           CurrentValue;                                               // 0x0074   (0x000C)  
};

/// Class /Script/PL_Balancing.PL_BalancingPropertyValueUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BalancingPropertyValueUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingPropertyValueUtils.GetBalancingPropertyValueClassForType
	// class UClass* GetBalancingPropertyValueClassForType(EPL_SupportedPropertyType Type);                                     // [0xbfe120] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Balancing.PL_BalancingSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_BalancingSettings : public UObject
{ 
public:
	FString                                            SubLevelRoot;                                               // 0x0028   (0x0010)  
};

/// Class /Script/PL_Balancing.PL_BalancingUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BalancingUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingUtils.ActivateBalancingProfile
	// class UPL_BalancingProfile* ActivateBalancingProfile(class UPL_BalancingProfileSet* BalancingProfileSet, class UObject* WorldContextObject); // [0xbfdf20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_Balancing.PL_BalancingFloatValue
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UPL_BalancingFloatValue : public UPL_BalancingValue
{ 
public:
	float                                              ChangeValuePerIncrement;                                    // 0x0040   (0x0004)  
	float                                              CurrentValue;                                               // 0x0044   (0x0004)  


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingFloatValue.GetValue
	// float GetValue(class AActor* Actor);                                                                                     // [0xbfe250] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_Balancing.PL_BalancingBoolValue
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UPL_BalancingBoolValue : public UPL_BalancingValue
{ 
public:
	bool                                               CurrentValue;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingBoolValue.GetValue
	// bool GetValue(class AActor* Actor);                                                                                      // [0xbfe1b0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_Balancing.PL_BalancingVectorValue
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UPL_BalancingVectorValue : public UPL_BalancingValue
{ 
public:
	float                                              ChangeValuePerIncrement;                                    // 0x0040   (0x0004)  
	FVector                                            CurrentValue;                                               // 0x0044   (0x000C)  


	/// Functions
	// Function /Script/PL_Balancing.PL_BalancingVectorValue.GetValue
	// FVector GetValue(class AActor* Actor);                                                                                   // [0xbfe2f0] Native|Event|Protected|HasDefaults|BlueprintEvent 
};

/// Class /Script/PL_Balancing.PL_CharacterMovementBalancingMaxWalkSpeed
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UPL_CharacterMovementBalancingMaxWalkSpeed : public UPL_BalancingFloatValue
{ 
public:
};

/// Class /Script/PL_Balancing.PL_CharacterMovementBalancingJumpZVelocity
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UPL_CharacterMovementBalancingJumpZVelocity : public UPL_BalancingFloatValue
{ 
public:
};

/// Class /Script/PL_Balancing.PL_CharacterMovementBalancingJumpMaxHoldTime
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UPL_CharacterMovementBalancingJumpMaxHoldTime : public UPL_BalancingFloatValue
{ 
public:
};

/// Struct /Script/PL_Balancing.PL_BalancingProfileCollection
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FPL_BalancingProfileCollection
{ 
	FString                                            BalancingProfilesName;                                      // 0x0000   (0x0010)  
	FText                                              BalancingProfilesDescription;                               // 0x0010   (0x0018)  
	TArray<class UClass*>                              ActiveBalancingProfileClasses;                              // 0x0028   (0x0010)  
	TArray<class UPL_BalancingProfile*>                ActiveBalancingProfile;                                     // 0x0038   (0x0010)  
};

/// Struct /Script/PL_Balancing.PL_ProfileCollections
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ProfileCollections
{ 
	TArray<FPL_BalancingProfileCollection>             Collections;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/PL_Balancing.PL_ActiveBalancingProfileCollectionsOnTargetPair
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FPL_ActiveBalancingProfileCollectionsOnTargetPair
{ 
	TWeakObjectPtr<class AActor*>                      TargetActor;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FPL_BalancingProfileCollection                     BalancingProfileCollection;                                 // 0x0028   (0x0048)  
};

/// Struct /Script/PL_Balancing.PL_ActiveBalancingProfileCollectionsOnTargetPairs
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ActiveBalancingProfileCollectionsOnTargetPairs
{ 
	TArray<FPL_ActiveBalancingProfileCollectionsOnTargetPair> Entries;                                             // 0x0000   (0x0010)  
};

/// Class /Script/PL_Balancing.PL_LevelBalancingManager
/// Size: 0x0428 (1064 bytes) (0x000288 - 0x000428) align 8 MaxSize: 0x0428
class APL_LevelBalancingManager : public AActor
{ 
public:
	TMap<class UClass*, FPL_ProfileCollections>        ProfileCollectionsForPossessedPawns;                        // 0x0288   (0x0050)  
	TMap<class UClass*, FPL_ProfileCollections>        ProfileCollectionsForClassesOfTargets;                      // 0x02D8   (0x0050)  
	FPL_ActiveBalancingProfileCollectionsOnTargetPairs ActiveBalancingProfileCollectionsOnTargetPairs;             // 0x0328   (0x0010)  
	unsigned char                                      UnknownData00_7[0xF0];                                      // 0x0338   (0x00F0)  MISSED


	/// Functions
	// Function /Script/PL_Balancing.PL_LevelBalancingManager.OnPawnChanged
	// void OnPawnChanged(class APawn* NewPawn);                                                                                // [0xbfe670] Final|Native|Protected 
	// Function /Script/PL_Balancing.PL_LevelBalancingManager.OnActorWithAppliedBalancingEndPlay
	// void OnActorWithAppliedBalancingEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                 // [0xbfe500] Final|Native|Protected 
};

#pragma pack(pop)


static_assert(sizeof(UPL_BalancingController) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPL_BalancingProfile) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FPL_BalancingPropertyValueDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPL_BalancingProfileSet) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UPL_BalancingProfileSets) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPL_BalancingValue) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_BalancingPropertyValue) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UPL_BalancingPropertySingleValue) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPL_BalancingPropertyThreeValues) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPL_BalancingEnumPropertyValue) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UPL_BalancingBoolPropertyValue) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UPL_BalancingInt32PropertyValue) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UPL_BalancingFloatPropertyValue) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UPL_BalancingVectorPropertyValue) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UPL_BalancingRotatorPropertyValue) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UPL_BalancingPropertyValueUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BalancingSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_BalancingUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_BalancingFloatValue) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UPL_BalancingBoolValue) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UPL_BalancingVectorValue) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UPL_CharacterMovementBalancingMaxWalkSpeed) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UPL_CharacterMovementBalancingJumpZVelocity) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UPL_CharacterMovementBalancingJumpMaxHoldTime) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FPL_BalancingProfileCollection) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FPL_ProfileCollections) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_ActiveBalancingProfileCollectionsOnTargetPair) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPL_ActiveBalancingProfileCollectionsOnTargetPairs) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(APL_LevelBalancingManager) == 0x0428); // 1064 bytes (0x000288 - 0x000428)
static_assert(offsetof(UPL_BalancingController, ActiveProfiles) == 0x0050);
static_assert(offsetof(UPL_BalancingController, ActiveLevelBalancingManager) == 0x0060);
static_assert(offsetof(UPL_BalancingProfile, ProfileName) == 0x0028);
static_assert(offsetof(UPL_BalancingProfile, CustomName) == 0x0038);
static_assert(offsetof(UPL_BalancingProfile, TargetClass) == 0x0050);
static_assert(offsetof(UPL_BalancingProfile, DefaultActor) == 0x0058);
static_assert(offsetof(UPL_BalancingProfile, PauseMode) == 0x0060);
static_assert(offsetof(UPL_BalancingProfile, BalancingValues) == 0x0068);
static_assert(offsetof(UPL_BalancingProfile, Targets) == 0x0078);
static_assert(offsetof(FPL_BalancingPropertyValueDefinition, PropertyName) == 0x0000);
static_assert(offsetof(FPL_BalancingPropertyValueDefinition, Tooltip) == 0x0010);
static_assert(offsetof(UPL_BalancingProfileSet, ProfileName) == 0x0030);
static_assert(offsetof(UPL_BalancingProfileSet, TargetClass) == 0x0048);
static_assert(offsetof(UPL_BalancingProfileSet, BalancingValueClasses) == 0x0050);
static_assert(offsetof(UPL_BalancingProfileSet, BalancingPropertyValueDefinitions) == 0x0060);
static_assert(offsetof(UPL_BalancingProfileSet, PauseMode) == 0x0070);
static_assert(offsetof(UPL_BalancingProfileSets, AvailableSets) == 0x0030);
static_assert(offsetof(UPL_BalancingValue, BalancingName) == 0x0028);
static_assert(offsetof(UPL_BalancingPropertyValue, PropertyName) == 0x0040);
static_assert(offsetof(UPL_BalancingPropertyValue, Tooltip) == 0x0050);
static_assert(offsetof(UPL_BalancingPropertyThreeValues, IsDefaultValues) == 0x0060);
static_assert(offsetof(UPL_BalancingEnumPropertyValue, CurrentValue) == 0x0068);
static_assert(offsetof(UPL_BalancingVectorPropertyValue, CurrentValue) == 0x0074);
static_assert(offsetof(UPL_BalancingRotatorPropertyValue, CurrentValue) == 0x0074);
static_assert(offsetof(UPL_BalancingSettings, SubLevelRoot) == 0x0028);
static_assert(offsetof(UPL_BalancingVectorValue, CurrentValue) == 0x0044);
static_assert(offsetof(FPL_BalancingProfileCollection, BalancingProfilesName) == 0x0000);
static_assert(offsetof(FPL_BalancingProfileCollection, BalancingProfilesDescription) == 0x0010);
static_assert(offsetof(FPL_BalancingProfileCollection, ActiveBalancingProfileClasses) == 0x0028);
static_assert(offsetof(FPL_BalancingProfileCollection, ActiveBalancingProfile) == 0x0038);
static_assert(offsetof(FPL_ProfileCollections, Collections) == 0x0000);
static_assert(offsetof(FPL_ActiveBalancingProfileCollectionsOnTargetPair, TargetActor) == 0x0000);
static_assert(offsetof(FPL_ActiveBalancingProfileCollectionsOnTargetPair, BalancingProfileCollection) == 0x0028);
static_assert(offsetof(FPL_ActiveBalancingProfileCollectionsOnTargetPairs, Entries) == 0x0000);
static_assert(offsetof(APL_LevelBalancingManager, ProfileCollectionsForPossessedPawns) == 0x0288);
static_assert(offsetof(APL_LevelBalancingManager, ProfileCollectionsForClassesOfTargets) == 0x02D8);
static_assert(offsetof(APL_LevelBalancingManager, ActiveBalancingProfileCollectionsOnTargetPairs) == 0x0328);
