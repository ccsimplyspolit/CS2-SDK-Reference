#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x150
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Pillar : public source2sdk::client::CCitadel_Modifier_Stunned
        {
        public:
            float flAccumulatedDamage; // 0xc8            
            uint8_t _pad00cc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Pillar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Pillar) == 0x150);
    };
};
