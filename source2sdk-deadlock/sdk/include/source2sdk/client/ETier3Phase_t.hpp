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
        enum class ETier3Phase_t : std::uint32_t
        {
            ETier3Phase_Phase1 = 0x0,
            ETier3Phase_Phase2 = 0x1,
            ETier3Phase_Transforming = 0x2,
        };
    };
};
