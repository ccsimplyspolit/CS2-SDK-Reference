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
        enum class TrooperType_t : std::uint32_t
        {
            TROOPER_INVALID = 0x0,
            TROOPER_NORMAL = 0x1,
            TROOPER_MEDIC = 0x2,
            TROOPER_MELEE = 0x3,
            TROOPER_ZIPLINE_CONTAINER = 0x4,
        };
    };
};
