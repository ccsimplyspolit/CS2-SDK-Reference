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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x4
        enum class CitadelBadgeSubRank_t : std::uint32_t
        {
            Citadel_SubRankInvalid = 0x0,
            Citadel_SubRank1 = 0x1,
            Citadel_SubRank2 = 0x2,
            Citadel_SubRank3 = 0x3,
            Citadel_SubRank4 = 0x4,
            Citadel_SubRank5 = 0x5,
            Citadel_SubRank6 = 0x6,
            Citadel_SubRankMax = 0x6,
        };
    };
};
