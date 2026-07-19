#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xae0
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_Projectile_Bebop_Hook : public source2sdk::client::C_CitadelProjectile
        {
        public:
            source2sdk::client::ParticleIndex_t m_iChainEffect; // 0xad8            
            uint8_t _pad0adc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Projectile_Bebop_Hook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Projectile_Bebop_Hook) == 0xae0);
    };
};
