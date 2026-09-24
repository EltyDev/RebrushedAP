
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/PL_StreamingDependencies.PL_StreamingLevelDependency
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPL_StreamingLevelDependency
{ 
	TArray<FName>                                      DependentLevelPostfixes;                                    // 0x0000   (0x0010)  
};

/// Class /Script/PL_StreamingDependencies.PL_StreamingDependenciesSettings
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UPL_StreamingDependenciesSettings : public UObject
{ 
public:
	TMap<FName, FPL_StreamingLevelDependency>          Dependencies;                                               // 0x0028   (0x0050)  
	FString                                            PostfixDelimiter;                                           // 0x0078   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FPL_StreamingLevelDependency) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPL_StreamingDependenciesSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(offsetof(FPL_StreamingLevelDependency, DependentLevelPostfixes) == 0x0000);
static_assert(offsetof(UPL_StreamingDependenciesSettings, Dependencies) == 0x0028);
static_assert(offsetof(UPL_StreamingDependenciesSettings, PostfixDelimiter) == 0x0078);
