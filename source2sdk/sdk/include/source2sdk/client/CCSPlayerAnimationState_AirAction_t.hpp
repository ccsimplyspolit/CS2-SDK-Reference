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
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class CCSPlayerAnimationState_AirAction_t : std::uint8_t
        {
            None = 0x0,
            Jump = 0x1,
            StartFall = 0x2,
            Land = 0x3,
        };
    };
};
