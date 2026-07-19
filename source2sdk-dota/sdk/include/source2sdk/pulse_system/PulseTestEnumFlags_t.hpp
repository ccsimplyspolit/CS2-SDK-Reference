#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class PulseTestEnumFlags_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            NONE = 0x0,
            // MPropertyFriendlyName "First"
            FIRST = 0x1,
            // MPropertyFriendlyName "Second"
            SECOND = 0x2,
            // MPropertyFriendlyName "Third"
            THIRD = 0x4,
        };
    };
};
