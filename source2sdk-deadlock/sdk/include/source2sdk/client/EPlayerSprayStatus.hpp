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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class EPlayerSprayStatus : std::uint32_t
        {
            k_eSuccess = 0x1,
            k_eInvalidPawn = 0x2,
            k_eNotAlive = 0x3,
            k_eOutOfRange = 0x4,
            k_eBadSurface = 0x5,
            k_eTooClose = 0x6,
            k_eGrazingAngle = 0x7,
        };
    };
};
