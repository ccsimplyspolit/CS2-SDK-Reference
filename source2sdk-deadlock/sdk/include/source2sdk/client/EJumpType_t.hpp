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
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class EJumpType_t : std::uint8_t
        {
            EJumpType_Ground = 0x0,
            EJumpType_Air = 0x1,
            EJumpType_Wall = 0x2,
            EJumpType_DashJump = 0x3,
        };
    };
};
