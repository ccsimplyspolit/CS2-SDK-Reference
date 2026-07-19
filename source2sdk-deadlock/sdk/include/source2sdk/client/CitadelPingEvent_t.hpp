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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x4
        enum class CitadelPingEvent_t : std::uint32_t
        {
            CITADEL_PING_EVENT_LOCATION_PING = 0x0,
            CITADEL_PING_MINIMAP_LOCATION_PING = 0x1,
            CITADEL_PING_EVENT_BASE_UNDER_ATTACK = 0x2,
            CITADEL_PING_EVENT_ENTITY_PING = 0x3,
            CITADEL_PING_CRATE_SPAWN = 0x4,
            CITADEL_PING_KOTH_SPAWN = 0x5,
            CITADEL_PING_OBJECTIVE_SPAWN = 0x6,
            CITADEL_PING_OBJECTIVE_KILLED = 0x7,
            CITADEL_PING_NEUTRAL_SPAWN = 0x8,
            CITADEL_PING_ESCORT_SPAWN = 0x9,
        };
    };
};
