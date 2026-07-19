#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class CNmTargetWarpNode_TargetUpdateRule_t : std::uint8_t
        {
            None = 0x0,
            // MPropertyFriendlyName "Recalculate Warped Root Motion"
            Recalculate = 0x1,
            // MPropertyFriendlyName "Offset Warped Root Motion"
            Offset = 0x2,
            // MPropertyFriendlyName "Recalculate Or Offset Warped Root Motion"
            // MPropertyDescription "Will offset the warped root motion if we are pass warp events"
            RecalculateOrOffset = 0x3,
        };
    };
};
