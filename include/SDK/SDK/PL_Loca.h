
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

/// Class /Script/PL_Loca.PL_ExpandPoCommentsInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ExpandPoCommentsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_Loca.PL_ExpandPoCommentsInterface.AddPoComments
	// void AddPoComments(TArray<FString>& CommandsToExpand, int32_t Index);                                                    // [0x127fb30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PL_Loca.PL_LocaUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_LocaUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Loca.PL_LocaUtils.CreateXFromY
	// FText CreateXFromY(int32_t X, int32_t Y);                                                                                // [0x127fc50] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/PL_Loca.PL_LocaHints
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPL_LocaHints
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PL_Loca.PL_VoText
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FPL_VoText : FPL_LocaHints
{ 
	FText                                              VoText;                                                     // 0x0008   (0x0018)  
	FText                                              WrittenText;                                                // 0x0020   (0x0018)  
};

/// Class /Script/PL_Loca.PL_VoiceOverAsset
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_VoiceOverAsset : public UObject
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0028   (0x0008)  
	FPL_VoText                                         VoText;                                                     // 0x0030   (0x0038)  
};

/// Struct /Script/PL_Loca.PL_TextWithLocaHints
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FPL_TextWithLocaHints : FPL_LocaHints
{ 
	FText                                              TextWithLocaHints;                                          // 0x0008   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_ExpandPoCommentsInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_LocaUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPL_LocaHints) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPL_VoText) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(UPL_VoiceOverAsset) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FPL_TextWithLocaHints) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(offsetof(FPL_VoText, VoText) == 0x0008);
static_assert(offsetof(FPL_VoText, WrittenText) == 0x0020);
static_assert(offsetof(UPL_VoiceOverAsset, Sound) == 0x0028);
static_assert(offsetof(UPL_VoiceOverAsset, VoText) == 0x0030);
static_assert(offsetof(FPL_TextWithLocaHints, TextWithLocaHints) == 0x0008);
