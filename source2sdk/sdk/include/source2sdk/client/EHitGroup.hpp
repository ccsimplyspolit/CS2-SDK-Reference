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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x4
        enum class EHitGroup : std::uint32_t
        {
            EHG_Generic = 0x0,
            EHG_Head = 0x1,
            EHG_Chest = 0x2,
            EHG_Stomach = 0x3,
            EHG_LeftArm = 0x4,
            EHG_RightArm = 0x5,
            EHG_LeftLeg = 0x6,
            EHG_RightLeg = 0x7,
            EHG_Gear = 0x8,
            EHG_Miss = 0x9,
        };
    };
};
