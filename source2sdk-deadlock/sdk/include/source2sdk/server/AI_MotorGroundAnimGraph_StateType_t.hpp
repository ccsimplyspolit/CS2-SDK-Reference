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
        // Enumerator count: 13
        // Alignment: 4
        // Size: 0x4
        enum class AI_MotorGroundAnimGraph_StateType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Idle"
            eIdle = 0x0,
            // MPropertyFriendlyName "Idle Turn"
            eIdleTurn = 0x1,
            // MPropertyFriendlyName "Start"
            eStart = 0x2,
            // MPropertyFriendlyName "Loop"
            eLoop = 0x3,
            // MPropertyFriendlyName "Stop"
            eStop = 0x4,
            // MPropertyFriendlyName "Instant Stop"
            eInstantStop = 0x5,
            // MPropertyFriendlyName "Hop"
            eHop = 0x6,
            // MPropertyFriendlyName "Planted Turn"
            ePlantedTurn = 0x7,
            // MPropertyFriendlyName "Custom"
            eCustom = 0x8,
            // MPropertyFriendlyName "Custom Mantle"
            eCustomMantle = 0x9,
            // MPropertyFriendlyName "Other"
            eOther = 0xa,
            eInvalid = 0xb,
            eCount = 0xb,
        };
    };
};
