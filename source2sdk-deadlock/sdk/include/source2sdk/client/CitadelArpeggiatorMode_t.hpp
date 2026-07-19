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
        enum class CitadelArpeggiatorMode_t : std::uint32_t
        {
            EArpMode_Default = 0x0,
            EArpMode_Up = 0x1,
            EArpMode_Down = 0x2,
            EArpMode_UpDown = 0x3,
            EArpMode_Random = 0x4,
            EArpMode_Count = 0x5,
        };
    };
};
