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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class EAttachState_t : std::uint32_t
        {
            EAttachState_None = 0x0,
            EAttachState_AwaitingTether = 0x1,
            EAttachState_Latched = 0x2,
            EAttachState_Attached = 0x3,
            EAttachStateCount = 0x4,
        };
    };
};
