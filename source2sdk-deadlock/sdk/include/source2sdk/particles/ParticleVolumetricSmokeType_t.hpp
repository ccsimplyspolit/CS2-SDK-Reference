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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class ParticleVolumetricSmokeType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Emission"
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION = 0x0,
            // MPropertyFriendlyName "Sink"
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK = 0x1,
            // MPropertyFriendlyName "Repel"
            PARTICLE_VOLUMETRIC_SMOKE_TYPE_REPEL = 0x2,
        };
    };
};
