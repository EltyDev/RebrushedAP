
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_BuildInfo
/// dependency: PL_Online

#pragma pack(push, 0x1)

/// Enum /Script/PL_DLC.EPL_DLCOverride
/// Size: 0x01 (1 bytes)
enum class EPL_DLCOverride : uint8_t
{
	EPL_DLCOverride__Default                                                         = 0,
	EPL_DLCOverride__Unlocked                                                        = 1,
	EPL_DLCOverride__Locked                                                          = 2
};

/// Struct /Script/PL_DLC.PL_OnlineDLCPlatformIdentifiers
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_OnlineDLCPlatformIdentifiers
{ 
	TArray<FString>                                    PlatformIdentifiers;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/PL_DLC.PL_OnlineDLC
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FPL_OnlineDLC
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	TMap<EPL_TargetPlatform, FPL_OnlineDLCPlatformIdentifiers> PlatformDefinitions;                                // 0x0010   (0x0050)  
};

/// Class /Script/PL_DLC.PL_OnlineDLCSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPL_OnlineDLCSettings : public UObject
{ 
public:
	TArray<FPL_OnlineDLC>                              DLCs;                                                       // 0x0028   (0x0010)  
};

/// Class /Script/PL_DLC.PL_OnlineDLCSystem
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x0000A0) align 16 MaxSize: 0x00A0
class UPL_OnlineDLCSystem : public UPL_OnlineSystemBase
{ 
public:
	SDK_UNDEFINED(16,597) /* FMulticastInlineDelegate */ __um(OnOnlineDLCUpdated);                                 // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0080   (0x0020)  MISSED


	/// Functions
	// Function /Script/PL_DLC.PL_OnlineDLCSystem.ShowDLCStorePage
	// bool ShowDLCStorePage(FString DLCName);                                                                                  // [0xde0860] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PL_DLC.PL_OnlineDLCSystem.OverrideDLCState
	// void OverrideDLCState(FString DLCName, EPL_DLCOverride State);                                                           // [0xde0790] Final|Exec|Native|Static|Public 
	// Function /Script/PL_DLC.PL_OnlineDLCSystem.OverrideAllDLCStates
	// void OverrideAllDLCStates(EPL_DLCOverride State);                                                                        // [0xde0720] Final|Exec|Native|Static|Public 
	// Function /Script/PL_DLC.PL_OnlineDLCSystem.OnlineDLCUpdatedDelegate__DelegateSignature
	// void OnlineDLCUpdatedDelegate__DelegateSignature();                                                                      // [0x19ac1c0] MulticastDelegate|Public|Delegate 
	// Function /Script/PL_DLC.PL_OnlineDLCSystem.IsDLCUnlocked
	// bool IsDLCUnlocked(FString DLCName);                                                                                     // [0xde0670] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PL_DLC.PL_OnlineDLCSystem.CacheDLCInformation
	// void CacheDLCInformation();                                                                                              // [0xa786d0] Final|Exec|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FPL_OnlineDLCPlatformIdentifiers) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPL_OnlineDLC) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UPL_OnlineDLCSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPL_OnlineDLCSystem) == 0x00A0); // 160 bytes (0x000070 - 0x0000A0)
static_assert(offsetof(FPL_OnlineDLCPlatformIdentifiers, PlatformIdentifiers) == 0x0000);
static_assert(offsetof(FPL_OnlineDLC, Name) == 0x0000);
static_assert(offsetof(FPL_OnlineDLC, PlatformDefinitions) == 0x0010);
static_assert(offsetof(UPL_OnlineDLCSettings, DLCs) == 0x0028);
