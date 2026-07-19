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
        // Alignment: 1
        // Size: 0x1
        enum class EFencerUltState_t : std::uint8_t
        {
            EFencerUlt_None = 0x0,
            EFencerUlt_Windup = 0x1,
            EFencerUlt_Dashing = 0x2,
            EFencerUlt_Holding = 0x3,
            EFencerUlt_Sweeping = 0x4,
            EFencerUlt_Finishing = 0x5,
        };
    };
};
