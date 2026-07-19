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
        enum class WaterLevel_t : std::uint8_t
        {
            WL_NotInWater = 0x0,
            WL_Feet = 0x1,
            WL_Knees = 0x2,
            WL_Waist = 0x3,
            WL_Chest = 0x4,
            WL_FullyUnderwater = 0x5,
            WL_Count = 0x6,
        };
    };
};
