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
        enum class EHeroType : std::uint32_t
        {
            ECitadelHeroType_None = 0x0,
            ECitadelHeroType_Marksman = 0x1,
            ECitadelHeroType_Assassin = 0x2,
            ECitadelHeroType_Brawler = 0x3,
            ECitadelHeroType_Mystic = 0x4,
            ECitadelHeroType_LastEnum = 0x5,
        };
    };
};
