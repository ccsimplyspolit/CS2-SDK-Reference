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
        enum class CAI_InterestTarget_Type_t : std::uint32_t
        {
            eDisabled = 0x0,
            eEntity = 0x1,
            ePosition = 0x2,
            eDirection = 0x3,
            ePath = 0x4,
        };
    };
};
