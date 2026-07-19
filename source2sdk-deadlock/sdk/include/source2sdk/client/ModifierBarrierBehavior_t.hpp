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
        enum class ModifierBarrierBehavior_t : std::uint32_t
        {
            MODIFIER_BARRIER_BEHAVIOR_KEEP_ON_DESTROY = 0x0,
            MODIFIER_BARRIER_BEHAVIOR_REMOVE_ON_DESTROY = 0x1,
        };
    };
};
