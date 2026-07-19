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
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class RelativeLocationType_t : std::uint8_t
        {
            WORLD_SPACE_POSITION = 0x0,
            RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 0x1,
            RELATIVE_TO_ENTITY_YAW_ONLY = 0x2,
            RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 0x3,
            RELATIVE_TO_NAV_AREA = 0x4,
            RELATIVE_TO_NAV_BLOCK = 0x5,
        };
    };
};
