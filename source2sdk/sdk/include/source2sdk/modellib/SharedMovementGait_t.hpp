#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class SharedMovementGait_t : std::uint8_t
        {
            // MPropertyFriendlyName "None"
            // MAlternateSemanticName
            eInvalid = 0xff,
            // MPropertyFriendlyName "Slow"
            // MAlternateSemanticName
            eSlow = 0x0,
            // MPropertyFriendlyName "Medium"
            // MAlternateSemanticName
            eMedium = 0x1,
            // MPropertyFriendlyName "Fast"
            // MAlternateSemanticName
            eFast = 0x2,
            // MPropertyFriendlyName "VeryFast"
            // MAlternateSemanticName
            eVeryFast = 0x3,
            // MPropertySuppressEnumerator
            eCount = 0x4,
        };
    };
};
