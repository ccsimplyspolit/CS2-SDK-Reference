#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1360
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_HauntingSpirits : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x180]; // 0x11d8
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0x1358            
            uint8_t _pad135c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_HauntingSpirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_HauntingSpirits) == 0x1360);
    };
};
