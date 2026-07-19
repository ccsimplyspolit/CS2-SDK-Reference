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
        // Size: 0x5c8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bounce_Pad_Stomp : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x500]; // 0xc0
            bool m_bStomped; // 0x5c0            
            uint8_t _pad05c1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bounce_Pad_Stomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Bounce_Pad_Stomp) == 0x5c8);
    };
};
