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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class SndBeatTrackPlaybackType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Step"
            eSndBeatTrackPlaybackTypeStep = 0x0,
            // MPropertyFriendlyName "Fwd"
            eSndBeatTrackPlaybackTypeFwd = 0x1,
        };
    };
};
