
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_Core
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C
/// Size: 0x02F4 (756 bytes) (0x000290 - 0x0002F4) align 8 MaxSize: 0x02F4
class UWBP_DebugOverlay_C : public UPL_DebugOverlayWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UTextBlock*                                  TxtCurrentMap;                                              // 0x0298   (0x0008)  
	class UTextBlock*                                  TxtCurrentTime;                                             // 0x02A0   (0x0008)  
	class UTextBlock*                                  TxtFPS;                                                     // 0x02A8   (0x0008)  
	class UTextBlock*                                  TxtFPSSmooth;                                               // 0x02B0   (0x0008)  
	class UTextBlock*                                  TxtLoca;                                                    // 0x02B8   (0x0008)  
	class UTextBlock*                                  TxtMemory;                                                  // 0x02C0   (0x0008)  
	class UTextBlock*                                  TxtPlayerPos;                                               // 0x02C8   (0x0008)  
	class UTextBlock*                                  TxtPlayTime;                                                // 0x02D0   (0x0008)  
	class UTextBlock*                                  txtResolution;                                              // 0x02D8   (0x0008)  
	class UTextBlock*                                  TxtSavingBlocked;                                           // 0x02E0   (0x0008)  
	class UTextBlock*                                  TxtVersionInfo;                                             // 0x02E8   (0x0008)  
	float                                              RemainingTimeUntilDateUpdate;                               // 0x02F0   (0x0004)  


	/// Functions
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetSavingBlockedTxt
	// void GetSavingBlockedTxt(FText& txt);                                                                                    // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.SparseTick
	// void SparseTick();                                                                                                       // [0x19ac1c0] Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetMemoryTxt
	// void GetMemoryTxt(FText& txt);                                                                                           // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetResolutionInfoTxt
	// void GetResolutionInfoTxt(FText& Resolution);                                                                            // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetSmoothFPSTxt
	// void GetSmoothFPSTxt(FText& txt);                                                                                        // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetFPSTxt
	// void GetFPSTxt(FText& txt);                                                                                              // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetPlayTimeTxt
	// void GetPlayTimeTxt(FText& txt);                                                                                         // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetLocaTxt
	// void GetLocaTxt(FText& txt);                                                                                             // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetPlayerPosTxt
	// void GetPlayerPosTxt(FText& txt);                                                                                        // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetCurrentMapTxt
	// void GetCurrentMapTxt(FText& txt);                                                                                       // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetCurrentTimeTxt
	// void GetCurrentTimeTxt(FText& txt);                                                                                      // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.GetVersionInfoTxt
	// void GetVersionInfoTxt(FText& txt);                                                                                      // [0x19ac1c0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_Core/Debug/WBP_DebugOverlay.WBP_DebugOverlay_C.ExecuteUbergraph_WBP_DebugOverlay
	// void ExecuteUbergraph_WBP_DebugOverlay(int32_t EntryPoint);                                                              // [0x19ac1c0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_DebugOverlay_C) == 0x02F4); // 756 bytes (0x000290 - 0x0002F4)
static_assert(offsetof(UWBP_DebugOverlay_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtCurrentMap) == 0x0298);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtCurrentTime) == 0x02A0);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtFPS) == 0x02A8);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtFPSSmooth) == 0x02B0);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtLoca) == 0x02B8);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtMemory) == 0x02C0);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtPlayerPos) == 0x02C8);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtPlayTime) == 0x02D0);
static_assert(offsetof(UWBP_DebugOverlay_C, txtResolution) == 0x02D8);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtSavingBlocked) == 0x02E0);
static_assert(offsetof(UWBP_DebugOverlay_C, TxtVersionInfo) == 0x02E8);
