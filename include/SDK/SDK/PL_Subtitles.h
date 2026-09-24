
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

/// Class /Script/PL_Subtitles.PL_SubtitlesAsset
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UPL_SubtitlesAsset : public UDataAsset
{ 
public:
	TArray<FSubtitleCue>                               Subtitles;                                                  // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPL_SubtitlesAsset) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(offsetof(UPL_SubtitlesAsset, Subtitles) == 0x0030);
