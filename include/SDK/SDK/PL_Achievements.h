
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
/// dependency: GameplayTags
/// dependency: PL_Online

#pragma pack(push, 0x1)

/// Enum /Script/PL_Achievements.EPL_AchievementCategory
/// Size: 0x01 (1 bytes)
enum class EPL_AchievementCategory : uint8_t
{
	EPL_AchievementCategory__StoryBased                                              = 0,
	EPL_AchievementCategory__SkillBased                                              = 1,
	EPL_AchievementCategory__Farming                                                 = 2,
	EPL_AchievementCategory__FanService                                              = 3,
	EPL_AchievementCategory__Completionist                                           = 4
};

/// Enum /Script/PL_Achievements.EPL_AchievementDifficulty
/// Size: 0x01 (1 bytes)
enum class EPL_AchievementDifficulty : uint8_t
{
	EPL_AchievementDifficulty__Bronze                                                = 0,
	EPL_AchievementDifficulty__Silver                                                = 1,
	EPL_AchievementDifficulty__Gold                                                  = 2,
	EPL_AchievementDifficulty__Platinum                                              = 3
};

/// Class /Script/PL_Achievements.PL_AchievementSettings
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UPL_AchievementSettings : public UDeveloperSettings
{ 
public:
	TWeakObjectPtr<class UDataTable*>                  AchievementsTable;                                          // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/PL_Achievements.PL_AchievementSystem
/// Size: 0x00C0 (192 bytes) (0x000070 - 0x0000C0) align 16 MaxSize: 0x00C0
class UPL_AchievementSystem : public UPL_OnlineSystemBase
{ 
public:
	SDK_UNDEFINED(16,541) /* FMulticastInlineDelegate */ __um(OnAchievementCompleted);                             // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,542) /* FMulticastInlineDelegate */ __um(OnAllAchievementsReset);                             // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0090   (0x0028)  MISSED
	class UDataTable*                                  CachedDataTable;                                            // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/PL_Achievements.PL_AchievementSystem.OnAllAchievementsReset__DelegateSignature
	// void OnAllAchievementsReset__DelegateSignature();                                                                        // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Achievements.PL_AchievementSystem.OnAchievementCompleted__DelegateSignature
	// void OnAchievementCompleted__DelegateSignature(FGameplayTag& AchievementName, FPL_AchievementData& AchievementData);     // [0x19ac1c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PL_Achievements.PL_AchievementSystem.PL.Achievements.SetProgress
	// void PL_Achievements_SetProgress(FName Achievement, int32_t ProgressValue);                                              // [0xdd4600] Final|Exec|Native|Protected 
	// Function /Script/PL_Achievements.PL_AchievementSystem.PL.Achievements.Complete
	// void PL_Achievements_Complete(FName Achievement);                                                                        // [0xdd4570] Final|Exec|Native|Protected 
	// Function /Script/PL_Achievements.PL_AchievementSystem.PL.Achievements.AddProgress
	// void PL_Achievements_AddProgress(FName Achievement, int32_t ProgressValue);                                              // [0xdd44a0] Final|Exec|Native|Protected 
};

/// Class /Script/PL_Achievements.PL_AchievementUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_AchievementUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Achievements.PL_AchievementUtils.SetAchievementProgress
	// void SetAchievementProgress(FGameplayTag& Key, int32_t ProgressValue);                                                   // [0xdd4b20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.ResetAllAchievements
	// void ResetAllAchievements();                                                                                             // [0xdd4b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.IsBinaryAchievement
	// bool IsBinaryAchievement(FGameplayTag& Key);                                                                             // [0xdd4a70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.IsAchievementUnlocked
	// bool IsAchievementUnlocked(FGameplayTag& Key);                                                                           // [0xdd49e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.IsAchievementCompleted
	// bool IsAchievementCompleted(FGameplayTag& Key);                                                                          // [0xdd4950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.GetAllAchievementKeyNames
	// TArray<FGameplayTag> GetAllAchievementKeyNames();                                                                        // [0xdd48d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.GetAchievementTargetProgress
	// int32_t GetAchievementTargetProgress(FGameplayTag& Key);                                                                 // [0xdd4840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.GetAchievementProgress
	// int32_t GetAchievementProgress(FGameplayTag& Key);                                                                       // [0xdd47b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.GetAchievementData
	// FPL_AchievementData GetAchievementData(FGameplayTag& Key);                                                               // [0xdd4710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.GetAchievementBaseTag
	// FGameplayTag GetAchievementBaseTag();                                                                                    // [0xdd46d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.CompleteAllAchievements
	// void CompleteAllAchievements();                                                                                          // [0xdd4480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.CompleteAchievement
	// void CompleteAchievement(FGameplayTag& Key);                                                                             // [0xdd4400] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Achievements.PL_AchievementUtils.AddAchievementProgress
	// void AddAchievementProgress(FGameplayTag& Key, int32_t ProgressValue);                                                   // [0xdd4330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PL_Achievements.PL_AchievementData
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FPL_AchievementData : FTableRowBase
{ 
	FText                                              Name;                                                       // 0x0008   (0x0018)  
	FGameplayTag                                       Key;                                                        // 0x0020   (0x0008)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
	class UTexture2D*                                  IconTexture;                                                // 0x0040   (0x0008)  
	bool                                               bIsHidden;                                                  // 0x0048   (0x0001)  
	EPL_AchievementDifficulty                          Difficulty;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            TargetProgress;                                             // 0x004C   (0x0004)  
	EPL_AchievementCategory                            Category;                                                   // 0x0050   (0x0001)  
	bool                                               bIsDebug;                                                   // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FGameplayTag>                               AchievementDependencies;                                    // 0x0058   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_AchievementSettings) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UPL_AchievementSystem) == 0x00C0); // 192 bytes (0x000070 - 0x0000C0)
static_assert(sizeof(UPL_AchievementUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_AchievementData) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(offsetof(UPL_AchievementSettings, AchievementsTable) == 0x0038);
static_assert(offsetof(UPL_AchievementSystem, CachedDataTable) == 0x00B8);
static_assert(offsetof(FPL_AchievementData, Name) == 0x0008);
static_assert(offsetof(FPL_AchievementData, Key) == 0x0020);
static_assert(offsetof(FPL_AchievementData, Description) == 0x0028);
static_assert(offsetof(FPL_AchievementData, IconTexture) == 0x0040);
static_assert(offsetof(FPL_AchievementData, Difficulty) == 0x0049);
static_assert(offsetof(FPL_AchievementData, Category) == 0x0050);
static_assert(offsetof(FPL_AchievementData, AchievementDependencies) == 0x0058);
