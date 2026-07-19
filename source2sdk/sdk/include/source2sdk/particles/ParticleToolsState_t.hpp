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
        enum class ParticleToolsState_t : std::uint32_t
        {
            // MPropertyFriendlyName "Always Enabled"
            PARTICLE_TOOLS_STATE_ALWAYS_ON = 0xffffffff,
            // MPropertyFriendlyName "Only Enabled in Tools"
            PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0x0,
            // MPropertyFriendlyName "Only Enabled in Game"
            PARTICLE_TOOLS_STATE_GAME_ONLY = 0x1,
        };
    };
};
