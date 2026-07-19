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
        enum class EStreetBrawlGameState : std::uint32_t
        {
            ESBGS_Init = 0x0,
            ESBGS_PreBuy = 0x1,
            ESBGS_Buy = 0x2,
            ESBGS_Combat = 0x3,
            ESBGS_PreScoring = 0x4,
            ESBGS_Scoring = 0x5,
            // MPropertySuppressEnumerator
            ESBGS_Count = 0x6,
        };
    };
};
