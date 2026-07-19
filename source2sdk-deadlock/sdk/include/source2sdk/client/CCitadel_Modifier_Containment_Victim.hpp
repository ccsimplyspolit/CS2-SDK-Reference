#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        class CCitadel_Modifier_Containment_Victim : public source2sdk::client::CCitadelModifier
        {
        public:
            float m_flTetherRadius; // 0xc0            
            Vector m_vecOrigin; // 0xc4            
            uint8_t _pad00d0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Containment_Victim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Containment_Victim) == 0x150);
    };
};
