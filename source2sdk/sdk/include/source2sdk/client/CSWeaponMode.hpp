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
        // Alignment: 4
        // Size: 0x4
        enum class CSWeaponMode : std::uint32_t
        {
            Primary_Mode = 0x0,
            Secondary_Mode = 0x1,
            WeaponMode_MAX = 0x2,
        };
    };
};
