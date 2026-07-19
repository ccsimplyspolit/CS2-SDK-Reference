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
        // Enumerator count: 5
        // Alignment: 1
        // Size: 0x1
        enum class PhysGenericShapeType_t : std::uint8_t
        {
            GENERIC_SHAPE_POINT = 0x0,
            GENERIC_SHAPE_SPHERE = 0x1,
            GENERIC_SHAPE_AABB = 0x2,
            GENERIC_SHAPE_CAPSULE = 0x3,
            GENERIC_SHAPE_HULL = 0x4,
        };
    };
};
