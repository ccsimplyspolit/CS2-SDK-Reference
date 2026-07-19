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
        // Enumerator count: 8
        // Alignment: 1
        // Size: 0x1
        enum class EAbilityType_t : std::uint8_t
        {
            EAbilityType_Invalid = 0xff,
            EAbilityType_Weapon = 0x0,
            EAbilityType_Signature = 0x1,
            EAbilityType_Ultimate = 0x2,
            EAbilityType_Item = 0x3,
            EAbilityType_Innate = 0x4,
            EAbilityType_Cosmetic = 0x5,
            EAbilityType_Melee = 0x6,
        };
    };
};
