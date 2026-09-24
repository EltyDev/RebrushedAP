
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

/// Enum /Script/PL_BuildInfo.EPL_BuildConfig
/// Size: 0x01 (1 bytes)
enum class EPL_BuildConfig : uint8_t
{
	EPL_BuildConfig__Unknown                                                         = 0,
	EPL_BuildConfig__Debug                                                           = 1,
	EPL_BuildConfig__Development                                                     = 2,
	EPL_BuildConfig__Test                                                            = 3,
	EPL_BuildConfig__Shipping                                                        = 4
};

/// Enum /Script/PL_BuildInfo.EPL_TargetPlatform
/// Size: 0x01 (1 bytes)
enum class EPL_TargetPlatform : uint8_t
{
	EPL_TargetPlatform__Unknown                                                      = 0,
	EPL_TargetPlatform__Win64                                                        = 1,
	EPL_TargetPlatform__Mac                                                          = 2,
	EPL_TargetPlatform__Linux                                                        = 3,
	EPL_TargetPlatform__PS4                                                          = 4,
	EPL_TargetPlatform__XBoxOne                                                      = 5,
	EPL_TargetPlatform__Switch                                                       = 6,
	EPL_TargetPlatform__Stadia                                                       = 7,
	EPL_TargetPlatform__PS5                                                          = 8,
	EPL_TargetPlatform__XBoxSeriesX                                                  = 9
};

/// Class /Script/PL_BuildInfo.PL_BuildInfoUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_BuildInfoUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetTargetPlatformString
	// FText GetTargetPlatformString();                                                                                         // [0xac0e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetTargetPlatform
	// EPL_TargetPlatform GetTargetPlatform();                                                                                  // [0xac0e00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetPerforceStream
	// FString GetPerforceStream();                                                                                             // [0xac0dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetPerforceEngineChangelist
	// FString GetPerforceEngineChangelist();                                                                                   // [0xac0d80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetPerforceChangelist
	// FString GetPerforceChangelist();                                                                                         // [0xac0d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetBuildTimestamp
	// FString GetBuildTimestamp();                                                                                             // [0xac0d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetBuildConfigString
	// FText GetBuildConfigString();                                                                                            // [0xac0cc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_BuildInfo.PL_BuildInfoUtils.GetBuildConfig
	// EPL_BuildConfig GetBuildConfig();                                                                                        // [0xac0c90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UPL_BuildInfoUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
