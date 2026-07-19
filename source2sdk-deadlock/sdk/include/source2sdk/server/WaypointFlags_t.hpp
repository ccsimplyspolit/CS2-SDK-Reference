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
        // Enumerator count: 17
        // Alignment: 4
        // Size: 0x4
        enum class WaypointFlags_t : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            WP_NONE = 0x0,
            WP_TO_DETOUR = 0x1,
            WP_TO_PATHCORNER = 0x2,
            WP_TO_GOAL = 0x4,
            WP_TO_DOOR = 0x8,
            WP_DONT_SIMPLIFY = 0x10,
            WP_INTERRUPTED_STOP = 0x20,
            WP_FROM_NAVMESH = 0x40,
            WP_FROM_NAVSPACE = 0x80,
            WP_LOCAL_PATH = 0x100,
            WP_GOAL_FROM_BLOCKED = 0x200,
            WP_PLACED_ON_GROUND = 0x400,
            WP_PATH_INCOMPLETE_FROM_PROCESSING = 0x800,
            WP_STOPPING_PATH = 0x1000,
            WP_TO_SUBGOAL = 0x2000,
            WP_BASHABLE_OBSTACLE = 0x4000,
            WP_RETURN_PATH = 0x8000,
        };
    };
};
