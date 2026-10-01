#ifndef UTEXTURE2D_HPP_
#define UTEXTURE2D_HPP_

#include "SDK/SDK.h"

namespace Engine {
    class UTexture2D : UTexture {
        public:

            static UClass *StaticClass();

        	int32_t                                            LevelIndex;                                                 // 0x0178   (0x0004)  
            int32_t                                            FirstResourceMemMip;                                        // 0x017C   (0x0004)  
            bool                                               bTemporarilyDisableStreaming : 1;                           // 0x0180:0 (0x0001)  
            TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x0181   (0x0001)  
            TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x0182   (0x0001)  
            unsigned char                                      UnknownData00_6[0x1];                                       // 0x0183   (0x0001)  MISSED
            FIntPoint                                          ImportedSize;                                               // 0x0184   (0x0008)  
            unsigned char                                      UnknownData01_7[0x14];                                      // 0x018C   (0x0014)  MISSED
        protected:
        private:
    };
}

#endif /* !UTEXTURE2D_HPP_ */
