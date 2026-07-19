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
        // Alignment: 1
        // Size: 0x1
        enum class EModTier_t : std::uint8_t
        {
            EModTier_Invalid = 0x0,
            EModTier_1 = 0x1,
            EModTier_2 = 0x2,
            EModTier_3 = 0x3,
            EModTier_4 = 0x4,
            EModTier_5 = 0x5,
            // MPropertySuppressEnumerator
            EMaxModTier = 0x6,
        };
    };
};
