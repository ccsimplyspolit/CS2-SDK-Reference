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
        enum class CFuncRotator_RotationAxis_t : std::uint32_t
        {
            ROTATION_AXIS_UNDEFINED = 0x0,
            ROTATION_AXIS_YAW = 0x1,
            ROTATION_AXIS_PITCH = 0x2,
            ROTATION_AXIS_ROLL = 0x3,
        };
    };
};
