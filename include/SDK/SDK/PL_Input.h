
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

/// Class /Script/PL_Input.PL_AnimNotifyState_ControllerVibration
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UPL_AnimNotifyState_ControllerVibration : public UAnimNotifyState
{ 
public:
	class UForceFeedbackEffect*                        FeedbackEffect;                                             // 0x0030   (0x0008)  
	FForceFeedbackParameters                           FeedbackParameters;                                         // 0x0038   (0x000C)  
	bool                                               bIsSpatialFeedback;                                         // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              IntensityMultiplier;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UForceFeedbackAttenuation*                   AttenuationSettings;                                        // 0x0050   (0x0008)  
	SDK_UNDEFINED(16,609) /* TArray<TWeakObjectPtr<APlayerController*>> */ __um(PlayerControllers);                // 0x0058   (0x0010)  
};

/// Class /Script/PL_Input.PL_InputFeedbackUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_InputFeedbackUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_Input.PL_InputFeedbackUtils.EndControllerVibrations
	// void EndControllerVibrations(class UObject* Target, class UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);         // [0xc4fde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Input.PL_InputFeedbackUtils.EndAllControllerVibrations
	// void EndAllControllerVibrations(class UObject* Target);                                                                  // [0xc4fd60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_Input.PL_InputFeedbackUtils.ApplyControllerVibrations
	// void ApplyControllerVibrations(class UObject* Target, class UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused); // [0xc4fb80] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UPL_AnimNotifyState_ControllerVibration) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UPL_InputFeedbackUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UPL_AnimNotifyState_ControllerVibration, FeedbackEffect) == 0x0030);
static_assert(offsetof(UPL_AnimNotifyState_ControllerVibration, FeedbackParameters) == 0x0038);
static_assert(offsetof(UPL_AnimNotifyState_ControllerVibration, AttenuationSettings) == 0x0050);
