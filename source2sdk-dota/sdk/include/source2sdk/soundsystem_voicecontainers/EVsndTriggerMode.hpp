#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class EVsndTriggerMode : std::uint32_t
        {
            // MPropertyFriendlyName "Trigger"
            Trigger = 0x0,
            // MPropertyFriendlyName "Gate"
            Gate = 0x1,
        };
    };
};
