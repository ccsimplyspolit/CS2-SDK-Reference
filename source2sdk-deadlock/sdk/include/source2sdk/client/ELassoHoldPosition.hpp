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
        enum class ELassoHoldPosition : std::uint8_t
        {
            ELassoHoldPosition_Center = 0x0,
            ELassoHoldPosition_Left = 0x1,
            ELassoHoldPosition_Right = 0x2,
        };
    };
};
