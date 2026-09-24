
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
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: OpenColorIO
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineEncodeQuality
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineEncodeQuality : uint8_t
{
	EMoviePipelineEncodeQuality__Low                                                 = 0,
	EMoviePipelineEncodeQuality__Medium                                              = 1,
	EMoviePipelineEncodeQuality__High                                                = 2,
	EMoviePipelineEncodeQuality__Epic                                                = 3
};

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x01 (1 bytes)
enum class FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata                                           = 0,
	FCPXMLExportDataSource__SequenceData                                             = 1
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None                                       = 0,
	EMoviePipelineTextureStreamingMethod__Disabled                                   = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen                                           = 0,
	EMoviePipelineShutterTiming__FrameCenter                                         = 1,
	EMoviePipelineShutterTiming__FrameClose                                          = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x01 (1 bytes)
enum class EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized                                             = 0,
	EMovieRenderShotState__WarmingUp                                                 = 1,
	EMovieRenderShotState__MotionBlur                                                = 2,
	EMovieRenderShotState__Rendering                                                 = 3,
	EMovieRenderShotState__Finished                                                  = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x01 (1 bytes)
enum class EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized                                         = 0,
	EMovieRenderPipelineState__ProducingFrames                                       = 1,
	EMovieRenderPipelineState__Finalize                                              = 2,
	EMovieRenderPipelineState__Export                                                = 3,
	EMovieRenderPipelineState__Finished                                              = 4
};

/// Class /Script/MovieRenderPipelineCore.MoviePipeline
/// Size: 0x02E0 (736 bytes) (0x000028 - 0x0002E0) align 8 MaxSize: 0x02E0
class UMoviePipeline : public UObject
{ 
public:
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(OnMoviePipelineFinishedDelegate);                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(OnMoviePipelineWorkFinishedDelegate);                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(OnMoviePipelineShotWorkFinishedDelegate);            // 0x0048   (0x0010)  
	class UMoviePipelineCustomTimeStep*                CustomTimeStep;                                             // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
	class UEngineCustomTimeStep*                       CachedPrevCustomTimeStep;                                   // 0x0070   (0x0008)  
	class ULevelSequence*                              TargetSequence;                                             // 0x0078   (0x0008)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0080   (0x0008)  
	class UMovieRenderDebugWidget*                     DebugWidget;                                                // 0x0088   (0x0008)  
	class UTexture*                                    PreviewTexture;                                             // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x208];                                     // 0x0098   (0x0208)  MISSED
	class UClass*                                      DebugWidgetClass;                                           // 0x02A0   (0x0008)  
	class UMoviePipelineExecutorJob*                   CurrentJob;                                                 // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x02B0   (0x0030)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Shutdown
	// void Shutdown(bool bError);                                                                                              // [0x118f480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	// void RequestShutdown(bool bIsError);                                                                                     // [0x118e870] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	// void OnMoviePipelineFinishedImpl();                                                                                      // [0x118e850] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	// bool IsShutdownRequested();                                                                                              // [0x118e670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize
	// void Initialize(class UMoviePipelineExecutorJob* InJob);                                                                 // [0x118e5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	// class UTexture* GetPreviewTexture();                                                                                     // [0x118e480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	// class UMoviePipelineMasterConfig* GetPipelineMasterConfig();                                                             // [0x118e3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineSetting : public UObject
{ 
public:
	TWeakObjectPtr<class UMoviePipeline*>              CachedPipeline;                                             // 0x0028   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0031   (0x0017)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	// void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);                           // [0x11948a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{ 
public:
	int32_t                                            SpatialSampleCount;                                         // 0x0048   (0x0004)  
	int32_t                                            TemporalSampleCount;                                        // 0x004C   (0x0004)  
	bool                                               bOverrideAntiAliasing;                                      // 0x0050   (0x0001)  
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                         // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            RenderWarmUpCount;                                          // 0x0054   (0x0004)  
	bool                                               bUseCameraCutForWarmUp;                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            EngineWarmUpCount;                                          // 0x005C   (0x0004)  
	bool                                               bRenderWarmUpFrames;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	// void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // [0x118f510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	// int32_t ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams);                                              // [0x118ecd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	// void ResolveFilenameFormatArguments(FString InFormatString, FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs); // [0x118e900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);                                            // [0x118e3f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	// void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);   // [0x118e2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	// void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);    // [0x118e180] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	// FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);                                                      // [0x118e0e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	// FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);                                                // [0x118e050] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	// FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);                                                       // [0x118df80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	// FText GetJobName(class UMoviePipeline* InMoviePipeline);                                                                 // [0x118de90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	// FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);                                               // [0x118de00] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	// FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);                                                               // [0x118dd10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	// bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, FTimespan& OutEstimate);                                // [0x118dc40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	// FIntPoint GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot); // [0x118db70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	// FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);                                                 // [0x118dad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	// FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);                                           // [0x118da40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	// FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);                    // [0x118d950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	// EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);                                     // [0x118d8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	// void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);             // [0x118d720] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	// float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);                                                    // [0x118d690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	// float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);                                                      // [0x118d600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	// float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);                                                         // [0x118d570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	// float GetCompletionPercentage(class UMoviePipeline* InPipeline);                                                         // [0x118d4e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	// class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot); // [0x118cf70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	// class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);               // [0x118cdd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{ 
public:
	EMoviePipelineShutterTiming                        ShutterTiming;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              OverscanPercentage;                                         // 0x004C   (0x0004)  
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting
/// Size: 0x00B0 (176 bytes) (0x000048 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{ 
public:
	FOpenColorIODisplayConfiguration                   OCIOConfiguration;                                          // 0x0048   (0x0060)  
	bool                                               bDisableToneCurve;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{ 
public:
	FString                                            FileNameFormatOverride;                                     // 0x0048   (0x0010)  
	EMoviePipelineEncodeQuality                        Quality;                                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            AdditionalCommandLineArgs;                                  // 0x0060   (0x0010)  
	bool                                               bDeleteSourceFiles;                                         // 0x0070   (0x0001)  
	bool                                               bSkipEncodeOnRenderCanceled;                                // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_7[0x16];                                      // 0x0072   (0x0016)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 8 MaxSize: 0x0100
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{ 
public:
	FString                                            ExecutablePath;                                             // 0x0038   (0x0010)  
	FText                                              CodecHelpText;                                              // 0x0048   (0x0018)  
	FString                                            VideoCodec;                                                 // 0x0060   (0x0010)  
	FString                                            AudioCodec;                                                 // 0x0070   (0x0010)  
	FString                                            OutputFileExtension;                                        // 0x0080   (0x0010)  
	FString                                            CommandLineFormat;                                          // 0x0090   (0x0010)  
	FString                                            VideoInputStringFormat;                                     // 0x00A0   (0x0010)  
	FString                                            AudioInputStringFormat;                                     // 0x00B0   (0x0010)  
	FString                                            EncodeSettings_Low;                                         // 0x00C0   (0x0010)  
	FString                                            EncodeSettings_Med;                                         // 0x00D0   (0x0010)  
	FString                                            EncodeSettings_High;                                        // 0x00E0   (0x0010)  
	FString                                            EncodeSettings_Epic;                                        // 0x00F0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UMoviePipelineConfigBase : public UObject
{ 
public:
	FString                                            DisplayName;                                                // 0x0028   (0x0010)  
	TArray<class UMoviePipelineSetting*>               Settings;                                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	// void RemoveSetting(class UMoviePipelineSetting* InSetting);                                                              // [0xbfe090] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	// TArray<UMoviePipelineSetting*> GetUserSettings();                                                                        // [0x118e560] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	// TArray<UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings);                // [0x118d2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	// class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);                   // [0x118d070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	// class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);              // [0x118cea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	// void CopyFrom(class UMoviePipelineConfigBase* InConfig);                                                                 // [0x1134bf0] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineDebugSettings
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{ 
public:
	bool                                               bWriteAllSamples;                                           // 0x0048   (0x0001)  
	bool                                               bCaptureFramesWithRenderDoc;                                // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            CaptureFrame;                                               // 0x004C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UMoviePipelineExecutorBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(OnExecutorFinishedDelegate);                         // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(OnExecutorErroredDelegate);                          // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0060   (0x0020)  MISSED
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(SocketMessageRecievedDelegate);                      // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(HTTPResponseRecievedDelegate);                       // 0x0090   (0x0010)  
	class UClass*                                      DebugWidgetClass;                                           // 0x00A0   (0x0008)  
	FString                                            UserData;                                                   // 0x00A8   (0x0010)  
	class UClass*                                      TargetPipelineClass;                                        // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x48];                                      // 0x00C0   (0x0048)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x118f3f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x118f350] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	// void SetMoviePipelineClass(class UClass* InPipelineClass);                                                               // [0x118f2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	// bool SendSocketMessage(FString InMessage);                                                                               // [0x118f210] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	// int32_t SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, TMap<FString, FString>& InHeaders);            // [0x118f000] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	// void OnExecutorFinishedImpl();                                                                                           // [0x118e850] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	// void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);                       // [0x118e6d0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	// void OnBeginFrame();                                                                                                     // [0x83e860] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	// bool IsSocketConnected();                                                                                                // [0x118e6a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	// bool IsRendering();                                                                                                      // [0xc66dd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x118e520] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x118e4a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	// void Execute(class UMoviePipelineQueue* InPipelineQueue);                                                                // [0xc66d10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	// void DisconnectSocket();                                                                                                 // [0x118cdb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	// bool ConnectSocket(FString InHostName, int32_t InPort);                                                                  // [0x118ccc0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	// void CancelCurrentJob();                                                                                                 // [0xb90fe0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	// void CancelAllJobs();                                                                                                    // [0x118cca0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
/// Size: 0x0080 (128 bytes) (0x000048 - 0x000080) align 8 MaxSize: 0x0080
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0048   (0x0008)  MISSED
	FString                                            FileNameFormatOverride;                                     // 0x0050   (0x0010)  
	FCPXMLExportDataSource                             DataSource;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0061   (0x001F)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode
/// Size: 0x0348 (840 bytes) (0x000348 - 0x000348) align 8 MaxSize: 0x0348
class AMoviePipelineGameMode : public AGameModeBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
/// Size: 0x0108 (264 bytes) (0x000048 - 0x000108) align 8 MaxSize: 0x0108
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{ 
public:
	class UClass*                                      GameModeOverride;                                           // 0x0048   (0x0008)  
	bool                                               bCinematicQualitySettings;                                  // 0x0050   (0x0001)  
	EMoviePipelineTextureStreamingMethod               TextureStreaming;                                           // 0x0051   (0x0001)  
	bool                                               bUseLODZero;                                                // 0x0052   (0x0001)  
	bool                                               bDisableHLODs;                                              // 0x0053   (0x0001)  
	bool                                               bUseHighQualityShadows;                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            ShadowDistanceScale;                                        // 0x0058   (0x0004)  
	float                                              ShadowRadiusThreshold;                                      // 0x005C   (0x0004)  
	bool                                               bOverrideViewDistanceScale;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            ViewDistanceScale;                                          // 0x0064   (0x0004)  
	bool                                               bFlushGrassStreaming;                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_7[0x9F];                                      // 0x0069   (0x009F)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{ 
public:
	int32_t                                            TileCount;                                                  // 0x0048   (0x0004)  
	float                                              TextureSharpnessBias;                                       // 0x004C   (0x0004)  
	float                                              OverlapRatio;                                               // 0x0050   (0x0004)  
	bool                                               bOverrideSubSurfaceScattering;                              // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            BurleySampleCount;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
/// Size: 0x0130 (304 bytes) (0x000108 - 0x000130) align 8 MaxSize: 0x0130
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{ 
public:
	class UMoviePipelineQueue*                         Queue;                                                      // 0x0108   (0x0008)  
	class UMoviePipeline*                              ActiveMoviePipeline;                                        // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0118   (0x0018)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
/// Size: 0x0168 (360 bytes) (0x000130 - 0x000168) align 8 MaxSize: 0x0168
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{ 
public:
	bool                                               bUseCurrentLevel;                                           // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_7[0x37];                                      // 0x0131   (0x0037)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{ 
public:
	bool                                               bCloseEditor;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x0040   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0050   (0x0010)  
	int32_t                                            InitialDelayFrameCount;                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig
/// Size: 0x00B8 (184 bytes) (0x000050 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{ 
public:
	TMap<FString, class UMoviePipelineShotConfig*>     PerShotConfigMapping;                                       // 0x0050   (0x0050)  
	class UMoviePipelineOutputSetting*                 OutputSetting;                                              // 0x00A0   (0x0008)  
	TArray<class UMoviePipelineSetting*>               TransientSettings;                                          // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
	// void InitializeTransientSettings();                                                                                      // [0x11952b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
	// TArray<UMoviePipelineSetting*> GetTransientSettings();                                                                   // [0x11951f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
	// FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);                                                      // [0x1194d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
	// TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);            // [0x1194c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting
/// Size: 0x00B0 (176 bytes) (0x000048 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{ 
public:
	FDirectoryPath                                     OutputDirectory;                                            // 0x0048   (0x0010)  
	FString                                            FileNameFormat;                                             // 0x0058   (0x0010)  
	FIntPoint                                          OutputResolution;                                           // 0x0068   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FFrameRate                                         OutputFrameRate;                                            // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	bool                                               bOverrideExistingOutput;                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            HandleFrameCount;                                           // 0x0084   (0x0004)  
	int32_t                                            OutputFrameStep;                                            // 0x0088   (0x0004)  
	bool                                               bUseCustomPlaybackRange;                                    // 0x008C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            CustomStartFrame;                                           // 0x0090   (0x0004)  
	int32_t                                            CustomEndFrame;                                             // 0x0094   (0x0004)  
	int32_t                                            VersionNumber;                                              // 0x0098   (0x0004)  
	bool                                               bAutoVersion;                                               // 0x009C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	int32_t                                            ZeroPadFrameNumbers;                                        // 0x00A0   (0x0004)  
	int32_t                                            FrameNumberOffset;                                          // 0x00A4   (0x0004)  
	bool                                               bFlushDiskWritesPerShot;                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{ 
public:
	class UClass*                                      ExecutorClass;                                              // 0x0108   (0x0008)  
	class UMoviePipelineQueue*                         PipelineQueue;                                              // 0x0110   (0x0008)  
	class UWorld*                                      LastLoadedWorld;                                            // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	// void OnMapLoad(class UWorld* InWorld);                                                                                   // [0x1195360] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	// class UWorld* GetLastLoadedWorld();                                                                                      // [0x1194ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	// void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);                                                         // [0x1194b80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot
/// Size: 0x0130 (304 bytes) (0x000028 - 0x000130) align 8 MaxSize: 0x0130
class UMoviePipelineExecutorShot : public UObject
{ 
public:
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            OuterName;                                                  // 0x0030   (0x0010)  
	FString                                            InnerName;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x0050   (0x0098)  MISSED
	float                                              Progress;                                                   // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FString                                            StatusMessage;                                              // 0x00F0   (0x0010)  
	class UMoviePipelineShotConfig*                    ShotOverrideConfig;                                         // 0x0100   (0x0008)  
	TWeakObjectPtr<class UMoviePipelineShotConfig*>    ShotOverridePresetOrigin;                                   // 0x0108   (0x0008)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0110   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	// bool ShouldRender();                                                                                                     // [0x1195a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x1195990] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x11958f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	// void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);                                              // [0x1195860] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	// void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);                                             // [0x11957d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x11951b0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x118e560] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	// class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();                                                           // [0x1195010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	// class UMoviePipelineShotConfig* GetShotOverrideConfiguration();                                                          // [0x1194ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	// class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);                               // [0x1194800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMoviePipelineExecutorJob : public UObject
{ 
public:
	FString                                            JobName;                                                    // 0x0028   (0x0010)  
	FSoftObjectPath                                    Sequence;                                                   // 0x0038   (0x0018)  
	FSoftObjectPath                                    Map;                                                        // 0x0050   (0x0018)  
	FString                                            Author;                                                     // 0x0068   (0x0010)  
	TArray<class UMoviePipelineExecutorShot*>          ShotInfo;                                                   // 0x0078   (0x0010)  
	FString                                            UserData;                                                   // 0x0088   (0x0010)  
	FString                                            StatusMessage;                                              // 0x0098   (0x0010)  
	float                                              StatusProgress;                                             // 0x00A8   (0x0004)  
	bool                                               bIsConsumed;                                                // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	class UMoviePipelineMasterConfig*                  Configuration;                                              // 0x00B0   (0x0008)  
	TWeakObjectPtr<class UMoviePipelineMasterConfig*>  PresetOrigin;                                               // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x00C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x1195990] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x11958f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	// void SetSequence(FSoftObjectPath InSequence);                                                                            // [0x11956d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	// void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);                                                        // [0x1195640] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	// void SetConsumed(bool bInConsumed);                                                                                      // [0x11955b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	// void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);                                                       // [0x1195520] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	// void OnDuplicated();                                                                                                     // [0x1195340] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	// bool IsConsumed();                                                                                                       // [0x11952d0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x1195170] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x11950f0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	// class UMoviePipelineMasterConfig* GetPresetOrigin();                                                                     // [0x1194ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	// class UMoviePipelineMasterConfig* GetConfiguration();                                                                    // [0x1194d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueue
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMoviePipelineQueue : public UObject
{ 
public:
	TArray<class UMoviePipelineExecutorJob*>           Jobs;                                                       // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	// TArray<UMoviePipelineExecutorJob*> GetJobs();                                                                            // [0x1194e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	// class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);                                   // [0x1194ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	// void DeleteJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0x1194a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	// void CopyFrom(class UMoviePipelineQueue* InQueue);                                                                       // [0x11949c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	// class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);                                                // [0x1194760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{ 
public:
	class UMoviePipelineExecutorBase*                  ActiveExecutor;                                             // 0x0030   (0x0008)  
	class UMoviePipelineQueue*                         CurrentQueue;                                               // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	// void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);                                      // [0x1195490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	// class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);                                 // [0x11953f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	// bool IsRendering();                                                                                                      // [0x1195300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	// class UMoviePipelineQueue* GetQueue();                                                                                   // [0x1194fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	// class UMoviePipelineExecutorBase* GetActiveExecutor();                                                                   // [0x1194c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0048   (0x0040)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineViewFamilySetting
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UMovieRenderDebugWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	// void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);                                                        // [0x19ac1c0] Event|Public|BlueprintEvent 
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelinePassIdentifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMoviePipelinePassIdentifier
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMoviePipelineRenderPassOutputData
{ 
	TArray<FString>                                    FilePaths;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineShotOutputData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMoviePipelineShotOutputData
{ 
	TWeakObjectPtr<class UMoviePipelineExecutorShot*>  Shot;                                                       // 0x0000   (0x0008)  
	TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData> RenderPassData;                         // 0x0008   (0x0050)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineOutputData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMoviePipelineOutputData
{ 
	class UMoviePipeline*                              Pipeline;                                                   // 0x0000   (0x0008)  
	class UMoviePipelineExecutorJob*                   Job;                                                        // 0x0008   (0x0008)  
	bool                                               bSuccess;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FMoviePipelineShotOutputData>               ShotData;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 MaxSize: 0x0100
struct FMoviePipelineFilenameResolveParams
{ 
	int32_t                                            FrameNumber;                                                // 0x0000   (0x0004)  
	int32_t                                            FrameNumberShot;                                            // 0x0004   (0x0004)  
	int32_t                                            FrameNumberRel;                                             // 0x0008   (0x0004)  
	int32_t                                            FrameNumberShotRel;                                         // 0x000C   (0x0004)  
	FString                                            CameraNameOverride;                                         // 0x0010   (0x0010)  
	FString                                            ShotNameOverride;                                           // 0x0020   (0x0010)  
	int32_t                                            ZeroPadFrameNumberCount;                                    // 0x0030   (0x0004)  
	bool                                               bForceRelativeFrameNumbers;                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	TMap<FString, FString>                             FileNameFormatOverrides;                                    // 0x0038   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0088   (0x0050)  
	FDateTime                                          InitializationTime;                                         // 0x00D8   (0x0008)  
	int32_t                                            InitializationVersion;                                      // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UMoviePipelineExecutorJob*                   Job;                                                        // 0x00E8   (0x0008)  
	class UMoviePipelineExecutorShot*                  ShotOverride;                                               // 0x00F0   (0x0008)  
	int32_t                                            AdditionalFrameNumberOffset;                                // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFormatArgs
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FMoviePipelineFormatArgs
{ 
	TMap<FString, FString>                             FilenameArguments;                                          // 0x0000   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0050   (0x0050)  
	class UMoviePipelineExecutorJob*                   InJob;                                                      // 0x00A0   (0x0008)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineCameraCutInfo
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FMoviePipelineCameraCutInfo
{ 
	unsigned char                                      UnknownData00_2[0x98];                                      // 0x0000   (0x0098)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMoviePipelineSegmentWorkMetrics
{ 
	FString                                            SegmentName;                                                // 0x0000   (0x0010)  
	int32_t                                            OutputFrameIndex;                                           // 0x0010   (0x0004)  
	int32_t                                            TotalOutputFrameCount;                                      // 0x0014   (0x0004)  
	int32_t                                            OutputSubSampleIndex;                                       // 0x0018   (0x0004)  
	int32_t                                            TotalSubSampleCount;                                        // 0x001C   (0x0004)  
	int32_t                                            EngineWarmUpFrameIndex;                                     // 0x0020   (0x0004)  
	int32_t                                            TotalEngineWarmUpFrameCount;                                // 0x0024   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UMoviePipeline) == 0x02E0); // 736 bytes (0x000028 - 0x0002E0)
static_assert(sizeof(UMoviePipelineCustomTimeStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMoviePipelineSetting) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMoviePipelineAntiAliasingSetting) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UMoviePipelineBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMoviePipelineCameraSetting) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UMoviePipelineColorSetting) == 0x00B0); // 176 bytes (0x000048 - 0x0000B0)
static_assert(sizeof(UMoviePipelineCommandLineEncoder) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(UMoviePipelineCommandLineEncoderSettings) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(UMoviePipelineConfigBase) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMoviePipelineDebugSettings) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UMoviePipelineExecutorBase) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UMoviePipelineOutputBase) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMoviePipelineFCPXMLExporter) == 0x0080); // 128 bytes (0x000048 - 0x000080)
static_assert(sizeof(AMoviePipelineGameMode) == 0x0348); // 840 bytes (0x000348 - 0x000348)
static_assert(sizeof(UMoviePipelineGameOverrideSetting) == 0x0108); // 264 bytes (0x000048 - 0x000108)
static_assert(sizeof(UMoviePipelineHighResSetting) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UMoviePipelineLinearExecutorBase) == 0x0130); // 304 bytes (0x000108 - 0x000130)
static_assert(sizeof(UMoviePipelineInProcessExecutor) == 0x0168); // 360 bytes (0x000130 - 0x000168)
static_assert(sizeof(UMoviePipelineInProcessExecutorSettings) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UMoviePipelineMasterConfig) == 0x00B8); // 184 bytes (0x000050 - 0x0000B8)
static_assert(sizeof(UMoviePipelineOutputSetting) == 0x00B0); // 176 bytes (0x000048 - 0x0000B0)
static_assert(sizeof(UMoviePipelinePythonHostExecutor) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UMoviePipelineExecutorShot) == 0x0130); // 304 bytes (0x000028 - 0x000130)
static_assert(sizeof(UMoviePipelineExecutorJob) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UMoviePipelineQueue) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMoviePipelineQueueEngineSubsystem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UMoviePipelineRenderPass) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMoviePipelineShotConfig) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMoviePipelineVideoOutputBase) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(UMoviePipelineViewFamilySetting) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMovieRenderDebugWidget) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(FMoviePipelinePassIdentifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMoviePipelineRenderPassOutputData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMoviePipelineShotOutputData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMoviePipelineOutputData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMoviePipelineFilenameResolveParams) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FMoviePipelineFormatArgs) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FMoviePipelineCameraCutInfo) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FMoviePipelineSegmentWorkMetrics) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(UMoviePipeline, CustomTimeStep) == 0x0058);
static_assert(offsetof(UMoviePipeline, CachedPrevCustomTimeStep) == 0x0070);
static_assert(offsetof(UMoviePipeline, TargetSequence) == 0x0078);
static_assert(offsetof(UMoviePipeline, LevelSequenceActor) == 0x0080);
static_assert(offsetof(UMoviePipeline, DebugWidget) == 0x0088);
static_assert(offsetof(UMoviePipeline, PreviewTexture) == 0x0090);
static_assert(offsetof(UMoviePipeline, DebugWidgetClass) == 0x02A0);
static_assert(offsetof(UMoviePipeline, CurrentJob) == 0x02A8);
static_assert(offsetof(UMoviePipelineSetting, CachedPipeline) == 0x0028);
static_assert(offsetof(UMoviePipelineAntiAliasingSetting, AntiAliasingMethod) == 0x0051);
static_assert(offsetof(UMoviePipelineCameraSetting, ShutterTiming) == 0x0048);
static_assert(offsetof(UMoviePipelineColorSetting, OCIOConfiguration) == 0x0048);
static_assert(offsetof(UMoviePipelineCommandLineEncoder, FileNameFormatOverride) == 0x0048);
static_assert(offsetof(UMoviePipelineCommandLineEncoder, Quality) == 0x0058);
static_assert(offsetof(UMoviePipelineCommandLineEncoder, AdditionalCommandLineArgs) == 0x0060);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, ExecutablePath) == 0x0038);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, CodecHelpText) == 0x0048);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, VideoCodec) == 0x0060);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, AudioCodec) == 0x0070);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, OutputFileExtension) == 0x0080);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, CommandLineFormat) == 0x0090);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, VideoInputStringFormat) == 0x00A0);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, AudioInputStringFormat) == 0x00B0);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_Low) == 0x00C0);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_Med) == 0x00D0);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_High) == 0x00E0);
static_assert(offsetof(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_Epic) == 0x00F0);
static_assert(offsetof(UMoviePipelineConfigBase, DisplayName) == 0x0028);
static_assert(offsetof(UMoviePipelineConfigBase, Settings) == 0x0038);
static_assert(offsetof(UMoviePipelineExecutorBase, DebugWidgetClass) == 0x00A0);
static_assert(offsetof(UMoviePipelineExecutorBase, UserData) == 0x00A8);
static_assert(offsetof(UMoviePipelineExecutorBase, TargetPipelineClass) == 0x00B8);
static_assert(offsetof(UMoviePipelineFCPXMLExporter, FileNameFormatOverride) == 0x0050);
static_assert(offsetof(UMoviePipelineFCPXMLExporter, DataSource) == 0x0060);
static_assert(offsetof(UMoviePipelineGameOverrideSetting, GameModeOverride) == 0x0048);
static_assert(offsetof(UMoviePipelineGameOverrideSetting, TextureStreaming) == 0x0051);
static_assert(offsetof(UMoviePipelineLinearExecutorBase, Queue) == 0x0108);
static_assert(offsetof(UMoviePipelineLinearExecutorBase, ActiveMoviePipeline) == 0x0110);
static_assert(offsetof(UMoviePipelineInProcessExecutorSettings, AdditionalCommandLineArguments) == 0x0040);
static_assert(offsetof(UMoviePipelineInProcessExecutorSettings, InheritedCommandLineArguments) == 0x0050);
static_assert(offsetof(UMoviePipelineMasterConfig, PerShotConfigMapping) == 0x0050);
static_assert(offsetof(UMoviePipelineMasterConfig, OutputSetting) == 0x00A0);
static_assert(offsetof(UMoviePipelineMasterConfig, TransientSettings) == 0x00A8);
static_assert(offsetof(UMoviePipelineOutputSetting, OutputDirectory) == 0x0048);
static_assert(offsetof(UMoviePipelineOutputSetting, FileNameFormat) == 0x0058);
static_assert(offsetof(UMoviePipelineOutputSetting, OutputResolution) == 0x0068);
static_assert(offsetof(UMoviePipelineOutputSetting, OutputFrameRate) == 0x0074);
static_assert(offsetof(UMoviePipelinePythonHostExecutor, ExecutorClass) == 0x0108);
static_assert(offsetof(UMoviePipelinePythonHostExecutor, PipelineQueue) == 0x0110);
static_assert(offsetof(UMoviePipelinePythonHostExecutor, LastLoadedWorld) == 0x0118);
static_assert(offsetof(UMoviePipelineExecutorShot, OuterName) == 0x0030);
static_assert(offsetof(UMoviePipelineExecutorShot, InnerName) == 0x0040);
static_assert(offsetof(UMoviePipelineExecutorShot, StatusMessage) == 0x00F0);
static_assert(offsetof(UMoviePipelineExecutorShot, ShotOverrideConfig) == 0x0100);
static_assert(offsetof(UMoviePipelineExecutorShot, ShotOverridePresetOrigin) == 0x0108);
static_assert(offsetof(UMoviePipelineExecutorJob, JobName) == 0x0028);
static_assert(offsetof(UMoviePipelineExecutorJob, Sequence) == 0x0038);
static_assert(offsetof(UMoviePipelineExecutorJob, Map) == 0x0050);
static_assert(offsetof(UMoviePipelineExecutorJob, Author) == 0x0068);
static_assert(offsetof(UMoviePipelineExecutorJob, ShotInfo) == 0x0078);
static_assert(offsetof(UMoviePipelineExecutorJob, UserData) == 0x0088);
static_assert(offsetof(UMoviePipelineExecutorJob, StatusMessage) == 0x0098);
static_assert(offsetof(UMoviePipelineExecutorJob, Configuration) == 0x00B0);
static_assert(offsetof(UMoviePipelineExecutorJob, PresetOrigin) == 0x00B8);
static_assert(offsetof(UMoviePipelineQueue, Jobs) == 0x0028);
static_assert(offsetof(UMoviePipelineQueueEngineSubsystem, ActiveExecutor) == 0x0030);
static_assert(offsetof(UMoviePipelineQueueEngineSubsystem, CurrentQueue) == 0x0038);
static_assert(offsetof(FMoviePipelinePassIdentifier, Name) == 0x0000);
static_assert(offsetof(FMoviePipelineRenderPassOutputData, FilePaths) == 0x0000);
static_assert(offsetof(FMoviePipelineShotOutputData, Shot) == 0x0000);
static_assert(offsetof(FMoviePipelineShotOutputData, RenderPassData) == 0x0008);
static_assert(offsetof(FMoviePipelineOutputData, Pipeline) == 0x0000);
static_assert(offsetof(FMoviePipelineOutputData, Job) == 0x0008);
static_assert(offsetof(FMoviePipelineOutputData, ShotData) == 0x0018);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, CameraNameOverride) == 0x0010);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, ShotNameOverride) == 0x0020);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, FileNameFormatOverrides) == 0x0038);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, FileMetadata) == 0x0088);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, InitializationTime) == 0x00D8);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, Job) == 0x00E8);
static_assert(offsetof(FMoviePipelineFilenameResolveParams, ShotOverride) == 0x00F0);
static_assert(offsetof(FMoviePipelineFormatArgs, FilenameArguments) == 0x0000);
static_assert(offsetof(FMoviePipelineFormatArgs, FileMetadata) == 0x0050);
static_assert(offsetof(FMoviePipelineFormatArgs, InJob) == 0x00A0);
static_assert(offsetof(FMoviePipelineSegmentWorkMetrics, SegmentName) == 0x0000);
