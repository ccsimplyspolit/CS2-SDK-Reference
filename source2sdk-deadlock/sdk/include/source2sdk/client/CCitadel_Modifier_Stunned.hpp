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
        // Size: 0xc8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Stunned : public source2sdk::client::CCitadelModifier
        {
        public:
            bool m_bEnabled; // 0xc0            
            bool m_bWasEnabled; // 0xc1            
            uint8_t _pad00c2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Stunned because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Stunned) == 0xc8);
    };
};
