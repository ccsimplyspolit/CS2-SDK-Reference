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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class ECrateLootType_t : std::uint32_t
        {
            ELoot_Invalid = 0xffffffff,
            ELoot_GoldIdol = 0x0,
            ELoot_RespawnCredit = 0x1,
            ELoot_NeutralGold = 0x2,
            ELoot_KothCapturePoint = 0x3,
            ELoot_LootTypeCount = 0x4,
        };
    };
};
