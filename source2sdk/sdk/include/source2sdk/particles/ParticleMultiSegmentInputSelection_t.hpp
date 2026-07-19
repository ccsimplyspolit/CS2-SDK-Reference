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
        enum class ParticleMultiSegmentInputSelection_t : std::uint32_t
        {
            // MPropertyFriendlyName "Float Input"
            PARTICLE_MULTISEGMENT_SELECTION_FLOAT = 0x0,
            // MPropertyFriendlyName "Text Input"
            PARTICLE_MULTISEGMENT_SELECTION_STRING = 0x1,
        };
    };
};
