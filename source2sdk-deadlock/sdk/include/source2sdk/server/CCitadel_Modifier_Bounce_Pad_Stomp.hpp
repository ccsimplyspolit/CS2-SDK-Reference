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
        // Size: 0x5d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bounce_Pad_Stomp : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x500]; // 0xd0
            bool m_bStomped; // 0x5d0            
            uint8_t _pad05d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bounce_Pad_Stomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Bounce_Pad_Stomp) == 0x5d8);
    };
};
