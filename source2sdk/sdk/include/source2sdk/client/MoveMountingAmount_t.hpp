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
        // Alignment: 4
        // Size: 0x4
        enum class MoveMountingAmount_t : std::uint32_t
        {
            MOVE_MOUNT_NONE = 0x0,
            MOVE_MOUNT_LOW = 0x1,
            MOVE_MOUNT_HIGH = 0x2,
            MOVE_MOUNT_MAXCOUNT = 0x3,
        };
    };
};
