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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class SoundEventStartType_t : std::uint32_t
        {
            // MPropertyFriendlyName "From Player"
            SOUNDEVENT_START_PLAYER = 0x0,
            // MPropertyFriendlyName "From World"
            SOUNDEVENT_START_WORLD = 0x1,
            // MPropertyFriendlyName "From Entity"
            SOUNDEVENT_START_ENTITY = 0x2,
        };
    };
};
