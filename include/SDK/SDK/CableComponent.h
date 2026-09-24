
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

/// Class /Script/CableComponent.CableActor
/// Size: 0x0290 (656 bytes) (0x000288 - 0x000290) align 8 MaxSize: 0x0290
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0288   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0530 (1328 bytes) (0x000498 - 0x000530) align 16 MaxSize: 0x0530
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0498   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0499   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x049A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x04A0   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x04C8   (0x0008)  
	FVector                                            EndLocation;                                                // 0x04D0   (0x000C)  
	float                                              CableLength;                                                // 0x04DC   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x04E0   (0x0004)  
	float                                              SubstepTime;                                                // 0x04E4   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x04E8   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x04EC   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x04ED   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x04EE   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x04EF   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x04F1   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x04F4   (0x0004)  
	FVector                                            CableForce;                                                 // 0x04F8   (0x000C)  
	float                                              CableGravityScale;                                          // 0x0504   (0x0004)  
	float                                              CableWidth;                                                 // 0x0508   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x050C   (0x0004)  
	float                                              TileMaterial;                                               // 0x0510   (0x0004)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x0514   (0x001C)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x1414ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x1414dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x1414d20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x1414cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x1414cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(ACableActor) == 0x0290); // 656 bytes (0x000288 - 0x000290)
static_assert(sizeof(UCableComponent) == 0x0530); // 1328 bytes (0x000498 - 0x000530)
static_assert(offsetof(ACableActor, CableComponent) == 0x0288);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x04A0);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x04C8);
static_assert(offsetof(UCableComponent, EndLocation) == 0x04D0);
static_assert(offsetof(UCableComponent, CableForce) == 0x04F8);
