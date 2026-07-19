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
        enum class FuncRotatorRotationSummaryFlags_t : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
            eRotateBegin = 0x1,
            eEventsDispatched = 0x2,
            eRotateCompleted = 0x4,
            eOscillateStart = 0x8,
            eOscillateEnd = 0x10,
            eOscillateArrived = 0x20,
            eOscillateDepart = 0x40,
        };
    };
};
