
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_PhotoMode

#pragma pack(push, 0x1)

/// Class /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_ForceFXAA.BP_Filter_Setting_ForceFXAA_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_Filter_Setting_ForceFXAA_C : public UPL_PhotoModeFilter_PostProcessSettings
{ 
public:
	int32_t                                            Cached_AntiAliasingQuality;                                 // 0x0040   (0x0004)  


	/// Functions
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_ForceFXAA.BP_Filter_Setting_ForceFXAA_C.RemoveSetting
	// FPostProcessSettings RemoveSetting(FPostProcessSettings& InOutPostProcessSettings);                                      // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_ForceFXAA.BP_Filter_Setting_ForceFXAA_C.ApplySetting
	// FPostProcessSettings ApplySetting(FPostProcessSettings& InOutPostProcessSettings);                                       // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_DisableSSAO.BP_Filter_Setting_DisableSSAO_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_Filter_Setting_DisableSSAO_C : public UPL_PhotoModeFilter_PostProcessSettings
{ 
public:


	/// Functions
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_DisableSSAO.BP_Filter_Setting_DisableSSAO_C.RemoveSetting
	// FPostProcessSettings RemoveSetting(FPostProcessSettings& InOutPostProcessSettings);                                      // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_DisableSSAO.BP_Filter_Setting_DisableSSAO_C.ApplySetting
	// FPostProcessSettings ApplySetting(FPostProcessSettings& InOutPostProcessSettings);                                       // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_PhotoMode/Filters/Mosaic/BP_Filter_Mosaic_FX.BP_Filter_Mosaic_FX_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Mosaic_FX_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Mosaic/BP_Filter_Mosaic.BP_Filter_Mosaic_C
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBP_Filter_Mosaic_C : public UPL_PhotoModeFilter_Combined
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Pencil/BP_Filter_Pencil_FX.BP_Filter_Pencil_FX_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Pencil_FX_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Pencil/BP_Filter_Pencil.BP_Filter_Pencil_C
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBP_Filter_Pencil_C : public UPL_PhotoModeFilter_Combined
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Sepia/BP_Filter_Sepia.BP_Filter_Sepia_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Sepia_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Generic/BP_Filter_LUT.BP_Filter_LUT_C
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_LUT_C : public UPL_PhotoModeFilter_PostProcessSettings
{ 
public:
	class UTexture*                                    Color_Grading_Lut;                                          // 0x0040   (0x0008)  


	/// Functions
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_LUT.BP_Filter_LUT_C.RemoveSetting
	// FPostProcessSettings RemoveSetting(FPostProcessSettings& InOutPostProcessSettings);                                      // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_LUT.BP_Filter_LUT_C.ApplySetting
	// FPostProcessSettings ApplySetting(FPostProcessSettings& InOutPostProcessSettings);                                       // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_PhotoMode/Filters/Sunset/BP_Filter_Sunset.BP_Filter_Sunset_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Sunset_C : public UBP_Filter_LUT_C
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_DisableAntiAliasing.BP_Filter_Setting_DisableAntiAliasing_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_Filter_Setting_DisableAntiAliasing_C : public UPL_PhotoModeFilter_PostProcessSettings
{ 
public:
	int32_t                                            Cached_AntiAliasingQuality;                                 // 0x0040   (0x0004)  


	/// Functions
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_DisableAntiAliasing.BP_Filter_Setting_DisableAntiAliasing_C.RemoveSetting
	// FPostProcessSettings RemoveSetting(FPostProcessSettings& InOutPostProcessSettings);                                      // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/Filters/Generic/BP_Filter_Setting_DisableAntiAliasing.BP_Filter_Setting_DisableAntiAliasing_C.ApplySetting
	// FPostProcessSettings ApplySetting(FPostProcessSettings& InOutPostProcessSettings);                                       // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_PhotoMode/Filters/Retro/BP_Filter_Retro_FX.BP_Filter_Retro_FX_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Retro_FX_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Retro/BP_Filter_Retro.BP_Filter_Retro_C
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBP_Filter_Retro_C : public UPL_PhotoModeFilter_Combined
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Generic/BP_Filter_Saturation.BP_Filter_Saturation_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Saturation_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Toon/BP_Filter_Toon_FX.BP_Filter_Toon_FX_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Toon_FX_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Toon/BP_Filter_Toon.BP_Filter_Toon_C
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBP_Filter_Toon_C : public UPL_PhotoModeFilter_Combined
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Fisheye/BP_Filter_Fisheye.BP_Filter_Fisheye_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Fisheye_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/Underwater/BP_Filter_Underwater.BP_Filter_Underwater_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_Underwater_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/BlackAndWhite/BP_Filter_BlackAndWhite.BP_Filter_BlackAndWhite_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_BlackAndWhite_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/RoyalPurple/BP_Filter_RoyalPurple_Parameters.BP_Filter_RoyalPurple_Parameters_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_Filter_RoyalPurple_Parameters_C : public UPL_PhotoModeFilter_PostProcessSettings
{ 
public:


	/// Functions
	// Function /PL_PhotoMode/Filters/RoyalPurple/BP_Filter_RoyalPurple_Parameters.BP_Filter_RoyalPurple_Parameters_C.RemoveSetting
	// FPostProcessSettings RemoveSetting(FPostProcessSettings& InOutPostProcessSettings);                                      // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/Filters/RoyalPurple/BP_Filter_RoyalPurple_Parameters.BP_Filter_RoyalPurple_Parameters_C.ApplySetting
	// FPostProcessSettings ApplySetting(FPostProcessSettings& InOutPostProcessSettings);                                       // [0x19ac1c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_PhotoMode/Filters/RoyalPurple/BP_Filter_RoyalPurple_FX.BP_Filter_RoyalPurple_FX_C
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UBP_Filter_RoyalPurple_FX_C : public UPL_PhotoModeFilter_PostProcess
{ 
public:
};

/// Class /PL_PhotoMode/Filters/RoyalPurple/BP_RoyalPurple.BP_RoyalPurple_C
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBP_RoyalPurple_C : public UPL_PhotoModeFilter_Combined
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_Filter_Setting_ForceFXAA_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UBP_Filter_Setting_DisableSSAO_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_Filter_Mosaic_FX_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Mosaic_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Filter_Pencil_FX_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Pencil_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Filter_Sepia_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_LUT_C) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UBP_Filter_Sunset_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Setting_DisableAntiAliasing_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UBP_Filter_Retro_FX_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Retro_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Filter_Saturation_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Toon_FX_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Toon_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Filter_Fisheye_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_Underwater_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_BlackAndWhite_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_Filter_RoyalPurple_Parameters_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_Filter_RoyalPurple_FX_C) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UBP_RoyalPurple_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(offsetof(UBP_Filter_LUT_C, Color_Grading_Lut) == 0x0040);
