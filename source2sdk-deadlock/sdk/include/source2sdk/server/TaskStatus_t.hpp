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
        enum class TaskStatus_t : std::uint32_t
        {
            TASKSTATUS_NEW = 0x0,
            TASKSTATUS_RUN_MOVE_AND_TASK = 0x1,
            TASKSTATUS_RUN_TASK = 0x2,
            TASKSTATUS_COMPLETE = 0x3,
        };
    };
};
