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
        // Enumerator count: 17
        // Alignment: 4
        // Size: 0x4
        enum class EProgressType_t : std::uint32_t
        {
            EProgress_None = 0x0,
            EProgress_Opacity = 0x1,
            EProgress_OffsetLeft = 0x2,
            EProgress_OffsetRight = 0x3,
            EProgress_OffsetUp = 0x4,
            EProgress_OffsetDown = 0x5,
            EProgress_FillLeft = 0x6,
            EProgress_FillRight = 0x7,
            EProgress_FillUp = 0x8,
            EProgress_FillDown = 0x9,
            EProgress_RadialCW = 0xa,
            EProgress_RadialCCW = 0xb,
            EProgress_ClipLeft = 0xc,
            EProgress_ClipRight = 0xd,
            EProgress_ClipUp = 0xe,
            EProgress_ClipDown = 0xf,
            EProgress_Scale = 0x10,
        };
    };
};
