#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x2c8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_RescueBeam : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x200]; // 0xc0
            float m_flHealthPerSecond; // 0x2c0            
            source2sdk::client::ParticleIndex_t m_nBeamIndex; // 0x2c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RescueBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_RescueBeam) == 0x2c8);
    };
};
