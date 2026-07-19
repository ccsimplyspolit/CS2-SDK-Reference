#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_HeadshotBoosterWatcher.hpp"

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
        // Size: 0x430
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HeadhunterWatcher : public source2sdk::server::CCitadel_Modifier_HeadshotBoosterWatcher
        {
        public:
            uint8_t _pad02b0[0x180];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Modifier_HeadhunterWatcher has no schema binary (size is a guess)
    };
};
