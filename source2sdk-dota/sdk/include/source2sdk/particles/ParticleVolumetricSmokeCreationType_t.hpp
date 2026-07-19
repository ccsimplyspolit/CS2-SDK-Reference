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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class ParticleVolumetricSmokeCreationType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Continuous Injection From Particles"
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS = 0x0,
            // MPropertyFriendlyName "Instant Impulse On Each Particle Event"
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_IMPULSE = 0x1,
        };
    };
};
