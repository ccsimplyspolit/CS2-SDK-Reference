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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class ModifierTimeScaleSource_t : std::uint32_t
        {
            // MPropertyFriendlyName "Parent"
            MODIFIER_TIME_SCALE_USE_PARENT = 0x0,
            // MPropertyFriendlyName "Caster"
            MODIFIER_TIME_SCALE_USE_CASTER = 0x1,
        };
    };
};
