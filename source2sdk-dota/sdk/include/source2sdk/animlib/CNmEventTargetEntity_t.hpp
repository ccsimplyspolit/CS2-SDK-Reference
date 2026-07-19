#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class CNmEventTargetEntity_t : std::uint32_t
        {
            Self = 0x0,
            Weapon = 0x1,
            HeldItem = 0x2,
            Custom = 0x3,
        };
    };
};
