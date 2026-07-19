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
        // Alignment: 4
        // Size: 0x4
        enum class ECitadelTargetAbilityEffects : std::uint32_t
        {
            CITADEL_TARGET_ABILITY_BEHAVIOR_NONE = 0x0,
            CITADEL_TARGET_ABILITY_BEHAVIOR_IMBUE_MODIFIER_VALUE = 0x1,
            CITADEL_TARGET_ABILITY_BEHAVIOR_IMBUE_ACTIVE = 0x2,
            CITADEL_TARGET_ABILITY_BEHAVIOR_IMBUE_ACTIVE_NON_ULT = 0x4,
        };
    };
};
