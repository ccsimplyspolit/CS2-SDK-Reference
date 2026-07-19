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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class CFuncMover_FollowConstraint_t : std::uint32_t
        {
            FOLLOW_CONSTRAINT_DISTANCE = 0x0,
            FOLLOW_CONSTRAINT_SPRING = 0x1,
            FOLLOW_CONSTRAINT_RATIO = 0x2,
            FOLLOW_CONSTRAINT_COUPLER = 0x3,
        };
    };
};
