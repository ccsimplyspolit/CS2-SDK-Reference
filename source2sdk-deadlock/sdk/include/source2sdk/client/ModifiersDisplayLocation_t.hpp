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
        enum class ModifiersDisplayLocation_t : std::uint32_t
        {
            MODIFIER_DISPLAY_LOCAITON_ALL = 0x0,
            MODIFIER_DISPLAY_HEALTHBAR = 0x1,
            MODIFIER_DISPLAY_BOTTOM_LEFT = 0x2,
        };
    };
};
