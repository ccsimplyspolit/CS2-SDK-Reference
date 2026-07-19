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
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x4
        enum class EHideoutButtonAction : std::uint32_t
        {
            k_eNone = 0x0,
            k_ePlay = 0x1,
            k_eWatch = 0x2,
            k_eHeroes = 0x3,
            k_eLearn = 0x4,
            k_eResources = 0x5,
            k_eExit = 0x6,
            k_eNews = 0x7,
            k_eHeroReleaseVote = 0x8,
            k_eFireEntityOutput = 0x9,
            k_eSeasonalEvent = 0xa,
        };
    };
};
