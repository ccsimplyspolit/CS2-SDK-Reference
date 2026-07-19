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
        enum class OnFrame : std::uint8_t
        {
            ONFRAME_UNKNOWN = 0x0,
            ONFRAME_TRUE = 0x1,
            ONFRAME_FALSE = 0x2,
        };
    };
};
