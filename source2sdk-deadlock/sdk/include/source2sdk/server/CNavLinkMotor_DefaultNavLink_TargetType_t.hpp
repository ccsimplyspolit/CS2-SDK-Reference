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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class CNavLinkMotor_DefaultNavLink_TargetType_t : std::uint32_t
        {
            eWaypoint = 0x0,
            eEdgePosition = 0x1,
            eEdgePositionAndOrientation = 0x2,
        };
    };
};
