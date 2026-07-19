#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1738
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvCombinedLightProbeVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x1078]; // 0x5f0
            Color m_Entity_Color; // 0x1668            
            float m_Entity_flBrightness; // 0x166c            
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x1670            
            bool m_Entity_bCustomCubemapTexture; // 0x1678            
            uint8_t _pad1679[0x7]; // 0x1679
            // m_Entity_hLightProbeTexture_AmbientCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_AmbientCube;
            char m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x1680            
            // m_Entity_hLightProbeTexture_SDF has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SDF;
            char m_Entity_hLightProbeTexture_SDF[0x8]; // 0x1688            
            // m_Entity_hLightProbeTexture_SH2_DC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_DC;
            char m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x1690            
            // m_Entity_hLightProbeTexture_SH2_R has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_R;
            char m_Entity_hLightProbeTexture_SH2_R[0x8]; // 0x1698            
            // m_Entity_hLightProbeTexture_SH2_G has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_G;
            char m_Entity_hLightProbeTexture_SH2_G[0x8]; // 0x16a0            
            // m_Entity_hLightProbeTexture_SH2_B has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_B;
            char m_Entity_hLightProbeTexture_SH2_B[0x8]; // 0x16a8            
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x16b0            
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x16b8            
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x16c0            
            Vector m_Entity_vBoxMins; // 0x16c8            
            Vector m_Entity_vBoxMaxs; // 0x16d4            
            bool m_Entity_bMoveable; // 0x16e0            
            uint8_t _pad16e1[0x3]; // 0x16e1
            std::int32_t m_Entity_nHandshake; // 0x16e4            
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x16e8            
            std::int32_t m_Entity_nPriority; // 0x16ec            
            bool m_Entity_bStartDisabled; // 0x16f0            
            uint8_t _pad16f1[0x3]; // 0x16f1
            float m_Entity_flEdgeFadeDist; // 0x16f4            
            Vector m_Entity_vEdgeFadeDists; // 0x16f8            
            std::int32_t m_Entity_nLightProbeSizeX; // 0x1704            
            std::int32_t m_Entity_nLightProbeSizeY; // 0x1708            
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x170c            
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x1710            
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x1714            
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x1718            
            uint8_t _pad171c[0x15]; // 0x171c
            bool m_Entity_bEnabled; // 0x1731            
            uint8_t _pad1732[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCombinedLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCombinedLightProbeVolume) == 0x1738);
    };
};
