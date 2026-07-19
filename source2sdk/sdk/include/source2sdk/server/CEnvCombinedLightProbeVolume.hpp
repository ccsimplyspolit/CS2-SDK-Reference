#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x15f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvCombinedLightProbeVolume : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x1078]; // 0x4a8
            Color m_Entity_Color; // 0x1520            
            float m_Entity_flBrightness; // 0x1524            
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x1528            
            bool m_Entity_bCustomCubemapTexture; // 0x1530            
            uint8_t _pad1531[0x7]; // 0x1531
            // m_Entity_hLightProbeTexture_AmbientCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_AmbientCube;
            char m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x1538            
            // m_Entity_hLightProbeTexture_SDF has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SDF;
            char m_Entity_hLightProbeTexture_SDF[0x8]; // 0x1540            
            // m_Entity_hLightProbeTexture_SH2_DC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_DC;
            char m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x1548            
            // m_Entity_hLightProbeTexture_SH2_R has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_R;
            char m_Entity_hLightProbeTexture_SH2_R[0x8]; // 0x1550            
            // m_Entity_hLightProbeTexture_SH2_G has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_G;
            char m_Entity_hLightProbeTexture_SH2_G[0x8]; // 0x1558            
            // m_Entity_hLightProbeTexture_SH2_B has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_B;
            char m_Entity_hLightProbeTexture_SH2_B[0x8]; // 0x1560            
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x1568            
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x1570            
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x1578            
            Vector m_Entity_vBoxMins; // 0x1580            
            Vector m_Entity_vBoxMaxs; // 0x158c            
            bool m_Entity_bMoveable; // 0x1598            
            uint8_t _pad1599[0x3]; // 0x1599
            std::int32_t m_Entity_nHandshake; // 0x159c            
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15a0            
            std::int32_t m_Entity_nPriority; // 0x15a4            
            bool m_Entity_bStartDisabled; // 0x15a8            
            uint8_t _pad15a9[0x3]; // 0x15a9
            float m_Entity_flEdgeFadeDist; // 0x15ac            
            Vector m_Entity_vEdgeFadeDists; // 0x15b0            
            std::int32_t m_Entity_nLightProbeSizeX; // 0x15bc            
            std::int32_t m_Entity_nLightProbeSizeY; // 0x15c0            
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x15c4            
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x15c8            
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x15cc            
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x15d0            
            uint8_t _pad15d4[0x15]; // 0x15d4
            bool m_Entity_bEnabled; // 0x15e9            
            uint8_t _pad15ea[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvCombinedLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvCombinedLightProbeVolume) == 0x15f0);
    };
};
