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
        // Alignment: 1
        // Size: 0x1
        enum class EAbilityUpgradeTier : std::uint8_t
        {
            EAbilityUpgradeTier_Invalid = 0x0,
            EAbilityUpgradeTier_1 = 0x1,
            EAbilityUpgradeTier_2 = 0x2,
            EAbilityUpgradeTier_3 = 0x3,
            // MPropertySuppressEnumerator
            EMaxAbilityUpgradeTier = 0x4,
        };
    };
};
