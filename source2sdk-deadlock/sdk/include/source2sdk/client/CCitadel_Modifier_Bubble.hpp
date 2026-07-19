#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Silenced.hpp"
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
        // Size: 0x1d0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bubble : public source2sdk::client::CCitadel_Modifier_Silenced
        {
        public:
            float m_flDampingFactor; // 0xc0            
            uint8_t _pad00c4[0x104]; // 0xc4
            source2sdk::client::ParticleIndex_t m_ParticleIndex; // 0x1c8            
            uint8_t _pad01cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Bubble) == 0x1d0);
    };
};
