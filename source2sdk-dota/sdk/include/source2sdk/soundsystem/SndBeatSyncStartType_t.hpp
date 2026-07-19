#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class SndBeatSyncStartType_t : std::uint32_t
        {
            // MPropertySuppressEnumerator
            eSndBeatSyncStartTypeInvalid = 0x0,
            // MPropertyFriendlyName "Immediate"
            eSndBeatSyncStartTypeImmediate = 0x1,
            // MPropertyFriendlyName "Queue"
            eSndBeatSyncStartTypeQueue = 0x2,
        };
    };
};
