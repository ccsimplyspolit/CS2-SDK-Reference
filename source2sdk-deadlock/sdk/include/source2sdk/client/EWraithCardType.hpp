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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class EWraithCardType : std::uint32_t
        {
            EWraithCardType_Spade = 0x0,
            EWraithCardType_Heart = 0x1,
            EWraithCardType_Diamond = 0x2,
            EWraithCardType_Club = 0x3,
            EWraithCardType_Joker = 0x4,
            EWraithCardType_JokerBonusCard = 0x5,
        };
    };
};
