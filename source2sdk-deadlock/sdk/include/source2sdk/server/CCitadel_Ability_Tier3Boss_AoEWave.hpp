#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTier3BossAbility.hpp"

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
        // Size: 0x1100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier3Boss_AoEWave : public source2sdk::server::CTier3BossAbility
        {
        public:
            uint8_t _pad0f70[0x190];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_Tier3Boss_AoEWave has no schema binary (size is a guess)
    };
};
