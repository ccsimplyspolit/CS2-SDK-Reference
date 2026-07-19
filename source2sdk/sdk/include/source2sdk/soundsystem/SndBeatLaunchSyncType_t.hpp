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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class SndBeatLaunchSyncType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Invalid"
            eSndBeatLaunchSyncTypeInvalid = 0x0,
            // MPropertyFriendlyName "Queue"
            eSndBeatLaunchSyncTypeQueue = 0x1,
            // MPropertyFriendlyName "Seek"
            eSndBeatLaunchSyncTypeSeek = 0x2,
            // MPropertyFriendlyName "Reset"
            eSndBeatLaunchSyncTypeReset = 0x3,
        };
    };
};
