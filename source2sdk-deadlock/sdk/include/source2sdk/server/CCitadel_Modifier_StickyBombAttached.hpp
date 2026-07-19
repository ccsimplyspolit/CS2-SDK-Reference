#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_StickyBombAttached : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x8]; // 0xd0
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0xd8            
            source2sdk::client::ParticleIndex_t m_nAllyParticleIndex; // 0xdc            
            uint8_t _pad00e0[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_StickyBombAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_StickyBombAttached) == 0x2e0);
    };
};
