#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class ParticleMultiSegmentSpecialCharacter_t : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            PARTICLE_MULTISEGMENT_SPECIAL_NONE = 0xffffffff,
            // MPropertyFriendlyName "Decimal Point"
            PARTICLE_MULTISEGMENT_SPECIAL_DECIMAL = 0x0,
            // MPropertyFriendlyName "Colon"
            PARTICLE_MULTISEGMENT_SPECIAL_COLON = 0x1,
            // MPropertyFriendlyName "Degrees"
            PARTICLE_MULTISEGMENT_SPECIAL_DEGREES = 0x2,
        };
    };
};
