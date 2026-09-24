
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PrefabricatorRuntime
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/ConstructionSystemRuntime.EConstructionSystemToolType
/// Size: 0x01 (1 bytes)
enum class EConstructionSystemToolType : uint8_t
{
	EConstructionSystemToolType__BuildTool                                           = 0,
	EConstructionSystemToolType__RemoveTool                                          = 1
};

/// Enum /Script/ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
/// Size: 0x01 (1 bytes)
enum class EConstructionSystemCursorVisiblity : uint8_t
{
	EConstructionSystemCursorVisiblity__Visible                                      = 0,
	EConstructionSystemCursorVisiblity__VisibleInvalid                               = 1,
	EConstructionSystemCursorVisiblity__Hidden                                       = 2
};

/// Enum /Script/ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
/// Size: 0x01 (1 bytes)
enum class EPrefabricatorConstructionSnapType : uint8_t
{
	EPrefabricatorConstructionSnapType__Floor                                        = 0,
	EPrefabricatorConstructionSnapType__Wall                                         = 1,
	EPrefabricatorConstructionSnapType__Object                                       = 2
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemTool
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UConstructionSystemTool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemBuildTool
/// Size: 0x0168 (360 bytes) (0x000030 - 0x000168) align 8 MaxSize: 0x0168
class UConstructionSystemBuildTool : public UConstructionSystemTool
{ 
public:
	float                                              TraceDistance;                                              // 0x0030   (0x0004)  
	float                                              CursorRotationStepAngle;                                    // 0x0034   (0x0004)  
	class UConstructionSystemCursor*                   Cursor;                                                     // 0x0038   (0x0008)  
	class UPrefabricatorAssetInterface*                ActivePrefabAsset;                                          // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x120];                                     // 0x0048   (0x0120)  MISSED


	/// Functions
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
	// void SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset);                                           // [0x10ec430] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
	// void HandleInput_RotateCursorStep(float NumSteps);                                                                       // [0x10ec080] Final|Native|Private 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
	// void HandleInput_CursorMovePrev();                                                                                       // [0x10ec040] Final|Native|Private 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
	// void HandleInput_CursorMoveNext();                                                                                       // [0x10ec020] Final|Native|Private 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
	// void HandleInput_ConstructAtCursor();                                                                                    // [0x10ec000] Final|Native|Private 
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemComponent
/// Size: 0x0158 (344 bytes) (0x0000B8 - 0x000158) align 8 MaxSize: 0x0158
class UConstructionSystemComponent : public UActorComponent
{ 
public:
	class UMaterialInterface*                          CursorMaterial;                                             // 0x00B8   (0x0008)  
	class UMaterialInterface*                          CursorInvalidMaterial;                                      // 0x00C0   (0x0008)  
	float                                              TraceStartDistance;                                         // 0x00C8   (0x0004)  
	float                                              TraceSweepRadius;                                           // 0x00CC   (0x0004)  
	class AActor*                                      ConstructionCameraActor;                                    // 0x00D0   (0x0008)  
	float                                              ConstructionCameraTransitionTime;                           // 0x00D8   (0x0004)  
	float                                              ConstructionCameraTransitionExp;                            // 0x00DC   (0x0004)  
	class UClass*                                      BuildMenuUI;                                                // 0x00E0   (0x0008)  
	class UConstructionSystemUIAsset*                  BuildMenuData;                                              // 0x00E8   (0x0008)  
	class UUserWidget*                                 BuildMenuUIInstance;                                        // 0x00F0   (0x0008)  
	EConstructionSystemToolType                        ActiveToolType;                                             // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TMap<EConstructionSystemToolType, class UConstructionSystemTool*> Tools;                                       // 0x0100   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0150   (0x0008)  MISSED


	/// Functions
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
	// void ToggleConstructionSystem();                                                                                         // [0x10ec560] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
	// void ShowBuildMenu();                                                                                                    // [0x10ec540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
	// void SetActiveTool(EConstructionSystemToolType InToolType);                                                              // [0x10ec4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
	// void HideBuildMenu();                                                                                                    // [0x10ec100] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
	// class UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);                                          // [0x10ebef0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
	// EConstructionSystemToolType GetActiveToolType();                                                                         // [0x10ebed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
	// class UConstructionSystemTool* GetActiveTool();                                                                          // [0x10ebea0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
	// void EnableConstructionSystem(EConstructionSystemToolType InToolType);                                                   // [0x10ebe20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
	// void DisableConstructionSystem();                                                                                        // [0x10ebe00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemItemUserData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UConstructionSystemItemUserData : public UAssetUserData
{ 
public:
	int32_t                                            Seed;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemCursor
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UConstructionSystemCursor : public UObject
{ 
public:
	class APrefabActor*                                CursorGhostActor;                                           // 0x0028   (0x0008)  
	int32_t                                            CursorSeed;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UMaterialInterface*                          CursorMaterial;                                             // 0x0038   (0x0008)  
	class UMaterialInterface*                          CursorInvalidMaterial;                                      // 0x0040   (0x0008)  
	TArray<class UPrefabricatorConstructionSnapComponent*> SnapComponents;                                         // 0x0048   (0x0010)  
	int32_t                                            ActiveSnapComponentIndex;                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemRemoveTool
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UConstructionSystemRemoveTool : public UConstructionSystemTool
{ 
public:
	float                                              TraceDistance;                                              // 0x0030   (0x0004)  
	TWeakObjectPtr<class APrefabActor*>                FocusedActor;                                               // 0x0034   (0x0008)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x003C   (0x0054)  MISSED


	/// Functions
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
	// void HandleInput_RemoveAtCursor();                                                                                       // [0x10ec060] Final|Native|Protected 
};

/// Struct /Script/ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FConstructionSystemSavePlayerInfo
{ 
	bool                                               bRestorePlayerInfo;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FRotator                                           ControlRotation;                                            // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FConstructionSystemSaveConstructedItem
{ 
	class UPrefabricatorAssetInterface*                PrefabAsset;                                                // 0x0000   (0x0008)  
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemSaveGame
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 16 MaxSize: 0x00A0
class UConstructionSystemSaveGame : public USaveGame
{ 
public:
	FString                                            SaveSlotName;                                               // 0x0028   (0x0010)  
	uint32_t                                           UserIndex;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FConstructionSystemSavePlayerInfo                  PlayerInfo;                                                 // 0x0040   (0x0050)  
	TArray<FConstructionSystemSaveConstructedItem>     ConstructedItems;                                           // 0x0090   (0x0010)  
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemSaveSystem
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
	// void SaveConstructionSystemLevel(class UObject* WorldContextObject, FString SaveSlotName, int32_t UserIndex, bool bSavePlayerState); // [0x10ec2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
	// void LoadConstructionSystemLevel(class UObject* WorldContextObject, FName& LevelName, bool bAbsolute, FString SaveSlotName, int32_t UserIndex); // [0x10ec120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
	// void HandleConstructionSystemLevelLoad(class UObject* WorldContextObject);                                               // [0x10ebf80] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/ConstructionSystemRuntime.PCSnapConstraintFloor
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FPCSnapConstraintFloor
{ 
	bool                                               AttachX;                                                    // 0x0000   (0x0001)  
	bool                                               AttachXNegative;                                            // 0x0001   (0x0001)  
	bool                                               AttachY;                                                    // 0x0002   (0x0001)  
	bool                                               AttachYNegative;                                            // 0x0003   (0x0001)  
	bool                                               AttachZ;                                                    // 0x0004   (0x0001)  
	bool                                               AttachZNegative;                                            // 0x0005   (0x0001)  
};

/// Struct /Script/ConstructionSystemRuntime.PCSnapConstraintWall
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FPCSnapConstraintWall
{ 
	bool                                               AttachTop;                                                  // 0x0000   (0x0001)  
	bool                                               AttachBottom;                                               // 0x0001   (0x0001)  
	bool                                               AttachLeft;                                                 // 0x0002   (0x0001)  
	bool                                               AttachRight;                                                // 0x0003   (0x0001)  
};

/// Class /Script/ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
/// Size: 0x04B0 (1200 bytes) (0x000498 - 0x0004B0) align 16 MaxSize: 0x04B0
class UPrefabricatorConstructionSnapComponent : public UBoxComponent
{ 
public:
	EPrefabricatorConstructionSnapType                 SnapType;                                                   // 0x0498   (0x0001)  
	FPCSnapConstraintFloor                             FloorConstraint;                                            // 0x0499   (0x0006)  
	FPCSnapConstraintWall                              WallConstraint;                                             // 0x049F   (0x0004)  
	bool                                               bAlignToGroundSlope;                                        // 0x04A3   (0x0001)  
	bool                                               bUseMaxGroundSlopeConstraint;                               // 0x04A4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x04A5   (0x0003)  MISSED
	float                                              MaxGroundPlacementSlope;                                    // 0x04A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x04AC   (0x0004)  MISSED
};

/// Class /Script/ConstructionSystemRuntime.PrefabricatorConstructionSnap
/// Size: 0x0290 (656 bytes) (0x000288 - 0x000290) align 8 MaxSize: 0x0290
class APrefabricatorConstructionSnap : public AActor
{ 
public:
	class UPrefabricatorConstructionSnapComponent*     ConstructionSnapComponent;                                  // 0x0288   (0x0008)  
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemBuildUI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UConstructionSystemBuildUI : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
	// void SetUIAsset(class UConstructionSystemUIAsset* UIAsset);                                                              // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
	// void SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem);                                      // [0x19ac1c0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FConstructionSystemUIPrefabEntry
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FText                                              Tooltip;                                                    // 0x0018   (0x0018)  
	class UTexture2D*                                  Icon;                                                       // 0x0030   (0x0008)  
	class UPrefabricatorAssetInterface*                Prefab;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/ConstructionSystemRuntime.ConstructionSystemUICategory
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FConstructionSystemUICategory
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	class UTexture2D*                                  Icon;                                                       // 0x0018   (0x0008)  
	TArray<FConstructionSystemUIPrefabEntry>           PrefabEntries;                                              // 0x0020   (0x0010)  
};

/// Class /Script/ConstructionSystemRuntime.ConstructionSystemUIAsset
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UConstructionSystemUIAsset : public UDataAsset
{ 
public:
	FText                                              MenuTitle;                                                  // 0x0030   (0x0018)  
	TArray<FConstructionSystemUICategory>              Categories;                                                 // 0x0048   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UConstructionSystemTool) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UConstructionSystemBuildTool) == 0x0168); // 360 bytes (0x000030 - 0x000168)
static_assert(sizeof(UConstructionSystemComponent) == 0x0158); // 344 bytes (0x0000B8 - 0x000158)
static_assert(sizeof(UConstructionSystemItemUserData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UConstructionSystemCursor) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UConstructionSystemRemoveTool) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(FConstructionSystemSavePlayerInfo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FConstructionSystemSaveConstructedItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UConstructionSystemSaveGame) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UConstructionSystemSaveSystem) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPCSnapConstraintFloor) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FPCSnapConstraintWall) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UPrefabricatorConstructionSnapComponent) == 0x04B0); // 1200 bytes (0x000498 - 0x0004B0)
static_assert(sizeof(APrefabricatorConstructionSnap) == 0x0290); // 656 bytes (0x000288 - 0x000290)
static_assert(sizeof(UConstructionSystemBuildUI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FConstructionSystemUIPrefabEntry) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FConstructionSystemUICategory) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UConstructionSystemUIAsset) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(offsetof(UConstructionSystemBuildTool, Cursor) == 0x0038);
static_assert(offsetof(UConstructionSystemBuildTool, ActivePrefabAsset) == 0x0040);
static_assert(offsetof(UConstructionSystemComponent, CursorMaterial) == 0x00B8);
static_assert(offsetof(UConstructionSystemComponent, CursorInvalidMaterial) == 0x00C0);
static_assert(offsetof(UConstructionSystemComponent, ConstructionCameraActor) == 0x00D0);
static_assert(offsetof(UConstructionSystemComponent, BuildMenuUI) == 0x00E0);
static_assert(offsetof(UConstructionSystemComponent, BuildMenuData) == 0x00E8);
static_assert(offsetof(UConstructionSystemComponent, BuildMenuUIInstance) == 0x00F0);
static_assert(offsetof(UConstructionSystemComponent, ActiveToolType) == 0x00F8);
static_assert(offsetof(UConstructionSystemComponent, Tools) == 0x0100);
static_assert(offsetof(UConstructionSystemCursor, CursorGhostActor) == 0x0028);
static_assert(offsetof(UConstructionSystemCursor, CursorMaterial) == 0x0038);
static_assert(offsetof(UConstructionSystemCursor, CursorInvalidMaterial) == 0x0040);
static_assert(offsetof(UConstructionSystemCursor, SnapComponents) == 0x0048);
static_assert(offsetof(UConstructionSystemRemoveTool, FocusedActor) == 0x0034);
static_assert(offsetof(FConstructionSystemSavePlayerInfo, Transform) == 0x0010);
static_assert(offsetof(FConstructionSystemSavePlayerInfo, ControlRotation) == 0x0040);
static_assert(offsetof(FConstructionSystemSaveConstructedItem, PrefabAsset) == 0x0000);
static_assert(offsetof(FConstructionSystemSaveConstructedItem, Transform) == 0x0010);
static_assert(offsetof(UConstructionSystemSaveGame, SaveSlotName) == 0x0028);
static_assert(offsetof(UConstructionSystemSaveGame, PlayerInfo) == 0x0040);
static_assert(offsetof(UConstructionSystemSaveGame, ConstructedItems) == 0x0090);
static_assert(offsetof(UPrefabricatorConstructionSnapComponent, SnapType) == 0x0498);
static_assert(offsetof(UPrefabricatorConstructionSnapComponent, FloorConstraint) == 0x0499);
static_assert(offsetof(UPrefabricatorConstructionSnapComponent, WallConstraint) == 0x049F);
static_assert(offsetof(APrefabricatorConstructionSnap, ConstructionSnapComponent) == 0x0288);
static_assert(offsetof(FConstructionSystemUIPrefabEntry, DisplayName) == 0x0000);
static_assert(offsetof(FConstructionSystemUIPrefabEntry, Tooltip) == 0x0018);
static_assert(offsetof(FConstructionSystemUIPrefabEntry, Icon) == 0x0030);
static_assert(offsetof(FConstructionSystemUIPrefabEntry, Prefab) == 0x0038);
static_assert(offsetof(FConstructionSystemUICategory, DisplayName) == 0x0000);
static_assert(offsetof(FConstructionSystemUICategory, Icon) == 0x0018);
static_assert(offsetof(FConstructionSystemUICategory, PrefabEntries) == 0x0020);
static_assert(offsetof(UConstructionSystemUIAsset, MenuTitle) == 0x0030);
static_assert(offsetof(UConstructionSystemUIAsset, Categories) == 0x0048);
