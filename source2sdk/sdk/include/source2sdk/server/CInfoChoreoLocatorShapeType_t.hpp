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
        // Alignment: 4
        // Size: 0x4
        enum class CInfoChoreoLocatorShapeType_t : std::uint32_t
        {
            POINT = 0x0,
            LINE = 0x1,
            RADIUS = 0x2,
            COUNT = 0x3,
            NONE = 0x4,
        };
    };
};
