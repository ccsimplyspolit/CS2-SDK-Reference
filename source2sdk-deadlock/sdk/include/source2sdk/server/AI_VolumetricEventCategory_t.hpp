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
        // Alignment: 1
        // Size: 0x1
        enum class AI_VolumetricEventCategory_t : std::uint8_t
        {
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
            eSound = 0x1,
            eSight = 0x2,
            eInformation = 0x4,
        };
    };
};
