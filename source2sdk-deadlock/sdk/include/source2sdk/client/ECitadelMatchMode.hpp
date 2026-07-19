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
        // Alignment: 4
        // Size: 0x4
        enum class ECitadelMatchMode : std::uint32_t
        {
            k_ECitadelMatchMode_Invalid = 0x0,
            k_ECitadelMatchMode_Unranked = 0x1,
            k_ECitadelMatchMode_PrivateLobby = 0x2,
            k_ECitadelMatchMode_CoopBot = 0x3,
            k_ECitadelMatchMode_Ranked = 0x4,
            k_ECitadelMatchMode_ServerTest = 0x5,
            k_ECitadelMatchMode_Tutorial = 0x6,
            k_ECitadelMatchMode_HeroLabs = 0x7,
            k_ECitadelMatchMode_Calibration = 0x8,
        };
    };
};
