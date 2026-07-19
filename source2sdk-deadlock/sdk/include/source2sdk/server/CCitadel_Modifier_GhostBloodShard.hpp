#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x2e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_GhostBloodShard : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x180]; // 0xd0
            float m_flMinSlowAmount; // 0x250            
            float m_flMoveSpeedPenaltyPerStack; // 0x254            
            float m_flSlowDuration; // 0x258            
            uint8_t _pad025c[0x8c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_GhostBloodShard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_GhostBloodShard) == 0x2e8);
    };
};
