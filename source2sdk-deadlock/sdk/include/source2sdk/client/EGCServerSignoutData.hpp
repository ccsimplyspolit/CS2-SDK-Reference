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
        // Enumerator count: 14
        // Alignment: 4
        // Size: 0x4
        enum class EGCServerSignoutData : std::uint32_t
        {
            k_EServerSignoutData_Disconnections = 0x2,
            k_EServerSignoutData_AccountStatChanges = 0x3,
            k_EServerSignoutData_DetailedStats = 0x4,
            k_EServerSignoutData_ServerPerfStats = 0x5,
            k_EServerSignoutData_PerfData = 0x6,
            k_EServerSignoutData_PlayerChat = 0x7,
            k_EServerSignoutData_BookRewards = 0x8,
            k_EServerSignoutData_PenalizedPlayers = 0x9,
            k_EServerSignoutData_MatchDevStats = 0xb,
            k_EServerSignoutData_ChallengeProgress = 0xc,
            k_EServerSignoutData_HeroXPGrant = 0xd,
            k_EServerSignoutData_MatchKills = 0xe,
            k_EServerSignoutData_PlayerBehavior = 0xf,
            k_EServerSignoutData_StreetBrawlData = 0x10,
        };
    };
};
