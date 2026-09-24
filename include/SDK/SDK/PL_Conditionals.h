
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

/// Enum /Script/PL_Conditionals.EPL_ConditionalEvaluationType
/// Size: 0x01 (1 bytes)
enum class EPL_ConditionalEvaluationType : uint8_t
{
	EPL_ConditionalEvaluationType__AND                                               = 0,
	EPL_ConditionalEvaluationType__OR                                                = 1,
	EPL_ConditionalEvaluationType__MORE_THAN                                         = 2,
	EPL_ConditionalEvaluationType__LESS_THAN                                         = 3,
	EPL_ConditionalEvaluationType__MORE_THAN_OR_EQUALS_TO                            = 4,
	EPL_ConditionalEvaluationType__LESS_THAN_OR_EQUALS_TO                            = 5,
	EPL_ConditionalEvaluationType__NOT_EQUALS_TO                                     = 6,
	EPL_ConditionalEvaluationType__EQUALS_TO                                         = 7
};

/// Enum /Script/PL_Conditionals.EPL_DistanceEvaluationType
/// Size: 0x01 (1 bytes)
enum class EPL_DistanceEvaluationType : uint8_t
{
	EPL_DistanceEvaluationType__InRange                                              = 0,
	EPL_DistanceEvaluationType__OutsideRange                                         = 1
};

/// Class /Script/PL_Conditionals.PL_ConditionalContext
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UPL_ConditionalContext : public UObject
{ 
public:
	TWeakObjectPtr<class UObject*>                     WorldContextObject;                                         // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/PL_Conditionals.PL_SourceConditionalContext
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UPL_SourceConditionalContext : public UPL_ConditionalContext
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0050   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      Source;                                                     // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Class /Script/PL_Conditionals.PL_SourceAndTargetConditionalContext
/// Size: 0x00D8 (216 bytes) (0x000080 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPL_SourceAndTargetConditionalContext : public UPL_SourceConditionalContext
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0080   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      Target;                                                     // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0090   (0x0020)  MISSED
	TWeakObjectPtr<class UActorComponent*>             TargetComponent;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Class /Script/PL_Conditionals.PL_Conditional
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_Conditional : public UObject
{ 
public:


	/// Functions
	// Function /Script/PL_Conditionals.PL_Conditional.IsFulfilled
	// bool IsFulfilled(class UPL_ConditionalContext* Context);                                                                 // [0xaceb50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Conditionals.PL_AssetConditional
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_AssetConditional : public UPL_Conditional
{ 
public:
	class UPL_ConditionalAsset*                        ConditionalAsset;                                           // 0x0028   (0x0008)  
};

/// Class /Script/PL_Conditionals.PL_BoolConditional
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_BoolConditional : public UPL_Conditional
{ 
public:
	bool                                               bIsTrue;                                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/PL_Conditionals.PL_ConditionalAsset
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UPL_ConditionalAsset : public UDataAsset
{ 
public:
	class UPL_Conditional*                             Condition;                                                  // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/PL_Conditionals.PL_ConditionalAsset.IsFulfilled
	// bool IsFulfilled(class UPL_ConditionalContext* Context);                                                                 // [0xacebf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_Conditionals.PL_ConditionalContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPL_ConditionalContainer : public UPL_Conditional
{ 
public:
	EPL_ConditionalEvaluationType                      EvaluationType;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Amount;                                                     // 0x002C   (0x0004)  
	TArray<class UPL_Conditional*>                     Conditions;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/PL_Conditionals.PL_ConditionalContextSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ConditionalContextSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Conditionals.PL_ConditionalContextTargetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_ConditionalContextTargetInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_Conditionals.PL_DistanceConditional
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_DistanceConditional : public UPL_Conditional
{ 
public:
	EPL_DistanceEvaluationType                         EvaluationType;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x002C   (0x0004)  
};

/// Class /Script/PL_Conditionals.PL_LineOfSightConditional
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_LineOfSightConditional : public UPL_Conditional
{ 
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/PL_Conditionals.PL_NotLogicConditional
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPL_NotLogicConditional : public UPL_Conditional
{ 
public:
	class UPL_Conditional*                             Condition;                                                  // 0x0028   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_ConditionalContext) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UPL_SourceConditionalContext) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UPL_SourceAndTargetConditionalContext) == 0x00D8); // 216 bytes (0x000080 - 0x0000D8)
static_assert(sizeof(UPL_Conditional) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_AssetConditional) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_BoolConditional) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_ConditionalAsset) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPL_ConditionalContainer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPL_ConditionalContextSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_ConditionalContextTargetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_DistanceConditional) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_LineOfSightConditional) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPL_NotLogicConditional) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(UPL_ConditionalContext, WorldContextObject) == 0x0028);
static_assert(offsetof(UPL_SourceConditionalContext, Source) == 0x0058);
static_assert(offsetof(UPL_SourceAndTargetConditionalContext, Target) == 0x0088);
static_assert(offsetof(UPL_SourceAndTargetConditionalContext, TargetComponent) == 0x00B0);
static_assert(offsetof(UPL_AssetConditional, ConditionalAsset) == 0x0028);
static_assert(offsetof(UPL_ConditionalAsset, Condition) == 0x0030);
static_assert(offsetof(UPL_ConditionalContainer, EvaluationType) == 0x0028);
static_assert(offsetof(UPL_ConditionalContainer, Conditions) == 0x0030);
static_assert(offsetof(UPL_DistanceConditional, EvaluationType) == 0x0028);
static_assert(offsetof(UPL_LineOfSightConditional, CollisionChannel) == 0x0028);
static_assert(offsetof(UPL_NotLogicConditional, Condition) == 0x0028);
