#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class GPUParticleCollisionMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "Raytracing TLAS"
            PARTICLE_GPU_COLLISION_MODE_RT = 0x0,
            // MPropertyFriendlyName "Primary View Depth Buffer"
            PARTICLE_GPU_COLLISION_MODE_DEPTH = 0x1,
            // MPropertyFriendlyName "Hybrid RT + Depth Buffer"
            PARTICLE_GPU_COLLISION_MODE_HYBRID = 0x2,
        };
    };
};
