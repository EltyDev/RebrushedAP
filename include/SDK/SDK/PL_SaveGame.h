
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

/// Enum /Script/PL_SaveGame.EPL_SaveGameSystemStateTransition
/// Size: 0x01 (1 bytes)
enum class EPL_SaveGameSystemStateTransition : uint8_t
{
	EPL_SaveGameSystemStateTransition__SaveStarted                                   = 0,
	EPL_SaveGameSystemStateTransition__SaveAsyncWriteStarted                         = 1,
	EPL_SaveGameSystemStateTransition__SaveSucceeded                                 = 2,
	EPL_SaveGameSystemStateTransition__SaveFailed                                    = 3,
	EPL_SaveGameSystemStateTransition__LoadStarted                                   = 4,
	EPL_SaveGameSystemStateTransition__LoadFinished                                  = 5
};

/// Enum /Script/PL_SaveGame.EPL_SaveGameStatus
/// Size: 0x01 (1 bytes)
enum class EPL_SaveGameStatus : uint8_t
{
	EPL_SaveGameStatus__EXISTS                                                       = 0,
	EPL_SaveGameStatus__CORRUPTED                                                    = 1,
	EPL_SaveGameStatus__NOT_FOUND                                                    = 2
};

/// Enum /Script/PL_SaveGame.EPL_SaveGameErrorCode
/// Size: 0x01 (1 bytes)
enum class EPL_SaveGameErrorCode : uint8_t
{
	EPL_SaveGameErrorCode__None                                                      = 0,
	EPL_SaveGameErrorCode__SavingGameFailed_SaveIsAlreadyInProgress                  = 1,
	EPL_SaveGameErrorCode__SavingGameFailed_SlotNameIsEmpty                          = 2,
	EPL_SaveGameErrorCode__SavingGameFailed_CouldNotCreateSaveGameObject             = 3,
	EPL_SaveGameErrorCode__SavingGameFailed_NoSaveGameUpgradeDataAsset               = 4,
	EPL_SaveGameErrorCode__SavingGameFailed_NoPlatformUserId                         = 5,
	EPL_SaveGameErrorCode__SavingGameFailed_SaveGameToSlotReturnedFalse              = 6,
	EPL_SaveGameErrorCode__SavingGameFailed_ProjectSaveGameDataFailed                = 7,
	EPL_SaveGameErrorCode__SavingGameFailed_InvalidProjectConfig                     = 8
};

/// Enum /Script/PL_SaveGame.EPL_MemorySavePolicy
/// Size: 0x01 (1 bytes)
enum class EPL_MemorySavePolicy : uint8_t
{
	EPL_MemorySavePolicy__DefaultToFromDisc                                          = 0,
	EPL_MemorySavePolicy__SaveGameToFromMemory                                       = 1,
	EPL_MemorySavePolicy__SaveGameAndUserSettingsToFromMemory                        = 2
};

/// Enum /Script/PL_SaveGame.EPL_AutoSaveGameStrategy
/// Size: 0x01 (1 bytes)
enum class EPL_AutoSaveGameStrategy : uint8_t
{
	EPL_AutoSaveGameStrategy__UseCurrentSaveSlotAsAutoSaveSlot                       = 0,
	EPL_AutoSaveGameStrategy__NumberOfAutoSaveSlotsPerSelectedSaveSlot               = 1,
	EPL_AutoSaveGameStrategy__NumberOfAutoSaveSlots                                  = 2
};

/// Class /Script/PL_SaveGame.PL_ProjectSpecificSaveGameData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ProjectSpecificSaveGameData : public UObject
{ 
public:
};

/// Class /Script/PL_SaveGame.PL_SaveGame
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UPL_SaveGame : public USaveGame
{ 
public:
	int32_t                                            VersionNumber;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FDateTime                                          LastUpdate;                                                 // 0x0030   (0x0008)  
	bool                                               bWasAutoSaved;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<char>                                       DummyDataForTesting;                                        // 0x0040   (0x0010)  
};

/// Class /Script/PL_SaveGame.PL_SaveGameErrorCodeUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SaveGameErrorCodeUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_SaveGame.PL_SaveGameErrorCodeUtils.ConvertErrorCodeToDigitNumberString
	// FString ConvertErrorCodeToDigitNumberString(EPL_SaveGameErrorCode ErrorCode);                                            // [0xe87700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_SaveGame.PL_SaveGameSettings
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class UPL_SaveGameSettings : public UObject
{ 
public:
	FString                                            SaveName;                                                   // 0x0028   (0x0010)  
	int32_t                                            SaveVersion;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UClass*                                      SaveGameUpgradeDataAsset;                                   // 0x0040   (0x0008)  
	class UClass*                                      ProjectSpecificSaveGameDataClass;                           // 0x0048   (0x0008)  
	class UClass*                                      SaveGameIndicatorWidgetClass;                               // 0x0050   (0x0008)  
	float                                              SaveIndicatorMinDisplayTime;                                // 0x0058   (0x0004)  
	int32_t                                            AvailableSaveSlots;                                         // 0x005C   (0x0004)  
	int32_t                                            SaveGameMaxSize;                                            // 0x0060   (0x0004)  
	bool                                               bTakePersistencySnapshotBetweenFrames;                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<FString>                                    SaveExclusionList;                                          // 0x0068   (0x0010)  
	FGameplayTag                                       LevelChangingSaveBlockerTag;                                // 0x0078   (0x0008)  
	bool                                               bShouldCancelPendingSavesOnLevelChange;                     // 0x0080   (0x0001)  
	bool                                               bShouldEnsureNoPendingSavesOnLevelChange;                   // 0x0081   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0082   (0x0006)  MISSED
	SDK_UNDEFINED(16,659) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(LevelsThatCancelPendingSaves);                // 0x0088   (0x0010)  
	EPL_MemorySavePolicy                               MemorySavePolicy;                                           // 0x0098   (0x0001)  
	bool                                               bAutoSaveIsEnabled;                                         // 0x0099   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x009A   (0x0002)  MISSED
	float                                              AutoSaveQueueDelay;                                         // 0x009C   (0x0004)  
	float                                              AutoSaveCoolDownDuration;                                   // 0x00A0   (0x0004)  
	EPL_AutoSaveGameStrategy                           AutoSaveGameStrategy;                                       // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00A5   (0x0003)  MISSED
	int32_t                                            NumberOfAutoSave;                                           // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FString                                            AutoSaveName;                                               // 0x00B0   (0x0010)  
	FGameplayTag                                       DefaultAutoSaveReasonTag;                                   // 0x00C0   (0x0008)  
	float                                              AutoSavePeriod;                                             // 0x00C8   (0x0004)  
	FGameplayTag                                       AutoSavePeriodReasonTag;                                    // 0x00CC   (0x0008)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FString                                            UserSettingsName;                                           // 0x00D8   (0x0010)  
};

/// Class /Script/PL_SaveGame.PL_SaveGameSystem
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UPL_SaveGameSystem : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,660) /* FMulticastInlineDelegate */ __um(OnStateTransition);                                  // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,661) /* FMulticastInlineDelegate */ __um(OnSaveDataQueueChanged);                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	class UUserWidget*                                 SaveIndicatorWidget;                                        // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x0078   (0x0070)  MISSED


	/// Functions
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.SaveStateToSlot
	// FPL_SaveResult SaveStateToSlot(FString SlotName, bool bWasAutoSaved, bool bAsync);                                       // [0xe887e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.SaveState
	// FPL_SaveResult SaveState(bool bWasAutoSaved, bool bAsync);                                                               // [0xe88700] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.SaveRawStateToSlot
	// FPL_SaveResult SaveRawStateToSlot(class UPL_SaveGame* RawSaveObj, FString SlotName, bool bAsync, bool bSetLastUpdate);   // [0xe88560] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.QueueAutoSave
	// FPL_SaveResult QueueAutoSave(FGameplayTag& InAutoSaveReason, bool bSkipAutoSaveCoolDown);                                // [0xe882e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.QuerySaveGameStatus
	// EPL_SaveGameStatus QuerySaveGameStatus(FString SlotName);                                                                // [0xe88230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.OnWorldChanged
	// void OnWorldChanged(class UWorld* OldWorld, class UWorld* NewWorld);                                                     // [0xe88160] Final|Native|Protected 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.OnSaveDataQueueChanged__DelegateSignature
	// void OnSaveDataQueueChanged__DelegateSignature();                                                                        // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.OnPostLoadMapWithWorld
	// void OnPostLoadMapWithWorld(class UWorld* World);                                                                        // [0xe880d0] Final|Native|Protected 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.LoadStateFromSlot
	// bool LoadStateFromSlot(FString SlotName);                                                                                // [0xe88020] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.LoadState
	// bool LoadState();                                                                                                        // [0xe87ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.IsSavingBlocked
	// bool IsSavingBlocked();                                                                                                  // [0xe87fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.HasSave
	// bool HasSave(FString SlotName);                                                                                          // [0xe87e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.HasPendingSave
	// bool HasPendingSave();                                                                                                   // [0xe87e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.GetSavingBlockedCount
	// int32_t GetSavingBlockedCount();                                                                                         // [0xe87e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.GetSave
	// class UPL_SaveGame* GetSave(FString SlotName);                                                                           // [0xe87ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.GetRawSave
	// class USaveGame* GetRawSave(FString SlotName);                                                                           // [0xe87c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.GetMessageFailedToLoad
	// FText GetMessageFailedToLoad();                                                                                          // [0xe87b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.GetAllSaveGameSlotNames
	// TArray<FString> GetAllSaveGameSlotNames();                                                                               // [0xe87930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.DeleteSaveSlot
	// bool DeleteSaveSlot(FString SlotName);                                                                                   // [0xe87880] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameSystem.DeleteAllSavesOfSlot
	// bool DeleteAllSavesOfSlot(FString SlotName);                                                                             // [0xe877d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_SaveGame.PL_SaveGameUpgradeAction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SaveGameUpgradeAction : public UObject
{ 
public:


	/// Functions
	// Function /Script/PL_SaveGame.PL_SaveGameUpgradeAction.Upgrade
	// bool Upgrade(class UPL_SaveGame* SaveGame);                                                                              // [0xaceb50] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/PL_SaveGame.PL_SaveGameUpgradeActions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_SaveGameUpgradeActions
{ 
	TArray<class UClass*>                              Actions;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/PL_SaveGame.PL_SaveGameUpgradeData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPL_SaveGameUpgradeData : public UObject
{ 
public:
	TMap<FString, FPL_SaveGameUpgradeActions>          VersionUpgrades;                                            // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/PL_SaveGame.PL_SaveGameUpgradeData.UpgradeSaveGameToLatestVersion
	// bool UpgradeSaveGameToLatestVersion(class UPL_SaveGame* SaveGame);                                                       // [0xe88a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_SaveGame.PL_SaveGameUpgradeData.GetLatestVersionNumber
	// int32_t GetLatestVersionNumber();                                                                                        // [0xe87b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_SaveGame.PL_SaveGameUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SaveGameUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.StopPeriodicAutoSave
	// void StopPeriodicAutoSave(class UObject* WorldContextObject);                                                            // [0xe889b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.StartPeriodicAutoSave
	// void StartPeriodicAutoSave(class UObject* WorldContextObject);                                                           // [0xe88930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.QueueSave
	// void QueueSave(class UObject* WorldContextObject);                                                                       // [0xe884e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.QueueAutoSave
	// void QueueAutoSave(class UObject* WorldContextObject, FGameplayTag& InReasonTag, bool bSkipAutoSaveCoolDown);            // [0xe883c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.IsSavingAllowed
	// bool IsSavingAllowed(class UObject* WorldContextObject);                                                                 // [0xe87f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.GetSaveGameSystem
	// class UPL_SaveGameSystem* GetSaveGameSystem(class UObject* WorldContextObject);                                          // [0xe87d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.GetAllSaveGameSlotNames
	// TArray<FString> GetAllSaveGameSlotNames(class UObject* WorldContextObject, bool bIncludeAutoSaves, bool bIncludeUserSettings); // [0xe879b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_SaveGame.PL_SaveGameUtils.CancelAutoSave
	// void CancelAutoSave(class UObject* WorldContextObject);                                                                  // [0xe87680] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_SaveGame.PL_SaveIndicatorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SaveIndicatorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_SaveGame.PL_SaveIndicatorInterface.ShowSaveIndicator
	// void ShowSaveIndicator(float MinDisplayTime);                                                                            // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Script/PL_SaveGame.PL_SaveIndicatorInterface.HideSaveIndicator
	// void HideSaveIndicator(bool bHideInstantly);                                                                             // [0x19ac1c0] Event|Public|BlueprintEvent 
};

/// Struct /Script/PL_SaveGame.PL_SaveResult
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FPL_SaveResult
{ 
	bool                                               bWasSuccessful;                                             // 0x0000   (0x0001)  
	EPL_SaveGameErrorCode                              ErrorCodes;                                                 // 0x0001   (0x0001)  
};

/// Struct /Script/PL_SaveGame.PL_SaveBlockHandle
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FPL_SaveBlockHandle
{ 
	FGameplayTag                                       BlockingTag;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0008   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPL_ProjectSpecificSaveGameData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SaveGame) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UPL_SaveGameErrorCodeUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SaveGameSettings) == 0x00E8); // 232 bytes (0x000028 - 0x0000E8)
static_assert(sizeof(UPL_SaveGameSystem) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(UPL_SaveGameUpgradeAction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_SaveGameUpgradeActions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_SaveGameUpgradeData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UPL_SaveGameUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_SaveIndicatorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_SaveResult) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FPL_SaveBlockHandle) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UPL_SaveGame, LastUpdate) == 0x0030);
static_assert(offsetof(UPL_SaveGame, DummyDataForTesting) == 0x0040);
static_assert(offsetof(UPL_SaveGameSettings, SaveName) == 0x0028);
static_assert(offsetof(UPL_SaveGameSettings, SaveGameUpgradeDataAsset) == 0x0040);
static_assert(offsetof(UPL_SaveGameSettings, ProjectSpecificSaveGameDataClass) == 0x0048);
static_assert(offsetof(UPL_SaveGameSettings, SaveGameIndicatorWidgetClass) == 0x0050);
static_assert(offsetof(UPL_SaveGameSettings, SaveExclusionList) == 0x0068);
static_assert(offsetof(UPL_SaveGameSettings, LevelChangingSaveBlockerTag) == 0x0078);
static_assert(offsetof(UPL_SaveGameSettings, MemorySavePolicy) == 0x0098);
static_assert(offsetof(UPL_SaveGameSettings, AutoSaveGameStrategy) == 0x00A4);
static_assert(offsetof(UPL_SaveGameSettings, AutoSaveName) == 0x00B0);
static_assert(offsetof(UPL_SaveGameSettings, DefaultAutoSaveReasonTag) == 0x00C0);
static_assert(offsetof(UPL_SaveGameSettings, AutoSavePeriodReasonTag) == 0x00CC);
static_assert(offsetof(UPL_SaveGameSettings, UserSettingsName) == 0x00D8);
static_assert(offsetof(UPL_SaveGameSystem, SaveIndicatorWidget) == 0x0070);
static_assert(offsetof(FPL_SaveGameUpgradeActions, Actions) == 0x0000);
static_assert(offsetof(UPL_SaveGameUpgradeData, VersionUpgrades) == 0x0028);
static_assert(offsetof(FPL_SaveResult, ErrorCodes) == 0x0001);
static_assert(offsetof(FPL_SaveBlockHandle, BlockingTag) == 0x0000);
