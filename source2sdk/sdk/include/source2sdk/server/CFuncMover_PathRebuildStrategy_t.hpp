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
        enum class CFuncMover_PathRebuildStrategy_t : std::uint32_t
        {
            PATH_REBUILD_DONT_MOVE = 0x0,
            PATH_REBUILD_MAINTAIN_T = 0x1,
            PATH_REBUILD_USE_CURRENT_NODE_T = 0x2,
        };
    };
};
