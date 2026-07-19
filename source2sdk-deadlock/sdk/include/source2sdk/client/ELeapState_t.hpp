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
        enum class ELeapState_t : std::uint8_t
        {
            ELeapState_None = 0x0,
            ELeapState_Startup = 0x1,
            ELeapState_BoostingUp = 0x2,
            ELeapState_CrashingDown = 0x3,
            ELeapState_Land = 0x4,
            ELeapState_CrashOnGroundTouch = 0x5,
        };
    };
};
