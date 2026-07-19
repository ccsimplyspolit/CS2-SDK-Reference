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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class ShatterGlassEntityPoolState_t : std::uint32_t
        {
            ENTITY_POOL_STATE_INVALID = 0x0,
            ENTITY_POOL_STATE_AVAILABLE = 0x1,
            ENTITY_POOL_STATE_IN_USE = 0x2,
        };
    };
};
