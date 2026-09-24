
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/XeSSCore.XeSSSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UXeSSSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnableXeSSInEditorViewports;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            DebugDataDumpPath;                                          // 0x0040   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UXeSSSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(offsetof(UXeSSSettings, DebugDataDumpPath) == 0x0040);
