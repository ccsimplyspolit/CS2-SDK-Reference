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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class SndBeatKeyType_t : std::uint32_t
        {
            // MPropertySuppressEnumerator
            eSndBeatPatternTypeNone = 0x0,
            // MPropertyFriendlyName "Keys"
            eSndBeatPatternTypeKeys = 0x1,
            // MPropertyFriendlyName "Keyed Floats"
            eSndBeatPatternTypeKeyedFloats = 0x2,
            // MPropertyFriendlyName "Keyed Sound Events"
            eSndBeatPatternTypeKeyedSndEvts = 0x3,
            // MPropertyFriendlyName "Keyed Midi"
            eSndBeatPatternTypeKeyedMidi = 0x4,
        };
    };
};
