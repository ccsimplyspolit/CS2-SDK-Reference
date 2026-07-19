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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class CFuncMover_FindFollowMoverStrategy_t : std::uint32_t
        {
            FIND_FOLLOW_MOVER_FORWARD_CLOSEST = 0x0,
            FIND_FOLLOW_MOVER_REVERSE_CLOSEST = 0x1,
            FIND_FOLLOW_MOVER_BIDIRECTIONAL_CLOSEST = 0x2,
        };
    };
};
