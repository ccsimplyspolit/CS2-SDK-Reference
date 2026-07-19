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
        // Alignment: 1
        // Size: 0x1
        enum class FamiliarTaskType_t : std::uint8_t
        {
            FAMILIARTASK_INVALID = 0x0,
            FAMILIARTASK_DAMAGE_SHOOT_TARGET = 0x1,
            FAMILIARTASK_DAMAGE_ORB = 0x2,
            FAMILIARTASK_DAMAGE_ATTACH = 0x3,
            FAMILIARTASK_DAMAGE_ATTACH_DIRECT = 0x4,
            FAMILIARTASK_BREAK = 0x5,
            FAMILIARTASK_COLLECT = 0x6,
            FAMILIARTASK_SHOP = 0x7,
            FAMILIARTASK_INFEST_BEGIN = 0x8,
            FAMILIARTASK_INFEST_HEAL = 0x9,
            FAMILIARTASK_MAX = 0xa,
        };
    };
};
