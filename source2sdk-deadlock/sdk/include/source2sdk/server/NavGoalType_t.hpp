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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x4
        enum class NavGoalType_t : std::uint32_t
        {
            eNone = 0x0,
            eEntity = 0x1,
            ePathCorner = 0x2,
            eLocation = 0x3,
            eCover = 0x4,
            eLOS = 0x5,
            eCount = 0x6,
            eInvalid = 0x7,
        };
    };
};
