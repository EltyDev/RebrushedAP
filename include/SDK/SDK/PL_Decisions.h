
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

#pragma pack(push, 0x1)

/// Enum /Script/PL_Decisions.EPL_DecisionChangedAction
/// Size: 0x01 (1 bytes)
enum class EPL_DecisionChangedAction : uint8_t
{
	EPL_DecisionChangedAction__Set                                                   = 0,
	EPL_DecisionChangedAction__Remove                                                = 1,
	EPL_DecisionChangedAction__Loaded                                                = 2
};

/// Enum /Script/PL_Decisions.EPL_BinaryChoice
/// Size: 0x01 (1 bytes)
enum class EPL_BinaryChoice : uint8_t
{
	EPL_BinaryChoice__No                                                             = 0,
	EPL_BinaryChoice__Yes                                                            = 1
};

/// Enum /Script/PL_Decisions.EPL_DecisionValidation
/// Size: 0x01 (1 bytes)
enum class EPL_DecisionValidation : uint8_t
{
	EPL_DecisionValidation__IsEmpty                                                  = 0,
	EPL_DecisionValidation__IsSet                                                    = 1
};

/// Class /Script/PL_Decisions.PL_BinaryChoiceUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BinaryChoiceUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Decisions.PL_BinaryChoiceUtils.ConvertBoolToBinaryChoice
	// EPL_BinaryChoice ConvertBoolToBinaryChoice(bool Value);                                                                  // [0xbf0c00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Decisions.PL_BinaryChoiceUtils.ConvertBinaryChoiceToBool
	// bool ConvertBinaryChoiceToBool(EPL_BinaryChoice& Choice);                                                                // [0xbf0b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PL_Decisions.PL_DecisionData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FPL_DecisionData
{ 
	FGameplayTag                                       DecisionID;                                                 // 0x0000   (0x0008)  
	char                                               Decision;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/PL_Decisions.PL_DecisionManager
/// Size: 0x0178 (376 bytes) (0x000030 - 0x000178) align 8 MaxSize: 0x0178
class UPL_DecisionManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x128];                                     // 0x0030   (0x0128)  MISSED
	TArray<FPL_DecisionData>                           QueuedSets;                                                 // 0x0158   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0168   (0x0010)  MISSED
};

/// Class /Script/PL_Decisions.PL_DecisionPersistenceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DecisionPersistenceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Decisions.PL_DecisionUpdatedInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DecisionUpdatedInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Decisions.PL_DecisionUpdatedInterface.OnDecisionUpdated
	// void OnDecisionUpdated(FGameplayTag& DecisionID, char Decision, EPL_DecisionChangedAction Action);                       // [0xbf19d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PL_Decisions.PL_DecisionUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_DecisionUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Decisions.PL_DecisionUtils.UnsubscribeFromAllLocalPlayerDecisionChanges
	// void UnsubscribeFromAllLocalPlayerDecisionChanges(class UObject* WorldContextObject);                                    // [0xbf2400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.UnsubscribeFromAllDecisionChanges
	// void UnsubscribeFromAllDecisionChanges(class UObject* UserObject, class APlayerController* PlayerController);            // [0xbf2340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.SubscribeToLocalPlayerDecisionChanges
	// void SubscribeToLocalPlayerDecisionChanges(FGameplayTag& DecisionID, FDelegateProperty& OnDecisionChanged, bool bInvokeAfterSubscription); // [0xbf2200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.SubscribeToDecisionChanges
	// void SubscribeToDecisionChanges(class APlayerController* PlayerController, FGameplayTag& DecisionID, FDelegateProperty& OnDecisionChanged, bool bInvokeAfterSubscription); // [0xbf2070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.SetPlayerDecision
	// void SetPlayerDecision(class APlayerController* PlayerController, FGameplayTag DecisionID, char Decision);               // [0xbf1f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.SetPlayerBinaryDecision
	// void SetPlayerBinaryDecision(class APlayerController* PlayerController, FGameplayTag DecisionID, EPL_BinaryChoice Decision); // [0xbf1e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.SetLocalPlayerDecision
	// void SetLocalPlayerDecision(class UObject* WorldContextObject, FGameplayTag DecisionID, char Decision);                  // [0xbf1d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.SetLocalPlayerBinaryDecision
	// void SetLocalPlayerBinaryDecision(class UObject* WorldContextObject, FGameplayTag DecisionID, EPL_BinaryChoice Decision); // [0xbf1c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.RemovePlayerDecision
	// void RemovePlayerDecision(class APlayerController* PlayerController, FGameplayTag DecisionID);                           // [0xbf1bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.RemoveLocalPlayerDecision
	// void RemoveLocalPlayerDecision(class UObject* WorldContextObject, FGameplayTag DecisionID);                              // [0xbf1af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.IsEmptyBranch
	// FPL_DecisionData IsEmptyBranch(FPL_DecisionData& DecisionData, EPL_DecisionValidation& Validity);                        // [0xbf18d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.IsEmpty
	// bool IsEmpty(FPL_DecisionData& DecisionData);                                                                            // [0xbf1830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Decisions.PL_DecisionUtils.InitializeUninitializedDecisionDefaults
	// void InitializeUninitializedDecisionDefaults(class APlayerController* PlayerController, TWeakObjectPtr<UDataTable*>& DecisionDefaultsDataTable); // [0xbf1730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.InitializeLocalUninitializedDecisionDefaults
	// void InitializeLocalUninitializedDecisionDefaults(class UObject* WorldContextObject, TWeakObjectPtr<UDataTable*>& DecisionDefaultsDataTable); // [0xbf1630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.IncreasePlayerDecision
	// void IncreasePlayerDecision(class APlayerController* PlayerController, FGameplayTag DecisionID, char Amount, char Maximum); // [0xbf14e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.IncreaseLocalPlayerDecision
	// void IncreaseLocalPlayerDecision(class UObject* WorldContextObject, FGameplayTag DecisionID, char Amount, char Maximum); // [0xbf1390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.GetPlayerNumericDecision
	// bool GetPlayerNumericDecision(class APlayerController* PlayerController, FGameplayTag DecisionID, char DefaultValue, char& OutDecision); // [0xbf1240] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Decisions.PL_DecisionUtils.GetPlayerDecision
	// FPL_DecisionData GetPlayerDecision(class APlayerController* PlayerController, FGameplayTag DecisionID);                  // [0xbf1160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Decisions.PL_DecisionUtils.GetLocalPlayerNumericDecision
	// bool GetLocalPlayerNumericDecision(class UObject* WorldContextObject, FGameplayTag DecisionID, char DefaultValue, char& OutDecision); // [0xbf1010] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Decisions.PL_DecisionUtils.GetLocalPlayerDecision
	// FPL_DecisionData GetLocalPlayerDecision(class UObject* WorldContextObject, FGameplayTag DecisionID);                     // [0xbf0f30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Decisions.PL_DecisionUtils.DecreasePlayerDecision
	// void DecreasePlayerDecision(class APlayerController* PlayerController, FGameplayTag DecisionID, char Amount, char Minimum); // [0xbf0de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.DecreaseLocalPlayerDecision
	// void DecreaseLocalPlayerDecision(class UObject* WorldContextObject, FGameplayTag DecisionID, char Amount, char Minimum); // [0xbf0c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.BranchOnPlayerBinaryDecision
	// bool BranchOnPlayerBinaryDecision(class APlayerController* PlayerController, FGameplayTag DecisionID, EPL_BinaryChoice DefaultValue, EPL_BinaryChoice& OutDecision); // [0xbf0a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Decisions.PL_DecisionUtils.BranchOnLocalPlayerBinaryDecision
	// bool BranchOnLocalPlayerBinaryDecision(class UObject* WorldContextObject, FGameplayTag DecisionID, EPL_BinaryChoice DefaultValue, EPL_BinaryChoice& OutDecision); // [0xbf08d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PL_Decisions.PL_DecisionContainer
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPL_DecisionContainer
{ 
	TMap<FGameplayTag, FPL_DecisionData>               Decisions;                                                  // 0x0000   (0x0050)  
};

/// Struct /Script/PL_Decisions.PL_DecisionDefaultsDataTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_DecisionDefaultsDataTableRow : FTableRowBase
{ 
	FGameplayTag                                       DecisionID;                                                 // 0x0008   (0x0008)  
	char                                               Decision;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPL_BinaryChoiceUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_DecisionData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UPL_DecisionManager) == 0x0178); // 376 bytes (0x000030 - 0x000178)
static_assert(sizeof(UPL_DecisionPersistenceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DecisionUpdatedInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DecisionUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_DecisionContainer) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPL_DecisionDefaultsDataTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(offsetof(FPL_DecisionData, DecisionID) == 0x0000);
static_assert(offsetof(UPL_DecisionManager, QueuedSets) == 0x0158);
static_assert(offsetof(FPL_DecisionContainer, Decisions) == 0x0000);
static_assert(offsetof(FPL_DecisionDefaultsDataTableRow, DecisionID) == 0x0008);
