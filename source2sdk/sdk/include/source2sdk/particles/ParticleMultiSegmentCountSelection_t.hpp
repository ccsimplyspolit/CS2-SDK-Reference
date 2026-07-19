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
        enum class ParticleMultiSegmentCountSelection_t : std::uint32_t
        {
            // MPropertyFriendlyName "7 Segment"
            PARTICLE_MULTISEGMENT_SEG_COUNT_7 = 0x7,
            // MPropertyFriendlyName "14 Segment"
            PARTICLE_MULTISEGMENT_SEG_COUNT_14 = 0xe,
            // MPropertyFriendlyName "16 Segment"
            PARTICLE_MULTISEGMENT_SEG_COUNT_16 = 0x10,
        };
    };
};
