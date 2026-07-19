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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class EPlayerTrackedStatImpl : std::uint32_t
        {
            k_ePlayerTrackedStatImpl_Invalid = 0x0,
            k_ePlayerTrackedStatImpl_Direct = 0x1,
            k_ePlayerTrackedStatImpl_Expression = 0x2,
        };
    };
};
