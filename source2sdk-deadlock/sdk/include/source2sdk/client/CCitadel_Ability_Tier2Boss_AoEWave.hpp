#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityServerOnly.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1358
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier2Boss_AoEWave : public source2sdk::client::CCitadelBaseAbilityServerOnly
        {
        public:
            uint8_t _pad11d8[0x180];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_Tier2Boss_AoEWave has no schema binary (size is a guess)
    };
};
