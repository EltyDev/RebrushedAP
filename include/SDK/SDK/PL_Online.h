
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/PL_Online.EPL_ActivityStatus
/// Size: 0x01 (1 bytes)
enum class EPL_ActivityStatus : uint8_t
{
	EPL_ActivityStatus__NotStarted                                                   = 0,
	EPL_ActivityStatus__InProgress                                                   = 1,
	EPL_ActivityStatus__Completed                                                    = 2,
	EPL_ActivityStatus__Failed                                                       = 3
};

/// Class /Script/PL_Online.PL_ActivityChecker
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ActivityChecker : public UObject
{ 
public:
};

/// Class /Script/PL_Online.PL_OnlineSystemBase
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 16 MaxSize: 0x0070
class UPL_OnlineSystemBase : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/PL_Online.PL_ActivityOnlineSystem
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 16 MaxSize: 0x0080
class UPL_ActivityOnlineSystem : public UPL_OnlineSystemBase
{ 
public:
	class UPL_ActivityChecker*                         ActivityChecker;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/PL_Online.PL_ActivitySettings
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UPL_ActivitySettings : public UDeveloperSettings
{ 
public:
	FString                                            ActivityJsonFilePath;                                       // 0x0038   (0x0010)  
};

/// Class /Script/PL_Online.PL_ActivityUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ActivityUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/PL_Online.PL_OnlineStoreUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_OnlineStoreUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Online.PL_OnlineStoreUtils.ShowPlatformStore
	// bool ShowPlatformStore(class UObject* WorldContextObject, int32_t LocalUserNum, FString Category, FString ProductId);    // [0xdd07b0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UPL_ActivityChecker) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_OnlineSystemBase) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPL_ActivityOnlineSystem) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UPL_ActivitySettings) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UPL_ActivityUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_OnlineStoreUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UPL_ActivityOnlineSystem, ActivityChecker) == 0x0070);
static_assert(offsetof(UPL_ActivitySettings, ActivityJsonFilePath) == 0x0038);
