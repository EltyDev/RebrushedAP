
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
/// dependency: PL_Conditionals
/// dependency: PL_Stateful

#pragma pack(push, 0x1)

/// Enum /Script/PL_Motion.EPL_LocomotionDirection
/// Size: 0x01 (1 bytes)
enum class EPL_LocomotionDirection : uint8_t
{
	EPL_LocomotionDirection__FORWARD                                                 = 0,
	EPL_LocomotionDirection__BACKWARD                                                = 1
};

/// Enum /Script/PL_Motion.EPL_RotationDirection
/// Size: 0x01 (1 bytes)
enum class EPL_RotationDirection : uint8_t
{
	EPL_RotationDirection__FORWARD                                                   = 0,
	EPL_RotationDirection__BACKWARD                                                  = 1
};

/// Enum /Script/PL_Motion.EPL_AlleviatePressureBehavior
/// Size: 0x01 (1 bytes)
enum class EPL_AlleviatePressureBehavior : uint8_t
{
	EPL_AlleviatePressureBehavior__ReturnToTop                                       = 0,
	EPL_AlleviatePressureBehavior__ReturnToRestingPosition                           = 1,
	EPL_AlleviatePressureBehavior__StayInPlace                                       = 2,
	EPL_AlleviatePressureBehavior__ContinueDropping                                  = 3
};

/// Enum /Script/PL_Motion.EPL_PressurePlateStates
/// Size: 0x01 (1 bytes)
enum class EPL_PressurePlateStates : uint8_t
{
	EPL_PressurePlateStates__IdleElevated                                            = 0,
	EPL_PressurePlateStates__DropInit                                                = 1,
	EPL_PressurePlateStates__Dropping                                                = 2,
	EPL_PressurePlateStates__DroppingStopped                                         = 3,
	EPL_PressurePlateStates__DropComplete                                            = 4,
	EPL_PressurePlateStates__IdleDropped                                             = 5,
	EPL_PressurePlateStates__IdleMidway                                              = 6,
	EPL_PressurePlateStates__ElevationInit                                           = 7,
	EPL_PressurePlateStates__Elevating                                               = 8,
	EPL_PressurePlateStates__ElevationStopped                                        = 9,
	EPL_PressurePlateStates__ElevationComplete                                       = 10,
	EPL_PressurePlateStates__Disabled                                                = 11
};

/// Enum /Script/PL_Motion.EPL_LocomotionBehaviorUpdateResult
/// Size: 0x01 (1 bytes)
enum class EPL_LocomotionBehaviorUpdateResult : uint8_t
{
	EPL_LocomotionBehaviorUpdateResult__Completed                                    = 0,
	EPL_LocomotionBehaviorUpdateResult__InterruptedBySplinePoint                     = 1
};

/// Enum /Script/PL_Motion.ECurveEventDirection
/// Size: 0x04 (4 bytes)
enum class ECurveEventDirection : uint32_t
{
	ECurveEventDirection__Both                                                       = 0,
	ECurveEventDirection__Forward                                                    = 1,
	ECurveEventDirection__Backward                                                   = 2
};

/// Enum /Script/PL_Motion.EPL_PressurePlateEvents
/// Size: 0x01 (1 bytes)
enum class EPL_PressurePlateEvents : uint8_t
{
	EPL_PressurePlateEvents__SteppedOn                                               = 0,
	EPL_PressurePlateEvents__SteppedOnAtEnd                                          = 1,
	EPL_PressurePlateEvents__SteppedOff                                              = 2,
	EPL_PressurePlateEvents__Drop                                                    = 3,
	EPL_PressurePlateEvents__Elevate                                                 = 4,
	EPL_PressurePlateEvents__Rest                                                    = 5,
	EPL_PressurePlateEvents__ReachedEnd                                              = 6,
	EPL_PressurePlateEvents__ReachedStart                                            = 7,
	EPL_PressurePlateEvents__FinishedDropEndAnimation                                = 8,
	EPL_PressurePlateEvents__FinishedElevationEndAnimation                           = 9,
	EPL_PressurePlateEvents__Hit                                                     = 10,
	EPL_PressurePlateEvents__Disable                                                 = 11,
	EPL_PressurePlateEvents__Enable                                                  = 12
};

/// Enum /Script/PL_Motion.EPL_SpeedOverProximityTarget
/// Size: 0x01 (1 bytes)
enum class EPL_SpeedOverProximityTarget : uint8_t
{
	EPL_SpeedOverProximityTarget__PlayerCharacter                                    = 0,
	EPL_SpeedOverProximityTarget__CustomActor                                        = 1
};

/// Enum /Script/PL_Motion.EPL_ProximityMode
/// Size: 0x01 (1 bytes)
enum class EPL_ProximityMode : uint8_t
{
	EPL_ProximityMode__WorldDistance3D                                               = 0,
	EPL_ProximityMode__WorldDistanceXY                                               = 1,
	EPL_ProximityMode__WorldDistanceXZ                                               = 2,
	EPL_ProximityMode__SplineDistance                                                = 3
};

/// Class /Script/PL_Motion.PL_RotatorComponent
/// Size: 0x0190 (400 bytes) (0x0000B8 - 0x000190) align 8 MaxSize: 0x0190
class UPL_RotatorComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,630) /* FMulticastInlineDelegate */ __um(OnStartRotating);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,631) /* FMulticastInlineDelegate */ __um(OnRotating);                                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,632) /* FMulticastInlineDelegate */ __um(OnStopping);                                         // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,633) /* FMulticastInlineDelegate */ __um(OnStopRotating);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,634) /* FMulticastInlineDelegate */ __um(OnRotationFinished);                                 // 0x00F8   (0x0010)  
	EPL_ResetPolicy                                    ResetPolicy;                                                // 0x0108   (0x0001)  
	bool                                               bShouldRotate;                                              // 0x0109   (0x0001)  
	EPL_RotationDirection                              Direction;                                                  // 0x010A   (0x0001)  
	bool                                               bShouldIgnoreStartRotation;                                 // 0x010B   (0x0001)  
	bool                                               bLooping;                                                   // 0x010C   (0x0001)  
	bool                                               bRotateInWorldSpace;                                        // 0x010D   (0x0001)  
	bool                                               bAlternateDirection;                                        // 0x010E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x010F   (0x0001)  MISSED
	float                                              TimelineOffset;                                             // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	class UCurveVector*                                RotationCurve;                                              // 0x0118   (0x0008)  
	float                                              EaseInSpeed;                                                // 0x0120   (0x0004)  
	float                                              EaseOutSpeed;                                               // 0x0124   (0x0004)  
	FComponentReference                                TargetComponent;                                            // 0x0128   (0x0028)  
	TArray<class UPL_CurveEventBase*>                  CurveEvents;                                                // 0x0150   (0x0010)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0160   (0x0028)  MISSED
	class UPL_CurveEventHelper*                        CurveEventHelper;                                           // 0x0188   (0x0008)  


	/// Functions
	// Function /Script/PL_Motion.PL_RotatorComponent.StopRotating
	// void StopRotating();                                                                                                     // [0xc65060] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_RotatorComponent.StartRotatingInDirection
	// void StartRotatingInDirection(EPL_RotationDirection NewDirection, bool bStartFromBeginning);                             // [0xc64f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_RotatorComponent.StartRotating
	// void StartRotating();                                                                                                    // [0xc64f50] Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_RotatorComponent.SetShouldRotateOnBeginPlay
	// void SetShouldRotateOnBeginPlay(bool bValue);                                                                            // [0xc64a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_RotatorComponent.ResetRotation
	// void ResetRotation(EPL_RotationDirection TargetDirection);                                                               // [0xc64570] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_RotatorComponent.OnStopRotating__DelegateSignature
	// void OnStopRotating__DelegateSignature();                                                                                // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_RotatorComponent.OnStartRotating__DelegateSignature
	// void OnStartRotating__DelegateSignature();                                                                               // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_RotatorComponent.OnRotationFinished__DelegateSignature
	// void OnRotationFinished__DelegateSignature();                                                                            // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_RotatorComponent.IsRotating
	// bool IsRotating();                                                                                                       // [0xc640c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_RotatorComponent.HasReachedDestination
	// bool HasReachedDestination(EPL_RotationDirection TargetDirection);                                                       // [0xc63fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Motion.PL_AdditiveRotatorComponent
/// Size: 0x01A0 (416 bytes) (0x000190 - 0x0001A0) align 8 MaxSize: 0x01A0
class UPL_AdditiveRotatorComponent : public UPL_RotatorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0190   (0x0010)  MISSED
};

/// Struct /Script/PL_Motion.PL_AttractionParams
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FPL_AttractionParams
{ 
	unsigned char                                      UnknownData00_2[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Class /Script/PL_Motion.PL_AttractionComponent
/// Size: 0x0118 (280 bytes) (0x0000B8 - 0x000118) align 8 MaxSize: 0x0118
class UPL_AttractionComponent : public UActorComponent
{ 
public:
	float                                              MoveToTargetAcceleration;                                   // 0x00B8   (0x0004)  
	float                                              AutoCompletionDistance;                                     // 0x00BC   (0x0004)  
	float                                              InitialUpwardVelocity;                                      // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	SDK_UNDEFINED(16,635) /* FMulticastInlineDelegate */ __um(OnAttractionStarted);                                // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,636) /* FMulticastInlineDelegate */ __um(OnAttractionInterrupted);                            // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,637) /* FMulticastInlineDelegate */ __um(OnAttractionCompleted);                              // 0x00E8   (0x0010)  
	FPL_AttractionParams                               AttractionParams;                                           // 0x00F8   (0x001C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0114   (0x0004)  MISSED


	/// Functions
	// Function /Script/PL_Motion.PL_AttractionComponent.StartMovingTowardsComponent
	// void StartMovingTowardsComponent(class USceneComponent* TargetComponent);                                                // [0xc64ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_AttractionComponent.StartMovingTowardsActor
	// void StartMovingTowardsActor(class AActor* TargetActor);                                                                 // [0xc64e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_AttractionComponent.OnAttractionStarted__DelegateSignature
	// void OnAttractionStarted__DelegateSignature();                                                                           // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_AttractionComponent.OnAttractionInterrupted__DelegateSignature
	// void OnAttractionInterrupted__DelegateSignature();                                                                       // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_AttractionComponent.OnAttractionCompleted__DelegateSignature
	// void OnAttractionCompleted__DelegateSignature();                                                                         // [0x19ac1c0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PL_Motion.PL_BaseLocomotionBehavior
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_BaseLocomotionBehavior : public UObject
{ 
public:
	class UPL_LocomotionComponent*                     LocomotionComponent;                                        // 0x0028   (0x0008)  
};

/// Class /Script/PL_Motion.PL_ContainerLocomotionBehavior
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UPL_ContainerLocomotionBehavior : public UPL_BaseLocomotionBehavior
{ 
public:
	SDK_UNDEFINED(16,638) /* FMulticastInlineDelegate */ __um(OnActiveBehaviorChanged);                            // 0x0030   (0x0010)  
	float                                              TransitionDuration;                                         // 0x0040   (0x0004)  
	int32_t                                            ActiveBehaviorIndex;                                        // 0x0044   (0x0004)  
	TArray<class UPL_BaseLocomotionBehavior*>          Behaviors;                                                  // 0x0048   (0x0010)  
	class UPL_BaseLocomotionBehavior*                  ActiveBehavior;                                             // 0x0058   (0x0008)  
	class UPL_BaseLocomotionBehavior*                  PreviousBehavior;                                           // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/PL_Motion.PL_ContainerLocomotionBehavior.OnActiveBehaviorChanged__DelegateSignature
	// void OnActiveBehaviorChanged__DelegateSignature();                                                                       // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_ContainerLocomotionBehavior.GetActiveBehaviorIndex
	// int32_t GetActiveBehaviorIndex();                                                                                        // [0xc63b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_ContainerLocomotionBehavior.ChangeActiveBehavior
	// void ChangeActiveBehavior(int32_t BehaviorIndex, bool bInstantTransition, bool bFireEvents);                             // [0xc63a60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Motion.PL_ConveyorBeltComponent
/// Size: 0x0148 (328 bytes) (0x0000B8 - 0x000148) align 8 MaxSize: 0x0148
class UPL_ConveyorBeltComponent : public UActorComponent
{ 
public:
	FComponentReference                                OverlappingComponentRef;                                    // 0x00B8   (0x0028)  
	FComponentReference                                MeshComponentRef;                                           // 0x00E0   (0x0028)  
	float                                              Speed;                                                      // 0x0108   (0x0004)  
	float                                              MaterialSpeedMult;                                          // 0x010C   (0x0004)  
	FName                                              MaterialSpeedName;                                          // 0x0110   (0x0008)  
	TArray<class AActor*>                              OverlappingActors;                                          // 0x0118   (0x0010)  
	TArray<class AActor*>                              ActorsToMove;                                               // 0x0128   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0138   (0x0010)  MISSED


	/// Functions
	// Function /Script/PL_Motion.PL_ConveyorBeltComponent.OnEndOverlap
	// void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xc64310] Final|Native|Private 
	// Function /Script/PL_Motion.PL_ConveyorBeltComponent.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc640f0] Final|Native|Private|HasOutParms 
};

/// Class /Script/PL_Motion.PL_CurveEventBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_CurveEventBase : public UObject
{ 
public:
	bool                                               bIsRange;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Time;                                                       // 0x002C   (0x0004)  
	float                                              MaxTime;                                                    // 0x0030   (0x0004)  
	ECurveEventDirection                               Direction;                                                  // 0x0034   (0x0004)  
};

/// Struct /Script/PL_Motion.PL_CurveEventContext
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPL_CurveEventContext
{ 
	TWeakObjectPtr<class UObject*>                     Owner;                                                      // 0x0000   (0x0008)  
};

/// Class /Script/PL_Motion.PL_CurveEventHelper
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_CurveEventHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UPL_CurveEventBase*>                  Events;                                                     // 0x0030   (0x0010)  
	FPL_CurveEventContext                              Context;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/PL_Motion.PL_CurveTransformation
/// Size: 0x04B0 (1200 bytes) (0x000030 - 0x0004B0) align 8 MaxSize: 0x04B0
class UPL_CurveTransformation : public UCurveBase
{ 
public:
	FRichCurve                                         FloatCurves[9];                                             // 0x0030   (0x0480)  


	/// Functions
	// Function /Script/PL_Motion.PL_CurveTransformation.GetTransformValue
	// FTransform GetTransformValue(float InTime);                                                                              // [0xc63e80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Motion.PL_LocomotionComponent
/// Size: 0x0188 (392 bytes) (0x0000B8 - 0x000188) align 8 MaxSize: 0x0188
class UPL_LocomotionComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,639) /* FMulticastInlineDelegate */ __um(OnStartMoving);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,640) /* FMulticastInlineDelegate */ __um(OnStopMoving);                                       // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,641) /* FMulticastInlineDelegate */ __um(OnDestinationReached);                               // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,642) /* FMulticastInlineDelegate */ __um(OnDirectionChanged);                                 // 0x00E8   (0x0010)  
	EPL_ResetPolicy                                    ResetPolicy;                                                // 0x00F8   (0x0001)  
	bool                                               bShouldMove;                                                // 0x00F9   (0x0001)  
	EPL_LocomotionDirection                            Direction;                                                  // 0x00FA   (0x0001)  
	bool                                               bLooping;                                                   // 0x00FB   (0x0001)  
	bool                                               bAlternateDirection;                                        // 0x00FC   (0x0001)  
	bool                                               bAutoOrient;                                                // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00FE   (0x0002)  MISSED
	class UPL_BaseLocomotionBehavior*                  Behavior;                                                   // 0x0100   (0x0008)  
	FComponentReference                                TargetComponent;                                            // 0x0108   (0x0028)  
	FComponentReference                                SplinePath;                                                 // 0x0130   (0x0028)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0158   (0x0030)  MISSED


	/// Functions
	// Function /Script/PL_Motion.PL_LocomotionComponent.StopMoving
	// void StopMoving();                                                                                                       // [0xc65040] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.StartMovingInDirection
	// void StartMovingInDirection(EPL_LocomotionDirection NewDirection, bool bStartFromBeginning);                             // [0xc64d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.StartMoving
	// void StartMoving();                                                                                                      // [0xc64d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.SetSplinePathReference
	// void SetSplinePathReference(FComponentReference& SplinePath);                                                            // [0xc64c00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.SetSplinePath
	// void SetSplinePath(class AActor* PathActor, FName& SplineComponentName, bool bResetPosition);                            // [0xc64ae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.SetShouldMoveOnBeginPlay
	// void SetShouldMoveOnBeginPlay(bool bValue);                                                                              // [0xc649c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.ResetPosition
	// void ResetPosition(EPL_LocomotionDirection TargetDirection);                                                             // [0xc644f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_LocomotionComponent.OnStopMoving__DelegateSignature
	// void OnStopMoving__DelegateSignature(float CurrentPosition);                                                             // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_LocomotionComponent.OnStartMoving__DelegateSignature
	// void OnStartMoving__DelegateSignature(float CurrentPosition);                                                            // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_LocomotionComponent.OnDirectionChanged__DelegateSignature
	// void OnDirectionChanged__DelegateSignature(EPL_LocomotionDirection CurrentDirection);                                    // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_LocomotionComponent.OnDestinationReached__DelegateSignature
	// void OnDestinationReached__DelegateSignature(float CurrentPosition);                                                     // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_LocomotionComponent.IsMoving
	// bool IsMoving();                                                                                                         // [0xc64090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_LocomotionComponent.HasReachedDestination
	// bool HasReachedDestination(EPL_LocomotionDirection TargetDirection);                                                     // [0xc63f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_LocomotionComponent.GetSplineComponent
	// class USplineComponent* GetSplineComponent();                                                                            // [0xc63e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_LocomotionComponent.GetDistanceAlongPathNormalized
	// float GetDistanceAlongPathNormalized();                                                                                  // [0xc63c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_LocomotionComponent.GetDistanceAlongPath
	// float GetDistanceAlongPath();                                                                                            // [0xc63c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_LocomotionComponent.GetCurrentDirection
	// EPL_LocomotionDirection GetCurrentDirection();                                                                           // [0xc63bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_LocomotionComponent.AccessBehavior
	// class UPL_BaseLocomotionBehavior* AccessBehavior();                                                                      // [0xc63a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Motion.PL_MotionPersistenceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_MotionPersistenceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Motion.PL_MotionUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_MotionUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Motion.PL_PositionOverTimeLocomotionBehavior
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UPL_PositionOverTimeLocomotionBehavior : public UPL_BaseLocomotionBehavior
{ 
public:
	class UCurveFloat*                                 MotionCurve;                                                // 0x0030   (0x0008)  
	bool                                               bUseRandomStartingTimeOffset;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              StartingTimeOffsetRangeMin;                                 // 0x003C   (0x0004)  
	float                                              StartingTimeOffsetRangeMax;                                 // 0x0040   (0x0004)  
	float                                              StartingTimeOffset;                                         // 0x0044   (0x0004)  
	TArray<class UPL_CurveEventBase*>                  CurveEvents;                                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
	class UPL_CurveEventHelper*                        CurveEventHelper;                                           // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/PL_Motion.PL_PositionOverTimeLocomotionBehavior.SetStartingTimeOffset
	// void SetStartingTimeOffset(float NormalizedOffset);                                                                      // [0xc64cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PL_Motion.PL_PressurePlateComponent
/// Size: 0x0250 (592 bytes) (0x0000B8 - 0x000250) align 8 MaxSize: 0x0250
class UPL_PressurePlateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x00B8   (0x0010)  MISSED
	SDK_UNDEFINED(16,643) /* FMulticastInlineDelegate */ __um(OnDropInit);                                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,644) /* FMulticastInlineDelegate */ __um(OnDroppingStopped);                                  // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,645) /* FMulticastInlineDelegate */ __um(OnFullyDropped);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,646) /* FMulticastInlineDelegate */ __um(OnElevationInit);                                    // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,647) /* FMulticastInlineDelegate */ __um(OnElevationStopped);                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,648) /* FMulticastInlineDelegate */ __um(OnRestingStopped);                                   // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,649) /* FMulticastInlineDelegate */ __um(OnFullyElevated);                                    // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,650) /* FMulticastInlineDelegate */ __um(OnDisabled);                                         // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,651) /* FMulticastInlineDelegate */ __um(OnDisplaced);                                        // 0x0148   (0x0010)  
	EPL_ResetPolicy                                    ResetPolicy;                                                // 0x0158   (0x0001)  
	EPL_AlleviatePressureBehavior                      AlleviatePressureBehavior;                                  // 0x0159   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x015A   (0x0002)  MISSED
	float                                              DisplacementFactor;                                         // 0x015C   (0x0004)  
	float                                              RestingPosition;                                            // 0x0160   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0164   (0x0004)  MISSED
	class UCurveFloat*                                 DropSpeedCurve;                                             // 0x0168   (0x0008)  
	class UCurveFloat*                                 ElevationSpeedCurve;                                        // 0x0170   (0x0008)  
	TArray<FComponentReference>                        ActuationComponents;                                        // 0x0178   (0x0010)  
	FComponentReference                                TargetComponent;                                            // 0x0188   (0x0028)  
	FComponentReference                                SplineComponent;                                            // 0x01B0   (0x0028)  
	FGameplayTagContainer                              AcceptedImpulseTags;                                        // 0x01D8   (0x0020)  
	float                                              ImpulseModifier;                                            // 0x01F8   (0x0004)  
	bool                                               bCanImpulseExceedMaxSpeed;                                  // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x01FD   (0x0003)  MISSED
	float                                              ImpulseDuration;                                            // 0x0200   (0x0004)  
	bool                                               bIsInteractionEnabled;                                      // 0x0204   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0205   (0x0003)  MISSED
	class UPL_Conditional*                             InstigationCondition;                                       // 0x0208   (0x0008)  
	class UPL_CurveTransformation*                     DropInitAnimation;                                          // 0x0210   (0x0008)  
	class UPL_CurveTransformation*                     DropCompleteAnimation;                                      // 0x0218   (0x0008)  
	class UPL_PulleyController*                        Pulley;                                                     // 0x0220   (0x0008)  
	class UPL_PressurePlateStateParams*                StateParams;                                                // 0x0228   (0x0008)  
	class UPL_FiniteStateMachine*                      StateMachine;                                               // 0x0230   (0x0008)  
	SDK_UNDEFINED(16,652) /* TArray<TWeakObjectPtr<UObject*>> */ __um(Instigators);                                // 0x0238   (0x0010)  
	bool                                               bIsLoadingPersistentState;                                  // 0x0248   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x0249   (0x0007)  MISSED


	/// Functions
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateRestingStateTransition
	// bool ValidateRestingStateTransition();                                                                                   // [0xc651d0] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateInteractionEnabledRestingStateTransition
	// bool ValidateInteractionEnabledRestingStateTransition();                                                                 // [0xc651a0] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateInteractionEnabledIdleElevatedStateTransition
	// bool ValidateInteractionEnabledIdleElevatedStateTransition();                                                            // [0xc65170] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateInteractionEnabledIdleDroppedStateTransition
	// bool ValidateInteractionEnabledIdleDroppedStateTransition();                                                             // [0xc65140] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateInteractionEnabledElevationInitStateTransition
	// bool ValidateInteractionEnabledElevationInitStateTransition();                                                           // [0xc65110] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateInteractionEnabledDroppingStateTransition
	// bool ValidateInteractionEnabledDroppingStateTransition();                                                                // [0xc650e0] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateElevationStateTransition
	// bool ValidateElevationStateTransition();                                                                                 // [0xc650b0] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.ValidateElevationOrRestingStateTransition
	// bool ValidateElevationOrRestingStateTransition();                                                                        // [0xc65080] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetRestingPosition
	// void SetRestingPosition(float position);                                                                                 // [0xc64940] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool Value);                                                                                // [0xc648b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetElevationSpeedCurve
	// void SetElevationSpeedCurve(class UCurveFloat* Value);                                                                   // [0xc64820] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetDropSpeedCurve
	// void SetDropSpeedCurve(class UCurveFloat* Value);                                                                        // [0xc64790] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetDropInitAnimation
	// void SetDropInitAnimation(class UPL_CurveTransformation* Value);                                                         // [0xc64700] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetDropCompleteAnimation
	// void SetDropCompleteAnimation(class UPL_CurveTransformation* Value);                                                     // [0xc64670] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.SetDisplacementFactor
	// void SetDisplacementFactor(float Factor);                                                                                // [0xc645f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.OnStateEntered__DelegateSignature
	// void OnStateEntered__DelegateSignature();                                                                                // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.OnStateChanged
	// void OnStateChanged(char NewStateID);                                                                                    // [0xc64470] Final|Native|Protected 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.OnDisplaced__DelegateSignature
	// void OnDisplaced__DelegateSignature(class UPL_PressurePlateComponent* PressurePlate, float DisplacementFactor);          // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0xc64060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetRestingPosition
	// float GetRestingPosition();                                                                                              // [0xc63e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetElevationSpeedCurve
	// class UCurveFloat* GetElevationSpeedCurve();                                                                             // [0xc63d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetDropSpeedCurve
	// class UCurveFloat* GetDropSpeedCurve();                                                                                  // [0xc63d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetDropInitAnimation
	// class UPL_CurveTransformation* GetDropInitAnimation();                                                                   // [0xc63cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetDropCompleteAnimation
	// class UPL_CurveTransformation* GetDropCompleteAnimation();                                                               // [0xc63cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetDisplacementFactor
	// float GetDisplacementFactor();                                                                                           // [0xc63c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetCurrentState
	// EPL_PressurePlateStates GetCurrentState();                                                                               // [0xc63c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_Motion.PL_PressurePlateComponent.GetAlleviatePressureBehavior
	// EPL_AlleviatePressureBehavior GetAlleviatePressureBehavior();                                                            // [0xc63ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Motion.PL_PressurePlateStateDisabled
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateDisabled : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateDropComplete
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateDropComplete : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateDropInit
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateDropInit : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateDropping
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateDropping : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateDroppingStopped
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateDroppingStopped : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateElevating
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateElevating : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateElevationComplete
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateElevationComplete : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateElevationInit
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateElevationInit : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateElevationStopped
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateElevationStopped : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateIdleDropped
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateIdleDropped : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateIdleElevated
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateIdleElevated : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateIdleMidway
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UPL_PressurePlateStateIdleMidway : public UPL_FsmState
{ 
public:
};

/// Class /Script/PL_Motion.PL_PressurePlateStateParams
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 16 MaxSize: 0x00A0
class UPL_PressurePlateStateParams : public UObject
{ 
public:
	TWeakObjectPtr<class UPL_PressurePlateComponent*>  PressurePlateComponent;                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	float                                              DistanceTraveled;                                           // 0x0050   (0x0004)  
	float                                              Duration;                                                   // 0x0054   (0x0004)  
	float                                              TargetVelocity;                                             // 0x0058   (0x0004)  
	float                                              VelocityModifier;                                           // 0x005C   (0x0004)  
	FTransform                                         InitialTransform;                                           // 0x0060   (0x0030)  
	float                                              StateEnteredTimestamp;                                      // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Class /Script/PL_Motion.PL_PulleyController
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UPL_PulleyController : public UObject
{ 
public:
	FComponentReference                                LinkedPressurePlate;                                        // 0x0028   (0x0028)  
};

/// Class /Script/PL_Motion.PL_SpeedOverPositionLocomotionBehavior
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UPL_SpeedOverPositionLocomotionBehavior : public UPL_BaseLocomotionBehavior
{ 
public:
	class UCurveFloat*                                 MotionCurve;                                                // 0x0030   (0x0008)  
	float                                              PathOffset;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/PL_Motion.PL_SpeedOverProximityLocomotionBehaviour
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UPL_SpeedOverProximityLocomotionBehaviour : public UPL_BaseLocomotionBehavior
{ 
public:
	class UCurveFloat*                                 MotionCurve;                                                // 0x0030   (0x0008)  
	float                                              PathOffset;                                                 // 0x0038   (0x0004)  
	EPL_ProximityMode                                  ProximityMode;                                              // 0x003C   (0x0001)  
	EPL_SpeedOverProximityTarget                       ProximityTarget;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	class AActor*                                      CustomProximityTarget;                                      // 0x0040   (0x0008)  
};

/// Class /Script/PL_Motion.PL_SplineComponent
/// Size: 0x05D0 (1488 bytes) (0x000570 - 0x0005D0) align 16 MaxSize: 0x05D0
class UPL_SplineComponent : public USplineComponent
{ 
public:
	SDK_UNDEFINED(16,653) /* FMulticastInlineDelegate */ __um(OnPointPassed);                                      // 0x0570   (0x0010)  
	SDK_UNDEFINED(16,654) /* FMulticastInlineDelegate */ __um(OnRangeEntered);                                     // 0x0580   (0x0010)  
	SDK_UNDEFINED(16,655) /* FMulticastInlineDelegate */ __um(OnRangeLeft);                                        // 0x0590   (0x0010)  
	class UPL_SplineMetadata*                          MetaData;                                                   // 0x05A0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x05A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/PL_Motion.PL_SplineComponent.GetIndex
	// int32_t GetIndex(FGameplayTag& PointTag);                                                                                // [0xc63d80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Motion.PL_SplineMetadata
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_SplineMetadata : public USplineMetadata
{ 
public:
	TArray<class UPL_SplinePointEntry*>                Points;                                                     // 0x0028   (0x0010)  
	TArray<class UPL_SplineRangeEntry*>                Ranges;                                                     // 0x0038   (0x0010)  
};

/// Class /Script/PL_Motion.PL_SplinePointContext
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_SplinePointContext : public UObject
{ 
public:
	FGameplayTag                                       Tag;                                                        // 0x0028   (0x0008)  
	float                                              DistanceOnSpline;                                           // 0x0030   (0x0004)  
	FVector                                            ForwardDirection;                                           // 0x0034   (0x000C)  
};

/// Class /Script/PL_Motion.PL_SplinePointEntry
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_SplinePointEntry : public UObject
{ 
public:
	FGameplayTag                                       Tag;                                                        // 0x0028   (0x0008)  
	class UPL_SplinePointContext*                      Context;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/PL_Motion.PL_SplineRangeContext
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_SplineRangeContext : public UObject
{ 
public:
	FGameplayTag                                       Tag;                                                        // 0x0028   (0x0008)  
};

/// Class /Script/PL_Motion.PL_SplineRangeEntry
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UPL_SplineRangeEntry : public UObject
{ 
public:
	FGameplayTag                                       RangeTag;                                                   // 0x0028   (0x0008)  
	FGameplayTag                                       StartPoint;                                                 // 0x0030   (0x0008)  
	FGameplayTag                                       EndPoint;                                                   // 0x0038   (0x0008)  
	class UPL_SplineRangeContext*                      Context;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/PL_Motion.PL_SplineRangeProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SplineRangeProviderInterface : public UInterface
{ 
public:
};

/// Struct /Script/PL_Motion.PL_PersistentLocomotionBehaviorData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPL_PersistentLocomotionBehaviorData
{ 
	float                                              Progress;                                                   // 0x0000   (0x0004)  
	int32_t                                            ActiveBehaviorIndex;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/PL_Motion.PL_PersistentLocomotionData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPL_PersistentLocomotionData
{ 
	EPL_LocomotionDirection                            Direction;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              NormalizedPosition;                                         // 0x0004   (0x0004)  
	bool                                               bIsMoving;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FPL_PersistentLocomotionBehaviorData               BehaviorData;                                               // 0x000C   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TWeakObjectPtr<class USplineComponent*>            SplineComponent;                                            // 0x0018   (0x0008)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0020   (0x0020)  MISSED
};

/// Struct /Script/PL_Motion.PL_PersistentPressurePlateData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FPL_PersistentPressurePlateData
{ 
	char                                               CurrentState;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DistanceTraveled;                                           // 0x0004   (0x0004)  
	float                                              Duration;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0010   (0x0030)  
};

/// Struct /Script/PL_Motion.PL_PersistentRotatorData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FPL_PersistentRotatorData
{ 
	EPL_RotationDirection                              Direction;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PlayBackPosition;                                           // 0x0004   (0x0004)  
	bool                                               bIsRotating;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FRotator                                           StartRotation;                                              // 0x000C   (0x000C)  
};

/// Struct /Script/PL_Motion.PL_PersistentMotionData
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FPL_PersistentMotionData
{ 
	SDK_UNDEFINED(80,656) /* TMap<TWeakObjectPtr<UPL_LocomotionComponent*>, FPL_PersistentLocomotionData> */ __um(LocomotionData); // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,657) /* TMap<TWeakObjectPtr<UPL_PressurePlateComponent*>, FPL_PersistentPressurePlateData> */ __um(PressurePlateData); // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,658) /* TMap<TWeakObjectPtr<UPL_RotatorComponent*>, FPL_PersistentRotatorData> */ __um(RotatorData); // 0x00A0   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_RotatorComponent) == 0x0190); // 400 bytes (0x0000B8 - 0x000190)
static_assert(sizeof(UPL_AdditiveRotatorComponent) == 0x01A0); // 416 bytes (0x000190 - 0x0001A0)
static_assert(sizeof(FPL_AttractionParams) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UPL_AttractionComponent) == 0x0118); // 280 bytes (0x0000B8 - 0x000118)
static_assert(sizeof(UPL_BaseLocomotionBehavior) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_ContainerLocomotionBehavior) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPL_ConveyorBeltComponent) == 0x0148); // 328 bytes (0x0000B8 - 0x000148)
static_assert(sizeof(UPL_CurveEventBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FPL_CurveEventContext) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UPL_CurveEventHelper) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPL_CurveTransformation) == 0x04B0); // 1200 bytes (0x000030 - 0x0004B0)
static_assert(sizeof(UPL_LocomotionComponent) == 0x0188); // 392 bytes (0x0000B8 - 0x000188)
static_assert(sizeof(UPL_MotionPersistenceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_MotionUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PositionOverTimeLocomotionBehavior) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPL_PressurePlateComponent) == 0x0250); // 592 bytes (0x0000B8 - 0x000250)
static_assert(sizeof(UPL_PressurePlateStateDisabled) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateDropComplete) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateDropInit) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateDropping) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateDroppingStopped) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateElevating) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateElevationComplete) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateElevationInit) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateElevationStopped) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateIdleDropped) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateIdleElevated) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateIdleMidway) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPL_PressurePlateStateParams) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UPL_PulleyController) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UPL_SpeedOverPositionLocomotionBehavior) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPL_SpeedOverProximityLocomotionBehaviour) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPL_SplineComponent) == 0x05D0); // 1488 bytes (0x000570 - 0x0005D0)
static_assert(sizeof(UPL_SplineMetadata) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPL_SplinePointContext) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_SplinePointEntry) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_SplineRangeContext) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_SplineRangeEntry) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPL_SplineRangeProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_PersistentLocomotionBehaviorData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_PersistentLocomotionData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPL_PersistentPressurePlateData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPL_PersistentRotatorData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_PersistentMotionData) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(offsetof(UPL_RotatorComponent, ResetPolicy) == 0x0108);
static_assert(offsetof(UPL_RotatorComponent, Direction) == 0x010A);
static_assert(offsetof(UPL_RotatorComponent, RotationCurve) == 0x0118);
static_assert(offsetof(UPL_RotatorComponent, TargetComponent) == 0x0128);
static_assert(offsetof(UPL_RotatorComponent, CurveEvents) == 0x0150);
static_assert(offsetof(UPL_RotatorComponent, CurveEventHelper) == 0x0188);
static_assert(offsetof(UPL_AttractionComponent, AttractionParams) == 0x00F8);
static_assert(offsetof(UPL_BaseLocomotionBehavior, LocomotionComponent) == 0x0028);
static_assert(offsetof(UPL_ContainerLocomotionBehavior, Behaviors) == 0x0048);
static_assert(offsetof(UPL_ContainerLocomotionBehavior, ActiveBehavior) == 0x0058);
static_assert(offsetof(UPL_ContainerLocomotionBehavior, PreviousBehavior) == 0x0060);
static_assert(offsetof(UPL_ConveyorBeltComponent, OverlappingComponentRef) == 0x00B8);
static_assert(offsetof(UPL_ConveyorBeltComponent, MeshComponentRef) == 0x00E0);
static_assert(offsetof(UPL_ConveyorBeltComponent, MaterialSpeedName) == 0x0110);
static_assert(offsetof(UPL_ConveyorBeltComponent, OverlappingActors) == 0x0118);
static_assert(offsetof(UPL_ConveyorBeltComponent, ActorsToMove) == 0x0128);
static_assert(offsetof(UPL_CurveEventBase, Direction) == 0x0034);
static_assert(offsetof(FPL_CurveEventContext, Owner) == 0x0000);
static_assert(offsetof(UPL_CurveEventHelper, Events) == 0x0030);
static_assert(offsetof(UPL_CurveEventHelper, Context) == 0x0040);
static_assert(offsetof(UPL_CurveTransformation, FloatCurves) == 0x0030);
static_assert(offsetof(UPL_LocomotionComponent, ResetPolicy) == 0x00F8);
static_assert(offsetof(UPL_LocomotionComponent, Direction) == 0x00FA);
static_assert(offsetof(UPL_LocomotionComponent, Behavior) == 0x0100);
static_assert(offsetof(UPL_LocomotionComponent, TargetComponent) == 0x0108);
static_assert(offsetof(UPL_LocomotionComponent, SplinePath) == 0x0130);
static_assert(offsetof(UPL_PositionOverTimeLocomotionBehavior, MotionCurve) == 0x0030);
static_assert(offsetof(UPL_PositionOverTimeLocomotionBehavior, CurveEvents) == 0x0048);
static_assert(offsetof(UPL_PositionOverTimeLocomotionBehavior, CurveEventHelper) == 0x0068);
static_assert(offsetof(UPL_PressurePlateComponent, ResetPolicy) == 0x0158);
static_assert(offsetof(UPL_PressurePlateComponent, AlleviatePressureBehavior) == 0x0159);
static_assert(offsetof(UPL_PressurePlateComponent, DropSpeedCurve) == 0x0168);
static_assert(offsetof(UPL_PressurePlateComponent, ElevationSpeedCurve) == 0x0170);
static_assert(offsetof(UPL_PressurePlateComponent, ActuationComponents) == 0x0178);
static_assert(offsetof(UPL_PressurePlateComponent, TargetComponent) == 0x0188);
static_assert(offsetof(UPL_PressurePlateComponent, SplineComponent) == 0x01B0);
static_assert(offsetof(UPL_PressurePlateComponent, AcceptedImpulseTags) == 0x01D8);
static_assert(offsetof(UPL_PressurePlateComponent, InstigationCondition) == 0x0208);
static_assert(offsetof(UPL_PressurePlateComponent, DropInitAnimation) == 0x0210);
static_assert(offsetof(UPL_PressurePlateComponent, DropCompleteAnimation) == 0x0218);
static_assert(offsetof(UPL_PressurePlateComponent, Pulley) == 0x0220);
static_assert(offsetof(UPL_PressurePlateComponent, StateParams) == 0x0228);
static_assert(offsetof(UPL_PressurePlateComponent, StateMachine) == 0x0230);
static_assert(offsetof(UPL_PressurePlateStateParams, PressurePlateComponent) == 0x0028);
static_assert(offsetof(UPL_PressurePlateStateParams, InitialTransform) == 0x0060);
static_assert(offsetof(UPL_PulleyController, LinkedPressurePlate) == 0x0028);
static_assert(offsetof(UPL_SpeedOverPositionLocomotionBehavior, MotionCurve) == 0x0030);
static_assert(offsetof(UPL_SpeedOverProximityLocomotionBehaviour, MotionCurve) == 0x0030);
static_assert(offsetof(UPL_SpeedOverProximityLocomotionBehaviour, ProximityMode) == 0x003C);
static_assert(offsetof(UPL_SpeedOverProximityLocomotionBehaviour, ProximityTarget) == 0x003D);
static_assert(offsetof(UPL_SpeedOverProximityLocomotionBehaviour, CustomProximityTarget) == 0x0040);
static_assert(offsetof(UPL_SplineComponent, MetaData) == 0x05A0);
static_assert(offsetof(UPL_SplineMetadata, Points) == 0x0028);
static_assert(offsetof(UPL_SplineMetadata, Ranges) == 0x0038);
static_assert(offsetof(UPL_SplinePointContext, Tag) == 0x0028);
static_assert(offsetof(UPL_SplinePointContext, ForwardDirection) == 0x0034);
static_assert(offsetof(UPL_SplinePointEntry, Tag) == 0x0028);
static_assert(offsetof(UPL_SplinePointEntry, Context) == 0x0030);
static_assert(offsetof(UPL_SplineRangeContext, Tag) == 0x0028);
static_assert(offsetof(UPL_SplineRangeEntry, RangeTag) == 0x0028);
static_assert(offsetof(UPL_SplineRangeEntry, StartPoint) == 0x0030);
static_assert(offsetof(UPL_SplineRangeEntry, EndPoint) == 0x0038);
static_assert(offsetof(UPL_SplineRangeEntry, Context) == 0x0040);
static_assert(offsetof(FPL_PersistentLocomotionData, Direction) == 0x0000);
static_assert(offsetof(FPL_PersistentLocomotionData, BehaviorData) == 0x000C);
static_assert(offsetof(FPL_PersistentLocomotionData, SplineComponent) == 0x0018);
static_assert(offsetof(FPL_PersistentPressurePlateData, InitialTransform) == 0x0010);
static_assert(offsetof(FPL_PersistentRotatorData, Direction) == 0x0000);
static_assert(offsetof(FPL_PersistentRotatorData, StartRotation) == 0x000C);
