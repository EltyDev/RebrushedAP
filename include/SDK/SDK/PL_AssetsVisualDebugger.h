
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebugger
/// Size: 0x02F0 (752 bytes) (0x000288 - 0x0002F0) align 8 MaxSize: 0x02F0
class APL_AssetsVisualDebugger : public AActor
{ 
public:
	class UPostProcessComponent*                       PostProcess;                                                // 0x0288   (0x0008)  
	class UMaterialInstance*                           PostProcessMaterialInstance;                                // 0x0290   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterialIntance;                                     // 0x0298   (0x0008)  
	TArray<class AActor*>                              OriginalActors;                                             // 0x02A0   (0x0010)  
	TArray<class AActor*>                              BlockoutActors;                                             // 0x02B0   (0x0010)  
	TArray<class AActor*>                              PrototypeActors;                                            // 0x02C0   (0x0010)  
	TArray<class AActor*>                              PerformanceActors;                                          // 0x02D0   (0x0010)  
	class ACharacter*                                  Character;                                                  // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebugger.AssetListsChanged
	// void AssetListsChanged();                                                                                                // [0x126ed70] Final|Native|Private 
};

/// Struct /Script/PL_AssetsVisualDebugger.VisualDebuggerEntry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FVisualDebuggerEntry
{ 
	FString                                            AssetPathName;                                              // 0x0000   (0x0010)  
	TWeakObjectPtr<class UObject*>                     Asset;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Class /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPL_AssetsVisualDebuggerData : public UObject
{ 
public:
	TArray<FVisualDebuggerEntry>                       OriginalAssets;                                             // 0x0028   (0x0010)  
	TArray<FVisualDebuggerEntry>                       BlockoutAssets;                                             // 0x0038   (0x0010)  
	TArray<FVisualDebuggerEntry>                       PrototypeAssets;                                            // 0x0048   (0x0010)  
	TArray<FVisualDebuggerEntry>                       PerformanceAssets;                                          // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED


	/// Functions
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.RemoveFromLists
	// void RemoveFromLists(class UObject* Asset);                                                                              // [0x126edc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.OnAssetListsChanged__DelegateSignature
	// void OnAssetListsChanged__DelegateSignature();                                                                           // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.GetAssetsVisualDebuggerData
	// class UPL_AssetsVisualDebuggerData* GetAssetsVisualDebuggerData();                                                       // [0x126ed90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.AddToPrototypeAssets
	// void AddToPrototypeAssets(class UObject* Asset);                                                                         // [0x126ece0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.AddToPerformanceAssets
	// void AddToPerformanceAssets(class UObject* Asset);                                                                       // [0x126ec50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.AddToOriginalAssets
	// void AddToOriginalAssets(class UObject* Asset);                                                                          // [0x126ebc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_AssetsVisualDebugger.PL_AssetsVisualDebuggerData.AddToBlockoutAssets
	// void AddToBlockoutAssets(class UObject* Asset);                                                                          // [0x126eb30] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(APL_AssetsVisualDebugger) == 0x02F0); // 752 bytes (0x000288 - 0x0002F0)
static_assert(sizeof(FVisualDebuggerEntry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UPL_AssetsVisualDebuggerData) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(APL_AssetsVisualDebugger, PostProcess) == 0x0288);
static_assert(offsetof(APL_AssetsVisualDebugger, PostProcessMaterialInstance) == 0x0290);
static_assert(offsetof(APL_AssetsVisualDebugger, DynamicMaterialIntance) == 0x0298);
static_assert(offsetof(APL_AssetsVisualDebugger, OriginalActors) == 0x02A0);
static_assert(offsetof(APL_AssetsVisualDebugger, BlockoutActors) == 0x02B0);
static_assert(offsetof(APL_AssetsVisualDebugger, PrototypeActors) == 0x02C0);
static_assert(offsetof(APL_AssetsVisualDebugger, PerformanceActors) == 0x02D0);
static_assert(offsetof(APL_AssetsVisualDebugger, Character) == 0x02E0);
static_assert(offsetof(FVisualDebuggerEntry, AssetPathName) == 0x0000);
static_assert(offsetof(FVisualDebuggerEntry, Asset) == 0x0010);
static_assert(offsetof(UPL_AssetsVisualDebuggerData, OriginalAssets) == 0x0028);
static_assert(offsetof(UPL_AssetsVisualDebuggerData, BlockoutAssets) == 0x0038);
static_assert(offsetof(UPL_AssetsVisualDebuggerData, PrototypeAssets) == 0x0048);
static_assert(offsetof(UPL_AssetsVisualDebuggerData, PerformanceAssets) == 0x0058);
