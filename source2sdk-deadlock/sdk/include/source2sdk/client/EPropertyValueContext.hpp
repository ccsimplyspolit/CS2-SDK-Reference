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
        enum class EPropertyValueContext : std::uint32_t
        {
            Main = 0x0,
            StreetBrawl = 0x1,
            // MPropertySuppressEnumerator
            Count = 0x2,
        };
    };
};
