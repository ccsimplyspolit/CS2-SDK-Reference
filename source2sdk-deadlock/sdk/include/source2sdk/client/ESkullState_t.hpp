#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class ESkullState_t : std::uint8_t
        {
            EHauntingSkull_Idle = 0x0,
            EHauntingSkull_FollowCaster = 0x1,
            EHauntingSkull_FollowTarget = 0x2,
            EHauntingSkull_Charging = 0x3,
            EHauntingSkull_Recovering = 0x4,
            EHauntingSkull_Spawning = 0x5,
        };
    };
};
