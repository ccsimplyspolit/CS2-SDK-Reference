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
        // Size: 0x700
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_EnvCubemapFog : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flEndDistance; // 0x600            
            float m_flStartDistance; // 0x604            
            float m_flFogFalloffExponent; // 0x608            
            bool m_bHeightFogEnabled; // 0x60c            
            uint8_t _pad060d[0x3]; // 0x60d
            float m_flFogHeightWidth; // 0x610            
            float m_flFogHeightEnd; // 0x614            
            float m_flFogHeightStart; // 0x618            
            float m_flFogHeightExponent; // 0x61c            
            float m_flLODBias; // 0x620            
            bool m_bActive; // 0x624            
            bool m_bStartDisabled; // 0x625            
            uint8_t _pad0626[0x2]; // 0x626
            float m_flFogMaxOpacity; // 0x628            
            std::int32_t m_nCubemapSourceType; // 0x62c            
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x630            
            CUtlSymbolLarge m_iszSkyEntity; // 0x638            
            std::int32_t m_nHeightFogType; // 0x640            
            std::int32_t m_nFogHeightBlendMode; // 0x644            
            std::int32_t m_nFogHeightCoordinateSpace; // 0x648            
            std::int32_t m_nDistanceFogType; // 0x64c            
            CUtlSymbolLarge m_DistanceFogCurveString; // 0x650            
            CUtlSymbolLarge m_HeightFogCurveString; // 0x658            
            uint8_t _pad0660[0x90]; // 0x660
            // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
            char m_hFogCubemapTexture[0x8]; // 0x6f0            
            bool m_bHasHeightFogEnd; // 0x6f8            
            bool m_bFirstTime; // 0x6f9            
            uint8_t _pad06fa[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCubemapFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCubemapFog) == 0x700);
    };
};
