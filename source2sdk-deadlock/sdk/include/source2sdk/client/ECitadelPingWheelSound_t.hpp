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
        enum class ECitadelPingWheelSound_t : std::uint32_t
        {
            // MPropertyFriendlyName "No Sound"
            CITADEL_PING_WHEEL_SOUND_NONE = 0x0,
            // MPropertyFriendlyName "Normal Map Ping Sound"
            CITADEL_PING_WHEEL_SOUND_MAP_PING = 0x1,
            // MPropertyFriendlyName "Attack Ping Sound"
            CITADEL_PING_WHEEL_SOUND_ATTACK = 0x2,
            // MPropertyFriendlyName "Defend Ping Sound"
            CITADEL_PING_WHEEL_SOUND_DEFEND = 0x3,
            // MPropertyFriendlyName "Warning Ping Sound"
            CITADEL_PING_WHEEL_SOUND_WARNING = 0x4,
        };
    };
};
