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
        enum class EChickenActivity : std::uint32_t
        {
            Idle = 0x0,
            Squat = 0x1,
            Walk = 0x2,
            Run = 0x3,
            Glide = 0x4,
            Land = 0x5,
            Panic = 0x6,
        };
    };
};
