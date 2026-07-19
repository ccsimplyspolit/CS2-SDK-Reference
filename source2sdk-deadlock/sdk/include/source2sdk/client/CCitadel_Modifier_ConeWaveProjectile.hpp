#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ConeWaveProjectile : public source2sdk::client::CCitadel_Modifier_Intrinsic_Base
        {
        public:
            uint8_t _pad00c0[0x180]; // 0xc0
            Vector m_vInitialCastPosition; // 0x240            
            float m_flProjectileSpeed; // 0x24c            
            source2sdk::client::ParticleIndex_t m_iParticleEffect; // 0x250            
            uint8_t _pad0254[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ConeWaveProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_ConeWaveProjectile) == 0x258);
    };
};
