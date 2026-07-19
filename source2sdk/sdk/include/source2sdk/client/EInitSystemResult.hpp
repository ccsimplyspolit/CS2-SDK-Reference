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
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class EInitSystemResult : std::uint32_t
        {
            k_EInitSystemResult_Invalid = 0x0,
            k_EInitSystemResult_Success = 0x1,
            k_EInitSystemResult_None = 0x2,
            k_EInitSystemResult_NotFound = 0x3,
            k_EInitSystemResult_Existing = 0x4,
            k_EInitSystemResult_FailedOpen = 0x5,
            k_EInitSystemResult_Mismatch = 0x6,
            k_EInitSystemResult_FailedInit = 0x7,
            k_EInitSystemResult_Max = 0x8,
        };
    };
};
