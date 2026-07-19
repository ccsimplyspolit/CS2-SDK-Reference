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
        // Enumerator count: 13
        // Alignment: 4
        // Size: 0x4
        enum class CSWeaponType : std::uint32_t
        {
            WEAPONTYPE_KNIFE = 0x0,
            WEAPONTYPE_PISTOL = 0x1,
            WEAPONTYPE_SUBMACHINEGUN = 0x2,
            WEAPONTYPE_RIFLE = 0x3,
            WEAPONTYPE_SHOTGUN = 0x4,
            WEAPONTYPE_SNIPER_RIFLE = 0x5,
            WEAPONTYPE_MACHINEGUN = 0x6,
            WEAPONTYPE_C4 = 0x7,
            WEAPONTYPE_TASER = 0x8,
            WEAPONTYPE_GRENADE = 0x9,
            WEAPONTYPE_EQUIPMENT = 0xa,
            WEAPONTYPE_STACKABLEITEM = 0xb,
            WEAPONTYPE_UNKNOWN = 0xc,
        };
    };
};
