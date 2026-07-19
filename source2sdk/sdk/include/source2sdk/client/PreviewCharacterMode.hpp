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
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x4
        enum class PreviewCharacterMode : std::uint32_t
        {
            INVALID = 0xffffffff,
            DIORAMA = 0x0,
            MAIN_MENU = 0x1,
            BUY_MENU = 0x2,
            TEAM_SELECT = 0x3,
            END_OF_MATCH = 0x4,
            INVENTORY_INSPECT = 0x5,
            WALKING = 0x6,
            TEAM_INTRO = 0x7,
            WINGMAN_INTRO = 0x8,
            BANNER = 0x9,
        };
    };
};
