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
        enum class AI_StrafingRequestSource_t : std::uint32_t
        {
            eMotor = 0x0,
            eNPCLocomotion = 0x1,
            eLevelScript = 0x2,
            eSmartGoal = 0x3,
            eMoveStrategy = 0x4,
            eSchedule = 0x5,
            eDefault = 0x6,
            eCount = 0x7,
            eNone = 0x7,
        };
    };
};
