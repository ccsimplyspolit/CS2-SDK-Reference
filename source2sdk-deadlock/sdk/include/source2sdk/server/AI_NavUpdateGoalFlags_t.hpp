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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class AI_NavUpdateGoalFlags_t : std::uint32_t
        {
            AIUG_NONE = 0x0,
            AIUG_QUEUE_GOAL = 0x1,
        };
    };
};
