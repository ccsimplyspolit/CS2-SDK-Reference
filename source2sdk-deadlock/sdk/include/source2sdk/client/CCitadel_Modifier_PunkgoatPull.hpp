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
        // Size: 0x2d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatPull : public source2sdk::client::CCitadelModifier
        {
        public:
            Vector m_vPullToLocation; // 0xc0            
            bool m_bAllowTrackTarget; // 0xcc            
            uint8_t _pad00cd[0x3]; // 0xcd
            float m_flCurrentVerticalSpeed; // 0xd0            
            uint8_t _pad00d4[0x204];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatPull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_PunkgoatPull) == 0x2d8);
    };
};
