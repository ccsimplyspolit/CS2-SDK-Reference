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
        enum class NecroSkeleTargetCategory_t : std::uint32_t
        {
            SKELE_TARGET_INVALID = 0x0,
            SKELE_TARGET_HERO = 0x1,
            SKELE_TARGET_TROOPER = 0x2,
            SKELE_TARGET_BOSS = 0x3,
            SKELE_TARGET_NEUTRAL = 0x4,
        };
    };
};
