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
        enum class ECitadelAccountStatMedal : std::uint32_t
        {
            k_eNone = 0x0,
            k_eBronze = 0x1,
            k_eSilver = 0x2,
            k_eGold = 0x3,
        };
    };
};
