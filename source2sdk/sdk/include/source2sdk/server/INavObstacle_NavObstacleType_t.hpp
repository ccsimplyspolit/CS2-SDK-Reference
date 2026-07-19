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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class INavObstacle_NavObstacleType_t : std::uint32_t
        {
            NAV_OBSTACLE_TYPE_INVALID = 0xffffffff,
            NAV_OBSTACLE_TYPE_NONE = 0x0,
            NAV_OBSTACLE_TYPE_AVOID = 0x1,
            NAV_OBSTACLE_TYPE_CONN = 0x2,
            NAV_OBSTACLE_TYPE_BLOCK = 0x3,
        };
    };
};
