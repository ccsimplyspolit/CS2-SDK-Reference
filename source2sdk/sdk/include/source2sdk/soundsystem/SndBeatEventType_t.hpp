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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class SndBeatEventType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Invalid"
            eSndBeatEventTypeInvalid = 0x0,
            // MPropertyFriendlyName "Beat"
            eSndBeatEventTypeBeat = 0x1,
            // MPropertyFriendlyName "Bar"
            eSndBeatEventTypeBar = 0x2,
            // MPropertyFriendlyName "Phrase"
            eSndBeatEventTypePhrase = 0x3,
            // MPropertyFriendlyName "Length"
            eSndBeatEventTypeLength = 0x4,
            // MPropertyFriendlyName "Keys"
            eSndBeatEventTypeKeys = 0x5,
        };
    };
};
