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
        // Enumerator count: 7
        // Alignment: 2
        // Size: 0x2
        enum class AI_VolumetricEventFlags_t : std::uint16_t
        {
            eNone = 0x0,
            eReactToSource = 0x1,
            eDangerApproach = 0x2,
            eAlliesOnly = 0x4,
            ePanicNPCs = 0x8,
            eSquadOnly = 0x10,
            eAggregatable = 0x20,
        };
    };
};
