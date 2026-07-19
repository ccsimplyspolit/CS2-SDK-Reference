#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class AI_MovementGaitRequestSource_t : std::uint32_t
        {
            eInvalid = 0xffffffff,
            eOverride = 0x0,
            eModifier = 0x1,
            eMoveStrategy = 0x2,
            eBase = 0x3,
            eCount = 0x4,
        };
    };
};
