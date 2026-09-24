
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/PL_PropertyUtils.EPL_SupportedPropertyType
/// Size: 0x01 (1 bytes)
enum class EPL_SupportedPropertyType : uint8_t
{
	EPL_SupportedPropertyType__Unsupported                                           = 0,
	EPL_SupportedPropertyType__Bool                                                  = 1,
	EPL_SupportedPropertyType__Int32                                                 = 2,
	EPL_SupportedPropertyType__Float                                                 = 3,
	EPL_SupportedPropertyType__Vector                                                = 4,
	EPL_SupportedPropertyType__Rotator                                               = 5,
	EPL_SupportedPropertyType__Enum                                                  = 6
};

/// Class /Script/PL_PropertyUtils.PL_PropertyUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PropertyUtils : public UBlueprintFunctionLibrary
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UPL_PropertyUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
