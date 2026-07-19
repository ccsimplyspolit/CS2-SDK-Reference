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
        enum class ParticleEntityPos_t : std::uint32_t
        {
            // MPropertyFriendlyName "Abs Origin"
            PARTICLE_ABS_ORIGIN = 0x0,
            // MPropertyFriendlyName "Worldspace Center"
            PARTICLE_WORLDSPACE_CENTER = 0x1,
            // MPropertyFriendlyName "Eyes"
            PARTICLE_EYES = 0x2,
            // MPropertyFriendlyName "Flashlight"
            PARTICLE_FLASHLIGHT = 0x3,
        };
    };
};
