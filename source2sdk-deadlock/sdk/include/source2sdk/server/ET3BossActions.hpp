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
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x4
        enum class ET3BossActions : std::uint32_t
        {
            Idle = 0x0,
            Intro = 0x1,
            PostShrineTransition = 0x2,
            PostShrineIdle = 0x3,
            ShineAOEAttack_L = 0x4,
            ShineAOEAttack_R = 0x5,
            BeamWindUp = 0x6,
            BeamShoot = 0x7,
            TransformedIdle = 0x8,
            Transforming = 0x9,
            TransformingUp = 0xa,
        };
    };
};
