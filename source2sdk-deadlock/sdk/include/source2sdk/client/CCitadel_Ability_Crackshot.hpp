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
        // Size: 0x1560
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Crackshot : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x4]; // 0x11d8
            source2sdk::client::ParticleIndex_t m_ReadyParticleIndex; // 0x11dc            
            uint8_t _pad11e0[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Crackshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Crackshot) == 0x1560);
    };
};
