#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Knockdown.hpp"

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
        // Size: 0x100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_CatapultStun : public source2sdk::server::CCitadel_Modifier_Knockdown
        {
        public:
            bool m_bLanded; // 0xf8            
            uint8_t _pad00f9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CatapultStun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_CatapultStun) == 0x100);
    };
};
