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
        // Alignment: 2
        // Size: 0x2
        enum class EAbilityRequirements_t : std::uint16_t
        {
            // MPropertyFriendlyName "None"
            ERequirementNone = 0x0,
            // MPropertyFriendlyName "Requires Charges Ability"
            ERequirementChargedAbility = 0x1,
            // MPropertyFriendlyName "Requires Channelled Abillity"
            ERequirementChannelledAbility = 0x2,
            // MPropertyFriendlyName "Requires Non-Charges ULT"
            ERequirementNonChargedULT = 0x4,
            // MPropertyFriendlyName "Requires Street Brawl"
            ERequirementStreetBrawl = 0x8,
        };
    };
};
