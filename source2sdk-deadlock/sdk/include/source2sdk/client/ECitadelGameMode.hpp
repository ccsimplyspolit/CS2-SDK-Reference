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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class ECitadelGameMode : std::uint32_t
        {
            k_ECitadelGameMode_Invalid = 0x0,
            k_ECitadelGameMode_Normal = 0x1,
            k_ECitadelGameMode_1v1Test = 0x2,
            k_ECitadelGameMode_Sandbox = 0x3,
            k_ECitadelGameMode_StreetBrawl = 0x4,
            k_ECitadelGameMode_ExploreNYC = 0x5,
            k_ECitadelGameMode_Internal = 0x6,
        };
    };
};
