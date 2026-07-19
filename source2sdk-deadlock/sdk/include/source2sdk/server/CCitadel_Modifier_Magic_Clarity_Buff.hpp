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
        // Size: 0x2e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Magic_Clarity_Buff : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x180]; // 0xd0
            std::uint64_t m_iAbilityID; // 0x250            
            uint8_t _pad0258[0x80]; // 0x258
            bool m_bAbilityLocked; // 0x2d8            
            uint8_t _pad02d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Magic_Clarity_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Magic_Clarity_Buff) == 0x2e0);
    };
};
