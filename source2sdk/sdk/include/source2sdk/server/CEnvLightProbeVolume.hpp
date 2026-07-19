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
        // Size: 0x1538
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvLightProbeVolume : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0xff8]; // 0x4a8
            // m_Entity_hLightProbeTexture_AmbientCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_AmbientCube;
            char m_Entity_hLightProbeTexture_AmbientCube[0x8]; // 0x14a0            
            // m_Entity_hLightProbeTexture_SDF has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SDF;
            char m_Entity_hLightProbeTexture_SDF[0x8]; // 0x14a8            
            // m_Entity_hLightProbeTexture_SH2_DC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_DC;
            char m_Entity_hLightProbeTexture_SH2_DC[0x8]; // 0x14b0            
            // m_Entity_hLightProbeTexture_SH2_R has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_R;
            char m_Entity_hLightProbeTexture_SH2_R[0x8]; // 0x14b8            
            // m_Entity_hLightProbeTexture_SH2_G has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_G;
            char m_Entity_hLightProbeTexture_SH2_G[0x8]; // 0x14c0            
            // m_Entity_hLightProbeTexture_SH2_B has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture_SH2_B;
            char m_Entity_hLightProbeTexture_SH2_B[0x8]; // 0x14c8            
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x14d0            
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x14d8            
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x14e0            
            Vector m_Entity_vBoxMins; // 0x14e8            
            Vector m_Entity_vBoxMaxs; // 0x14f4            
            bool m_Entity_bMoveable; // 0x1500            
            uint8_t _pad1501[0x3]; // 0x1501
            std::int32_t m_Entity_nHandshake; // 0x1504            
            std::int32_t m_Entity_nPriority; // 0x1508            
            bool m_Entity_bStartDisabled; // 0x150c            
            uint8_t _pad150d[0x3]; // 0x150d
            std::int32_t m_Entity_nLightProbeSizeX; // 0x1510            
            std::int32_t m_Entity_nLightProbeSizeY; // 0x1514            
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x1518            
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x151c            
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x1520            
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x1524            
            uint8_t _pad1528[0x9]; // 0x1528
            bool m_Entity_bEnabled; // 0x1531            
            uint8_t _pad1532[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvLightProbeVolume) == 0x1538);
    };
};
