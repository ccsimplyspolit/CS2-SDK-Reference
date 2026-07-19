#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class AI_StanceRequestSource_t : std::uint32_t
        {
            eInvalid = 0xffffffff,
            eSchedule = 0x0,
            eMoveStrategy = 0x1,
            eBase = 0x2,
            eCount = 0x3,
        };
    };
};
