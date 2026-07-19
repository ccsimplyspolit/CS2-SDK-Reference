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
        enum class EHealingTypes : std::uint16_t
        {
            EHealTypeStandard = 0x0,
            EHealTypeBaseRegen = 0x1,
            EHealTypeInternal = 0x2,
            EHealTypeExternalRegen = 0x3,
            EHealTypeLifeSteal = 0x4,
        };
    };
};
