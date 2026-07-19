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
        enum class ETelepunchState_t : std::uint8_t
        {
            ETelepunchState_None = 0x0,
            ETelepunchState_EnemyPortalTelegraph = 0x1,
            ETelepunchState_SelfPortalTelegraph = 0x2,
            ETelepunchState_Windup = 0x3,
            ETelepunchState_Attack = 0x4,
        };
    };
};
