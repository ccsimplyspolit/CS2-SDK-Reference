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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class EHeroReleaseVoteOption_August2025 : std::uint32_t
        {
            hero_frank = 0x0,
            hero_bookworm = 0x1,
            hero_doorman = 0x2,
            hero_punkgoat = 0x3,
            hero_drifter = 0x4,
            hero_vampirebat = 0x5,
            // MPropertySuppressEnumerator
            Count = 0x6,
        };
    };
};
