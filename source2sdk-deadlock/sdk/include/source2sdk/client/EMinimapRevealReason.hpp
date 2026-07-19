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
        // Alignment: 4
        // Size: 0x4
        enum class EMinimapRevealReason : std::uint32_t
        {
            EVisibleByEnemyPlayer = 0x0,
            EVisibleFromAttackingEnemyPlayer = 0x1,
            EVisibleByNPC = 0x2,
            EVisibleByObjective = 0x3,
            EVisibleByMirageTeleport = 0x4,
        };
    };
};
