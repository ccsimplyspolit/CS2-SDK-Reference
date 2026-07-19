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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class CITADEL_UNIT_TARGET_FLAGS : std::uint32_t
        {
            CITADEL_UNIT_TARGET_FLAG_NONE = 0x0,
            CITADEL_UNIT_TARGET_FLAG_PENETRATE_INVULNERABLE = 0x2,
            CITADEL_UNIT_TARGET_FLAG_NO_INVIS = 0x4,
            CITADEL_UNIT_TARGET_FLAG_NO_DORMANT_NEUTRALS = 0x8,
            CITADEL_UNIT_TARGET_FLAG_ALLOW_BREAKABLES = 0x10,
            CITADEL_UNIT_TARGET_FLAG_ALLOW_SMALL_DEPLOYABLES = 0x20,
        };
    };
};
