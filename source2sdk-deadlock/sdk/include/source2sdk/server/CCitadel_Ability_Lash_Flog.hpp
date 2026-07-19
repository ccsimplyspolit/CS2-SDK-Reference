#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x11f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Lash_Flog : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x280]; // 0xf70
            source2sdk::client::ParticleIndex_t m_SandEffect; // 0x11f0            
            uint8_t _pad11f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Lash_Flog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Lash_Flog) == 0x11f8);
    };
};
