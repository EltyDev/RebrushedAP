
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

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x08B0 (2224 bytes) (0x000870 - 0x0008B0) align 16 MaxSize: 0x08B0
class UAudioCurveSourceComponent : public UAudioComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0870   (0x0008)  MISSED
	FName                                              CurveSourceBindingName;                                     // 0x0878   (0x0008)  
	float                                              CurveSyncOffset;                                            // 0x0880   (0x0004)  
	unsigned char                                      UnknownData01_7[0x2C];                                      // 0x0884   (0x002C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioCurveSourceComponent) == 0x08B0); // 2224 bytes (0x000870 - 0x0008B0)
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x0878);
