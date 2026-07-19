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
        // Size: 0xff8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Upgrade_AerialAssault : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Upgrade_AerialAssault has no schema binary (size is a guess)
    };
};
