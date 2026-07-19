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
        // Alignment: 4
        // Size: 0x4
        enum class ENextAttackDelayReason_t : std::uint32_t
        {
            EDelayReason_Reload = 0x0,
            EDelayReason_BetweenShots = 0x1,
            EDelayReason_Disarmed = 0x2,
            EDelayReason_Stunned = 0x3,
            EDelayReason_BebopSpinUp = 0x4,
            EDelayReasonCount = 0x5,
        };
    };
};
