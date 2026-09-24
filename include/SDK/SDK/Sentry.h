
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

/// Enum /Script/Sentry.ESentryLevel
/// Size: 0x01 (1 bytes)
enum class ESentryLevel : uint8_t
{
	ESentryLevel__Debug                                                              = 0,
	ESentryLevel__Info                                                               = 1,
	ESentryLevel__Warning                                                            = 2,
	ESentryLevel__Error                                                              = 3,
	ESentryLevel__Fatal                                                              = 4
};

/// Class /Script/Sentry.SentryAttachment
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryAttachment : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryAttachment.InitializeWithPath
	// void InitializeWithPath(FString Path, FString Filename, FString ContentType);                                            // [0x10f9550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryAttachment.InitializeWithData
	// void InitializeWithData(TArray<char>& Data, FString Filename, FString ContentType);                                      // [0x10f93f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryAttachment.GetPath
	// FString GetPath();                                                                                                       // [0x10f8c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetFilename
	// FString GetFilename();                                                                                                   // [0x10f8ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetData
	// TArray<char> GetData();                                                                                                  // [0x10f8930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryAttachment.GetContentType
	// FString GetContentType();                                                                                                // [0x10f88b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryBreadcrumb
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryBreadcrumb : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryBreadcrumb.SetType
	// void SetType(FString Type);                                                                                              // [0x10fa210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetMessage
	// void SetMessage(FString Message);                                                                                        // [0x10fa170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x10fa640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetData
	// void SetData(TMap<FString, FString>& Data);                                                                              // [0x10f9e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.SetCategory
	// void SetCategory(FString Category);                                                                                      // [0x10f9b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryBreadcrumb.GetType
	// FString GetType();                                                                                                       // [0x10f88b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetMessage
	// FString GetMessage();                                                                                                    // [0x10f8c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetLevel
	// ESentryLevel GetLevel();                                                                                                 // [0x10f90d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetData
	// TMap<FString, FString> GetData();                                                                                        // [0x10f89b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryBreadcrumb.GetCategory
	// FString GetCategory();                                                                                                   // [0x10f8830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryEvent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryEvent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryEvent.SetMessage
	// void SetMessage(FString Message);                                                                                        // [0x10fa170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryEvent.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x10fa6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryEvent.GetMessage
	// FString GetMessage();                                                                                                    // [0x10f8c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryEvent.GetLevel
	// ESentryLevel GetLevel();                                                                                                 // [0x10f9100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Sentry.SentryLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USentryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Sentry.SentryLibrary.StringToBytesArray
	// TArray<char> StringToBytesArray(FString inString);                                                                       // [0x10fabf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.SaveStringToFile
	// FString SaveStringToFile(FString inString, FString Filename);                                                            // [0x10f99f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryUserFeedback
	// class USentryUserFeedback* CreateSentryUserFeedback(class USentryId* EventID, FString Name, FString Email, FString Comments); // [0x10f86a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryUser
	// class USentryUser* CreateSentryUser(FString Email, FString ID, FString UserName, FString IpAddress, TMap<FString, FString>& Data); // [0x10f8440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryEvent
	// class USentryEvent* CreateSentryEvent(FString Message, ESentryLevel Level);                                              // [0x10f8360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryBreadcrumb
	// class USentryBreadcrumb* CreateSentryBreadcrumb(FString Message, FString Type, FString Category, TMap<FString, FString>& Data, ESentryLevel Level); // [0x10f8100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryAttachmentWithPath
	// class USentryAttachment* CreateSentryAttachmentWithPath(FString Path, FString Filename, FString ContentType);            // [0x10f7fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.CreateSentryAttachmentWithData
	// class USentryAttachment* CreateSentryAttachmentWithData(TArray<char>& Data, FString Filename, FString ContentType);      // [0x10f7e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryLibrary.ByteArrayToString
	// FString ByteArrayToString(TArray<char>& Array);                                                                          // [0x10f75f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Sentry.SentryScope
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryScope : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryScope.SetTagValue
	// void SetTagValue(FString Key, FString Value);                                                                            // [0x10fa940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetTags
	// void SetTags(TMap<FString, FString>& Tags);                                                                              // [0x10faa40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x10fa740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetFingerprint
	// void SetFingerprint(TArray<FString>& Fingerprint);                                                                       // [0x10fa570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetExtraValue
	// void SetExtraValue(FString Key, FString Value);                                                                          // [0x10fa350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetExtras
	// void SetExtras(TMap<FString, FString>& Extras);                                                                          // [0x10fa450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetEnvironment
	// void SetEnvironment(FString Environment);                                                                                // [0x10fa2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetDist
	// void SetDist(FString Dist);                                                                                              // [0x10fa0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.SetContext
	// void SetContext(FString Key, TMap<FString, FString>& Values);                                                            // [0x10f9bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveTag
	// void RemoveTag(FString Key);                                                                                             // [0x10f9890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveExtra
	// void RemoveExtra(FString Key);                                                                                           // [0x10f97f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.RemoveContext
	// void RemoveContext(FString Key);                                                                                         // [0x10f9750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.GetTagValue
	// FString GetTagValue(FString Key);                                                                                        // [0x10f9160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetTags
	// TMap<FString, FString> GetTags();                                                                                        // [0x10f9250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetLevel
	// ESentryLevel GetLevel();                                                                                                 // [0x10f9130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetFingerprint
	// TArray<FString> GetFingerprint();                                                                                        // [0x10f8f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetExtraValue
	// FString GetExtraValue(FString Key);                                                                                      // [0x10f8d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetExtras
	// TMap<FString, FString> GetExtras();                                                                                      // [0x10f8e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetEnvironment
	// FString GetEnvironment();                                                                                                // [0x10f8c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.GetDist
	// FString GetDist();                                                                                                       // [0x10f8b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryScope.ClearBreadcrumbs
	// void ClearBreadcrumbs();                                                                                                 // [0x10f7d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.ClearAttachments
	// void ClearAttachments();                                                                                                 // [0x10f7d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.Clear
	// void Clear();                                                                                                            // [0x10f7cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.AddBreadcrumb
	// void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);                                                                 // [0x10f7270] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryScope.AddAttachment
	// void AddAttachment(class USentryAttachment* Attachment);                                                                 // [0x10f71e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Sentry.AutomaticBreadcrumbs
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FAutomaticBreadcrumbs
{ 
	bool                                               bOnMapLoadingStarted;                                       // 0x0000   (0x0001)  
	bool                                               bOnMapLoaded;                                               // 0x0001   (0x0001)  
	bool                                               bOnGameStateClassChanged;                                   // 0x0002   (0x0001)  
	bool                                               bOnGameSessionIDChanged;                                    // 0x0003   (0x0001)  
	bool                                               bOnUserActivityStringChanged;                               // 0x0004   (0x0001)  
};

/// Class /Script/Sentry.SentrySettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USentrySettings : public UObject
{ 
public:
	FString                                            DsnUrl;                                                     // 0x0028   (0x0010)  
	FString                                            Release;                                                    // 0x0038   (0x0010)  
	bool                                               InitAutomatically;                                          // 0x0048   (0x0001)  
	FAutomaticBreadcrumbs                              AutomaticBreadcrumbs;                                       // 0x0049   (0x0005)  
	bool                                               UploadSymbolsAutomatically;                                 // 0x004E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x004F   (0x0001)  MISSED
	FString                                            PropertiesFilePath;                                         // 0x0050   (0x0010)  
};

/// Class /Script/Sentry.SentrySubsystem
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class USentrySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED


	/// Functions
	// Function /Script/Sentry.SentrySubsystem.SetUser
	// void SetUser(class USentryUser* User);                                                                                   // [0x10fab60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetTag
	// void SetTag(FString Key, FString Value);                                                                                 // [0x10fa840] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetLevel
	// void SetLevel(ESentryLevel Level);                                                                                       // [0x10fa7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.SetContext
	// void SetContext(FString Key, TMap<FString, FString>& Values);                                                            // [0x10f9d30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.RemoveUser
	// void RemoveUser();                                                                                                       // [0x10f99d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.RemoveTag
	// void RemoveTag(FString Key);                                                                                             // [0x10f9930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.InitializeWithSettings
	// void InitializeWithSettings(FDelegateProperty& OnConfigureSettings);                                                     // [0x10f96a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.Initialize
	// void Initialize();                                                                                                       // [0x10f9340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.ConfigureScope
	// void ConfigureScope(FDelegateProperty& OnConfigureScope);                                                                // [0x10f7d90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.Close
	// void Close();                                                                                                            // [0x10f7d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.ClearBreadcrumbs
	// void ClearBreadcrumbs();                                                                                                 // [0x10f7d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
	// void CaptureUserFeedbackWithParams(class USentryId* EventID, FString Email, FString Comments, FString Name);             // [0x10f7b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureUserFeedback
	// void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);                                                       // [0x10f7ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureMessageWithScope
	// class USentryId* CaptureMessageWithScope(FString Message, FDelegateProperty& OnConfigureScope, ESentryLevel Level);      // [0x10f7970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureMessage
	// class USentryId* CaptureMessage(FString Message, ESentryLevel Level);                                                    // [0x10f7880] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureEventWithScope
	// class USentryId* CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty& OnConfigureScope);                  // [0x10f7780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.CaptureEvent
	// class USentryId* CaptureEvent(class USentryEvent* Event);                                                                // [0x10f76e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.AddBreadcrumbWithParams
	// void AddBreadcrumbWithParams(FString Message, FString Category, FString Type, TMap<FString, FString>& Data, ESentryLevel Level); // [0x10f7390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentrySubsystem.AddBreadcrumb
	// void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);                                                                 // [0x10f7300] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Sentry.SentryUser
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryUser.SetUsername
	// void SetUsername(FString UserName);                                                                                      // [0x10f9b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetIpAddress
	// void SetIpAddress(FString IpAddress);                                                                                    // [0x10f9890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetId
	// void SetId(FString ID);                                                                                                  // [0x10fa210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetEmail
	// void SetEmail(FString Email);                                                                                            // [0x10fa170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.SetData
	// void SetData(TMap<FString, FString>& Data);                                                                              // [0x10f9fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Sentry.SentryUser.GetUsername
	// FString GetUsername();                                                                                                   // [0x10f8830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetIpAddress
	// FString GetIpAddress();                                                                                                  // [0x10f9050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetId
	// FString GetId();                                                                                                         // [0x10f88b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetEmail
	// FString GetEmail();                                                                                                      // [0x10f8c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUser.GetData
	// TMap<FString, FString> GetData();                                                                                        // [0x10f8aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Sentry.SentryUserFeedback
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USentryUserFeedback : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/Sentry.SentryUserFeedback.SetName
	// void SetName(FString Name);                                                                                              // [0x10fa170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.SetEmail
	// void SetEmail(FString Email);                                                                                            // [0x10fa210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.SetComment
	// void SetComment(FString Comments);                                                                                       // [0x10f9b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.Initialize
	// void Initialize(class USentryId* EventID);                                                                               // [0x10f9360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Sentry.SentryUserFeedback.GetName
	// FString GetName();                                                                                                       // [0x10f8c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUserFeedback.GetEmail
	// FString GetEmail();                                                                                                      // [0x10f88b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Sentry.SentryUserFeedback.GetComment
	// FString GetComment();                                                                                                    // [0x10f8830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(USentryAttachment) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryBreadcrumb) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryEvent) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USentryScope) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FAutomaticBreadcrumbs) == 0x0005); // 5 bytes (0x000000 - 0x000005)
static_assert(sizeof(USentrySettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(USentrySubsystem) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(USentryUser) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USentryUserFeedback) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(USentrySettings, DsnUrl) == 0x0028);
static_assert(offsetof(USentrySettings, Release) == 0x0038);
static_assert(offsetof(USentrySettings, AutomaticBreadcrumbs) == 0x0049);
static_assert(offsetof(USentrySettings, PropertiesFilePath) == 0x0050);
