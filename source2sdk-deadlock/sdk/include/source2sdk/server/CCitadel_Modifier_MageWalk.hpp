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
        // Size: 0x408
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_MageWalk : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bIsFakeout; // 0xd0            
            bool m_bTeleported; // 0xd1            
            uint8_t _pad00d2[0x2]; // 0xd2
            source2sdk::client::ParticleIndex_t m_particleStart; // 0xd4            
            source2sdk::client::ParticleIndex_t m_particleEnd; // 0xd8            
            source2sdk::client::ParticleIndex_t m_particleTrail; // 0xdc            
            Vector m_vecEndLocation; // 0xe0            
            Vector m_vecStartPosition; // 0xec            
            Vector m_vecEndLocationCaster; // 0xf8            
            uint8_t _pad0104[0x304];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_MageWalk because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_MageWalk) == 0x408);
    };
};
