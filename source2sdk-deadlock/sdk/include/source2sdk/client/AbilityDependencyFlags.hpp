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
        // Enumerator count: 4
        // Alignment: 2
        // Size: 0x2
        enum class AbilityDependencyFlags : std::uint16_t
        {
            None = 0x0,
            // MPropertyFriendlyName "Link Imbues"
            // MPropertyDescription "Imbues applied to this or the dependant shall be applied to the other"
            LinkImbues = 0x1,
            // MPropertyFriendlyName "Link Upgrades"
            // MPropertyDescription "Upgrades applied to this or the dependant shall be applied to the other"
            LinkUpgrades = 0x2,
            // MPropertyFriendlyName "Display as Sub-Ability"
            // MPropertyDescription "Show this dependant in our ability icons as a sub-ability"
            DisplayAsSubAbility = 0x4,
        };
    };
};
