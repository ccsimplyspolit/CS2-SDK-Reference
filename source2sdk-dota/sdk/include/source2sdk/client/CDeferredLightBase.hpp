#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x290
        // Has VTable
        #pragma pack(push, 1)
        class CDeferredLightBase
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Color m_LightColor; // 0x8            
            float m_flIntensity; // 0xc            
            float m_flLightSize; // 0x10            
            float m_flSpotFoV; // 0x14            
            QAngle m_vLightDirection; // 0x18            
            float m_flStartFalloff; // 0x24            
            float m_flDistanceFalloff; // 0x28            
            std::uint32_t m_nFlags; // 0x2c            
            char m_ProjectedTextureName[512]; // 0x30            
            uint8_t _pad0230[0x60];
            
            // Datamap fields:
            // float m_flAnimatedNoiseFrequency; // 0x254
            // float m_flAnimatedNoiseSpeed; // 0x258
            // float m_flAnimatedNoiseMin; // 0x25c
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_LightColor) == 0x8);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flIntensity) == 0xc);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flLightSize) == 0x10);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flSpotFoV) == 0x14);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_vLightDirection) == 0x18);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flStartFalloff) == 0x24);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flDistanceFalloff) == 0x28);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_nFlags) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_ProjectedTextureName) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CDeferredLightBase) == 0x290);
    };
};
