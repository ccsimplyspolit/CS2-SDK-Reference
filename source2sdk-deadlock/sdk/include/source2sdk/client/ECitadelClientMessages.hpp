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
        // Enumerator count: 22
        // Alignment: 4
        // Size: 0x4
        enum class ECitadelClientMessages : std::uint32_t
        {
            CITADEL_CM_MapPing = 0x3ea,
            CITADEL_CM_PerformanceStats = 0x3eb,
            CITADEL_CM_PingWheel = 0x3ec,
            CITADEL_CM_ChatMsg = 0x3ed,
            CITADEL_CM_PerfReport = 0x3ee,
            CITADEL_CM_QuickResponse = 0x3ef,
            CITADEL_CM_Pause = 0x3f0,
            CITADEL_CM_MapLine = 0x3f1,
            CITADEL_CM_AbilityPing = 0x3f2,
            CITADEL_CM_ExecuteMapUnitAbility = 0x3f3,
            CITADEL_CM_GetDamageStats = 0x3f4,
            CITADEL_CM_CheaterVote = 0x3f5,
            CITADEL_CM_MutePlayers = 0x3f6,
            CITADEL_CM_HitMismatch = 0x3f7,
            CITADEL_CM_HideoutStart = 0x3f8,
            CITADEL_CM_HeroBuild = 0x3f9,
            CITADEL_CM_HideoutMenuState = 0x3fa,
            CITADEL_CM_HideoutSpawn = 0x3fb,
            CITADEL_CM_HideoutMatchmakingState = 0x3fc,
            CITADEL_CM_PlayerStatsUpdated = 0x3fd,
            CITADEL_CM_HideoutUpdateHeroReleaseVoteTally = 0x3fe,
            CITADEL_CM_ExecuteMapPositionAbility = 0x3ff,
        };
    };
};
