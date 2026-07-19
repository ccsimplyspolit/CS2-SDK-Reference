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
        // Alignment: 1
        // Size: 0x1
        enum class EItemSlotTypes_t : std::uint8_t
        {
            // MPropertyFriendlyName "Invalid"
            EItemSlotType_Invalid = 0xff,
            // MPropertyFriendlyName "Weapon"
            EItemSlotType_WeaponMod = 0x0,
            // MPropertyFriendlyName "Armor"
            EItemSlotType_Armor = 0x1,
            // MPropertyFriendlyName "Tech"
            EItemSlotType_Tech = 0x2,
            // MPropertyFriendlyName "Universal"
            // MPropertySuppressEnumerator
            EItemSlotType_Universal = 0x3,
            // MPropertyFriendlyName "Locked Universal"
            // MPropertySuppressEnumerator
            EItemSlotType_UniversalLocked = 0x4,
            // MPropertyFriendlyName "All"
            // MPropertySuppressEnumerator
            EItemSlotType_All = 0x5,
            // MPropertyFriendlyName "Favorites"
            // MPropertySuppressEnumerator
            EItemSlotType_Favorites = 0x6,
            // MPropertySuppressEnumerator
            EMaxItemSlotTypes = 0x7,
        };
    };
};
