#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class PulseNPCCondition_t : std::uint32_t
        {
            // MPropertyFriendlyName "Can See the Player"
            COND_SEE_PLAYER = 0x1,
            // MPropertyFriendlyName "Lost Sight of the Player"
            COND_LOST_PLAYER = 0x2,
            // MPropertyFriendlyName "Can Hear the Player"
            COND_HEAR_PLAYER = 0x3,
            // MPropertyFriendlyName "Is Being Pushed by the Player"
            COND_PLAYER_PUSHING = 0x4,
            // MPropertyFriendlyName "No Primary Ammo"
            COND_NO_PRIMARY_AMMO = 0x5,
        };
    };
};
