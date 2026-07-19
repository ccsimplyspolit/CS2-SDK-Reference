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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class EAIScheduleEndedReason : std::uint32_t
        {
            SCHEDULE_SUCCEEDED = 0x0,
            SCHEDULE_INTERRUPTED = 0x1,
            SCHEDULE_TASK_FAILED = 0x2,
        };
    };
};
