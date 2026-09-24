
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/PL_Steam.PL_SteamSubsystem
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_SteamSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/PL_Steam.PL_SteamUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_SteamUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Steam.PL_SteamUtils.IsSteamOverlayOpen
	// bool IsSteamOverlayOpen();                                                                                               // [0x84e960] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PL_Steam.PL_SteamUtils.IsRunningOnSteamDeck
	// bool IsRunningOnSteamDeck();                                                                                             // [0x84e930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UPL_SteamSubsystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_SteamUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
