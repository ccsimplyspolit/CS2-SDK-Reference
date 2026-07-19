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
        // Alignment: 4
        // Size: 0x4
        enum class EEscortActivity : std::uint32_t
        {
            IdleShielded = 0x0,
            Alert = 0x1,
            RangeAttack = 0x2,
            Dying = 0x3,
        };
    };
};
