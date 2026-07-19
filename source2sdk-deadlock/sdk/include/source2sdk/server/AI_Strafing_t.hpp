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
        // Alignment: 1
        // Size: 0x1
        enum class AI_Strafing_t : std::uint8_t
        {
            // MPropertySuppressEnumerator
            eInvalid = 0x0,
            // MPropertyFriendlyName "Disabled ( Face Path )"
            eDisabled = 0x1,
            // MPropertyFriendlyName "Enabled ( Face Target )"
            eEnabled = 0x2,
        };
    };
};
