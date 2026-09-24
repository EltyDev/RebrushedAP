
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
/// dependency: GameplayTags

#pragma pack(push, 0x1)

/// Class /Script/PL_UISoundsWrapperModule.PL_UISoundsUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UISoundsUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_UISoundsWrapperModule.PL_UISoundsUtils.RequestPlayUISound
	// void RequestPlayUISound(class UObject* WorldContextObject, FGameplayTag& UISoundTag);                                    // [0xac06a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PL_UISoundsWrapperModule.PL_UISoundsWrapper
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPL_UISoundsWrapper : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/PL_UISoundsWrapperModule.PL_UISoundsWrapperSettings
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UPL_UISoundsWrapperSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,673) /* TMap<FGameplayTag, TWeakObjectPtr<UObject*>> */ __um(UISounds);                       // 0x0038   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_UISoundsUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_UISoundsWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UPL_UISoundsWrapperSettings) == 0x0088); // 136 bytes (0x000038 - 0x000088)
