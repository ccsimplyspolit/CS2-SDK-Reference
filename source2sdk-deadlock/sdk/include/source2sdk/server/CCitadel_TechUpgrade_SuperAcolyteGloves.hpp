#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1000
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_TechUpgrade_SuperAcolyteGloves : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x80]; // 0xf78
            float fl_StoredDamage; // 0xff8            
            uint8_t _pad0ffc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_TechUpgrade_SuperAcolyteGloves because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_TechUpgrade_SuperAcolyteGloves) == 0x1000);
    };
};
