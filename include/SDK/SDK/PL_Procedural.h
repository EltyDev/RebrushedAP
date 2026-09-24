
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent

#pragma pack(push, 0x1)

/// Enum /Script/PL_Procedural.EPL_SplineMeshTextureCoordinateMode
/// Size: 0x01 (1 bytes)
enum class EPL_SplineMeshTextureCoordinateMode : uint8_t
{
	EPL_SplineMeshTextureCoordinateMode__None                                        = 0,
	EPL_SplineMeshTextureCoordinateMode__Element                                     = 1,
	EPL_SplineMeshTextureCoordinateMode__NormalizedLength                            = 2,
	EPL_SplineMeshTextureCoordinateMode__AbsoluteLength                              = 3,
	EPL_SplineMeshTextureCoordinateMode__Radial                                      = 4
};

/// Struct /Script/PL_Procedural.PL_CollisionBodyCollection
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPL_CollisionBodyCollection
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0010   (0x0008)  
	TArray<class UBodySetup*>                          SphereBodies;                                               // 0x0018   (0x0010)  
	TArray<class UBodySetup*>                          BoxBodies;                                                  // 0x0028   (0x0010)  
	TArray<class UBodySetup*>                          SphylBodies;                                                // 0x0038   (0x0010)  
	TArray<class UBodySetup*>                          ConvexBodies;                                               // 0x0048   (0x0010)  
};

/// Class /Script/PL_Procedural.PL_ProceduralCollisionSubsystem
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UPL_ProceduralCollisionSubsystem : public UWorldSubsystem
{ 
public:
	TMap<class UBodySetup*, FPL_CollisionBodyCollection> BodyCollections;                                          // 0x0030   (0x0050)  
};

/// Struct /Script/PL_Procedural.PL_SplineMeshTextureCoordinateModes
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPL_SplineMeshTextureCoordinateModes
{ 
	EPL_SplineMeshTextureCoordinateMode                UMode;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              UScale;                                                     // 0x0004   (0x0004)  
	EPL_SplineMeshTextureCoordinateMode                VMode;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              VScale;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/PL_Procedural.PL_ProcMeshLODData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_ProcMeshLODData
{ 
	TArray<FProcMeshSection>                           Sections;                                                   // 0x0000   (0x0010)  
	FPerPlatformFloat                                  ScreenSize;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/PL_Procedural.PL_ProcMeshData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_ProcMeshData
{ 
	TArray<FPL_ProcMeshLODData>                        LODs;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/PL_Procedural.PL_SplineMeshVertexData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FPL_SplineMeshVertexData
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FVector                                            Tangent;                                                    // 0x0018   (0x000C)  
};

/// Struct /Script/PL_Procedural.PL_SplineMeshSectionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_SplineMeshSectionData
{ 
	TArray<FPL_SplineMeshVertexData>                   Vertices;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/PL_Procedural.PL_SplineMeshLODData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_SplineMeshLODData
{ 
	TArray<FPL_SplineMeshSectionData>                  Sections;                                                   // 0x0000   (0x0010)  
	FPerPlatformFloat                                  ScreenSize;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/PL_Procedural.PL_SplineMeshData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPL_SplineMeshData
{ 
	TArray<FPL_SplineMeshLODData>                      LODs;                                                       // 0x0000   (0x0010)  
	FBox                                               LocalBounds;                                                // 0x0010   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PL_Procedural.PL_SplineCollisionBodyData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FPL_SplineCollisionBodyData
{ 
	TWeakObjectPtr<class UBodySetup*>                  BodySetup;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	float                                              SplineLocation;                                             // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/PL_Procedural.PL_SplineCollisionData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_SplineCollisionData
{ 
	TArray<FPL_SplineCollisionBodyData>                Bodies;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/PL_Procedural.PL_SplineMeshComponent
/// Size: 0x0680 (1664 bytes) (0x000498 - 0x000680) align 16 MaxSize: 0x0680
class UPL_SplineMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0498   (0x0008)  MISSED
	FName                                              SplineOffsetParamName;                                      // 0x04A0   (0x0008)  
	FName                                              SplineThicknessScaleParamName;                              // 0x04A8   (0x0008)  
	FName                                              InitialSplineLengthParamName;                               // 0x04B0   (0x0008)  
	FName                                              SplineReparamTableParamName;                                // 0x04B8   (0x0008)  
	FName                                              SplinePointsParamName;                                      // 0x04C0   (0x0008)  
	bool                                               bUseBakedMesh;                                              // 0x04C8   (0x0001)  
	bool                                               bUseBakedCollisions;                                        // 0x04C9   (0x0001)  
	bool                                               bDeformBoxAndConvexCollisions;                              // 0x04CA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x04CB   (0x0001)  MISSED
	int32_t                                            CollisionBoxSplices;                                        // 0x04CC   (0x0004)  
	bool                                               bUseAsyncCooking;                                           // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x04D1   (0x0007)  MISSED
	TArray<FPL_SplineMeshTextureCoordinateModes>       TextureCoordinateModes;                                     // 0x04D8   (0x0010)  
	float                                              SplineOffset;                                               // 0x04E8   (0x0004)  
	float                                              SplineThicknessScale;                                       // 0x04EC   (0x0004)  
	float                                              DynamicSplineThicknessScale;                                // 0x04F0   (0x0004)  
	float                                              InitialSplineLength;                                        // 0x04F4   (0x0004)  
	TArray<float>                                      LODScreenSizeThresholdOverride;                             // 0x04F8   (0x0010)  
	class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0508   (0x0008)  
	bool                                               bIsInitialized;                                             // 0x0510   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0511   (0x0003)  MISSED
	float                                              InvInitialSplineLength;                                     // 0x0514   (0x0004)  
	class UCurveFloat*                                 InitialScaleCurve;                                          // 0x0518   (0x0008)  
	TWeakObjectPtr<class USplineComponent*>            CurrentSplineComponent;                                     // 0x0520   (0x0008)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x0528   (0x001C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0544   (0x0004)  MISSED
	FPL_ProcMeshData                                   ProcMeshData;                                               // 0x0548   (0x0010)  
	FPL_SplineMeshData                                 NonDeformedMeshData;                                        // 0x0558   (0x0030)  
	FKAggregateGeom                                    NonDeformedCollisionData;                                   // 0x0588   (0x0058)  
	FPL_SplineCollisionData                            MinimumCollisionData;                                       // 0x05E0   (0x0010)  
	class UTexture2D*                                  SplineReparamTableDataTexture;                              // 0x05F0   (0x0008)  
	class UTexture2D*                                  SplinePointsDataTexture;                                    // 0x05F8   (0x0008)  
	bool                                               bIsCurrentlyAsyncCookingBodySetup;                          // 0x0600   (0x0001)  
	bool                                               bWantsToAsyncCookNextBodySetup;                             // 0x0601   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x0602   (0x0006)  MISSED
	class UBodySetup*                                  NextAsyncCookBodySetup;                                     // 0x0608   (0x0008)  
	class UBodySetup*                                  AsyncCookBodySetup;                                         // 0x0610   (0x0008)  
	unsigned char                                      UnknownData06_7[0x68];                                      // 0x0618   (0x0068)  MISSED


	/// Functions
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.SetSplineThicknessScale
	// void SetSplineThicknessScale(float Value);                                                                               // [0x12a30b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.SetSplineOffset
	// void SetSplineOffset(float Value);                                                                                       // [0x12a3030] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.SetDynamicSplineThicknessScale
	// void SetDynamicSplineThicknessScale(float Value);                                                                        // [0x12a2fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.RefreshMesh
	// void RefreshMesh(class USplineComponent* SplineComponent);                                                               // [0x12a2f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.RefreshCollisions
	// void RefreshCollisions(class USplineComponent* SplineComponent);                                                         // [0x12a2e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.InitializeWithElements
	// void InitializeWithElements(class USplineComponent* SplineComponent, class UCurveFloat* ScaleCurve, TArray<FPL_SplineMeshElement>& SplineMeshElements); // [0x12a2d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.GetSplineTransformAtDistance
	// FTransform GetSplineTransformAtDistance(float Distance);                                                                 // [0x12a2c60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.GetSplineThicknessScale
	// float GetSplineThicknessScale();                                                                                         // [0x10b2380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.GetSplineOffset
	// float GetSplineOffset();                                                                                                 // [0x10b2440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.GetInitialSplineLength
	// float GetInitialSplineLength();                                                                                          // [0x12a2c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.GetFinalSplineThicknessScale
	// float GetFinalSplineThicknessScale();                                                                                    // [0x12a2c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.GetDynamicSplineThicknessScale
	// float GetDynamicSplineThicknessScale();                                                                                  // [0x12a2bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Procedural.PL_SplineMeshComponent.FinishPhysicsAsyncCook
	// void FinishPhysicsAsyncCook(bool bWasSuccessful);                                                                        // [0x12a2b40] Final|Native|Protected 
};

/// Struct /Script/PL_Procedural.PL_SplineMeshInstanceData
/// Size: 0x00E8 (232 bytes) (0x0000B8 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FPL_SplineMeshInstanceData : FSceneComponentInstanceData
{ 
	bool                                               bUseBakedMesh;                                              // 0x00B8   (0x0001)  
	bool                                               bUseBakedCollisions;                                        // 0x00B9   (0x0001)  
	bool                                               bDeformBoxAndConvexCollisions;                              // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00BB   (0x0001)  MISSED
	int32_t                                            CollisionBoxSplices;                                        // 0x00BC   (0x0004)  
	TArray<FPL_SplineMeshTextureCoordinateModes>       TextureCoordinateModes;                                     // 0x00C0   (0x0010)  
	float                                              SplineOffset;                                               // 0x00D0   (0x0004)  
	float                                              SplineThicknessScale;                                       // 0x00D4   (0x0004)  
	TArray<float>                                      LODScreenSizeThresholdOverride;                             // 0x00D8   (0x0010)  
};

/// Struct /Script/PL_Procedural.PL_SplineMeshElement
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FPL_SplineMeshElement
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TMap<int32_t, class UMaterialInterface*>           CustomMaterials;                                            // 0x0008   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0060   (0x0030)  
	float                                              SplineLocation;                                             // 0x0090   (0x0004)  
	bool                                               bIgnoreMesh;                                                // 0x0094   (0x0001)  
	bool                                               bIgnoreCollisions;                                          // 0x0095   (0x0001)  
	unsigned char                                      UnknownData01_7[0xA];                                       // 0x0096   (0x000A)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FPL_CollisionBodyCollection) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UPL_ProceduralCollisionSubsystem) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FPL_SplineMeshTextureCoordinateModes) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_ProcMeshLODData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_ProcMeshData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_SplineMeshVertexData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FPL_SplineMeshSectionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_SplineMeshLODData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_SplineMeshData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPL_SplineCollisionBodyData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPL_SplineCollisionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_SplineMeshComponent) == 0x0680); // 1664 bytes (0x000498 - 0x000680)
static_assert(sizeof(FPL_SplineMeshInstanceData) == 0x00E8); // 232 bytes (0x0000B8 - 0x0000E8)
static_assert(sizeof(FPL_SplineMeshElement) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(offsetof(FPL_CollisionBodyCollection, CachedBodySetup) == 0x0010);
static_assert(offsetof(FPL_CollisionBodyCollection, SphereBodies) == 0x0018);
static_assert(offsetof(FPL_CollisionBodyCollection, BoxBodies) == 0x0028);
static_assert(offsetof(FPL_CollisionBodyCollection, SphylBodies) == 0x0038);
static_assert(offsetof(FPL_CollisionBodyCollection, ConvexBodies) == 0x0048);
static_assert(offsetof(UPL_ProceduralCollisionSubsystem, BodyCollections) == 0x0030);
static_assert(offsetof(FPL_SplineMeshTextureCoordinateModes, UMode) == 0x0000);
static_assert(offsetof(FPL_SplineMeshTextureCoordinateModes, VMode) == 0x0008);
static_assert(offsetof(FPL_ProcMeshLODData, Sections) == 0x0000);
static_assert(offsetof(FPL_ProcMeshLODData, ScreenSize) == 0x0010);
static_assert(offsetof(FPL_ProcMeshData, LODs) == 0x0000);
static_assert(offsetof(FPL_SplineMeshVertexData, position) == 0x0000);
static_assert(offsetof(FPL_SplineMeshVertexData, Normal) == 0x000C);
static_assert(offsetof(FPL_SplineMeshVertexData, Tangent) == 0x0018);
static_assert(offsetof(FPL_SplineMeshSectionData, Vertices) == 0x0000);
static_assert(offsetof(FPL_SplineMeshLODData, Sections) == 0x0000);
static_assert(offsetof(FPL_SplineMeshLODData, ScreenSize) == 0x0010);
static_assert(offsetof(FPL_SplineMeshData, LODs) == 0x0000);
static_assert(offsetof(FPL_SplineMeshData, LocalBounds) == 0x0010);
static_assert(offsetof(FPL_SplineCollisionBodyData, BodySetup) == 0x0000);
static_assert(offsetof(FPL_SplineCollisionBodyData, Transform) == 0x0030);
static_assert(offsetof(FPL_SplineCollisionData, Bodies) == 0x0000);
static_assert(offsetof(UPL_SplineMeshComponent, SplineOffsetParamName) == 0x04A0);
static_assert(offsetof(UPL_SplineMeshComponent, SplineThicknessScaleParamName) == 0x04A8);
static_assert(offsetof(UPL_SplineMeshComponent, InitialSplineLengthParamName) == 0x04B0);
static_assert(offsetof(UPL_SplineMeshComponent, SplineReparamTableParamName) == 0x04B8);
static_assert(offsetof(UPL_SplineMeshComponent, SplinePointsParamName) == 0x04C0);
static_assert(offsetof(UPL_SplineMeshComponent, TextureCoordinateModes) == 0x04D8);
static_assert(offsetof(UPL_SplineMeshComponent, LODScreenSizeThresholdOverride) == 0x04F8);
static_assert(offsetof(UPL_SplineMeshComponent, ProcMeshBodySetup) == 0x0508);
static_assert(offsetof(UPL_SplineMeshComponent, InitialScaleCurve) == 0x0518);
static_assert(offsetof(UPL_SplineMeshComponent, CurrentSplineComponent) == 0x0520);
static_assert(offsetof(UPL_SplineMeshComponent, LocalBounds) == 0x0528);
static_assert(offsetof(UPL_SplineMeshComponent, ProcMeshData) == 0x0548);
static_assert(offsetof(UPL_SplineMeshComponent, NonDeformedMeshData) == 0x0558);
static_assert(offsetof(UPL_SplineMeshComponent, NonDeformedCollisionData) == 0x0588);
static_assert(offsetof(UPL_SplineMeshComponent, MinimumCollisionData) == 0x05E0);
static_assert(offsetof(UPL_SplineMeshComponent, SplineReparamTableDataTexture) == 0x05F0);
static_assert(offsetof(UPL_SplineMeshComponent, SplinePointsDataTexture) == 0x05F8);
static_assert(offsetof(UPL_SplineMeshComponent, NextAsyncCookBodySetup) == 0x0608);
static_assert(offsetof(UPL_SplineMeshComponent, AsyncCookBodySetup) == 0x0610);
static_assert(offsetof(FPL_SplineMeshInstanceData, TextureCoordinateModes) == 0x00C0);
static_assert(offsetof(FPL_SplineMeshInstanceData, LODScreenSizeThresholdOverride) == 0x00D8);
static_assert(offsetof(FPL_SplineMeshElement, Mesh) == 0x0000);
static_assert(offsetof(FPL_SplineMeshElement, CustomMaterials) == 0x0008);
static_assert(offsetof(FPL_SplineMeshElement, Transform) == 0x0060);
