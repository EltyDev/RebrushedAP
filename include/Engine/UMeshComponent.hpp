#ifndef UMESHCOMPONENT_HPP_
#define UMESHCOMPONENT_HPP_

#include "SDK/SDK.h"
#include "Engine/UMaterialInterface.hpp"

namespace Engine {
    class UMeshComponent : public UPrimitiveComponent { 
        public:

            void SetMaterial(int32_t index, Engine::UMaterialInterface* material);

            TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0470   (0x0010)  
            unsigned char                                      UnknownData00_6[0x10];                                      // 0x0480   (0x0010)  MISSED
            bool                                               bEnableMaterialParameterCaching : 1;                        // 0x0490:0 (0x0001)  
            unsigned char                                      UnknownData01_7[0x7];                                       // 0x0491   (0x0007)  MISSED
    };
}

#endif /* !UMESHCOMPONENT_HPP_ */
