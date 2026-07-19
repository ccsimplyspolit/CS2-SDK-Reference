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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class ECitadelStatCategory : std::uint32_t
        {
            ECitadelStat_Invalid = 0xffffffff,
            ECitadelStat_Weapon = 0x0,
            ECitadelStat_Vitality = 0x1,
            ECitadelStat_Spirit = 0x2,
        };
    };
};
