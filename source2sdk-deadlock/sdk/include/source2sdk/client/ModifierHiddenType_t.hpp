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
        enum class ModifierHiddenType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Hide always"
            eHideAlways = 0x0,
            // MPropertyFriendlyName "Hide if caster is target"
            eHideIfCasterIsTarget = 0x1,
        };
    };
};
