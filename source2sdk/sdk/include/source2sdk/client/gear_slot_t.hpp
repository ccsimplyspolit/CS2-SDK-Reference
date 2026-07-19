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
        // Enumerator count: 17
        // Alignment: 4
        // Size: 0x4
        enum class gear_slot_t : std::uint32_t
        {
            GEAR_SLOT_INVALID = 0xffffffff,
            GEAR_SLOT_RIFLE = 0x0,
            GEAR_SLOT_PISTOL = 0x1,
            GEAR_SLOT_KNIFE = 0x2,
            GEAR_SLOT_GRENADES = 0x3,
            GEAR_SLOT_C4 = 0x4,
            GEAR_SLOT_RESERVED_SLOT6 = 0x5,
            GEAR_SLOT_RESERVED_SLOT7 = 0x6,
            GEAR_SLOT_RESERVED_SLOT8 = 0x7,
            GEAR_SLOT_RESERVED_SLOT9 = 0x8,
            GEAR_SLOT_RESERVED_SLOT10 = 0x9,
            GEAR_SLOT_RESERVED_SLOT11 = 0xa,
            GEAR_SLOT_BOOSTS = 0xb,
            GEAR_SLOT_UTILITY = 0xc,
            GEAR_SLOT_COUNT = 0xd,
            GEAR_SLOT_FIRST = 0x0,
            GEAR_SLOT_LAST = 0xc,
        };
    };
};
