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
        enum class doorCheck_e : std::uint32_t
        {
            DOOR_CHECK_FORWARD = 0x0,
            DOOR_CHECK_BACKWARD = 0x1,
            DOOR_CHECK_FULL = 0x2,
        };
    };
};
