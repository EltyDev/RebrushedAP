
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PL_PhotoMode
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /PL_PhotoMode/UI/WBP_PhotoDisplay.WBP_PhotoDisplay_C
/// Size: 0x0281 (641 bytes) (0x000260 - 0x000281) align 8 MaxSize: 0x0281
class UWBP_PhotoDisplay_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            TakePhoto;                                                  // 0x0268   (0x0008)  
	class UImage*                                      CurrentPhoto;                                               // 0x0270   (0x0008)  
	float                                              BlendOutTime;                                               // 0x0278   (0x0004)  
	float                                              BlendOutTimeLeft;                                           // 0x027C   (0x0004)  
	bool                                               bIsAddedToViewport;                                         // 0x0280   (0x0001)  


	/// Functions
	// Function /PL_PhotoMode/UI/WBP_PhotoDisplay.WBP_PhotoDisplay_C.SequenceEvent__ENTRYPOINTWBP_PhotoDisplay
	// void SequenceEvent__ENTRYPOINTWBP_PhotoDisplay();                                                                        // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoDisplay.WBP_PhotoDisplay_C.PhotoModeTick
	// void PhotoModeTick(float DeltaTime);                                                                                     // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoDisplay.WBP_PhotoDisplay_C.RemoveWidget
	// void RemoveWidget();                                                                                                     // [0x19ac1c0] BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoDisplay.WBP_PhotoDisplay_C.SetPhotoRender
	// void SetPhotoRender(class UTexture* RenderedTexture);                                                                    // [0x19ac1c0] Event|Public|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoDisplay.WBP_PhotoDisplay_C.ExecuteUbergraph_WBP_PhotoDisplay
	// void ExecuteUbergraph_WBP_PhotoDisplay(int32_t EntryPoint);                                                              // [0x19ac1c0] Final                
};

/// Class /PL_PhotoMode/UI/WBP_IndividualPhoto.WBP_IndividualPhoto_C
/// Size: 0x0270 (624 bytes) (0x000260 - 0x000270) align 8 MaxSize: 0x0270
class UWBP_IndividualPhoto_C : public UUserWidget
{ 
public:
	class UImage*                                      Photo;                                                      // 0x0260   (0x0008)  
	class UTextureRenderTarget2D*                      PhotoTexture;                                               // 0x0268   (0x0008)  


	/// Functions
	// Function /PL_PhotoMode/UI/WBP_IndividualPhoto.WBP_IndividualPhoto_C.SetPhoto
	// void SetPhoto(class UTextureRenderTarget2D* PhotoTexture);                                                               // [0x19ac1c0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /PL_PhotoMode/UI/WBP_PhotoGallery.WBP_PhotoGallery_C
/// Size: 0x0270 (624 bytes) (0x000260 - 0x000270) align 8 MaxSize: 0x0270
class UWBP_PhotoGallery_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWrapBox*                                    GalleryBox;                                                 // 0x0268   (0x0008)  


	/// Functions
	// Function /PL_PhotoMode/UI/WBP_PhotoGallery.WBP_PhotoGallery_C.UpdateGallery
	// void UpdateGallery(FPL_PhotoModeGalleryData& PL_PhotoModeGalleryData);                                                   // [0x19ac1c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoGallery.WBP_PhotoGallery_C.Construct
	// void Construct();                                                                                                        // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoGallery.WBP_PhotoGallery_C.Destruct
	// void Destruct();                                                                                                         // [0x19ac1c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoGallery.WBP_PhotoGallery_C.Update Gallery Event
	// void UpdateGalleryEvent(FPL_PhotoModeGalleryData& Data);                                                                 // [0x19ac1c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PL_PhotoMode/UI/WBP_PhotoGallery.WBP_PhotoGallery_C.ExecuteUbergraph_WBP_PhotoGallery
	// void ExecuteUbergraph_WBP_PhotoGallery(int32_t EntryPoint);                                                              // [0x19ac1c0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_PhotoDisplay_C) == 0x0281); // 641 bytes (0x000260 - 0x000281)
static_assert(sizeof(UWBP_IndividualPhoto_C) == 0x0270); // 624 bytes (0x000260 - 0x000270)
static_assert(sizeof(UWBP_PhotoGallery_C) == 0x0270); // 624 bytes (0x000260 - 0x000270)
static_assert(offsetof(UWBP_PhotoDisplay_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_PhotoDisplay_C, TakePhoto) == 0x0268);
static_assert(offsetof(UWBP_PhotoDisplay_C, CurrentPhoto) == 0x0270);
static_assert(offsetof(UWBP_IndividualPhoto_C, Photo) == 0x0260);
static_assert(offsetof(UWBP_IndividualPhoto_C, PhotoTexture) == 0x0268);
static_assert(offsetof(UWBP_PhotoGallery_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_PhotoGallery_C, GalleryBox) == 0x0268);
