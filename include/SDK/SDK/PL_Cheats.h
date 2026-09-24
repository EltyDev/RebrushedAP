
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
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_Cheats.EPL_ManipulateLooseGameplayTagsOnPlayerCheatType
/// Size: 0x04 (4 bytes)
enum class EPL_ManipulateLooseGameplayTagsOnPlayerCheatType : uint32_t
{
	EPL_ManipulateLooseGameplayTagsOnPlayerCheatType__Add                            = 0,
	EPL_ManipulateLooseGameplayTagsOnPlayerCheatType__Remove                         = 1,
	EPL_ManipulateLooseGameplayTagsOnPlayerCheatType__Toggle                         = 2
};

/// Class /Script/PL_Cheats.PL_BaseCheat
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UPL_BaseCheat : public UPrimaryDataAsset
{ 
public:
	FString                                            Category;                                                   // 0x0030   (0x0010)  
	FString                                            DisplayText;                                                // 0x0040   (0x0010)  
	class UTexture2D*                                  Icon;                                                       // 0x0050   (0x0008)  
	bool                                               bIsDefaultBlacklisted;                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/PL_Cheats.PL_BaseCheat.GetIcon
	// class UTexture2D* GetIcon();                                                                                             // [0x1274d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Cheats.PL_BaseCheat.GetExecutionString
	// FString GetExecutionString(class APlayerController* PlayerController);                                                   // [0x1274c80] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_Cheats.PL_BaseCheat.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x1274be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Cheats.PL_BaseCheat.GetCategory
	// FString GetCategory();                                                                                                   // [0x1274bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Cheats.PL_BaseCheat.GetAllActorsOfClass
	// TArray<AActor*> GetAllActorsOfClass(class UClass* Class, class APlayerController* PlayerController);                     // [0x12749a0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/PL_Cheats.PL_BaseCheat.Execute
	// void Execute(class APlayerController* PlayerController);                                                                 // [0x1134bf0] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Script/PL_Cheats.PL_ApplyGameplayEffectToPlayerCheat
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPL_ApplyGameplayEffectToPlayerCheat : public UPL_BaseCheat
{ 
public:
	class UClass*                                      Effect;                                                     // 0x0060   (0x0008)  
	float                                              Level;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/PL_Cheats.PL_CheatManager
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPL_CheatManager : public UCheatManager
{ 
public:
	class UInputComponent*                             ToggleCheatMenuInputComponent;                              // 0x0088   (0x0008)  
	class UUserWidget*                                 CheatMenuWidget;                                            // 0x0090   (0x0008)  
	TArray<class UUserWidget*>                         CheatWidgets;                                               // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_Cheats.PL_CheatManager.ToggleCheatMenu
	// void ToggleCheatMenu();                                                                                                  // [0x1274e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Cheats.PL_CheatManager.ShowCheatMenu
	// void ShowCheatMenu();                                                                                                    // [0x1274e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Cheats.PL_CheatManager.HideCheatMenu
	// void HideCheatMenu();                                                                                                    // [0x1274d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Cheats.PL_CheatManager.ExecuteCheat
	// void ExecuteCheat(class UClass* Cheat);                                                                                  // [0x1274790] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PL_Cheats.PL_CheatHistory
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_CheatHistory
{ 
	TSoftObjectPtr<class UClass*>                      Cheat;                                                      // 0x0000   (0x0028)  
	int32_t                                            Count;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/PL_Cheats.PL_CheatsLocalSettings
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UPL_CheatsLocalSettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,554) /* TArray<TSoftObjectPtr<UClass*>> */ __um(Favorites);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,555) /* TArray<TSoftObjectPtr<UClass*>> */ __um(Blacklist);                                   // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,556) /* TArray<TSoftObjectPtr<UClass*>> */ __um(LocalAvailableCheats);                        // 0x0048   (0x0010)  
	int32_t                                            ShowMaxRecent;                                              // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FPL_CheatHistory>                           History;                                                    // 0x0060   (0x0010)  
};

/// Struct /Script/PL_Cheats.PL_CheatCategorySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_CheatCategorySettings
{ 
	FString                                            DisplayText;                                                // 0x0000   (0x0010)  
	class UTexture2D*                                  Icon;                                                       // 0x0010   (0x0008)  
};

/// Class /Script/PL_Cheats.PL_CheatsSettings
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPL_CheatsSettings : public UObject
{ 
public:
	FName                                              ToggleActionName;                                           // 0x0028   (0x0008)  
	class UClass*                                      CheatMenuWidgetClass;                                       // 0x0030   (0x0008)  
	bool                                               bShouldPauseWhileCheatMenuIsOpen;                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              TimeDilationWhileCheatMenuIsOpen;                           // 0x003C   (0x0004)  
	TArray<FPL_CheatCategorySettings>                  Categories;                                                 // 0x0040   (0x0010)  
	FPL_CheatCategorySettings                          RecentCategorySetup;                                        // 0x0050   (0x0018)  
	FPL_CheatCategorySettings                          FavoriteCategorySetup;                                      // 0x0068   (0x0018)  
};

/// Class /Script/PL_Cheats.PL_CheatsUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_CheatsUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Cheats.PL_CheatsUtils.IsAssumedToBeGhosting
	// bool IsAssumedToBeGhosting(class APlayerController* PlayerController);                                                   // [0x1274da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cheats.PL_CheatsUtils.GetAllAvailableCheats
	// FPL_AvailableCheats GetAllAvailableCheats(class UObject* WorldContextObject);                                            // [0x1274ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cheats.PL_CheatsUtils.ExecuteCheat
	// void ExecuteCheat(class UObject* WorldContextObject, class UClass* Cheat, class APlayerController* TargetPlayerController); // [0x1274820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Cheats.PL_CheatsUtils.CreateOrGetCheatWidget
	// class UUserWidget* CreateOrGetCheatWidget(class APlayerController* TargetPlayerController, class UClass*& WidgetClass);  // [0x12746b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_Cheats.PL_ConsoleCheat
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPL_ConsoleCheat : public UPL_BaseCheat
{ 
public:
	FString                                            ConsoleCommand;                                             // 0x0060   (0x0010)  
};

/// Class /Script/PL_Cheats.PL_FlyCheatInputComponent
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UPL_FlyCheatInputComponent : public UInputComponent
{ 
public:


	/// Functions
	// Function /Script/PL_Cheats.PL_FlyCheatInputComponent.Fly
	// void Fly(float Value);                                                                                                   // [0x1274920] Final|Native|Protected 
};

/// Class /Script/PL_Cheats.PL_FlyCheat
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UPL_FlyCheat : public UPL_BaseCheat
{ 
public:
	FName                                              FlyCheatInputSettingsName;                                  // 0x0060   (0x0008)  
	bool                                               bGhostWhileFlying;                                          // 0x0068   (0x0001)  
	bool                                               bConsumeInput;                                              // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              MaxFlySpeed;                                                // 0x006C   (0x0004)  
	float                                              MaxAcceleratedMultiplicator;                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/PL_Cheats.PL_ForceGarbageCollectionCheat
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPL_ForceGarbageCollectionCheat : public UPL_BaseCheat
{ 
public:
	bool                                               bFullPurge;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/PL_Cheats.PL_ManipulateLooseGameplayTagsOnPlayerCheat
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align 8 MaxSize: 0x0088
class UPL_ManipulateLooseGameplayTagsOnPlayerCheat : public UPL_BaseCheat
{ 
public:
	FGameplayTagContainer                              GameplayTags;                                               // 0x0060   (0x0020)  
	EPL_ManipulateLooseGameplayTagsOnPlayerCheatType   Type;                                                       // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/PL_Cheats.PL_ToggleConsoleIntVariableCheat
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UPL_ToggleConsoleIntVariableCheat : public UPL_BaseCheat
{ 
public:
	FString                                            VariableName;                                               // 0x0060   (0x0010)  
	int32_t                                            ActiveValue;                                                // 0x0070   (0x0004)  
	int32_t                                            InactiveValue;                                              // 0x0074   (0x0004)  
};

/// Struct /Script/PL_Cheats.PL_AvailableCheatsInCategory
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FPL_AvailableCheatsInCategory
{ 
	FPL_CheatCategorySettings                          Category;                                                   // 0x0000   (0x0018)  
	TArray<class UPL_BaseCheat*>                       Cheats;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/PL_Cheats.PL_AvailableCheats
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_AvailableCheats
{ 
	TArray<FPL_AvailableCheatsInCategory>              CheatsInCategories;                                         // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_BaseCheat) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UPL_ApplyGameplayEffectToPlayerCheat) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPL_CheatManager) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(FPL_CheatHistory) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UPL_CheatsLocalSettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(FPL_CheatCategorySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPL_CheatsSettings) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UPL_CheatsUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ConsoleCheat) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPL_FlyCheatInputComponent) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(UPL_FlyCheat) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UPL_ForceGarbageCollectionCheat) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPL_ManipulateLooseGameplayTagsOnPlayerCheat) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UPL_ToggleConsoleIntVariableCheat) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(FPL_AvailableCheatsInCategory) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPL_AvailableCheats) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UPL_BaseCheat, Category) == 0x0030);
static_assert(offsetof(UPL_BaseCheat, DisplayText) == 0x0040);
static_assert(offsetof(UPL_BaseCheat, Icon) == 0x0050);
static_assert(offsetof(UPL_ApplyGameplayEffectToPlayerCheat, Effect) == 0x0060);
static_assert(offsetof(UPL_CheatManager, ToggleCheatMenuInputComponent) == 0x0088);
static_assert(offsetof(UPL_CheatManager, CheatMenuWidget) == 0x0090);
static_assert(offsetof(UPL_CheatManager, CheatWidgets) == 0x0098);
static_assert(offsetof(FPL_CheatHistory, Cheat) == 0x0000);
static_assert(offsetof(UPL_CheatsLocalSettings, History) == 0x0060);
static_assert(offsetof(FPL_CheatCategorySettings, DisplayText) == 0x0000);
static_assert(offsetof(FPL_CheatCategorySettings, Icon) == 0x0010);
static_assert(offsetof(UPL_CheatsSettings, ToggleActionName) == 0x0028);
static_assert(offsetof(UPL_CheatsSettings, CheatMenuWidgetClass) == 0x0030);
static_assert(offsetof(UPL_CheatsSettings, Categories) == 0x0040);
static_assert(offsetof(UPL_CheatsSettings, RecentCategorySetup) == 0x0050);
static_assert(offsetof(UPL_CheatsSettings, FavoriteCategorySetup) == 0x0068);
static_assert(offsetof(UPL_ConsoleCheat, ConsoleCommand) == 0x0060);
static_assert(offsetof(UPL_FlyCheat, FlyCheatInputSettingsName) == 0x0060);
static_assert(offsetof(UPL_ManipulateLooseGameplayTagsOnPlayerCheat, GameplayTags) == 0x0060);
static_assert(offsetof(UPL_ManipulateLooseGameplayTagsOnPlayerCheat, Type) == 0x0080);
static_assert(offsetof(UPL_ToggleConsoleIntVariableCheat, VariableName) == 0x0060);
static_assert(offsetof(FPL_AvailableCheatsInCategory, Category) == 0x0000);
static_assert(offsetof(FPL_AvailableCheatsInCategory, Cheats) == 0x0018);
static_assert(offsetof(FPL_AvailableCheats, CheatsInCategories) == 0x0000);
