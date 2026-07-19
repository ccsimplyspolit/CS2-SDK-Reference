#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Sleep.hpp"

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
        // Size: 0x3c0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SleepDagger_Asleep : public source2sdk::client::CCitadel_Modifier_Sleep
        {
        public:
            uint8_t _pad00c0[0x300];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Modifier_SleepDagger_Asleep has no schema binary (size is a guess)
    };
};
