#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EnvCubemapFog : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flEndDistance; // 0x5f0            
            float m_flStartDistance; // 0x5f4            
            float m_flFogFalloffExponent; // 0x5f8            
            bool m_bHeightFogEnabled; // 0x5fc            
            uint8_t _pad05fd[0x3]; // 0x5fd
            float m_flFogHeightWidth; // 0x600            
            float m_flFogHeightEnd; // 0x604            
            float m_flFogHeightStart; // 0x608            
            float m_flFogHeightExponent; // 0x60c            
            float m_flLODBias; // 0x610            
            bool m_bActive; // 0x614            
            bool m_bStartDisabled; // 0x615            
            uint8_t _pad0616[0x2]; // 0x616
            float m_flFogMaxOpacity; // 0x618            
            std::int32_t m_nCubemapSourceType; // 0x61c            
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x620            
            CUtlSymbolLarge m_iszSkyEntity; // 0x628            
            std::int32_t m_nHeightFogType; // 0x630            
            std::int32_t m_nFogHeightBlendMode; // 0x634            
            std::int32_t m_nFogHeightCoordinateSpace; // 0x638            
            std::int32_t m_nDistanceFogType; // 0x63c            
            CUtlSymbolLarge m_DistanceFogCurveString; // 0x640            
            CUtlSymbolLarge m_HeightFogCurveString; // 0x648            
            uint8_t _pad0650[0x90]; // 0x650
            // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
            char m_hFogCubemapTexture[0x8]; // 0x6e0            
            bool m_bHasHeightFogEnd; // 0x6e8            
            bool m_bFirstTime; // 0x6e9            
            uint8_t _pad06ea[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCubemapFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCubemapFog) == 0x6f0);
    };
};
