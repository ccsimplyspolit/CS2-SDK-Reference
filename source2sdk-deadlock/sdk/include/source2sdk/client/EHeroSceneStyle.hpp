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
        enum class EHeroSceneStyle : std::uint32_t
        {
            Shop = 0x0,
            Portrait = 0x1,
            TeamReveal = 0x2,
            Profile = 0x3,
            PostGamePortrait = 0x4,
        };
    };
};
