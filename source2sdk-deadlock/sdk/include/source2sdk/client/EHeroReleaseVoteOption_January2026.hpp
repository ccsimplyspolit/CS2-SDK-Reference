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
        enum class EHeroReleaseVoteOption_January2026 : std::uint32_t
        {
            hero_priest = 0x0,
            hero_necro = 0x1,
            hero_fencer = 0x2,
            hero_familiar = 0x3,
            hero_werewolf = 0x4,
            hero_unicorn = 0x5,
            // MPropertySuppressEnumerator
            Count = 0x6,
        };
    };
};
