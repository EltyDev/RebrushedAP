
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/PL_UserHandling.EPL_PlayerNotificationDialogueResult
/// Size: 0x01 (1 bytes)
enum class EPL_PlayerNotificationDialogueResult : uint8_t
{
	EPL_PlayerNotificationDialogueResult__None                                       = 0,
	EPL_PlayerNotificationDialogueResult__Confirm                                    = 1,
	EPL_PlayerNotificationDialogueResult__Cancel                                     = 2
};

/// Enum /Script/PL_UserHandling.EPL_PlayerNotificationType
/// Size: 0x01 (1 bytes)
enum class EPL_PlayerNotificationType : uint8_t
{
	EPL_PlayerNotificationType__NotificationInfo                                     = 0,
	EPL_PlayerNotificationType__NotificationWarning                                  = 1,
	EPL_PlayerNotificationType__NotificationError                                    = 2
};

/// Class /Script/PL_UserHandling.PL_NotificationWidgetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_NotificationWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_UserHandling.PL_NotificationWidgetInterface.ShowNotification
	// int32_t ShowNotification(FPL_PlayerNotificationData& MessageData);                                                       // [0xe8d960] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PL_UserHandling.PL_NotificationWidgetInterface.GetId
	// int32_t GetId();                                                                                                         // [0xe8d560] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PL_UserHandling.PL_NotificationWidgetInterface.CanAcceptInput
	// bool CanAcceptInput();                                                                                                   // [0xe8d500] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/PL_UserHandling.PL_PlayerNotificationManager
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 16 MaxSize: 0x0070
class UPL_PlayerNotificationManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UInputComponent*                             NotificationInputComponent;                                 // 0x0038   (0x0008)  
	class UPL_PlayerNotificationWidget*                NotificationWidget;                                         // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0048   (0x0028)  MISSED


	/// Functions
	// Function /Script/PL_UserHandling.PL_PlayerNotificationManager.OnReturnToMainMenu
	// void OnReturnToMainMenu();                                                                                               // [0xe8d8b0] Final|Native|Private 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationManager.OnNotificationDismissed
	// void OnNotificationDismissed();                                                                                          // [0xe8d890] Final|Native|Private 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationManager.OnNotificationDeclined
	// void OnNotificationDeclined();                                                                                           // [0xe8d870] Final|Native|Private 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationManager.OnNotificationAccepted
	// void OnNotificationAccepted();                                                                                           // [0xe8d850] Final|Native|Private 
};

/// Class /Script/PL_UserHandling.PL_PlayerNotificationUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_PlayerNotificationUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PL_UserHandling.PL_PlayerNotificationUtils.ShowPlayerNotification
	// int32_t ShowPlayerNotification(class UGameInstance* GameInstance, FPL_PlayerNotificationData& Message);                  // [0xe8da80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationUtils.IsPlayerNotificationOpen
	// bool IsPlayerNotificationOpen(class UGameInstance* GameInstance);                                                        // [0xe8d790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationUtils.HidePlayerNotification
	// void HidePlayerNotification(class UGameInstance* GameInstance, int32_t DisconnectWidgetId);                              // [0xe8d6d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PL_UserHandling.PL_PlayerNotificationWidget
/// Size: 0x0308 (776 bytes) (0x000260 - 0x000308) align 8 MaxSize: 0x0308
class UPL_PlayerNotificationWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x68];                                      // 0x0260   (0x0068)  MISSED
	float                                              TimeToCancel;                                               // 0x02C8   (0x0004)  
	float                                              TimeToAccept;                                               // 0x02CC   (0x0004)  
	int32_t                                            PlayerNotificationWidgetZOrder;                             // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,674) /* FMulticastInlineDelegate */ __um(OnPlayerNotificationDismissed);                      // 0x02D8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x02E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/PL_UserHandling.PL_PlayerNotificationWidget.TickButtonProgress
	// void TickButtonProgress(float InDeltaTime);                                                                              // [0xe8ddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationWidget.BP_OnSetConfirmProgress
	// void BP_OnSetConfirmProgress(float Progress);                                                                            // [0x19ac1c0] Event|Protected|BlueprintEvent 
	// Function /Script/PL_UserHandling.PL_PlayerNotificationWidget.BP_OnSetCancelProgress
	// void BP_OnSetCancelProgress(float Progress);                                                                             // [0x19ac1c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/PL_UserHandling.PL_UserHandler
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UPL_UserHandler : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,675) /* FMulticastInlineDelegate */ __um(OnUserStateChanged);                                 // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,676) /* FMulticastInlineDelegate */ __um(OnPlayerControllerChanged);                          // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,677) /* FMulticastInlineDelegate */ __um(OnPlayerUserChanged);                                // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0068   (0x0028)  MISSED


	/// Functions
	// Function /Script/PL_UserHandling.PL_UserHandler.ShowPlayerProfile
	// void ShowPlayerProfile(FUniqueNetIdRepl Requestor, FUniqueNetIdRepl Requestee);                                          // [0xe8dbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserHandling.PL_UserHandler.ShowControllerSelector
	// void ShowControllerSelector(int32_t PlatformUserId);                                                                     // [0xe8d8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PL_UserHandling.PL_UserHandler.HasUser
	// bool HasUser();                                                                                                          // [0xe8d6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserHandling.PL_UserHandler.HasController
	// bool HasController();                                                                                                    // [0xe8d670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserHandling.PL_UserHandler.GetMainPlayerName
	// FString GetMainPlayerName();                                                                                             // [0xe8d5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserHandling.PL_UserHandler.GetMainPlayerControllerId
	// int32_t GetMainPlayerControllerId();                                                                                     // [0xe8d5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserHandling.PL_UserHandler.GetMainPlayer
	// class ULocalPlayer* GetMainPlayer();                                                                                     // [0xe8d590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PL_UserHandling.PL_UserHandler.CanPlayOnline
	// bool CanPlayOnline();                                                                                                    // [0xe8d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PL_UserHandling.PL_UserHandlerInputClientViewportInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UserHandlerInputClientViewportInterface : public UInterface
{ 
public:
};

/// Class /Script/PL_UserHandling.PL_UserHandlingGameStateInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPL_UserHandlingGameStateInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PL_UserHandling.PL_UserHandlingGameStateInterface.IsSinglePlayer
	// bool IsSinglePlayer();                                                                                                   // [0xe8d820] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/PL_UserHandling.PL_UserHandlingSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPL_UserHandlingSettings : public UObject
{ 
public:
	TWeakObjectPtr<class UWorld*>                      ReturnLevel;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UClass*                                      PlayerNotificationWidgetClass;                              // 0x0050   (0x0008)  
	class UClass*                                      PlayerNotificationWidgetClassMP;                            // 0x0058   (0x0008)  
	class UClass*                                      NotificationInputComponentClass;                            // 0x0060   (0x0008)  
};

/// Struct /Script/PL_UserHandling.PL_NotificationResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPL_NotificationResult
{ 
	TArray<class APlayerController*>                   PlayerControllers;                                          // 0x0000   (0x0010)  
	EPL_PlayerNotificationDialogueResult               Response;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/PL_UserHandling.PL_PlayerNotificationData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FPL_PlayerNotificationData
{ 
	EPL_PlayerNotificationType                         Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              Message;                                                    // 0x0008   (0x0018)  
	bool                                               HasConfirmation;                                            // 0x0020   (0x0001)  
	bool                                               ShowImmediately;                                            // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0022   (0x0006)  MISSED
	TArray<class APlayerController*>                   PlayerControllers;                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,678) /* FDelegateProperty */      __um(OnNotificationResult);                                 // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPL_NotificationWidgetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PlayerNotificationManager) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPL_PlayerNotificationUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_PlayerNotificationWidget) == 0x0308); // 776 bytes (0x000260 - 0x000308)
static_assert(sizeof(UPL_UserHandler) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UPL_UserHandlerInputClientViewportInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_UserHandlingGameStateInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPL_UserHandlingSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FPL_NotificationResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPL_PlayerNotificationData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(UPL_PlayerNotificationManager, NotificationInputComponent) == 0x0038);
static_assert(offsetof(UPL_PlayerNotificationManager, NotificationWidget) == 0x0040);
static_assert(offsetof(UPL_UserHandlingSettings, ReturnLevel) == 0x0028);
static_assert(offsetof(UPL_UserHandlingSettings, PlayerNotificationWidgetClass) == 0x0050);
static_assert(offsetof(UPL_UserHandlingSettings, PlayerNotificationWidgetClassMP) == 0x0058);
static_assert(offsetof(UPL_UserHandlingSettings, NotificationInputComponentClass) == 0x0060);
static_assert(offsetof(FPL_NotificationResult, PlayerControllers) == 0x0000);
static_assert(offsetof(FPL_NotificationResult, Response) == 0x0010);
static_assert(offsetof(FPL_PlayerNotificationData, Type) == 0x0000);
static_assert(offsetof(FPL_PlayerNotificationData, Message) == 0x0008);
static_assert(offsetof(FPL_PlayerNotificationData, PlayerControllers) == 0x0028);
