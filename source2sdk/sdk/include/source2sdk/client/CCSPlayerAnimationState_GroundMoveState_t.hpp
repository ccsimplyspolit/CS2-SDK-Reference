#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 7
        // Alignment: 1
        // Size: 0x1
        enum class CCSPlayerAnimationState_GroundMoveState_t : std::uint8_t
        {
            None = 0x0,
            Idle = 0x1,
            Start = 0x2,
            Move = 0x3,
            TurnOnSpot = 0x4,
            TurnOnSpotLoop = 0x5,
            PlantAndTurn = 0x6,
        };
    };
};
