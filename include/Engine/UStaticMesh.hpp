#ifndef USTATICMESH_HPP_
#define USTATICMESH_HPP_

#include "SDK/SDK.h"

namespace Engine {
    class UStaticMesh : public UObject {
        public:

            static UClass *StaticClass();

            unsigned char                                      UnknownData00_8[0x20];                                      // 0x0060   (0x0020)  MISSED
            FPerPlatformInt                                    MinLOD;                                                     // 0x0080   (0x0004)  
            float                                              LpvBiasMultiplier;                                          // 0x0084   (0x0004)  
            TArray<FStaticMaterial>                            StaticMaterials;                                            // 0x0088   (0x0010)  
            float                                              LightmapUVDensity;                                          // 0x0098   (0x0004)  
            int32_t                                            LightMapResolution;                                         // 0x009C   (0x0004)  
            int32_t                                            LightMapCoordinateIndex;                                    // 0x00A0   (0x0004)  
            float                                              DistanceFieldSelfShadowBias;                                // 0x00A4   (0x0004)  
            class UBodySetup*                                  BodySetup;                                                  // 0x00A8   (0x0008)  
            int32_t                                            LODForCollision;                                            // 0x00B0   (0x0004)  
            bool                                               bGenerateMeshDistanceField : 1;                             // 0x00B4:0 (0x0001)  
            bool                                               bStripComplexCollisionForConsole : 1;                       // 0x00B4:1 (0x0001)  
            bool                                               bHasNavigationData : 1;                                     // 0x00B4:2 (0x0001)  
            bool                                               bSupportUniformlyDistributedSampling : 1;                   // 0x00B4:3 (0x0001)  
            bool                                               bSupportPhysicalMaterialMasks : 1;                          // 0x00B4:4 (0x0001)  
            bool                                               bSupportRayTracing : 1;                                     // 0x00B4:5 (0x0001)  
            bool                                               bIsBuiltAtRuntime : 1;                                      // 0x00B4:6 (0x0001)  
            unsigned char                                      UnknownBit01 : 1;                                           // 0x00B4:7 (0x0001)  MISSED
            bool                                               bAllowCPUAccess : 1;                                        // 0x00B5:0 (0x0001)  
            bool                                               bSupportGpuUniformlyDistributedSampling : 1;                // 0x00B5:1 (0x0001)  
            unsigned char                                      UnknownData02_5[0x22];                                      // 0x00B6   (0x0022)  MISSED
            TArray<class UStaticMeshSocket*>                   Sockets;                                                    // 0x00D8   (0x0010)  
            unsigned char                                      UnknownData03_6[0x10];                                      // 0x00E8   (0x0010)  MISSED
            FVector                                            PositiveBoundsExtension;                                    // 0x00F8   (0x000C)  
            FVector                                            NegativeBoundsExtension;                                    // 0x0104   (0x000C)  
            FBoxSphereBounds                                   ExtendedBounds;                                             // 0x0110   (0x001C)  
            int32_t                                            ElementToIgnoreForTexFactor;                                // 0x012C   (0x0004)  
            TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0130   (0x0010)  
            class UObject*                                     EditableMesh;                                               // 0x0140   (0x0008)  
            class UStaticMesh*                                 ComplexCollisionMesh;                                       // 0x0148   (0x0008)  
            class UNavCollisionBase*                           NavCollision;                                               // 0x0150   (0x0008)  
    };
}

#endif /* !USTATICMESH_HPP_ */
