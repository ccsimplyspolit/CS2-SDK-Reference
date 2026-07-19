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
        // Alignment: 1
        // Size: 0x1
        enum class ELashGrappleState : std::uint8_t
        {
            ELashGrappleState_None = 0x0,
            ELashGrappleState_LiftingUp = 0x1,
            ELashGrappleState_HangingInAir = 0x2,
        };
    };
};
