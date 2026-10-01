#ifndef USTATICMESHCOMPONENT_HPP_
#define USTATICMESHCOMPONENT_HPP_

#include "Engine/UMeshComponent.hpp"
#include "Engine/UStaticMesh.hpp"

namespace Engine {

    class UStaticMeshComponent : public Engine::UMeshComponent {
        public:

            void SetStaticMesh(Engine::UStaticMesh* mesh);
            void SetRelativeScale3D(FVector scale);
            Engine::UMaterialInterface* GetMaterial(int32_t index);
            static UClass *StaticClass();

            int32_t                                            ForcedLodModel;                                             // 0x0498   (0x0004)  
            int32_t                                            PreviousLODLevel;                                           // 0x049C   (0x0004)  
            int32_t                                            MinLOD;                                                     // 0x04A0   (0x0004)  
            int32_t                                            SubDivisionStepSize;                                        // 0x04A4   (0x0004)  
            class UStaticMesh*                                 StaticMesh;                                                 // 0x04A8   (0x0008)  
            FColor                                             WireframeColorOverride;                                     // 0x04B0   (0x0004)  
            bool                                               bEvaluateWorldPositionOffset : 1;                           // 0x04B4:0 (0x0001)  
            bool                                               bOverrideWireframeColor : 1;                                // 0x04B4:1 (0x0001)  
            bool                                               bOverrideMinLod : 1;                                        // 0x04B4:2 (0x0001)  
            bool                                               bOverrideNavigationExport : 1;                              // 0x04B4:3 (0x0001)  
            bool                                               bForceNavigationObstacle : 1;                               // 0x04B4:4 (0x0001)  
            bool                                               bDisallowMeshPaintPerInstance : 1;                          // 0x04B4:5 (0x0001)  
            bool                                               bIgnoreInstanceForTextureStreaming : 1;                     // 0x04B4:6 (0x0001)  
            bool                                               bOverrideLightMapRes : 1;                                   // 0x04B4:7 (0x0001)  
            bool                                               bCastDistanceFieldIndirectShadow : 1;                       // 0x04B5:0 (0x0001)  
            bool                                               bOverrideDistanceFieldSelfShadowBias : 1;                   // 0x04B5:1 (0x0001)  
            bool                                               bUseSubDivisions : 1;                                       // 0x04B5:2 (0x0001)  
            bool                                               bUseDefaultCollision : 1;                                   // 0x04B5:3 (0x0001)  
            bool                                               bReverseCulling : 1;                                        // 0x04B5:4 (0x0001)  
            unsigned char                                      UnknownData00_5[0x2];                                       // 0x04B6   (0x0002)  MISSED
            int32_t                                            OverriddenLightMapRes;                                      // 0x04B8   (0x0004)  
            float                                              DistanceFieldIndirectShadowMinVisibility;                   // 0x04BC   (0x0004)  
            float                                              DistanceFieldSelfShadowBias;                                // 0x04C0   (0x0004)  
            float                                              StreamingDistanceMultiplier;                                // 0x04C4   (0x0004)  
            TArray<FStaticMeshComponentLODInfo>                LODData;                                                    // 0x04C8   (0x0010)  
            TArray<FStreamingTextureBuildInfo>                 StreamingTextureData;                                       // 0x04D8   (0x0010)  
            FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x04E8   (0x0018)  
    };
}

#endif /* !USTATICMESHCOMPONENT_HPP_ */
