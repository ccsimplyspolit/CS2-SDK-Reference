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
        // Alignment: 1
        // Size: 0x1
        enum class EAbilitySpectatePriority : std::uint8_t
        {
            CITADELTV_ABILITY_SPECTATE_PRIORITY_NONE = 0x0,
            CITADELTV_ABILITY_SPECTATE_PRIORITY_MEDIUM = 0x1,
            CITADELTV_ABILITY_SPECTATE_PRIORITY_HIGH = 0x2,
        };
    };
};
