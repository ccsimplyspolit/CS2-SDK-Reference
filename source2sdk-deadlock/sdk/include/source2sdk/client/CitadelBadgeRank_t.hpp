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
        // Enumerator count: 14
        // Alignment: 4
        // Size: 0x4
        enum class CitadelBadgeRank_t : std::uint32_t
        {
            Citadel_RankInvalid = 0xffffffff,
            Citadel_Unranked = 0x0,
            Citadel_Rank1 = 0x1,
            Citadel_Rank2 = 0x2,
            Citadel_Rank3 = 0x3,
            Citadel_Rank4 = 0x4,
            Citadel_Rank5 = 0x5,
            Citadel_Rank6 = 0x6,
            Citadel_Rank7 = 0x7,
            Citadel_Rank8 = 0x8,
            Citadel_Rank9 = 0x9,
            Citadel_Rank10 = 0xa,
            Citadel_Rank11 = 0xb,
            Citadel_RankMax = 0xb,
        };
    };
};
