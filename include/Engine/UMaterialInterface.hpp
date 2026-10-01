#ifndef UMATERIALINTERFACE_HPP_
#define UMATERIALINTERFACE_HPP_

#include "SDK/SDK.h"
#include "Engine/UObject.hpp"

namespace Engine {
    class UMaterialInterface : public UObject {
        public:

            static UClass *StaticClass();

            unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
            class USubsurfaceProfile*                          SubsurfaceProfile;                                          // 0x0038   (0x0008)  
            unsigned char                                      UnknownData01_6[0x10];                                      // 0x0040   (0x0010)  MISSED
            FLightmassMaterialInterfaceSettings                LightmassSettings;                                          // 0x0050   (0x0010)  
            TArray<FMaterialTextureInfo>                       TextureStreamingData;                                       // 0x0060   (0x0010)  
            TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0070   (0x0010)  
            unsigned char                                      UnknownData02_7[0x8];                                       // 0x0080   (0x0008)  MISSED

    };
}

#endif /* !UMATERIALINTERFACE_HPP_ */
