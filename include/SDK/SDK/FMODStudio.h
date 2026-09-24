
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Enum /Script/FMODStudio.EFMODEventProperty
/// Size: 0x01 (1 bytes)
enum class EFMODEventProperty : uint8_t
{
	EFMODEventProperty__ChannelPriority                                              = 0,
	EFMODEventProperty__ScheduleDelay                                                = 1,
	EFMODEventProperty__ScheduleLookahead                                            = 2,
	EFMODEventProperty__MinimumDistance                                              = 3,
	EFMODEventProperty__MaximumDistance                                              = 4,
	EFMODEventProperty__Count                                                        = 5
};

/// Enum /Script/FMODStudio.EFMOD_STUDIO_STOP_MODE
/// Size: 0x01 (1 bytes)
enum class EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT                                                                     = 0,
	IMMEDIATE                                                                        = 1
};

/// Enum /Script/FMODStudio.EFMODEventControlKey
/// Size: 0x01 (1 bytes)
enum class EFMODEventControlKey : uint8_t
{
	EFMODEventControlKey__Stop                                                       = 0,
	EFMODEventControlKey__Play                                                       = 1
};

/// Enum /Script/FMODStudio.EFMODCodec
/// Size: 0x01 (1 bytes)
enum class EFMODCodec : uint8_t
{
	EFMODCodec__VORBIS                                                               = 0,
	EFMODCodec__FADPCM                                                               = 1,
	EFMODCodec__OPUS                                                                 = 2,
	EFMODCodec__XMA                                                                  = 3,
	EFMODCodec__AT9                                                                  = 4
};

/// Enum /Script/FMODStudio.EFMODPlatforms
/// Size: 0x01 (1 bytes)
enum class EFMODPlatforms : uint8_t
{
	EFMODPlatforms__Windows                                                          = 0,
	EFMODPlatforms__Linux                                                            = 1,
	EFMODPlatforms__Mac                                                              = 2,
	EFMODPlatforms__Android                                                          = 3,
	EFMODPlatforms__IOS                                                              = 4,
	EFMODPlatforms__PS4                                                              = 5,
	EFMODPlatforms__PS5                                                              = 6,
	EFMODPlatforms__Deprecated                                                       = 7,
	EFMODPlatforms__Switch                                                           = 8,
	EFMODPlatforms__XboxOne                                                          = 9,
	EFMODPlatforms__XSX                                                              = 10,
	EFMODPlatforms__Editor                                                           = 11
};

/// Enum /Script/FMODStudio.EFMODOutput
/// Size: 0x01 (1 bytes)
enum class EFMODOutput : uint8_t
{
	EFMODOutput__TYPE_AUTODETECT                                                     = 0,
	EFMODOutput__TYPE_NOSOUND                                                        = 1,
	EFMODOutput__TYPE_WASAPI                                                         = 2,
	EFMODOutput__TYPE_ASIO                                                           = 3,
	EFMODOutput__TYPE_PULSEAUDIO                                                     = 4,
	EFMODOutput__TYPE_ALSA                                                           = 5,
	EFMODOutput__TYPE_COREAUDIO                                                      = 6,
	EFMODOutput__TYPE_AUDIOTRACK                                                     = 7,
	EFMODOutput__TYPE_OPENSL                                                         = 8,
	EFMODOutput__TYPE_AUDIOOUT                                                       = 9,
	EFMODOutput__TYPE_AUDIO3D                                                        = 10,
	EFMODOutput__TYPE_NNAUDIO                                                        = 11,
	EFMODOutput__TYPE_WINSONIC                                                       = 12,
	EFMODOutput__TYPE_AAUDIO                                                         = 13
};

/// Enum /Script/FMODStudio.EFMODSpeakerMode
/// Size: 0x01 (1 bytes)
enum class EFMODSpeakerMode : uint8_t
{
	EFMODSpeakerMode__Stereo                                                         = 0,
	EFMODSpeakerMode__Surround_5                                                     = 1,
	EFMODSpeakerMode__Surround_7                                                     = 2,
	EFMODSpeakerMode__Surround_7_1                                                   = 3
};

/// Enum /Script/FMODStudio.EFMODLogging
/// Size: 0x01 (1 bytes)
enum class EFMODLogging : uint8_t
{
	LEVEL_NONE                                                                       = 0,
	LEVEL_ERROR                                                                      = 1,
	LEVEL_WARNING                                                                    = 2,
	LEVEL_LOG                                                                        = 4
};

/// Class /Script/FMODStudio.FMODAmbientSound
/// Size: 0x0290 (656 bytes) (0x000288 - 0x000290) align 8 MaxSize: 0x0290
class AFMODAmbientSound : public AActor
{ 
public:
	class UFMODAudioComponent*                         AudioComponent;                                             // 0x0288   (0x0008)  
};

/// Struct /Script/FMODStudio.FMODOcclusionDetails
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFMODOcclusionDetails
{ 
	bool                                               bEnableOcclusion;                                           // 0x0000   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                      // 0x0001   (0x0001)  
	bool                                               bUseComplexCollisionForOcclusion;                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              IgnoredActorRadius;                                         // 0x0004   (0x0004)  
};

/// Class /Script/FMODStudio.FMODAnimNotifyPlay
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UFMODAnimNotifyPlay : public UAnimNotify
{ 
public:
	bool                                               bFollow : 1;                                                // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AttachName;                                                 // 0x0040   (0x0010)  
	class UFMODEvent*                                  Event;                                                      // 0x0050   (0x0008)  
	FFMODOcclusionDetails                              OcclusionDetails;                                           // 0x0058   (0x0008)  
};

/// Class /Script/FMODStudio.FMODAnimNotifyPlayState
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFMODAnimNotifyPlayState : public UAnimNotifyState
{ 
public:
	bool                                               bFollow;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            AttachName;                                                 // 0x0038   (0x0010)  
	class UFMODEvent*                                  Event;                                                      // 0x0048   (0x0008)  
	FFMODOcclusionDetails                              OcclusionDetails;                                           // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0058   (0x0050)  MISSED
};

/// Class /Script/FMODStudio.FMODAsset
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFMODAsset : public UObject
{ 
public:
	FGuid                                              AssetGuid;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/FMODStudio.FMODAttenuationDetails
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFMODAttenuationDetails
{ 
	bool                                               bOverrideAttenuation : 1;                                   // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0004   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0008   (0x0004)  
};

/// Class /Script/FMODStudio.FMODAudioComponent
/// Size: 0x03A0 (928 bytes) (0x000208 - 0x0003A0) align 16 MaxSize: 0x03A0
class UFMODAudioComponent : public USceneComponent
{ 
public:
	class UFMODEvent*                                  Event;                                                      // 0x0208   (0x0008)  
	TMap<FName, float>                                 ParameterCache;                                             // 0x0210   (0x0050)  
	FString                                            ProgrammerSoundName;                                        // 0x0260   (0x0010)  
	bool                                               bEnableTimelineCallbacks : 1;                               // 0x0270:0 (0x0001)  
	bool                                               bAutoDestroy : 1;                                           // 0x0270:1 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x0270:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnEventStopped);                                     // 0x0278   (0x0010)  
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnSoundStopped);                                     // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnTimelineMarker);                                   // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnTimelineBeat);                                     // 0x02A8   (0x0010)  
	FFMODAttenuationDetails                            AttenuationDetails;                                         // 0x02B8   (0x000C)  
	FFMODOcclusionDetails                              OcclusionDetails;                                           // 0x02C4   (0x0008)  
	unsigned char                                      UnknownData01_7[0xD4];                                      // 0x02CC   (0x00D4)  MISSED


	/// Functions
	// Function /Script/FMODStudio.FMODAudioComponent.Stop
	// void Stop();                                                                                                             // [0x10caeb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetVolume
	// void SetVolume(float Volume);                                                                                            // [0x10cae30] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetTimelinePosition
	// void SetTimelinePosition(int32_t Time);                                                                                  // [0x10cada0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetProperty
	// void SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value);                                                 // [0x10cacd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetProgrammerSoundName
	// void SetProgrammerSoundName(FString Value);                                                                              // [0x10cabe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetPitch
	// void SetPitch(float Pitch);                                                                                              // [0x10cab60] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetPaused
	// void SetPaused(bool paused);                                                                                             // [0x10caad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetParameter
	// void SetParameter(FName Name, float Value);                                                                              // [0x10caa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.SetEvent
	// void SetEvent(class UFMODEvent* NewEvent);                                                                               // [0x10ca970] Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Release
	// void Release();                                                                                                          // [0x10ca950] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.Play
	// void Play();                                                                                                             // [0x10ca930] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.KeyOff
	// void KeyOff();                                                                                                           // [0x10ca910] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x10ca8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetTimelinePosition
	// int32_t GetTimelinePosition();                                                                                           // [0x10ca8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetProperty
	// float GetProperty(TEnumAsByte<EFMODEventProperty> Property);                                                             // [0x10ca820] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetParameterValue
	// void GetParameterValue(FName Name, float& UserValue, float& FinalValue);                                                 // [0x10ca700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetParameter
	// float GetParameter(FName Name);                                                                                          // [0x10ca660] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODAudioComponent.GetLength
	// int32_t GetLength();                                                                                                     // [0x10ca630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMODStudio.FMODBank
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UFMODBank : public UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODBankLookup
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UFMODBankLookup : public UObject
{ 
public:
	class UDataTable*                                  DataTable;                                                  // 0x0028   (0x0008)  
	FString                                            MasterBankPath;                                             // 0x0030   (0x0010)  
	FString                                            MasterAssetsBankPath;                                       // 0x0040   (0x0010)  
	FString                                            MasterStringsBankPath;                                      // 0x0050   (0x0010)  
};

/// Class /Script/FMODStudio.FMODBlueprintStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FMODStudio.FMODBlueprintStatics.VCASetVolume
	// void VCASetVolume(class UFMODVCA* Vca, float Volume);                                                                    // [0x10cdea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
	// void UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);                                  // [0x10cdde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
	// void UnloadBankSampleData(class UFMODBank* Bank);                                                                        // [0x10cdd60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.UnloadBank
	// void UnloadBank(class UFMODBank* Bank);                                                                                  // [0x10cdce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
	// void SetOutputDriverByName(FString NewDriverName);                                                                       // [0x10cdc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
	// void SetOutputDriverByIndex(int32_t NewDriverIndex);                                                                     // [0x10cdb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.SetLocale
	// void SetLocale(FString Locale);                                                                                          // [0x10cdaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.SetGlobalParameterByNameWithLabel
	// void SetGlobalParameterByNameWithLabel(FName Name, FString Label);                                                       // [0x10cd9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
	// void SetGlobalParameterByName(FName Name, float Value);                                                                  // [0x10cd910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.PlayEventAttached
	// class UFMODAudioComponent* PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy); // [0x10cd690] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
	// FFMODEventInstance PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, FTransform& Location, bool bAutoPlay); // [0x10cd4e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.PlayEvent2D
	// FFMODEventInstance PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);              // [0x10cd3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.MixerSuspend
	// void MixerSuspend();                                                                                                     // [0x10cd3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.MixerResume
	// void MixerResume();                                                                                                      // [0x10cd3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.LoadEventSampleData
	// void LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);                                    // [0x10cd2e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.LoadBankSampleData
	// void LoadBankSampleData(class UFMODBank* Bank);                                                                          // [0x10cd260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.LoadBank
	// void LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);                                              // [0x10cd150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.IsBankLoaded
	// bool IsBankLoaded(class UFMODBank* Bank);                                                                                // [0x10cd0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.GetOutputDrivers
	// TArray<FString> GetOutputDrivers();                                                                                      // [0x10ccfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
	// void GetGlobalParameterValueByName(FName Name, float& UserValue, float& FinalValue);                                     // [0x10ccec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
	// float GetGlobalParameterByName(FName Name);                                                                              // [0x10cce30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.FindEventInstances
	// TArray<FFMODEventInstance> FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);               // [0x10ccd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.FindEventByName
	// class UFMODEvent* FindEventByName(FString Name);                                                                         // [0x10ccc80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.FindAssetByName
	// class UFMODAsset* FindAssetByName(FString Name);                                                                         // [0x10ccbe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceStop
	// void EventInstanceStop(FFMODEventInstance EventInstance, bool Release);                                                  // [0x10ccb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
	// void EventInstanceSetVolume(FFMODEventInstance EventInstance, float Volume);                                             // [0x10cca60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
	// void EventInstanceSetTransform(FFMODEventInstance EventInstance, FTransform& Location);                                  // [0x10cc950] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
	// void EventInstanceSetProperty(FFMODEventInstance EventInstance, TEnumAsByte<EFMODEventProperty> Property, float Value);  // [0x10cc850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
	// void EventInstanceSetPitch(FFMODEventInstance EventInstance, float Pitch);                                               // [0x10cc790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
	// void EventInstanceSetPaused(FFMODEventInstance EventInstance, bool paused);                                              // [0x10cc6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
	// void EventInstanceSetParameter(FFMODEventInstance EventInstance, FName Name, float Value);                               // [0x10cc5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceRelease
	// void EventInstanceRelease(FFMODEventInstance EventInstance);                                                             // [0x10cc560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstancePlay
	// void EventInstancePlay(FFMODEventInstance EventInstance);                                                                // [0x10cc4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff
	// void EventInstanceKeyOff(FFMODEventInstance EventInstance);                                                              // [0x10cc480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
	// bool EventInstanceIsValid(FFMODEventInstance EventInstance);                                                             // [0x10cc400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
	// void EventInstanceGetParameterValue(FFMODEventInstance EventInstance, FName Name, float& UserValue, float& FinalValue);  // [0x10cc2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
	// float EventInstanceGetParameter(FFMODEventInstance EventInstance, FName Name);                                           // [0x10cc1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.BusStopAllEvents
	// void BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode);                                // [0x10cc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.BusSetVolume
	// void BusSetVolume(class UFMODBus* Bus, float Volume);                                                                    // [0x10cc050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.BusSetPaused
	// void BusSetPaused(class UFMODBus* Bus, bool bPaused);                                                                    // [0x10cbf90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMODStudio.FMODBlueprintStatics.BusSetMute
	// void BusSetMute(class UFMODBus* Bus, bool bMute);                                                                        // [0x10cbed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FMODStudio.FMODBus
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UFMODBus : public UFMODAsset
{ 
public:
};

/// Class /Script/FMODStudio.FMODEvent
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UFMODEvent : public UFMODAsset
{ 
public:
};

/// Struct /Script/FMODStudio.FMODEventControlChannel
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
struct FFMODEventControlChannel : FMovieSceneByteChannel
{ 
};

/// Class /Script/FMODStudio.FMODEventControlSection
/// Size: 0x0180 (384 bytes) (0x0000E8 - 0x000180) align 8 MaxSize: 0x0180
class UFMODEventControlSection : public UMovieSceneSection
{ 
public:
	FFMODEventControlChannel                           ControlKeys;                                                // 0x00E8   (0x0098)  
};

/// Class /Script/FMODStudio.FMODEventControlTrack
/// Size: 0x00A8 (168 bytes) (0x000090 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  ControlSections;                                            // 0x0098   (0x0010)  
};

/// Class /Script/FMODStudio.FMODEventParameterTrack
/// Size: 0x00A8 (168 bytes) (0x000090 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/FMODStudio.FMODPort
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UFMODPort : public UFMODAsset
{ 
public:
};

/// Struct /Script/FMODStudio.FMODProjectLocale
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FFMODProjectLocale
{ 
	FString                                            LocaleName;                                                 // 0x0000   (0x0010)  
	FString                                            LocaleCode;                                                 // 0x0010   (0x0010)  
	bool                                               bDefault;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/FMODStudio.CustomPoolSizes
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FCustomPoolSizes
{ 
	int32_t                                            Desktop;                                                    // 0x0000   (0x0004)  
	int32_t                                            Mobile;                                                     // 0x0004   (0x0004)  
	int32_t                                            PS4;                                                        // 0x0008   (0x0004)  
	int32_t                                            Switch;                                                     // 0x000C   (0x0004)  
	int32_t                                            XboxOne;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/FMODStudio.FMODPlatformSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FFMODPlatformSettings
{ 
	int32_t                                            RealChannelCount;                                           // 0x0000   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0004   (0x0004)  
	TEnumAsByte<EFMODSpeakerMode>                      SpeakerMode;                                                // 0x0008   (0x0001)  
	TEnumAsByte<EFMODOutput>                           OutputType;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            CustomPoolSize;                                             // 0x000C   (0x0004)  
	SDK_UNDEFINED(80,392) /* TMap<TEnumAsByte<EFMODCodec>, int32_t> */ __um(Codecs);                               // 0x0010   (0x0050)  
};

/// Class /Script/FMODStudio.FMODSettings
/// Size: 0x01C0 (448 bytes) (0x000028 - 0x0001C0) align 8 MaxSize: 0x01C0
class UFMODSettings : public UObject
{ 
public:
	bool                                               bLoadAllBanks;                                              // 0x0028   (0x0001)  
	bool                                               bLoadAllSampleData;                                         // 0x0029   (0x0001)  
	bool                                               bEnableLiveUpdate;                                          // 0x002A   (0x0001)  
	bool                                               bEnableEditorLiveUpdate;                                    // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FDirectoryPath                                     BankOutputDirectory;                                        // 0x0030   (0x0010)  
	TEnumAsByte<EFMODSpeakerMode>                      OutputFormat;                                               // 0x0040   (0x0001)  
	TEnumAsByte<EFMODOutput>                           OutputType;                                                 // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	TArray<FFMODProjectLocale>                         Locales;                                                    // 0x0048   (0x0010)  
	bool                                               bVol0Virtual;                                               // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              Vol0VirtualLevel;                                           // 0x005C   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0060   (0x0004)  
	bool                                               bMatchHardwareSampleRate;                                   // 0x0064   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	int32_t                                            RealChannelCount;                                           // 0x0068   (0x0004)  
	int32_t                                            TotalChannelCount;                                          // 0x006C   (0x0004)  
	int32_t                                            DSPBufferLength;                                            // 0x0070   (0x0004)  
	int32_t                                            DSPBufferCount;                                             // 0x0074   (0x0004)  
	int32_t                                            FileBufferSize;                                             // 0x0078   (0x0004)  
	int32_t                                            StudioUpdatePeriod;                                         // 0x007C   (0x0004)  
	FString                                            InitialOutputDriverName;                                    // 0x0080   (0x0010)  
	bool                                               bLockAllBuses;                                              // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	FCustomPoolSizes                                   MemoryPoolSizes;                                            // 0x0094   (0x0014)  
	int32_t                                            LiveUpdatePort;                                             // 0x00A8   (0x0004)  
	int32_t                                            EditorLiveUpdatePort;                                       // 0x00AC   (0x0004)  
	int32_t                                            ReloadBanksDelay;                                           // 0x00B0   (0x0004)  
	bool                                               bEnableAPIErrorLogging;                                     // 0x00B4   (0x0001)  
	bool                                               bEnableMemoryTracking;                                      // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	TArray<FString>                                    PluginFiles;                                                // 0x00B8   (0x0010)  
	FString                                            ContentBrowserPrefix;                                       // 0x00C8   (0x0010)  
	FString                                            ForcePlatformName;                                          // 0x00D8   (0x0010)  
	FString                                            MasterBankName;                                             // 0x00E8   (0x0010)  
	FString                                            SkipLoadBankName;                                           // 0x00F8   (0x0010)  
	FString                                            StudioBankKey;                                              // 0x0108   (0x0010)  
	FString                                            WavWriterPath;                                              // 0x0118   (0x0010)  
	TEnumAsByte<EFMODLogging>                          LoggingLevel;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	FString                                            OcclusionParameter;                                         // 0x0130   (0x0010)  
	FString                                            AmbientVolumeParameter;                                     // 0x0140   (0x0010)  
	FString                                            AmbientLPFParameter;                                        // 0x0150   (0x0010)  
	SDK_UNDEFINED(80,393) /* TMap<TEnumAsByte<EFMODPlatforms>, FFMODPlatformSettings> */ __um(Platforms);          // 0x0160   (0x0050)  
	unsigned char                                      UnknownData07_7[0x10];                                      // 0x01B0   (0x0010)  MISSED
};

/// Class /Script/FMODStudio.FMODSnapshot
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UFMODSnapshot : public UFMODEvent
{ 
public:
};

/// Class /Script/FMODStudio.FMODSnapshotReverb
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UFMODSnapshotReverb : public UReverbEffect
{ 
public:
	FGuid                                              AssetGuid;                                                  // 0x0060   (0x0010)  
};

/// Class /Script/FMODStudio.FMODVCA
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UFMODVCA : public UFMODAsset
{ 
public:
};

/// Struct /Script/FMODStudio.FMODAssetLookupRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FFMODAssetLookupRow : FTableRowBase
{ 
	FString                                            PackageName;                                                // 0x0008   (0x0010)  
	FString                                            AssetName;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/FMODStudio.FMODLocalizedBankTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FFMODLocalizedBankTable : FTableRowBase
{ 
	class UDataTable*                                  Banks;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/FMODStudio.FMODLocalizedBankRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FFMODLocalizedBankRow : FTableRowBase
{ 
	FString                                            Path;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/FMODStudio.FMODEventInstance
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FFMODEventInstance
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FMODStudio.FMODEventControlSectionTemplate
/// Size: 0x00B8 (184 bytes) (0x000020 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate
{ 
	FFMODEventControlChannel                           ControlKeys;                                                // 0x0020   (0x0098)  
};

/// Struct /Script/FMODStudio.FMODEventParameterSectionTemplate
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
struct FFMODEventParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
};

#pragma pack(pop)


static_assert(sizeof(AFMODAmbientSound) == 0x0290); // 656 bytes (0x000288 - 0x000290)
static_assert(sizeof(FFMODOcclusionDetails) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UFMODAnimNotifyPlay) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UFMODAnimNotifyPlayState) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UFMODAsset) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FFMODAttenuationDetails) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UFMODAudioComponent) == 0x03A0); // 928 bytes (0x000208 - 0x0003A0)
static_assert(sizeof(UFMODBank) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UFMODBankLookup) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UFMODBlueprintStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFMODBus) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UFMODEvent) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FFMODEventControlChannel) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UFMODEventControlSection) == 0x0180); // 384 bytes (0x0000E8 - 0x000180)
static_assert(sizeof(UFMODEventControlTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UFMODEventParameterTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UFMODPort) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FFMODProjectLocale) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCustomPoolSizes) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FFMODPlatformSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UFMODSettings) == 0x01C0); // 448 bytes (0x000028 - 0x0001C0)
static_assert(sizeof(UFMODSnapshot) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UFMODSnapshotReverb) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UFMODVCA) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FFMODAssetLookupRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FFMODLocalizedBankTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FFMODLocalizedBankRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FFMODEventInstance) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFMODEventControlSectionTemplate) == 0x00B8); // 184 bytes (0x000020 - 0x0000B8)
static_assert(sizeof(FFMODEventParameterSectionTemplate) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(offsetof(AFMODAmbientSound, AudioComponent) == 0x0288);
static_assert(offsetof(FFMODOcclusionDetails, OcclusionTraceChannel) == 0x0001);
static_assert(offsetof(UFMODAnimNotifyPlay, AttachName) == 0x0040);
static_assert(offsetof(UFMODAnimNotifyPlay, Event) == 0x0050);
static_assert(offsetof(UFMODAnimNotifyPlay, OcclusionDetails) == 0x0058);
static_assert(offsetof(UFMODAnimNotifyPlayState, AttachName) == 0x0038);
static_assert(offsetof(UFMODAnimNotifyPlayState, Event) == 0x0048);
static_assert(offsetof(UFMODAnimNotifyPlayState, OcclusionDetails) == 0x0050);
static_assert(offsetof(UFMODAsset, AssetGuid) == 0x0028);
static_assert(offsetof(UFMODAudioComponent, Event) == 0x0208);
static_assert(offsetof(UFMODAudioComponent, ParameterCache) == 0x0210);
static_assert(offsetof(UFMODAudioComponent, ProgrammerSoundName) == 0x0260);
static_assert(offsetof(UFMODAudioComponent, AttenuationDetails) == 0x02B8);
static_assert(offsetof(UFMODAudioComponent, OcclusionDetails) == 0x02C4);
static_assert(offsetof(UFMODBankLookup, DataTable) == 0x0028);
static_assert(offsetof(UFMODBankLookup, MasterBankPath) == 0x0030);
static_assert(offsetof(UFMODBankLookup, MasterAssetsBankPath) == 0x0040);
static_assert(offsetof(UFMODBankLookup, MasterStringsBankPath) == 0x0050);
static_assert(offsetof(UFMODEventControlSection, ControlKeys) == 0x00E8);
static_assert(offsetof(UFMODEventControlTrack, ControlSections) == 0x0098);
static_assert(offsetof(UFMODEventParameterTrack, Sections) == 0x0098);
static_assert(offsetof(FFMODProjectLocale, LocaleName) == 0x0000);
static_assert(offsetof(FFMODProjectLocale, LocaleCode) == 0x0010);
static_assert(offsetof(FFMODPlatformSettings, SpeakerMode) == 0x0008);
static_assert(offsetof(FFMODPlatformSettings, OutputType) == 0x0009);
static_assert(offsetof(UFMODSettings, BankOutputDirectory) == 0x0030);
static_assert(offsetof(UFMODSettings, OutputFormat) == 0x0040);
static_assert(offsetof(UFMODSettings, OutputType) == 0x0041);
static_assert(offsetof(UFMODSettings, Locales) == 0x0048);
static_assert(offsetof(UFMODSettings, InitialOutputDriverName) == 0x0080);
static_assert(offsetof(UFMODSettings, MemoryPoolSizes) == 0x0094);
static_assert(offsetof(UFMODSettings, PluginFiles) == 0x00B8);
static_assert(offsetof(UFMODSettings, ContentBrowserPrefix) == 0x00C8);
static_assert(offsetof(UFMODSettings, ForcePlatformName) == 0x00D8);
static_assert(offsetof(UFMODSettings, MasterBankName) == 0x00E8);
static_assert(offsetof(UFMODSettings, SkipLoadBankName) == 0x00F8);
static_assert(offsetof(UFMODSettings, StudioBankKey) == 0x0108);
static_assert(offsetof(UFMODSettings, WavWriterPath) == 0x0118);
static_assert(offsetof(UFMODSettings, LoggingLevel) == 0x0128);
static_assert(offsetof(UFMODSettings, OcclusionParameter) == 0x0130);
static_assert(offsetof(UFMODSettings, AmbientVolumeParameter) == 0x0140);
static_assert(offsetof(UFMODSettings, AmbientLPFParameter) == 0x0150);
static_assert(offsetof(UFMODSnapshotReverb, AssetGuid) == 0x0060);
static_assert(offsetof(FFMODAssetLookupRow, PackageName) == 0x0008);
static_assert(offsetof(FFMODAssetLookupRow, AssetName) == 0x0018);
static_assert(offsetof(FFMODLocalizedBankTable, Banks) == 0x0008);
static_assert(offsetof(FFMODLocalizedBankRow, Path) == 0x0008);
static_assert(offsetof(FFMODEventControlSectionTemplate, ControlKeys) == 0x0020);
