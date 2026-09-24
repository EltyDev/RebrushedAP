
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

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
/// Size: 0x01 (1 bytes)
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
	BMASM_Bink_DS_RenderToTexture                                                    = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio                                   = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize                                           = 2,
	BMASM_Bink_DS_OverlayFillScreen                                                  = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle                                = 4
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
/// Size: 0x01 (1 bytes)
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
	BMASM_Bink_Sound_None                                                            = 0,
	BMASM_Bink_Sound_Simple                                                          = 1,
	BMASM_Bink_Sound_LanguageOverride                                                = 2,
	BMASM_Bink_Sound                                                                 = 3,
	BMASM_Bink_Sound_51LanguageOverride                                              = 4,
	BMASM_Bink_Sound6                                                                = 5,
	BMASM_Bink_Sound_71LanguageOverride                                              = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
/// Size: 0x01 (1 bytes)
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
	BMASM_Bink_Stream                                                                = 0,
	BMASM_Bink_PreloadAll                                                            = 1,
	BMASM_Bink_StreamUntilResident                                                   = 2
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
/// Size: 0x01 (1 bytes)
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
	MP_Bink_Sound_None                                                               = 0,
	MP_Bink_Sound_Simple                                                             = 1,
	MP_Bink_Sound_LanguageOverride                                                   = 2,
	MP_Bink_Sound                                                                    = 3,
	MP_Bink_Sound_51LanguageOverride                                                 = 4,
	MP_Bink_Sound6                                                                   = 5,
	MP_Bink_Sound_71LanguageOverride                                                 = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
/// Size: 0x01 (1 bytes)
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
	MP_Bink_Stream                                                                   = 0,
	MP_Bink_PreloadAll                                                               = 1,
	MP_Bink_StreamUntilResident                                                      = 2
};

/// Class /Script/BinkMediaPlayer.BinkFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	// FTimespan BinkLoadingMovie_GetTime();                                                                                    // [0x1129b30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
	// FTimespan BinkLoadingMovie_GetDuration();                                                                                // [0x1129af0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
	// void Bink_DrawOverlays();                                                                                                // [0x1129b70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/BinkMediaPlayer.BinkMediaPlayer
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBinkMediaPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,323) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,324) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                      // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,325) /* FMulticastInlineDelegate */ __um(OnMediaReachedEnd);                                  // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,326) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                                // 0x0060   (0x0010)  
	bool                                               Looping : 1;                                                // 0x0070:0 (0x0001)  
	bool                                               StartImmediately : 1;                                       // 0x0070:1 (0x0001)  
	bool                                               DelayedOpen : 1;                                            // 0x0070:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FVector2D                                          BinkDestinationUpperLeft;                                   // 0x0074   (0x0008)  
	FVector2D                                          BinkDestinationLowerRight;                                  // 0x007C   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FString                                            URL;                                                        // 0x0088   (0x0010)  
	TEnumAsByte<EBinkMediaPlayerBinkBufferModes>       BinkBufferMode;                                             // 0x0098   (0x0001)  
	TEnumAsByte<EBinkMediaPlayerBinkSoundTrack>        BinkSoundTrack;                                             // 0x0099   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x009A   (0x0002)  MISSED
	int32_t                                            BinkSoundTrackStart;                                        // 0x009C   (0x0004)  
	TEnumAsByte<EBinkMediaPlayerBinkDrawStyle>         BinkDrawStyle;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            BinkLayerDepth;                                             // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData05_7[0x50];                                      // 0x00A8   (0x0050)  MISSED


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                                  // [0xe8d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                                // [0xe8d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x112a470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Stop
	// void Stop();                                                                                                             // [0x112a450] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetVolume
	// void SetVolume(float Rate);                                                                                              // [0x112a3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x112a340] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetLooping
	// bool SetLooping(bool InLooping);                                                                                         // [0x112a210] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Seek
	// bool Seek(FTimespan& InTime);                                                                                            // [0x112a170] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x112a140] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Play
	// bool Play();                                                                                                             // [0x112a110] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Pause
	// bool Pause();                                                                                                            // [0x112a0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.OpenUrl
	// bool OpenUrl(FString NewUrl);                                                                                            // [0x112a030] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsStopped
	// bool IsStopped();                                                                                                        // [0x112a000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsSeeking
	// bool IsSeeking();                                                                                                        // [0x1129fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1129fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x1129f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x1129f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsInitialized
	// bool IsInitialized();                                                                                                    // [0x1129f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetUrl
	// FString GetUrl();                                                                                                        // [0x1129ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x1129e90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x1129e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x1129e20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Draw
	// void Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float Alpha, bool srgb_decode, bool hdr);             // [0x1129c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CloseUrl
	// void CloseUrl();                                                                                                         // [0x1129c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPlay
	// bool CanPlay();                                                                                                          // [0x1129bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPause
	// bool CanPause();                                                                                                         // [0x1129b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BinkMediaPlayer.BinkMediaTexture
/// Size: 0x01B0 (432 bytes) (0x000178 - 0x0001B0) align 16 MaxSize: 0x01B0
class UBinkMediaTexture : public UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x0178   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x017A   (0x0006)  MISSED
	class UBinkMediaPlayer*                            MediaPlayer;                                                // 0x0180   (0x0008)  
	TEnumAsByte<EPixelFormat>                          PixelFormat;                                                // 0x0188   (0x0001)  
	bool                                               tonemap;                                                    // 0x0189   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x018A   (0x0002)  MISSED
	float                                              OutputNits;                                                 // 0x018C   (0x0004)  
	float                                              Alpha;                                                      // 0x0190   (0x0004)  
	bool                                               DecodeSRGB;                                                 // 0x0194   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1B];                                      // 0x0195   (0x001B)  MISSED


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);                                                              // [0x112a2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaTexture.Clear
	// void Clear();                                                                                                            // [0x1129bf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BinkMediaPlayer.BinkMoviePlayerSettings
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UBinkMoviePlayerSettings : public UObject
{ 
public:
	TEnumAsByte<EBinkMoviePlayerBinkBufferModes>       BinkBufferMode;                                             // 0x0028   (0x0001)  
	TEnumAsByte<EBinkMoviePlayerBinkSoundTrack>        BinkSoundTrack;                                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BinkSoundTrackStart;                                        // 0x002C   (0x0004)  
	FVector2D                                          BinkDestinationUpperLeft;                                   // 0x0030   (0x0008)  
	FVector2D                                          BinkDestinationLowerRight;                                  // 0x0038   (0x0008)  
	TEnumAsByte<EPixelFormat>                          BinkPixelFormat;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBinkFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBinkMediaPlayer) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UBinkMediaTexture) == 0x01B0); // 432 bytes (0x000178 - 0x0001B0)
static_assert(sizeof(UBinkMoviePlayerSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationUpperLeft) == 0x0074);
static_assert(offsetof(UBinkMediaPlayer, BinkDestinationLowerRight) == 0x007C);
static_assert(offsetof(UBinkMediaPlayer, URL) == 0x0088);
static_assert(offsetof(UBinkMediaPlayer, BinkBufferMode) == 0x0098);
static_assert(offsetof(UBinkMediaPlayer, BinkSoundTrack) == 0x0099);
static_assert(offsetof(UBinkMediaPlayer, BinkDrawStyle) == 0x00A0);
static_assert(offsetof(UBinkMediaTexture, AddressX) == 0x0178);
static_assert(offsetof(UBinkMediaTexture, AddressY) == 0x0179);
static_assert(offsetof(UBinkMediaTexture, MediaPlayer) == 0x0180);
static_assert(offsetof(UBinkMediaTexture, PixelFormat) == 0x0188);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkBufferMode) == 0x0028);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkSoundTrack) == 0x0029);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationUpperLeft) == 0x0030);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkDestinationLowerRight) == 0x0038);
static_assert(offsetof(UBinkMoviePlayerSettings, BinkPixelFormat) == 0x0040);
