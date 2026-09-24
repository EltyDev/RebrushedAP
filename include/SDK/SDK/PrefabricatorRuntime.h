
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

#pragma pack(push, 0x1)

/// Enum /Script/PrefabricatorRuntime.EPrefabricatorPivotPosition
/// Size: 0x01 (1 bytes)
enum class EPrefabricatorPivotPosition : uint8_t
{
	EPrefabricatorPivotPosition__ExtremeLeft                                         = 0,
	EPrefabricatorPivotPosition__ExtremeRight                                        = 1,
	EPrefabricatorPivotPosition__Center                                              = 2
};

/// Class /Script/PrefabricatorRuntime.PrefabActor
/// Size: 0x02A8 (680 bytes) (0x000288 - 0x0002A8) align 8 MaxSize: 0x02A8
class APrefabActor : public AActor
{ 
public:
	class UPrefabComponent*                            PrefabComponent;                                            // 0x0288   (0x0008)  
	FGuid                                              LastUpdateID;                                               // 0x0290   (0x0010)  
	int32_t                                            Seed;                                                       // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/PrefabricatorRuntime.PrefabActor.SavePrefab
	// void SavePrefab();                                                                                                       // [0x10dd3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabActor.RandomizeSeed
	// void RandomizeSeed(FRandomStream& InRandom, bool bRecursive);                                                            // [0x10dd2e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabActor.LoadPrefab
	// void LoadPrefab();                                                                                                       // [0x10dd160] Final|Native|Public|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
	// bool IsPrefabOutdated();                                                                                                 // [0x10dd130] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PrefabricatorRuntime.PrefabActor.GetPrefabAsset
	// class UPrefabricatorAsset* GetPrefabAsset();                                                                             // [0x10dd100] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PrefabricatorRuntime.ReplicablePrefabActor
/// Size: 0x02A8 (680 bytes) (0x0002A8 - 0x0002A8) align 8 MaxSize: 0x02A8
class AReplicablePrefabActor : public APrefabActor
{ 
public:
};

/// Class /Script/PrefabricatorRuntime.PrefabComponent
/// Size: 0x0230 (560 bytes) (0x000208 - 0x000230) align 16 MaxSize: 0x0230
class UPrefabComponent : public USceneComponent
{ 
public:
	TWeakObjectPtr<class UPrefabricatorAssetInterface*> PrefabAssetInterface;                                      // 0x0208   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0210   (0x0020)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabDebugActor
/// Size: 0x02A0 (672 bytes) (0x000288 - 0x0002A0) align 8 MaxSize: 0x02A0
class APrefabDebugActor : public AActor
{ 
public:
	class AActor*                                      Actor;                                                      // 0x0288   (0x0008)  
	TArray<char>                                       ActorData;                                                  // 0x0290   (0x0010)  
};

/// Class /Script/PrefabricatorRuntime.PrefabRandomizer
/// Size: 0x02D8 (728 bytes) (0x000288 - 0x0002D8) align 8 MaxSize: 0x02D8
class APrefabRandomizer : public AActor
{ 
public:
	bool                                               bRandomizeOnBeginPlay;                                      // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0289   (0x0003)  MISSED
	int32_t                                            SeedOffset;                                                 // 0x028C   (0x0004)  
	float                                              MaxBuildTimePerFrame;                                       // 0x0290   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	SDK_UNDEFINED(16,338) /* FMulticastInlineDelegate */ __um(OnRandomizationComplete);                            // 0x0298   (0x0010)  
	bool                                               bFastSyncBuild;                                             // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	TArray<class APrefabActor*>                        ActorsToRandomize;                                          // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x02C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/PrefabricatorRuntime.PrefabRandomizer.Randomize
	// void Randomize(int32_t InSeed);                                                                                          // [0x10dd180] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPrefabricatorPropertyAssetMapping
{ 
	FSoftObjectPath                                    AssetReference;                                             // 0x0000   (0x0018)  
	FString                                            AssetClassName;                                             // 0x0018   (0x0010)  
	FName                                              AssetObjectPath;                                            // 0x0028   (0x0008)  
	bool                                               bUseQuotes;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorProperty
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UPrefabricatorProperty : public UObject
{ 
public:
	FString                                            PropertyName;                                               // 0x0028   (0x0010)  
	FString                                            ExportedValue;                                              // 0x0038   (0x0010)  
	TArray<FPrefabricatorPropertyAssetMapping>         AssetSoftReferenceMappings;                                 // 0x0048   (0x0010)  
	bool                                               bIsCrossReferencedActor;                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	FGuid                                              CrossReferencePrefabActorId;                                // 0x005C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorEventListener
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPrefabricatorEventListener : public UObject
{ 
public:


	/// Functions
	// Function /Script/PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
	// void PostSpawn(class APrefabActor* Prefab);                                                                              // [0xbfe090] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorAssetInterface
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPrefabricatorAssetInterface : public UObject
{ 
public:
	class UClass*                                      EventListener;                                              // 0x0028   (0x0008)  
	bool                                               bReplicates;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/PrefabricatorRuntime.PrefabricatorComponentData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FPrefabricatorComponentData
{ 
	FTransform                                         RelativeTransform;                                          // 0x0000   (0x0030)  
	FString                                            ComponentName;                                              // 0x0030   (0x0010)  
	TArray<class UPrefabricatorProperty*>              Properties;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/PrefabricatorRuntime.PrefabricatorActorData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FPrefabricatorActorData
{ 
	FGuid                                              PrefabItemID;                                               // 0x0000   (0x0010)  
	FTransform                                         RelativeTransform;                                          // 0x0010   (0x0030)  
	FString                                            ClassPath;                                                  // 0x0040   (0x0010)  
	FSoftClassPath                                     ClassPathRef;                                               // 0x0050   (0x0018)  
	TArray<class UPrefabricatorProperty*>              Properties;                                                 // 0x0068   (0x0010)  
	TArray<FPrefabricatorComponentData>                Components;                                                 // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorAsset
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{ 
public:
	TArray<FPrefabricatorActorData>                    ActorData;                                                  // 0x0038   (0x0010)  
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	FGuid                                              LastUpdateID;                                               // 0x004C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UThumbnailInfo*                              ThumbnailInfo;                                              // 0x0060   (0x0008)  
	uint32_t                                           Version;                                                    // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/PrefabricatorRuntime.PrefabricatorAssetCollectionItem
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPrefabricatorAssetCollectionItem
{ 
	TWeakObjectPtr<class UPrefabricatorAsset*>         PrefabAsset;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorAssetCollection
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{ 
public:
	TArray<FPrefabricatorAssetCollectionItem>          Prefabs;                                                    // 0x0038   (0x0010)  
	uint32_t                                           Version;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorAssetUserData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPrefabricatorAssetUserData : public UAssetUserData
{ 
public:
	TWeakObjectPtr<class APrefabActor*>                PrefabActor;                                                // 0x0028   (0x0008)  
	FGuid                                              ItemId;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
	// void UnlinkPrefab(class APrefabActor* PrefabActor);                                                                      // [0x10dd690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
	// class APrefabActor* SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, FTransform& Transform, int32_t Seed); // [0x10dd4e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
	// void SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);    // [0x10dd3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
	// void RandomizePrefab(class APrefabActor* PrefabActor, FRandomStream& InRandom);                                          // [0x10dd210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
	// void GetAllAttachedActors(class AActor* Prefab, TArray<AActor*>& AttachedActors);                                        // [0x10dd020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor
	// class APrefabActor* FindTopMostPrefabActor(class AActor* InActor);                                                       // [0x10dcf90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PrefabricatorRuntime.PrefabricatorSettings
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPrefabricatorSettings : public UDeveloperSettings
{ 
public:
	EPrefabricatorPivotPosition                        PivotPosition;                                              // 0x0038   (0x0001)  
	bool                                               bAllowDynamicUpdate;                                        // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
	SDK_UNDEFINED(80,339) /* TSet<UClass*> */          __um(IgnoreBoundingBoxForObjects);                          // 0x0040   (0x0050)  
	float                                              DefaultThumbnailPitch;                                      // 0x0090   (0x0004)  
	float                                              DefaultThumbnailYaw;                                        // 0x0094   (0x0004)  
	float                                              DefaultThumbnailZoom;                                       // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabSeedLinkerComponent
/// Size: 0x0210 (528 bytes) (0x000208 - 0x000210) align 16 MaxSize: 0x0210
class UPrefabSeedLinkerComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Class /Script/PrefabricatorRuntime.PrefabSeedLinker
/// Size: 0x02A0 (672 bytes) (0x000288 - 0x0002A0) align 8 MaxSize: 0x02A0
class APrefabSeedLinker : public AActor
{ 
public:
	SDK_UNDEFINED(16,340) /* TArray<TWeakObjectPtr<APrefabActor*>> */ __um(LinkedActors);                          // 0x0288   (0x0010)  
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                        // 0x0298   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(APrefabActor) == 0x02A8); // 680 bytes (0x000288 - 0x0002A8)
static_assert(sizeof(AReplicablePrefabActor) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UPrefabComponent) == 0x0230); // 560 bytes (0x000208 - 0x000230)
static_assert(sizeof(APrefabDebugActor) == 0x02A0); // 672 bytes (0x000288 - 0x0002A0)
static_assert(sizeof(APrefabRandomizer) == 0x02D8); // 728 bytes (0x000288 - 0x0002D8)
static_assert(sizeof(FPrefabricatorPropertyAssetMapping) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UPrefabricatorProperty) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UPrefabricatorEventListener) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPrefabricatorAssetInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FPrefabricatorComponentData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPrefabricatorActorData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UPrefabricatorAsset) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(FPrefabricatorAssetCollectionItem) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UPrefabricatorAssetCollection) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UPrefabricatorAssetUserData) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPrefabricatorBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPrefabricatorSettings) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(sizeof(UPrefabSeedLinkerComponent) == 0x0210); // 528 bytes (0x000208 - 0x000210)
static_assert(sizeof(APrefabSeedLinker) == 0x02A0); // 672 bytes (0x000288 - 0x0002A0)
static_assert(offsetof(APrefabActor, PrefabComponent) == 0x0288);
static_assert(offsetof(APrefabActor, LastUpdateID) == 0x0290);
static_assert(offsetof(UPrefabComponent, PrefabAssetInterface) == 0x0208);
static_assert(offsetof(APrefabDebugActor, Actor) == 0x0288);
static_assert(offsetof(APrefabDebugActor, ActorData) == 0x0290);
static_assert(offsetof(APrefabRandomizer, ActorsToRandomize) == 0x02B0);
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, AssetReference) == 0x0000);
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, AssetClassName) == 0x0018);
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, AssetObjectPath) == 0x0028);
static_assert(offsetof(UPrefabricatorProperty, PropertyName) == 0x0028);
static_assert(offsetof(UPrefabricatorProperty, ExportedValue) == 0x0038);
static_assert(offsetof(UPrefabricatorProperty, AssetSoftReferenceMappings) == 0x0048);
static_assert(offsetof(UPrefabricatorProperty, CrossReferencePrefabActorId) == 0x005C);
static_assert(offsetof(UPrefabricatorAssetInterface, EventListener) == 0x0028);
static_assert(offsetof(FPrefabricatorComponentData, RelativeTransform) == 0x0000);
static_assert(offsetof(FPrefabricatorComponentData, ComponentName) == 0x0030);
static_assert(offsetof(FPrefabricatorComponentData, Properties) == 0x0040);
static_assert(offsetof(FPrefabricatorActorData, PrefabItemID) == 0x0000);
static_assert(offsetof(FPrefabricatorActorData, RelativeTransform) == 0x0010);
static_assert(offsetof(FPrefabricatorActorData, ClassPath) == 0x0040);
static_assert(offsetof(FPrefabricatorActorData, ClassPathRef) == 0x0050);
static_assert(offsetof(FPrefabricatorActorData, Properties) == 0x0068);
static_assert(offsetof(FPrefabricatorActorData, Components) == 0x0078);
static_assert(offsetof(UPrefabricatorAsset, ActorData) == 0x0038);
static_assert(offsetof(UPrefabricatorAsset, PrefabMobility) == 0x0048);
static_assert(offsetof(UPrefabricatorAsset, LastUpdateID) == 0x004C);
static_assert(offsetof(UPrefabricatorAsset, ThumbnailInfo) == 0x0060);
static_assert(offsetof(FPrefabricatorAssetCollectionItem, PrefabAsset) == 0x0000);
static_assert(offsetof(UPrefabricatorAssetCollection, Prefabs) == 0x0038);
static_assert(offsetof(UPrefabricatorAssetUserData, PrefabActor) == 0x0028);
static_assert(offsetof(UPrefabricatorAssetUserData, ItemId) == 0x0030);
static_assert(offsetof(UPrefabricatorSettings, PivotPosition) == 0x0038);
static_assert(offsetof(APrefabSeedLinker, SeedLinkerComponent) == 0x0298);
