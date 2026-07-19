#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"

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
        // Size: 0x410
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Nikuman : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0108[0x300]; // 0x108
            std::int32_t m_nTotalSelfHeal; // 0x408            
            std::int32_t m_nTotalTeammateHeal; // 0x40c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Nikuman because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Nikuman) == 0x410);
    };
};
