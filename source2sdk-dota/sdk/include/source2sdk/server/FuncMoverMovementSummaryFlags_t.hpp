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
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class FuncMoverMovementSummaryFlags_t : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
            eMovementBegin = 0x1,
            eStopBegin = 0x2,
            eStopComplete = 0x4,
            eReversing = 0x8,
            eEventsDispatched = 0x10,
            eLoopToStart = 0x20,
            eLoopToEnd = 0x40,
            eTransitionComplete = 0x80,
        };
    };
};
