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
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_GoatGoingUp : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bAtTargetElevation; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            Vector m_vKnockAwayVector; // 0xd4            
            uint8_t _pad00e0[0x180]; // 0xe0
            float m_flTargetElevation; // 0x260            
            uint8_t _pad0264[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_GoatGoingUp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_GoatGoingUp) == 0x268);
    };
};
