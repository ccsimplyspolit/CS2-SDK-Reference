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
        // Size: 0x168
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Doorman_DimishingTimestop : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flSlowPercent; // 0xd0            
            float m_flDelay; // 0xd4            
            bool m_bEscaped; // 0xd8            
            uint8_t _pad00d9[0x87]; // 0xd9
            bool m_bStunApplied; // 0x160            
            uint8_t _pad0161[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Doorman_DimishingTimestop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Doorman_DimishingTimestop) == 0x168);
    };
};
