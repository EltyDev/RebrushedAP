
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMODStudio
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: Niagara
/// dependency: PL_Core
/// dependency: PL_GameplayAbilities
/// dependency: PL_Motion
/// dependency: recolored

#pragma pack(push, 0x1)

/// Class /Game/Sandbox/Core/Game/BP_GameInstance.BP_GameInstance_C
/// Size: 0x0D20 (3360 bytes) (0x000D20 - 0x000D20) align 8 MaxSize: 0x0D20
class UBP_GameInstance_C : public URecGameInstance
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_OneTVSketch.GE_OneTVSketch_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_OneTVSketch_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Components/BP_CollectableMovementComponent.BP_CollectableMovementComponent_C
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBP_CollectableMovementComponent_C : public URecCollectableMovementComponent
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_PaintRefill.GE_PaintRefill_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_PaintRefill_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Core/Game/BP_MainMenuGameMode.BP_MainMenuGameMode_C
/// Size: 0x03A0 (928 bytes) (0x000398 - 0x0003A0) align 8 MaxSize: 0x03A0
class ABP_MainMenuGameMode_C : public ARecMainMenuGameMode
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0398   (0x0008)  
};

/// Class /Game/Sandbox/Core/Game/BP_MainMenuPlayerController.BP_MainMenuPlayerController_C
/// Size: 0x0688 (1672 bytes) (0x000688 - 0x000688) align 8 MaxSize: 0x0688
class ABP_MainMenuPlayerController_C : public ARecMainMenuPlayerController
{ 
public:
};

/// Class /Game/Sandbox/Characters/Enemies/PrototypeGeneralAI/Abilities/GameplayEffects/GE_Cheer_TryToCheer.GE_Cheer_TryToCheer_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_Cheer_TryToCheer_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Core/AI/BP_EnemyManager.BP_EnemyManager_C
/// Size: 0x03E0 (992 bytes) (0x0003D0 - 0x0003E0) align 8 MaxSize: 0x03E0
class ABP_EnemyManager_C : public ARecEnemyManager
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x03D8   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Core/AI/BP_EnemyManager.BP_EnemyManager_C.EnemyHitSomething
	// void EnemyHitSomething(class ARecBaseEnemy* Enemy, FHitResult& Hit);                                                     // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Sandbox/Core/AI/BP_EnemyManager.BP_EnemyManager_C.ExecuteUbergraph_BP_EnemyManager
	// void ExecuteUbergraph_BP_EnemyManager(int32_t EntryPoint);                                                               // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/Sandbox/Core/Props/Collectibles/BP_Base_Collectable.BP_Base_Collectable_C
/// Size: 0x02E0 (736 bytes) (0x0002B0 - 0x0002E0) align 8 MaxSize: 0x02E0
class ABP_Base_Collectable_C : public ARecCollectable
{ 
public:
	class UBP_PickupSFXComponent_C*                    BP_PickupSFXComponent;                                      // 0x02B0   (0x0008)  
	class UBP_CollectibleCollisionHandlingComponent_C* BP_CollectibleCollisionHandlingComponent;                   // 0x02B8   (0x0008)  
	class UBP_PickupVFXSpawnComponent_C*               BP_PickupVFXSpawnComponent;                                 // 0x02C0   (0x0008)  
	class UNiagaraComponent*                           CollectableFlare;                                           // 0x02C8   (0x0008)  
	class UStaticMeshComponent*                        Mesh;                                                       // 0x02D0   (0x0008)  
	class UPL_AttractionComponent*                     PL_Attraction;                                              // 0x02D8   (0x0008)  
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_ThinnerRefill.GE_ThinnerRefill_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_ThinnerRefill_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_OneHealth.GE_OneHealth_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_OneHealth_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_PaintThinnerRefill.GE_PaintThinnerRefill_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_PaintThinnerRefill_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_OneWatchSketch.GE_OneWatchSketch_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_OneWatchSketch_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_ThinnerStream_Knockback.GE_ThinnerStream_Knockback_C
/// Size: 0x0870 (2160 bytes) (0x000870 - 0x000870) align 8 MaxSize: 0x0870
class UGE_ThinnerStream_Knockback_C : public URecKnockbackEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GE_PaintCost_Splash.GE_PaintCost_Splash_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_PaintCost_Splash_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GE_PaintCost_Spin.GE_PaintCost_Spin_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_PaintCost_Spin_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GE_SplashThinner_Knockback.GE_SplashThinner_Knockback_C
/// Size: 0x0870 (2160 bytes) (0x000870 - 0x000870) align 8 MaxSize: 0x0870
class UGE_SplashThinner_Knockback_C : public URecKnockbackEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_PaintStream_Knockback.GE_PaintStream_Knockback_C
/// Size: 0x0870 (2160 bytes) (0x000870 - 0x000870) align 8 MaxSize: 0x0870
class UGE_PaintStream_Knockback_C : public URecKnockbackEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GE_SplashPaint_Knockback.GE_SplashPaint_Knockback_C
/// Size: 0x0870 (2160 bytes) (0x000870 - 0x000870) align 8 MaxSize: 0x0870
class UGE_SplashPaint_Knockback_C : public URecKnockbackEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_BlockAirThinnerSplash.GE_BlockAirThinnerSplash_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_BlockAirThinnerSplash_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_ApplyPaintToEnemies.GE_ApplyPaintToEnemies_C
/// Size: 0x0810 (2064 bytes) (0x000810 - 0x000810) align 8 MaxSize: 0x0810
class UGE_ApplyPaintToEnemies_C : public UPL_DamageGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_Brush_Knockback.GE_Brush_Knockback_C
/// Size: 0x0870 (2160 bytes) (0x000870 - 0x000870) align 8 MaxSize: 0x0870
class UGE_Brush_Knockback_C : public URecKnockbackEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GE_PaintCost_GroundPound.GE_PaintCost_GroundPound_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_PaintCost_GroundPound_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Prototype_PaintCost/GE_ShootPaintCost.GE_ShootPaintCost_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_ShootPaintCost_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_BlockAirPaintSplash.GE_BlockAirPaintSplash_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_BlockAirPaintSplash_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Prototype_PaintCost/GE_ShootThinnerCost.GE_ShootThinnerCost_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_ShootThinnerCost_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GE_ThinnerCost_Spin.GE_ThinnerCost_Spin_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_ThinnerCost_Spin_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_Cooldown.GE_Cooldown_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_Cooldown_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GE_GroundPound_Knockback.GE_GroundPound_Knockback_C
/// Size: 0x0870 (2160 bytes) (0x000870 - 0x000870) align 8 MaxSize: 0x0870
class UGE_GroundPound_Knockback_C : public URecKnockbackEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Prototype_CameraZoom/GA_CameraZoom.GA_CameraZoom_C
/// Size: 0x04B0 (1200 bytes) (0x0004B0 - 0x0004B0) align 8 MaxSize: 0x04B0
class UGA_CameraZoom_C : public URecCameraZoomAbility
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GE_ThinnerCost_GroundPound.GE_ThinnerCost_GroundPound_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_ThinnerCost_GroundPound_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_DefaultFixedAimingMode.BP_DefaultFixedAimingMode_C
/// Size: 0x0150 (336 bytes) (0x000150 - 0x000150) align 8 MaxSize: 0x0150
class UBP_DefaultFixedAimingMode_C : public URecPitchDrivenFixedAimingMode
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_DefaultWindowedAimingMode.BP_DefaultWindowedAimingMode_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 8 MaxSize: 0x0190
class UBP_DefaultWindowedAimingMode_C : public URec2DWindowedAimingMode
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_ShootPaintFixedAimingMode.BP_ShootPaintFixedAimingMode_C
/// Size: 0x0150 (336 bytes) (0x000150 - 0x000150) align 8 MaxSize: 0x0150
class UBP_ShootPaintFixedAimingMode_C : public UBP_DefaultFixedAimingMode_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_DefaultUserAimingMode.BP_DefaultUserAimingMode_C
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UBP_DefaultUserAimingMode_C : public URec2DUserAimingMode
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_ShootPaintWindowedAimingMode.BP_ShootPaintWindowedAimingMode_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 8 MaxSize: 0x0190
class UBP_ShootPaintWindowedAimingMode_C : public UBP_DefaultWindowedAimingMode_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GE_ThinnerCost_Splash.GE_ThinnerCost_Splash_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_ThinnerCost_Splash_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_ShootThinnerFixedAimingMode.BP_ShootThinnerFixedAimingMode_C
/// Size: 0x0150 (336 bytes) (0x000150 - 0x000150) align 8 MaxSize: 0x0150
class UBP_ShootThinnerFixedAimingMode_C : public UBP_ShootPaintFixedAimingMode_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_ShootPaintUserAimingMode.BP_ShootPaintUserAimingMode_C
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UBP_ShootPaintUserAimingMode_C : public UBP_DefaultUserAimingMode_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_ShootThinnerWindowedAimingMode.BP_ShootThinnerWindowedAimingMode_C
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 8 MaxSize: 0x0190
class UBP_ShootThinnerWindowedAimingMode_C : public UBP_ShootPaintWindowedAimingMode_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GA_Splash.GA_Splash_C
/// Size: 0x0550 (1360 bytes) (0x000550 - 0x000550) align 8 MaxSize: 0x0550
class UGA_Splash_C : public URecSplashAbility
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Prototype_PaintCost/GE_SplashPaintCost.GE_SplashPaintCost_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_SplashPaintCost_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/Pickups/GE_OneAnvilSketch.GE_OneAnvilSketch_C
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UGE_OneAnvilSketch_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/Sandbox/Components/BP_BlendComponent.BP_BlendComponent_C
/// Size: 0x0118 (280 bytes) (0x000118 - 0x000118) align 8 MaxSize: 0x0118
class UBP_BlendComponent_C : public URecBlendComponent
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/Data/BP_ShootThinnerUserAimingMode.BP_ShootThinnerUserAimingMode_C
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UBP_ShootThinnerUserAimingMode_C : public UBP_ShootPaintUserAimingMode_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Game/BP_MainMenuGameState.BP_MainMenuGameState_C
/// Size: 0x0300 (768 bytes) (0x0002F8 - 0x000300) align 8 MaxSize: 0x0300
class ABP_MainMenuGameState_C : public AGameState
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02F8   (0x0008)  
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPound/GA_GroundPound.GA_GroundPound_C
/// Size: 0x0540 (1344 bytes) (0x000530 - 0x000540) align 8 MaxSize: 0x0540
class UGA_GroundPound_C : public URecGroundPoundAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0530   (0x0008)  
	class ARecBaseCharacter*                           As_Rec_Base_Charater;                                       // 0x0538   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPound/GA_GroundPound.GA_GroundPound_C.SetupReferences
	// void SetupReferences();                                                                                                  // [0x19ac1c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPound/GA_GroundPound.GA_GroundPound_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPound/GA_GroundPound.GA_GroundPound_C.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPound/GA_GroundPound.GA_GroundPound_C.Landed
	// void Landed(FHitResult& Hit);                                                                                            // [0x19ac1c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPound/GA_GroundPound.GA_GroundPound_C.ExecuteUbergraph_GA_GroundPound
	// void ExecuteUbergraph_GA_GroundPound(int32_t EntryPoint);                                                                // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GA_SplashThinnerGround.GA_SplashThinnerGround_C
/// Size: 0x0550 (1360 bytes) (0x000550 - 0x000550) align 8 MaxSize: 0x0550
class UGA_SplashThinnerGround_C : public UGA_Splash_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GA_SplashThinnerAir.GA_SplashThinnerAir_C
/// Size: 0x0550 (1360 bytes) (0x000550 - 0x000550) align 8 MaxSize: 0x0550
class UGA_SplashThinnerAir_C : public UGA_Splash_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GA_SplashPaintAir.GA_SplashPaintAir_C
/// Size: 0x0550 (1360 bytes) (0x000550 - 0x000550) align 8 MaxSize: 0x0550
class UGA_SplashPaintAir_C : public UGA_Splash_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/Splash/GA_SplashPaintGround.GA_SplashPaintGround_C
/// Size: 0x0550 (1360 bytes) (0x000550 - 0x000550) align 8 MaxSize: 0x0550
class UGA_SplashPaintGround_C : public UGA_Splash_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeyShootThinner.GA_MickeyShootThinner_C
/// Size: 0x0580 (1408 bytes) (0x000580 - 0x000580) align 8 MaxSize: 0x0580
class UGA_MickeyShootThinner_C : public URecPaintAbility
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_GroundPoundCombo.GA_GroundPoundCombo_C
/// Size: 0x054C (1356 bytes) (0x000540 - 0x00054C) align 8 MaxSize: 0x054C
class UGA_GroundPoundCombo_C : public UGA_GroundPound_C
{ 
public:
	TEnumAsByte<ETraceTypeQuery>                       TraceChannelType;                                           // 0x0540   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0541   (0x0003)  MISSED
	float                                              PaintValueChange;                                           // 0x0544   (0x0004)  
	float                                              RadiusForAffectedPaintables;                                // 0x0548   (0x0004)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_GroundPoundCombo.GA_GroundPoundCombo_C.OnTargetHit
	// void OnTargetHit(FHitResult& HitResult);                                                                                 // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_GroundPoundCombo.GA_GroundPoundCombo_C.OnGameplayEffectSpecHandleCreated
	// void OnGameplayEffectSpecHandleCreated(FGameplayEffectSpecHandle SpecHandle);                                            // [0x19ac1c0] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeyShootPaint.GA_MickeyShootPaint_C
/// Size: 0x0580 (1408 bytes) (0x000580 - 0x000580) align 8 MaxSize: 0x0580
class UGA_MickeyShootPaint_C : public URecPaintAbility
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_ThinnerAbilitySelector.GA_ThinnerAbilitySelector_C
/// Size: 0x04B8 (1208 bytes) (0x0004B8 - 0x0004B8) align 8 MaxSize: 0x04B8
class UGA_ThinnerAbilitySelector_C : public URecAbilitySelectorAbility
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C
/// Size: 0x0590 (1424 bytes) (0x000570 - 0x000590) align 8 MaxSize: 0x0590
class UGA_MickeySpinAttack_C : public URecCloseRangeAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0570   (0x0008)  
	float                                              SpinJumpVelocity;                                           // 0x0578   (0x0004)  
	float                                              MaximumJumpDuration;                                        // 0x057C   (0x0004)  
	TArray<class AActor*>                              HitEnemies;                                                 // 0x0580   (0x0010)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C.Set Jump Parameters
	// void SetJumpParameters();                                                                                                // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C.OnTargetHit
	// void OnTargetHit(FHitResult& HitResult);                                                                                 // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_MickeySpinAttack.GA_MickeySpinAttack_C.ExecuteUbergraph_GA_MickeySpinAttack
	// void ExecuteUbergraph_GA_MickeySpinAttack(int32_t EntryPoint);                                                           // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_GroundPoundComboPaint.GA_GroundPoundComboPaint_C
/// Size: 0x054C (1356 bytes) (0x00054C - 0x00054C) align 8 MaxSize: 0x054C
class UGA_GroundPoundComboPaint_C : public UGA_GroundPoundCombo_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_GroundPoundComboThinner.GA_GroundPoundComboThinner_C
/// Size: 0x054C (1356 bytes) (0x00054C - 0x00054C) align 8 MaxSize: 0x054C
class UGA_GroundPoundComboThinner_C : public UGA_GroundPoundCombo_C
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GA_PaintAbilitySelector.GA_PaintAbilitySelector_C
/// Size: 0x04B8 (1208 bytes) (0x0004B8 - 0x0004B8) align 8 MaxSize: 0x04B8
class UGA_PaintAbilitySelector_C : public URecAbilitySelectorAbility
{ 
public:
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinCombo.GA_MickeySpinCombo_C
/// Size: 0x05A8 (1448 bytes) (0x000590 - 0x0005A8) align 8 MaxSize: 0x05A8
class UGA_MickeySpinCombo_C : public UGA_MickeySpinAttack_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannelType;                                           // 0x0598   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0599   (0x0003)  MISSED
	float                                              PaintValueChange;                                           // 0x059C   (0x0004)  
	class UMaterialInterface*                          Decal_Material;                                             // 0x05A0   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinCombo.GA_MickeySpinCombo_C.OnTargetHit
	// void OnTargetHit(FHitResult& HitResult);                                                                                 // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinCombo.GA_MickeySpinCombo_C.OnGameplayEffectSpecHandleCreated
	// void OnGameplayEffectSpecHandleCreated(FGameplayEffectSpecHandle SpecHandle);                                            // [0x19ac1c0] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinCombo.GA_MickeySpinCombo_C.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinCombo.GA_MickeySpinCombo_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinCombo.GA_MickeySpinCombo_C.ExecuteUbergraph_GA_MickeySpinCombo
	// void ExecuteUbergraph_GA_MickeySpinCombo(int32_t EntryPoint);                                                            // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_ListenForComboGroundPound.GA_ListenForComboGroundPound_C
/// Size: 0x0488 (1160 bytes) (0x000480 - 0x000488) align 8 MaxSize: 0x0488
class UGA_ListenForComboGroundPound_C : public URecGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_ListenForComboGroundPound.GA_ListenForComboGroundPound_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/GroundPoundCombo/GA_ListenForComboGroundPound.GA_ListenForComboGroundPound_C.ExecuteUbergraph_GA_ListenForComboGroundPound
	// void ExecuteUbergraph_GA_ListenForComboGroundPound(int32_t EntryPoint);                                                  // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboThinner.GA_MickeySpinComboThinner_C
/// Size: 0x05B0 (1456 bytes) (0x0005A8 - 0x0005B0) align 8 MaxSize: 0x05B0
class UGA_MickeySpinComboThinner_C : public UGA_MickeySpinCombo_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A8   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboThinner.GA_MickeySpinComboThinner_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboThinner.GA_MickeySpinComboThinner_C.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboThinner.GA_MickeySpinComboThinner_C.ExecuteUbergraph_GA_MickeySpinComboThinner
	// void ExecuteUbergraph_GA_MickeySpinComboThinner(int32_t EntryPoint);                                                     // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboPaint.GA_MickeySpinComboPaint_C
/// Size: 0x05B0 (1456 bytes) (0x0005A8 - 0x0005B0) align 8 MaxSize: 0x05B0
class UGA_MickeySpinComboPaint_C : public UGA_MickeySpinCombo_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A8   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboPaint.GA_MickeySpinComboPaint_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboPaint.GA_MickeySpinComboPaint_C.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_MickeySpinComboPaint.GA_MickeySpinComboPaint_C.ExecuteUbergraph_GA_MickeySpinComboPaint
	// void ExecuteUbergraph_GA_MickeySpinComboPaint(int32_t EntryPoint);                                                       // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_ListenForComboSpinAttack.GA_ListenForComboSpinAttack_C
/// Size: 0x0488 (1160 bytes) (0x000480 - 0x000488) align 8 MaxSize: 0x0488
class UGA_ListenForComboSpinAttack_C : public URecGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_ListenForComboSpinAttack.GA_ListenForComboSpinAttack_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sandbox/Characters/Mickey/AbilitySystem/SpinComboAttack/GA_ListenForComboSpinAttack.GA_ListenForComboSpinAttack_C.ExecuteUbergraph_GA_ListenForComboSpinAttack
	// void ExecuteUbergraph_GA_ListenForComboSpinAttack(int32_t EntryPoint);                                                   // [0x19ac1c0] Final|HasDefaults    
};

/// Struct /Game/Sandbox/Components/Struct_GameplayAttributeTouple.Struct_GameplayAttributeTouple
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FStruct_GameplayAttributeTouple
{ 
	FGameplayAttribute                                 CurrentAttributeCondition_2_9D9632104B82E872BC917F9A6FF6D130; // 0x0000   (0x0038)  
	FGameplayAttribute                                 MaxAttributeCondition_4_737F24BB49EDEEFE470E6C9432BBADD7;   // 0x0038   (0x0038)  
};

/// Class /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C
/// Size: 0x00EC (236 bytes) (0x0000B8 - 0x0000EC) align 8 MaxSize: 0x00EC
class UBP_CollectibleCollisionHandlingComponent_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00B8   (0x0008)  
	bool                                               bShouldValidateLocomotionForCollision;                      // 0x00C0   (0x0001)  
	bool                                               bOwnerHasLocomotion;                                        // 0x00C1   (0x0001)  
	bool                                               bLocomotionHasEnded;                                        // 0x00C2   (0x0001)  
	bool                                               bFinishedMoving;                                            // 0x00C3   (0x0001)  
	bool                                               bOwnerHasMovementComponent;                                 // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              Attribute_Max_Value;                                        // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FStruct_GameplayAttributeTouple>            ConditionalMickeyAttributeTouples;                          // 0x00D0   (0x0010)  
	class ABP_Base_Collectable_C*                      As_BP_Base_Collectable;                                     // 0x00E0   (0x0008)  
	bool                                               bOnlyOneConditionNeedsToBeFullfilled;                       // 0x00E8   (0x0001)  
	bool                                               bValidMickeyAttributeTouples;                               // 0x00E9   (0x0001)  
	bool                                               bEnableCollisionOnReset;                                    // 0x00EA   (0x0001)  
	bool                                               bShouldEnabledCollisionOnReset;                             // 0x00EB   (0x0001)  


	/// Functions
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.HandleCollision
	// void HandleCollision();                                                                                                  // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.AreAttributeConditionsFullfilled
	// void AreAttributeConditionsFullfilled(bool& bFullfilled);                                                                // [0x19ac1c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.IsMovementConditionFullfilled
	// void IsMovementConditionFullfilled(bool& bMovementConditionFullfilled);                                                  // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.IsLocomotionConditionFullfilled
	// void IsLocomotionConditionFullfilled(bool& bLocomotionConditionFullfilled);                                              // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.SetCollision
	// void SetCollision(bool bSetActive);                                                                                      // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.CheckOwnerHasValidGameplayAttributeTouples
	// void CheckOwnerHasValidGameplayAttributeTouples();                                                                       // [0x19ac1c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.CheckIfIsCollectibleAndInitialize
	// void CheckIfIsCollectibleAndInitialize();                                                                                // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.TryBindSpawnMovement
	// void TryBindSpawnMovement();                                                                                             // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.TryBindLocomotion
	// void TryBindLocomotion();                                                                                                // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.CheckConditionsOnFinishedMoving
	// void CheckConditionsOnFinishedMoving();                                                                                  // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.CheckConditionsOnLocomotionEnded
	// void CheckConditionsOnLocomotionEnded(float CurrentPosition);                                                            // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.DisableCollisionInitally
	// void DisableCollisionInitally();                                                                                         // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.GetPlayerAttribute
	// void GetPlayerAttribute(FGameplayAttribute Attribute, float& Value);                                                     // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.TryCacheAttributeMaxValue
	// void TryCacheAttributeMaxValue(FGameplayAttribute MaxAttribute);                                                         // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.CheckAllConditionsForAttraction
	// void CheckAllConditionsForAttraction(bool& bAllConditionsFullfilled);                                                    // [0x19ac1c0] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.OnAttributeChanged_D991ED8841EADA5C8D98ECADF37A5215
	// void OnAttributeChanged_D991ED8841EADA5C8D98ECADF37A5215(FGameplayAttribute Attribute, float NewValue, float OldValue);  // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.OnCancel_9F0BFD35441B70C358940F8A864A6C9C
	// void OnCancel_9F0BFD35441B70C358940F8A864A6C9C();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.OnCompleted_9F0BFD35441B70C358940F8A864A6C9C
	// void OnCompleted_9F0BFD35441B70C358940F8A864A6C9C();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.K2_OnReset
	// void K2_OnReset();                                                                                                       // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_CollectibleCollisionHandlingComponent.BP_CollectibleCollisionHandlingComponent_C.ExecuteUbergraph_BP_CollectibleCollisionHandlingComponent
	// void ExecuteUbergraph_BP_CollectibleCollisionHandlingComponent(int32_t EntryPoint);                                      // [0x19ac1c0] Final|HasDefaults    
};

/// Class /Game/Sandbox/Core/Props/Collectibles/BP_Base_InventoryCollectable.BP_Base_InventoryCollectable_C
/// Size: 0x02E8 (744 bytes) (0x0002E0 - 0x0002E8) align 8 MaxSize: 0x02E8
class ABP_Base_InventoryCollectable_C : public ABP_Base_Collectable_C
{ 
public:
	class URecChangeInventoryComponent*                ChangeInventory;                                            // 0x02E0   (0x0008)  
};

/// Class /Game/Sandbox/Core/Props/Pickups/BP_Base_AttributePickup.BP_Base_AttributePickup_C
/// Size: 0x02F0 (752 bytes) (0x0002E0 - 0x0002F0) align 8 MaxSize: 0x02F0
class ABP_Base_AttributePickup_C : public ABP_Base_Collectable_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)  
	class UClass*                                      EffectOnCollected;                                          // 0x02E8   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Core/Props/Pickups/BP_Base_AttributePickup.BP_Base_AttributePickup_C.ApplyEffectsOnCollected
	// void ApplyEffectsOnCollected();                                                                                          // [0x19ac1c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Core/Props/Pickups/BP_Base_AttributePickup.BP_Base_AttributePickup_C.BndEvt__BP_Base_FadingCollectable_PL_Attraction_K2Node_ComponentBoundEvent_6_OnAttractionCompleted__DelegateSignature
	// void BndEvt__BP_Base_FadingCollectable_PL_Attraction_K2Node_ComponentBoundEvent_6_OnAttractionCompleted__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/Sandbox/Core/Props/Pickups/BP_Base_AttributePickup.BP_Base_AttributePickup_C.ExecuteUbergraph_BP_Base_AttributePickup
	// void ExecuteUbergraph_BP_Base_AttributePickup(int32_t EntryPoint);                                                       // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C
/// Size: 0x0138 (312 bytes) (0x000118 - 0x000138) align 8 MaxSize: 0x0138
class UBP_FadeOutComponent_C : public UBP_BlendComponent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0118   (0x0008)  
	float                                              TimeUntilFade;                                              // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	class ABP_Base_Collectable_C*                      As_BP_Base_Collectable;                                     // 0x0128   (0x0008)  
	class UPL_Delay*                                   Delay_Handle;                                               // 0x0130   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.BindToOnFadingEnded
	// void BindToOnFadingEnded();                                                                                              // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.BindToOnAttractionStarted
	// void BindToOnAttractionStarted();                                                                                        // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.DestroyActorOnFadeOutFinished
	// void DestroyActorOnFadeOutFinished(ERecBlendingDirection Direction);                                                     // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.StopFadingOnAttractionStarted
	// void StopFadingOnAttractionStarted();                                                                                    // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.CheckIfIsCollectibleAndIntialize
	// void CheckIfIsCollectibleAndIntialize();                                                                                 // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.OnCancel_30BB987947AFAC3E21403884CA3724B1
	// void OnCancel_30BB987947AFAC3E21403884CA3724B1();                                                                        // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.OnCompleted_30BB987947AFAC3E21403884CA3724B1
	// void OnCompleted_30BB987947AFAC3E21403884CA3724B1();                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.K2_OnReset
	// void K2_OnReset();                                                                                                       // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_FadeOutComponent.BP_FadeOutComponent_C.ExecuteUbergraph_BP_FadeOutComponent
	// void ExecuteUbergraph_BP_FadeOutComponent(int32_t EntryPoint);                                                           // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Components/BP_PickupVFXSpawnComponent.BP_PickupVFXSpawnComponent_C
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UBP_PickupVFXSpawnComponent_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00B8   (0x0008)  
	class UNiagaraSystem*                              OnCollectedImpactVFX;                                       // 0x00C0   (0x0008)  
	class UNiagaraSystem*                              OnCollectedVFX;                                             // 0x00C8   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Components/BP_PickupVFXSpawnComponent.BP_PickupVFXSpawnComponent_C.SpawnCollectedVFX
	// void SpawnCollectedVFX();                                                                                                // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_PickupVFXSpawnComponent.BP_PickupVFXSpawnComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_PickupVFXSpawnComponent.BP_PickupVFXSpawnComponent_C.On Collected Event
	// void OnCollectedEvent();                                                                                                 // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_PickupVFXSpawnComponent.BP_PickupVFXSpawnComponent_C.ExecuteUbergraph_BP_PickupVFXSpawnComponent
	// void ExecuteUbergraph_BP_PickupVFXSpawnComponent(int32_t EntryPoint);                                                    // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Components/BP_PickupSFXComponent.BP_PickupSFXComponent_C
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBP_PickupSFXComponent_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00B8   (0x0008)  
	class UFMODEvent*                                  CollectableSFX;                                             // 0x00C0   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Components/BP_PickupSFXComponent.BP_PickupSFXComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_PickupSFXComponent.BP_PickupSFXComponent_C.On Collected Event
	// void OnCollectedEvent();                                                                                                 // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_PickupSFXComponent.BP_PickupSFXComponent_C.ExecuteUbergraph_BP_PickupSFXComponent
	// void ExecuteUbergraph_BP_PickupSFXComponent(int32_t EntryPoint);                                                         // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Components/BP_SpawnInComponent.BP_SpawnInComponent_C
/// Size: 0x0130 (304 bytes) (0x000118 - 0x000130) align 8 MaxSize: 0x0130
class UBP_SpawnInComponent_C : public UBP_BlendComponent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0118   (0x0008)  
	float                                              TimeUntilFade;                                              // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	class ABP_Base_Collectable_C*                      As_BP_Base_Collectable;                                     // 0x0128   (0x0008)  


	/// Functions
	// Function /Game/Sandbox/Components/BP_SpawnInComponent.BP_SpawnInComponent_C.BindOnAttractionStarted
	// void BindOnAttractionStarted();                                                                                          // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_SpawnInComponent.BP_SpawnInComponent_C.RestoreFullScaleOnAttractionStarted
	// void RestoreFullScaleOnAttractionStarted();                                                                              // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_SpawnInComponent.BP_SpawnInComponent_C.CheckIfIsCollectibleAndIntialize
	// void CheckIfIsCollectibleAndIntialize();                                                                                 // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_SpawnInComponent.BP_SpawnInComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /Game/Sandbox/Components/BP_SpawnInComponent.BP_SpawnInComponent_C.ExecuteUbergraph_BP_SpawnInComponent
	// void ExecuteUbergraph_BP_SpawnInComponent(int32_t EntryPoint);                                                           // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Core/Props/Collectibles/BP_PersistentInventoryCollectable.BP_PersistentInventoryCollectable_C
/// Size: 0x02F9 (761 bytes) (0x0002E8 - 0x0002F9) align 8 MaxSize: 0x02F9
class ABP_PersistentInventoryCollectable_C : public ABP_Base_InventoryCollectable_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E8   (0x0008)  
	class URecActorStateComponent*                     RecActorState;                                              // 0x02F0   (0x0008)  
	bool                                               SaveOnCollect;                                              // 0x02F8   (0x0001)  


	/// Functions
	// Function /Game/Sandbox/Core/Props/Collectibles/BP_PersistentInventoryCollectable.BP_PersistentInventoryCollectable_C.HandleOptionalSave
	// void HandleOptionalSave();                                                                                               // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sandbox/Core/Props/Collectibles/BP_PersistentInventoryCollectable.BP_PersistentInventoryCollectable_C.BndEvt__BP_PersistentCollectable__PL_Attraction_K2Node_ComponentBoundEvent_0_OnAttractionCompleted__DelegateSignature
	// void BndEvt__BP_PersistentCollectable__PL_Attraction_K2Node_ComponentBoundEvent_0_OnAttractionCompleted__DelegateSignature(); // [0x19ac1c0] BlueprintEvent       
	// Function /Game/Sandbox/Core/Props/Collectibles/BP_PersistentInventoryCollectable.BP_PersistentInventoryCollectable_C.ExecuteUbergraph_BP_PersistentInventoryCollectable
	// void ExecuteUbergraph_BP_PersistentInventoryCollectable(int32_t EntryPoint);                                             // [0x19ac1c0] Final                
};

/// Class /Game/Sandbox/Core/Props/Pickups/BP_Base_AttributePickup_Fading.BP_Base_AttributePickup_Fading_C
/// Size: 0x02F8 (760 bytes) (0x0002F0 - 0x0002F8) align 8 MaxSize: 0x02F8
class ABP_Base_AttributePickup_Fading_C : public ABP_Base_AttributePickup_C
{ 
public:
	class UBP_FadeOutComponent_C*                      BP_FadeOutComponent;                                        // 0x02F0   (0x0008)  
};

/// Class /Game/Sandbox/Core/Props/BP_HealthPickup.BP_HealthPickup_C
/// Size: 0x02F8 (760 bytes) (0x0002F8 - 0x0002F8) align 8 MaxSize: 0x02F8
class ABP_HealthPickup_C : public ABP_Base_AttributePickup_Fading_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/BP_ThinnerPickup.BP_ThinnerPickup_C
/// Size: 0x02F8 (760 bytes) (0x0002F8 - 0x0002F8) align 8 MaxSize: 0x02F8
class ABP_ThinnerPickup_C : public ABP_Base_AttributePickup_Fading_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/BP_PaintThinnerPickup.BP_PaintThinnerPickup_C
/// Size: 0x0300 (768 bytes) (0x0002F8 - 0x000300) align 8 MaxSize: 0x0300
class ABP_PaintThinnerPickup_C : public ABP_Base_AttributePickup_Fading_C
{ 
public:
	class UStaticMeshComponent*                        Mesh1;                                                      // 0x02F8   (0x0008)  
};

/// Class /Game/Sandbox/Core/Props/BP_PaintPickup.BP_PaintPickup_C
/// Size: 0x02F8 (760 bytes) (0x0002F8 - 0x0002F8) align 8 MaxSize: 0x02F8
class ABP_PaintPickup_C : public ABP_Base_AttributePickup_Fading_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_Base_Pickup_Spawned.BP_Base_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x0002F8 - 0x000318) align 8 MaxSize: 0x0318
class ABP_Base_Pickup_Spawned_C : public ABP_Base_AttributePickup_Fading_C
{ 
public:
	class UBP_CollectableMovementComponent_C*          BP_CollectableMovementComponent;                            // 0x02F8   (0x0008)  
	class UBP_SpawnInComponent_C*                      BP_SpawnInComponent;                                        // 0x0300   (0x0008)  
	class UPL_LocomotionComponent*                     PL_Locomotion;                                              // 0x0308   (0x0008)  
	class UPL_SplineComponent*                         PL_Spline;                                                  // 0x0310   (0x0008)  
};

/// Class /Game/Sandbox/Core/Props/BP_ThinnerPickup_ToonSpawned.BP_ThinnerPickup_ToonSpawned_C
/// Size: 0x02F8 (760 bytes) (0x0002F8 - 0x0002F8) align 8 MaxSize: 0x02F8
class ABP_ThinnerPickup_ToonSpawned_C : public ABP_ThinnerPickup_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/BP_PaintPickup_ToonSpawned.BP_PaintPickup_ToonSpawned_C
/// Size: 0x02F8 (760 bytes) (0x0002F8 - 0x0002F8) align 8 MaxSize: 0x02F8
class ABP_PaintPickup_ToonSpawned_C : public ABP_PaintPickup_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_Health_Pickup_Spawned.BP_Health_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ABP_Health_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_TVSketch_Pickup_Spawned.BP_TVSketch_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ABP_TVSketch_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_AnvilSketch_Pickup_Spawned.BP_AnvilSketch_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ABP_AnvilSketch_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_PaintThinner_Pickup_Spawned.BP_PaintThinner_Pickup_Spawned_C
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class ABP_PaintThinner_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
	class UStaticMeshComponent*                        Mesh1;                                                      // 0x0318   (0x0008)  
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_WatchSketch_Pickup_Spawned.BP_WatchSketch_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ABP_WatchSketch_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_Thinner_Pickup_Spawned.BP_Thinner_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ABP_Thinner_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
};

/// Class /Game/Sandbox/Core/Props/ContainerSpawnedPickup/BP_Paint_Pickup_Spawned.BP_Paint_Pickup_Spawned_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ABP_Paint_Pickup_Spawned_C : public ABP_Base_Pickup_Spawned_C
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_GameInstance_C) == 0x0D20); // 3360 bytes (0x000D20 - 0x000D20)
static_assert(sizeof(UGE_OneTVSketch_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UBP_CollectableMovementComponent_C) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UGE_PaintRefill_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(ABP_MainMenuGameMode_C) == 0x03A0); // 928 bytes (0x000398 - 0x0003A0)
static_assert(sizeof(ABP_MainMenuPlayerController_C) == 0x0688); // 1672 bytes (0x000688 - 0x000688)
static_assert(sizeof(UGE_Cheer_TryToCheer_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(ABP_EnemyManager_C) == 0x03E0); // 992 bytes (0x0003D0 - 0x0003E0)
static_assert(sizeof(ABP_Base_Collectable_C) == 0x02E0); // 736 bytes (0x0002B0 - 0x0002E0)
static_assert(sizeof(UGE_ThinnerRefill_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_OneHealth_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_PaintThinnerRefill_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_OneWatchSketch_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_ThinnerStream_Knockback_C) == 0x0870); // 2160 bytes (0x000870 - 0x000870)
static_assert(sizeof(UGE_PaintCost_Splash_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_PaintCost_Spin_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_SplashThinner_Knockback_C) == 0x0870); // 2160 bytes (0x000870 - 0x000870)
static_assert(sizeof(UGE_PaintStream_Knockback_C) == 0x0870); // 2160 bytes (0x000870 - 0x000870)
static_assert(sizeof(UGE_SplashPaint_Knockback_C) == 0x0870); // 2160 bytes (0x000870 - 0x000870)
static_assert(sizeof(UGE_BlockAirThinnerSplash_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_ApplyPaintToEnemies_C) == 0x0810); // 2064 bytes (0x000810 - 0x000810)
static_assert(sizeof(UGE_Brush_Knockback_C) == 0x0870); // 2160 bytes (0x000870 - 0x000870)
static_assert(sizeof(UGE_PaintCost_GroundPound_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_ShootPaintCost_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_BlockAirPaintSplash_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_ShootThinnerCost_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_ThinnerCost_Spin_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_Cooldown_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_GroundPound_Knockback_C) == 0x0870); // 2160 bytes (0x000870 - 0x000870)
static_assert(sizeof(UGA_CameraZoom_C) == 0x04B0); // 1200 bytes (0x0004B0 - 0x0004B0)
static_assert(sizeof(UGE_ThinnerCost_GroundPound_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UBP_DefaultFixedAimingMode_C) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UBP_DefaultWindowedAimingMode_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UBP_ShootPaintFixedAimingMode_C) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UBP_DefaultUserAimingMode_C) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UBP_ShootPaintWindowedAimingMode_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UGE_ThinnerCost_Splash_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UBP_ShootThinnerFixedAimingMode_C) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UBP_ShootPaintUserAimingMode_C) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UBP_ShootThinnerWindowedAimingMode_C) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UGA_Splash_C) == 0x0550); // 1360 bytes (0x000550 - 0x000550)
static_assert(sizeof(UGE_SplashPaintCost_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UGE_OneAnvilSketch_C) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(UBP_BlendComponent_C) == 0x0118); // 280 bytes (0x000118 - 0x000118)
static_assert(sizeof(UBP_ShootThinnerUserAimingMode_C) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(ABP_MainMenuGameState_C) == 0x0300); // 768 bytes (0x0002F8 - 0x000300)
static_assert(sizeof(UGA_GroundPound_C) == 0x0540); // 1344 bytes (0x000530 - 0x000540)
static_assert(sizeof(UGA_SplashThinnerGround_C) == 0x0550); // 1360 bytes (0x000550 - 0x000550)
static_assert(sizeof(UGA_SplashThinnerAir_C) == 0x0550); // 1360 bytes (0x000550 - 0x000550)
static_assert(sizeof(UGA_SplashPaintAir_C) == 0x0550); // 1360 bytes (0x000550 - 0x000550)
static_assert(sizeof(UGA_SplashPaintGround_C) == 0x0550); // 1360 bytes (0x000550 - 0x000550)
static_assert(sizeof(UGA_MickeyShootThinner_C) == 0x0580); // 1408 bytes (0x000580 - 0x000580)
static_assert(sizeof(UGA_GroundPoundCombo_C) == 0x054C); // 1356 bytes (0x000540 - 0x00054C)
static_assert(sizeof(UGA_MickeyShootPaint_C) == 0x0580); // 1408 bytes (0x000580 - 0x000580)
static_assert(sizeof(UGA_ThinnerAbilitySelector_C) == 0x04B8); // 1208 bytes (0x0004B8 - 0x0004B8)
static_assert(sizeof(UGA_MickeySpinAttack_C) == 0x0590); // 1424 bytes (0x000570 - 0x000590)
static_assert(sizeof(UGA_GroundPoundComboPaint_C) == 0x054C); // 1356 bytes (0x00054C - 0x00054C)
static_assert(sizeof(UGA_GroundPoundComboThinner_C) == 0x054C); // 1356 bytes (0x00054C - 0x00054C)
static_assert(sizeof(UGA_PaintAbilitySelector_C) == 0x04B8); // 1208 bytes (0x0004B8 - 0x0004B8)
static_assert(sizeof(UGA_MickeySpinCombo_C) == 0x05A8); // 1448 bytes (0x000590 - 0x0005A8)
static_assert(sizeof(UGA_ListenForComboGroundPound_C) == 0x0488); // 1160 bytes (0x000480 - 0x000488)
static_assert(sizeof(UGA_MickeySpinComboThinner_C) == 0x05B0); // 1456 bytes (0x0005A8 - 0x0005B0)
static_assert(sizeof(UGA_MickeySpinComboPaint_C) == 0x05B0); // 1456 bytes (0x0005A8 - 0x0005B0)
static_assert(sizeof(UGA_ListenForComboSpinAttack_C) == 0x0488); // 1160 bytes (0x000480 - 0x000488)
static_assert(sizeof(FStruct_GameplayAttributeTouple) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UBP_CollectibleCollisionHandlingComponent_C) == 0x00EC); // 236 bytes (0x0000B8 - 0x0000EC)
static_assert(sizeof(ABP_Base_InventoryCollectable_C) == 0x02E8); // 744 bytes (0x0002E0 - 0x0002E8)
static_assert(sizeof(ABP_Base_AttributePickup_C) == 0x02F0); // 752 bytes (0x0002E0 - 0x0002F0)
static_assert(sizeof(UBP_FadeOutComponent_C) == 0x0138); // 312 bytes (0x000118 - 0x000138)
static_assert(sizeof(UBP_PickupVFXSpawnComponent_C) == 0x00D0); // 208 bytes (0x0000B8 - 0x0000D0)
static_assert(sizeof(UBP_PickupSFXComponent_C) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UBP_SpawnInComponent_C) == 0x0130); // 304 bytes (0x000118 - 0x000130)
static_assert(sizeof(ABP_PersistentInventoryCollectable_C) == 0x02F9); // 761 bytes (0x0002E8 - 0x0002F9)
static_assert(sizeof(ABP_Base_AttributePickup_Fading_C) == 0x02F8); // 760 bytes (0x0002F0 - 0x0002F8)
static_assert(sizeof(ABP_HealthPickup_C) == 0x02F8); // 760 bytes (0x0002F8 - 0x0002F8)
static_assert(sizeof(ABP_ThinnerPickup_C) == 0x02F8); // 760 bytes (0x0002F8 - 0x0002F8)
static_assert(sizeof(ABP_PaintThinnerPickup_C) == 0x0300); // 768 bytes (0x0002F8 - 0x000300)
static_assert(sizeof(ABP_PaintPickup_C) == 0x02F8); // 760 bytes (0x0002F8 - 0x0002F8)
static_assert(sizeof(ABP_Base_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x0002F8 - 0x000318)
static_assert(sizeof(ABP_ThinnerPickup_ToonSpawned_C) == 0x02F8); // 760 bytes (0x0002F8 - 0x0002F8)
static_assert(sizeof(ABP_PaintPickup_ToonSpawned_C) == 0x02F8); // 760 bytes (0x0002F8 - 0x0002F8)
static_assert(sizeof(ABP_Health_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ABP_TVSketch_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ABP_AnvilSketch_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ABP_PaintThinner_Pickup_Spawned_C) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(ABP_WatchSketch_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ABP_Thinner_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ABP_Paint_Pickup_Spawned_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(offsetof(ABP_MainMenuGameMode_C, DefaultSceneRoot) == 0x0398);
static_assert(offsetof(ABP_EnemyManager_C, UberGraphFrame) == 0x03D0);
static_assert(offsetof(ABP_EnemyManager_C, DefaultSceneRoot) == 0x03D8);
static_assert(offsetof(ABP_Base_Collectable_C, BP_PickupSFXComponent) == 0x02B0);
static_assert(offsetof(ABP_Base_Collectable_C, BP_CollectibleCollisionHandlingComponent) == 0x02B8);
static_assert(offsetof(ABP_Base_Collectable_C, BP_PickupVFXSpawnComponent) == 0x02C0);
static_assert(offsetof(ABP_Base_Collectable_C, CollectableFlare) == 0x02C8);
static_assert(offsetof(ABP_Base_Collectable_C, Mesh) == 0x02D0);
static_assert(offsetof(ABP_Base_Collectable_C, PL_Attraction) == 0x02D8);
static_assert(offsetof(ABP_MainMenuGameState_C, DefaultSceneRoot) == 0x02F8);
static_assert(offsetof(UGA_GroundPound_C, UberGraphFrame) == 0x0530);
static_assert(offsetof(UGA_GroundPound_C, As_Rec_Base_Charater) == 0x0538);
static_assert(offsetof(UGA_GroundPoundCombo_C, TraceChannelType) == 0x0540);
static_assert(offsetof(UGA_MickeySpinAttack_C, UberGraphFrame) == 0x0570);
static_assert(offsetof(UGA_MickeySpinAttack_C, HitEnemies) == 0x0580);
static_assert(offsetof(UGA_MickeySpinCombo_C, UberGraphFrame) == 0x0590);
static_assert(offsetof(UGA_MickeySpinCombo_C, TraceChannelType) == 0x0598);
static_assert(offsetof(UGA_MickeySpinCombo_C, Decal_Material) == 0x05A0);
static_assert(offsetof(UGA_ListenForComboGroundPound_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(UGA_MickeySpinComboThinner_C, UberGraphFrame) == 0x05A8);
static_assert(offsetof(UGA_MickeySpinComboPaint_C, UberGraphFrame) == 0x05A8);
static_assert(offsetof(UGA_ListenForComboSpinAttack_C, UberGraphFrame) == 0x0480);
static_assert(offsetof(FStruct_GameplayAttributeTouple, CurrentAttributeCondition_2_9D9632104B82E872BC917F9A6FF6D130) == 0x0000);
static_assert(offsetof(FStruct_GameplayAttributeTouple, MaxAttributeCondition_4_737F24BB49EDEEFE470E6C9432BBADD7) == 0x0038);
static_assert(offsetof(UBP_CollectibleCollisionHandlingComponent_C, UberGraphFrame) == 0x00B8);
static_assert(offsetof(UBP_CollectibleCollisionHandlingComponent_C, ConditionalMickeyAttributeTouples) == 0x00D0);
static_assert(offsetof(UBP_CollectibleCollisionHandlingComponent_C, As_BP_Base_Collectable) == 0x00E0);
static_assert(offsetof(ABP_Base_InventoryCollectable_C, ChangeInventory) == 0x02E0);
static_assert(offsetof(ABP_Base_AttributePickup_C, UberGraphFrame) == 0x02E0);
static_assert(offsetof(ABP_Base_AttributePickup_C, EffectOnCollected) == 0x02E8);
static_assert(offsetof(UBP_FadeOutComponent_C, UberGraphFrame) == 0x0118);
static_assert(offsetof(UBP_FadeOutComponent_C, As_BP_Base_Collectable) == 0x0128);
static_assert(offsetof(UBP_FadeOutComponent_C, Delay_Handle) == 0x0130);
static_assert(offsetof(UBP_PickupVFXSpawnComponent_C, UberGraphFrame) == 0x00B8);
static_assert(offsetof(UBP_PickupVFXSpawnComponent_C, OnCollectedImpactVFX) == 0x00C0);
static_assert(offsetof(UBP_PickupVFXSpawnComponent_C, OnCollectedVFX) == 0x00C8);
static_assert(offsetof(UBP_PickupSFXComponent_C, UberGraphFrame) == 0x00B8);
static_assert(offsetof(UBP_PickupSFXComponent_C, CollectableSFX) == 0x00C0);
static_assert(offsetof(UBP_SpawnInComponent_C, UberGraphFrame) == 0x0118);
static_assert(offsetof(UBP_SpawnInComponent_C, As_BP_Base_Collectable) == 0x0128);
static_assert(offsetof(ABP_PersistentInventoryCollectable_C, UberGraphFrame) == 0x02E8);
static_assert(offsetof(ABP_PersistentInventoryCollectable_C, RecActorState) == 0x02F0);
static_assert(offsetof(ABP_Base_AttributePickup_Fading_C, BP_FadeOutComponent) == 0x02F0);
static_assert(offsetof(ABP_PaintThinnerPickup_C, Mesh1) == 0x02F8);
static_assert(offsetof(ABP_Base_Pickup_Spawned_C, BP_CollectableMovementComponent) == 0x02F8);
static_assert(offsetof(ABP_Base_Pickup_Spawned_C, BP_SpawnInComponent) == 0x0300);
static_assert(offsetof(ABP_Base_Pickup_Spawned_C, PL_Locomotion) == 0x0308);
static_assert(offsetof(ABP_Base_Pickup_Spawned_C, PL_Spline) == 0x0310);
static_assert(offsetof(ABP_PaintThinner_Pickup_Spawned_C, Mesh1) == 0x0318);
