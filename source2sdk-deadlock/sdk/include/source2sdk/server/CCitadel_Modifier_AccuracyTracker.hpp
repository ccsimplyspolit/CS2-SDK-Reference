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
        // Size: 0xf0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_AccuracyTracker : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x18]; // 0xd0
            float m_flInterval; // 0xe8            
            float m_flProgress; // 0xec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_AccuracyTracker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_AccuracyTracker) == 0xf0);
    };
};
