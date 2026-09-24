
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

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0580 (1408 bytes) (0x000518 - 0x000580) align 16 MaxSize: 0x0580
class AArchVisCharacter : public ACharacter
{ 
public:
	FString                                            LookUpAxisName;                                             // 0x0518   (0x0010)  
	FString                                            LookUpAtRateAxisName;                                       // 0x0528   (0x0010)  
	FString                                            TurnAxisName;                                               // 0x0538   (0x0010)  
	FString                                            TurnAtRateAxisName;                                         // 0x0548   (0x0010)  
	FString                                            MoveForwardAxisName;                                        // 0x0558   (0x0010)  
	FString                                            MoveRightAxisName;                                          // 0x0568   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x0578   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x057C   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0B50 (2896 bytes) (0x000B00 - 0x000B50) align 16 MaxSize: 0x0B50
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0B00   (0x000C)  
	FRotator                                           RotationalDeceleration;                                     // 0x0B0C   (0x000C)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0B18   (0x000C)  
	float                                              MinPitch;                                                   // 0x0B24   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0B28   (0x0004)  
	float                                              WalkingFriction;                                            // 0x0B2C   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0B30   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0B34   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0B38   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AArchVisCharacter) == 0x0580); // 1408 bytes (0x000518 - 0x000580)
static_assert(sizeof(UArchVisCharMovementComponent) == 0x0B50); // 2896 bytes (0x000B00 - 0x000B50)
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x0518);
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x0528);
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x0538);
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x0548);
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x0558);
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x0568);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x0B00);
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x0B0C);
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x0B18);
