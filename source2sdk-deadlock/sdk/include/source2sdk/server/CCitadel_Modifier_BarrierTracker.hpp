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
        // Size: 0xf8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_BarrierTracker : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x4]; // 0xd0
            float m_flMaxHealth; // 0xd4            
            float m_flCurrentHealth; // 0xd8            
            uint8_t _pad00dc[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BarrierTracker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BarrierTracker) == 0xf8);
    };
};
