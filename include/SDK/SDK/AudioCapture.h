
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                               // [0x1410100] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                              // [0x14100e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                                 // [0x14100b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                        // [0x1410000] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                               // [0x140ffd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x0790 (1936 bytes) (0x0006D0 - 0x000790) align 16 MaxSize: 0x0790
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xBC];                                      // 0x06D4   (0x00BC)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UAudioCapture) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UAudioCaptureFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioCaptureComponent) == 0x0790); // 1936 bytes (0x0006D0 - 0x000790)
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x0000);
