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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class AI_ForceFacingOwner_t : std::uint32_t
        {
            eNone = 0xffffffff,
            // MPropertyFriendlyName "Schedule"
            eSchedule = 0x0,
            // MPropertyFriendlyName "Motor"
            eMotor = 0x1,
            eCount = 0x2,
        };
    };
};
