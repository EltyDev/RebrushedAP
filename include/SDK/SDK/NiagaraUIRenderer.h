
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/NiagaraUIRenderer.NiagaraSystemWidget
/// Size: 0x0190 (400 bytes) (0x000108 - 0x000190) align 8 MaxSize: 0x0190
class UNiagaraSystemWidget : public UWidget
{ 
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                     // 0x0108   (0x0008)  
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                  // 0x0110   (0x0050)  
	bool                                               AutoActivate;                                               // 0x0160   (0x0001)  
	bool                                               TickWhenPaused;                                             // 0x0161   (0x0001)  
	bool                                               FakeDepthScale;                                             // 0x0162   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0163   (0x0001)  MISSED
	float                                              FakeDepthScaleDistance;                                     // 0x0164   (0x0004)  
	bool                                               ShowDebugSystemInWorld;                                     // 0x0168   (0x0001)  
	bool                                               DisableWarnings;                                            // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_6[0x16];                                      // 0x016A   (0x0016)  MISSED
	class ANiagaraUIActor*                             NiagaraActor;                                               // 0x0180   (0x0008)  
	class UNiagaraUIComponent*                         NiagaraComponent;                                           // 0x0188   (0x0008)  


	/// Functions
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
	// void UpdateTickWhenPaused(bool NewTickWhenPaused);                                                                       // [0x1100cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
	// void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);                                               // [0x1100c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	// class UNiagaraUIComponent* GetNiagaraComponent();                                                                        // [0x1100c30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	// void DeactivateSystem();                                                                                                 // [0x1100c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
	// void ActivateSystem(bool Reset);                                                                                         // [0x1100b80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NiagaraUIRenderer.NiagaraUIActor
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class ANiagaraUIActor : public AActor
{ 
public:
};

/// Class /Script/NiagaraUIRenderer.NiagaraUIComponent
/// Size: 0x0630 (1584 bytes) (0x000620 - 0x000630) align 16 MaxSize: 0x0630
class UNiagaraUIComponent : public UNiagaraComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0620   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraSystemWidget) == 0x0190); // 400 bytes (0x000108 - 0x000190)
static_assert(sizeof(ANiagaraUIActor) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UNiagaraUIComponent) == 0x0630); // 1584 bytes (0x000620 - 0x000630)
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x0108);
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x0110);
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x0180);
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x0188);
