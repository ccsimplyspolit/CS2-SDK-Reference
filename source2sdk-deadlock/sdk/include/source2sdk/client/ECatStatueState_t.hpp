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
        // Enumerator count: 5
        // Alignment: 1
        // Size: 0x1
        enum class ECatStatueState_t : std::uint8_t
        {
            ECatStatue_None = 0x0,
            ECatStatue_Shoulder = 0x1,
            ECatStatue_ProjectileOut = 0x2,
            ECatStatue_InWorld = 0x3,
            ECatStatue_InCooldown = 0x4,
        };
    };
};
