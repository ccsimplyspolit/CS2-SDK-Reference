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
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class AI_VolumetricEventChannel_t : std::uint8_t
        {
            eUnspecified = 0x0,
            eRepeating = 0x1,
            eRepeatedDanger = 0x2,
            eWeapon = 0x3,
            eInjury = 0x4,
            eFootstep = 0x5,
        };
    };
};
