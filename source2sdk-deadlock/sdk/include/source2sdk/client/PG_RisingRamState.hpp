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
        // Alignment: 1
        // Size: 0x1
        enum class PG_RisingRamState : std::uint8_t
        {
            RRSTATE_INACTIVE = 0x0,
            RRSTATE_CHARGING = 0x1,
            RRSTATE_GOINGUP = 0x2,
            RRSTATE_HOVERING = 0x3,
            RRSTATE_COUNT = 0x4,
        };
    };
};
