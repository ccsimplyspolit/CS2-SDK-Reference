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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class ECsgoGameEvents : std::uint32_t
        {
            GE_PlayerAnimEventId = 0x1c2,
            GE_RadioIconEventId = 0x1c3,
            GE_FireBulletsId = 0x1c4,
            GE_PlayerBulletHitId = 0x1c5,
        };
    };
};
