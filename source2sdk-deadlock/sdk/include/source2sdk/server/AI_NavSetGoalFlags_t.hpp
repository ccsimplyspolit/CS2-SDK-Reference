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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class AI_NavSetGoalFlags_t : std::uint32_t
        {
            AISG_SET_ARRIVAL_FROM_PREVWP = 0x1,
            AISG_MAINTAIN_SMART_GOAL = 0x2,
            AISG_QUEUE_GOAL = 0x4,
            AISG_DEF_FLAGS = 0x0,
        };
    };
};
