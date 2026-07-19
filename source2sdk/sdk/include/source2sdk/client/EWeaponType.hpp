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
        // Enumerator count: 12
        // Alignment: 4
        // Size: 0x4
        enum class EWeaponType : std::uint32_t
        {
            EWT_Knife = 0x0,
            EWT_Pistol = 0x1,
            EWT_SubMachineGun = 0x2,
            EWT_Rifle = 0x3,
            EWT_Shotgun = 0x4,
            EWT_SniperRifle = 0x5,
            EWT_MachineGun = 0x6,
            EWT_C4 = 0x7,
            EWT_Grenade = 0x8,
            EWT_Equipment = 0x9,
            EWT_StackableItem = 0xa,
            EWT_Unknown = 0xb,
        };
    };
};
