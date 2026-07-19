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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class AILOD_t : std::uint32_t
        {
            // MPropertySuppressEnumerator
            eAuto = 0xffffffff,
            // MPropertyDescription "High - All features turned on for highest fidelity"
            eHigh = 0x0,
            // MPropertyDescription "Medium - Some features turned off"
            eMedium = 0x1,
            // MPropertyDescription "Low - Lots of features turned off"
            eLow = 0x2,
            // MPropertyDescription "Very Low - No decision making, thinks at very low rate"
            eVeryLow = 0x3,
            // MPropertySuppressEnumerator
            eNumLODs = 0x4,
        };
    };
};
