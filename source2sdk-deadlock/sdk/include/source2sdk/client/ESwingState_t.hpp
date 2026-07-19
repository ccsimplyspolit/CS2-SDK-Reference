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
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class ESwingState_t : std::uint8_t
        {
            ESwingState_None = 0x0,
            ESwingState_StartupDelay = 0x1,
            ESwingState_Swinging = 0x2,
        };
    };
};
