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
        // Size: 0x1748
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvCombinedLightProbeVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x1078]; // 0x600
            Color m_Entity_Color; // 0x1678            
            float m_Entity_flBrightness; // 0x167c            
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x1680            
            bool m_Entity_bCustomCubemapTexture; // 0x1688            
            uint8_t _pad1689[0x7]; // 0x1689
            // m_Entity_hLightProbeTexture_AmbientCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_AmbientCube;
            char m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x1690            
            // m_Entity_hLightProbeTexture_SDF has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SDF;
            char m_Entity_hLightProbeTexture_SDF[0x8]; // 0x1698            
            // m_Entity_hLightProbeTexture_SH2_DC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_DC;
            char m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x16a0            
            // m_Entity_hLightProbeTexture_SH2_R has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_R;
            char m_Entity_hLightProbeTexture_SH2_R[0x8]; // 0x16a8            
            // m_Entity_hLightProbeTexture_SH2_G has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_G;
            char m_Entity_hLightProbeTexture_SH2_G[0x8]; // 0x16b0            
            // m_Entity_hLightProbeTexture_SH2_B has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_B;
            char m_Entity_hLightProbeTexture_SH2_B[0x8]; // 0x16b8            
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x16c0            
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x16c8            
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x16d0            
            Vector m_Entity_vBoxMins; // 0x16d8            
            Vector m_Entity_vBoxMaxs; // 0x16e4            
            bool m_Entity_bMoveable; // 0x16f0            
            uint8_t _pad16f1[0x3]; // 0x16f1
            std::int32_t m_Entity_nHandshake; // 0x16f4            
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x16f8            
            std::int32_t m_Entity_nPriority; // 0x16fc            
            bool m_Entity_bStartDisabled; // 0x1700            
            uint8_t _pad1701[0x3]; // 0x1701
            float m_Entity_flEdgeFadeDist; // 0x1704            
            Vector m_Entity_vEdgeFadeDists; // 0x1708            
            std::int32_t m_Entity_nLightProbeSizeX; // 0x1714            
            std::int32_t m_Entity_nLightProbeSizeY; // 0x1718            
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x171c            
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x1720            
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x1724            
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x1728            
            uint8_t _pad172c[0x15]; // 0x172c
            bool m_Entity_bEnabled; // 0x1741            
            uint8_t _pad1742[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCombinedLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCombinedLightProbeVolume) == 0x1748);
    };
};
