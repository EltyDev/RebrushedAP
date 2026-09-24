
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

/// Enum /Script/XeSSBlueprint.EXeSSQualityMode
/// Size: 0x01 (1 bytes)
enum class EXeSSQualityMode : uint8_t
{
	EXeSSQualityMode__Off                                                            = 0,
	EXeSSQualityMode__UltraPerformance                                               = 1,
	EXeSSQualityMode__Performance                                                    = 2,
	EXeSSQualityMode__Balanced                                                       = 3,
	EXeSSQualityMode__Quality                                                        = 4,
	EXeSSQualityMode__UltraQuality                                                   = 5,
	EXeSSQualityMode__UltraQualityPlus                                               = 6,
	EXeSSQualityMode__AntiAliasing                                                   = 7
};

/// Class /Script/XeSSBlueprint.XeSSBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	// void SetXeSSQualityMode(EXeSSQualityMode QualityMode);                                                                   // [0x126c100] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	// bool IsXeSSSupported();                                                                                                  // [0x126c0d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	// bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);                               // [0x126bff0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	// EXeSSQualityMode GetXeSSQualityMode();                                                                                   // [0x126bfc0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	// TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();                                                                 // [0x126bf40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	// EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);                                                  // [0x126bec0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UXeSSBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
