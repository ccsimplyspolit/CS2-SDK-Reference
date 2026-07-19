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
        // Enumerator count: 9
        // Alignment: 1
        // Size: 0x1
        enum class CCSPlayerAnimationState_Direction_t : std::uint8_t
        {
            None = 0x0,
            N = 0x1,
            NE = 0x2,
            E = 0x3,
            SE = 0x4,
            S = 0x5,
            SW = 0x6,
            W = 0x7,
            NW = 0x8,
        };
    };
};
