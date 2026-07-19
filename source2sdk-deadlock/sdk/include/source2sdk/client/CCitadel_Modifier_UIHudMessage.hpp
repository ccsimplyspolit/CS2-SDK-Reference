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
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_UIHudMessage : public source2sdk::client::CCitadelModifier
        {
        public:
            CUtlString m_strHudMessage; // 0xc0            
            bool m_bIncludeDecimal; // 0xc8            
            uint8_t _pad00c9[0x3]; // 0xc9
            std::int32_t m_eModifierValue; // 0xcc            
            float m_flValue; // 0xd0            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_UIHudMessage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_UIHudMessage) == 0xd8);
    };
};
