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
        // Size: 0x598
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvCubemapFog : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flEndDistance; // 0x498            
            float m_flStartDistance; // 0x49c            
            float m_flFogFalloffExponent; // 0x4a0            
            bool m_bHeightFogEnabled; // 0x4a4            
            uint8_t _pad04a5[0x3]; // 0x4a5
            float m_flFogHeightWidth; // 0x4a8            
            float m_flFogHeightEnd; // 0x4ac            
            float m_flFogHeightStart; // 0x4b0            
            float m_flFogHeightExponent; // 0x4b4            
            float m_flLODBias; // 0x4b8            
            bool m_bActive; // 0x4bc            
            bool m_bStartDisabled; // 0x4bd            
            uint8_t _pad04be[0x2]; // 0x4be
            float m_flFogMaxOpacity; // 0x4c0            
            std::int32_t m_nCubemapSourceType; // 0x4c4            
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x4c8            
            CUtlSymbolLarge m_iszSkyEntity; // 0x4d0            
            std::int32_t m_nHeightFogType; // 0x4d8            
            std::int32_t m_nFogHeightBlendMode; // 0x4dc            
            std::int32_t m_nFogHeightCoordinateSpace; // 0x4e0            
            std::int32_t m_nDistanceFogType; // 0x4e4            
            CUtlSymbolLarge m_DistanceFogCurveString; // 0x4e8            
            CUtlSymbolLarge m_HeightFogCurveString; // 0x4f0            
            uint8_t _pad04f8[0x90]; // 0x4f8
            // m_hFogCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture;
            char m_hFogCubemapTexture[0x8]; // 0x588            
            bool m_bHasHeightFogEnd; // 0x590            
            bool m_bFirstTime; // 0x591            
            uint8_t _pad0592[0x6];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvCubemapFog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvCubemapFog) == 0x598);
    };
};
