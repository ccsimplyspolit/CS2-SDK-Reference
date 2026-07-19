#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class PulseCursorWakePriority_t : std::uint32_t
        {
            // MPropertyFriendlyName "Proceed Elegantly."
            // MPropertyDescription "Request elegant wind-down of any associated work (e.g. vcd interrupt), then proceed afterwards."
            WakeElegantly = 0x0,
            // MPropertyFriendlyName "Proceed Immediately."
            // MPropertyDescription "Stop the node action without any wind-down, then proceed afterwards."
            WakeImmediate = 0x1,
        };
    };
};
