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
        enum class HudDisplayLocation_t : std::uint32_t
        {
            DISPLAY_HUD_NONE = 0x0,
            DISPLAY_HUD_LEFT = 0x1,
            DISPLAY_HUD_CENTER = 0x2,
        };
    };
};
