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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class PreviewWeaponState : std::uint32_t
        {
            DROPPED = 0x0,
            HOLSTERED = 0x1,
            DEPLOYED = 0x2,
            PLANTED = 0x3,
            INSPECT = 0x4,
            ICON = 0x5,
        };
    };
};
