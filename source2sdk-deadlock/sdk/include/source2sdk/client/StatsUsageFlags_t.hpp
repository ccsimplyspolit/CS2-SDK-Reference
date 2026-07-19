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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class StatsUsageFlags_t : std::uint32_t
        {
            None = 0x0,
            // MPropertySuppressEnumerator
            IntrinsicallyProvidedInModifier = 0x1,
            // MPropertyFriendlyName "Provided in ability code via MModifierFunction to caster"
            IntrinsicallyProvidedInAbility = 0x2,
            // MPropertyFriendlyName "Has some condition to be applied (Close Range, High Health Pct, "
            ConditionallyApplied = 0x4,
            // MPropertyFriendlyName "Don't show deltas because it's being applied to an enemy. i.e. We don't want to show fire rate or movement slow on yourself."
            ConditionallyEnemyApplied = 0x8,
        };
    };
};
