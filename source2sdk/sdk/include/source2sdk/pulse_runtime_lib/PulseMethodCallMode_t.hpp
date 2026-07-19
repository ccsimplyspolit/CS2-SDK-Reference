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
        enum class PulseMethodCallMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "Wait For Completion"
            // MPropertyDescription "Synchronous - Wait for this node to fully complete before proceeding."
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            // MPropertyFriendlyName "Proceed Immediately"
            // MPropertyDescription "Asynchronous - This node executes independently using a new Cursor. Formerly 'Fire and Forget'. Equivalent to scheduling using an additional 'Fire Child Cursors' node."
            ASYNC_FIRE_AND_FORGET = 0x1,
        };
    };
};
