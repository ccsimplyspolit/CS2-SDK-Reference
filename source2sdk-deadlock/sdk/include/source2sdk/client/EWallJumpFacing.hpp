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
        // Enumerator count: 5
        // Alignment: 2
        // Size: 0x2
        enum class EWallJumpFacing : std::uint16_t
        {
            NotOnWall = 0x0,
            WallToFront = 0x1,
            WallToRight = 0x2,
            WallToLeft = 0x3,
            WallToBack = 0x4,
        };
    };
};
