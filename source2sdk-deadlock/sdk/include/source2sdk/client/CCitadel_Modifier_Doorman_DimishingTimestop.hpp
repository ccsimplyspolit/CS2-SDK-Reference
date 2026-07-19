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
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Doorman_DimishingTimestop : public source2sdk::client::CCitadelModifier
        {
        public:
            float m_flSlowPercent; // 0xc0            
            float m_flDelay; // 0xc4            
            bool m_bEscaped; // 0xc8            
            uint8_t _pad00c9[0x87]; // 0xc9
            bool m_bStunApplied; // 0x150            
            uint8_t _pad0151[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Doorman_DimishingTimestop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Doorman_DimishingTimestop) == 0x158);
    };
};
