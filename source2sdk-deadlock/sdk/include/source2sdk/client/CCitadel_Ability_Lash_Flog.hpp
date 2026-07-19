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
        // Size: 0x1460
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Lash_Flog : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x280]; // 0x11d8
            source2sdk::client::ParticleIndex_t m_SandEffect; // 0x1458            
            uint8_t _pad145c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Lash_Flog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Lash_Flog) == 0x1460);
    };
};
