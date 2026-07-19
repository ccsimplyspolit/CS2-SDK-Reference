#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvCubemapFog : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flEndDistance; // 0x4a8            
            float m_flStartDistance; // 0x4ac            
            float m_flFogFalloffExponent; // 0x4b0            
            bool m_bHeightFogEnabled; // 0x4b4            
            uint8_t _pad04b5[0x3]; // 0x4b5
            float m_flFogHeightWidth; // 0x4b8            
            float m_flFogHeightEnd; // 0x4bc            
            float m_flFogHeightStart; // 0x4c0            
            float m_flFogHeightExponent; // 0x4c4            
            float m_flLODBias; // 0x4c8            
            bool m_bActive; // 0x4cc            
            bool m_bStartDisabled; // 0x4cd            
            uint8_t _pad04ce[0x2]; // 0x4ce
            float m_flFogMaxOpacity; // 0x4d0            
            std::int32_t m_nCubemapSourceType; // 0x4d4            
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x4d8            
            CUtlSymbolLarge m_iszSkyEntity; // 0x4e0            
            std::int32_t m_nHeightFogType; // 0x4e8            
            std::int32_t m_nFogHeightBlendMode; // 0x4ec            
            std::int32_t m_nFogHeightCoordinateSpace; // 0x4f0            
            std::int32_t m_nDistanceFogType; // 0x4f4            
            CUtlSymbolLarge m_DistanceFogCurveString; // 0x4f8            
            CUtlSymbolLarge m_HeightFogCurveString; // 0x500            
            uint8_t _pad0508[0x90]; // 0x508
            // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
            char m_hFogCubemapTexture[0x8]; // 0x598            
            bool m_bHasHeightFogEnd; // 0x5a0            
            bool m_bFirstTime; // 0x5a1            
            uint8_t _pad05a2[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvCubemapFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvCubemapFog) == 0x5a8);
    };
};
