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
        // Enumerator count: 12
        // Alignment: 4
        // Size: 0x4
        enum class EGameState : std::uint32_t
        {
            EGameState_Invalid = 0x0,
            EGameState_Init = 0x1,
            EGameState_WaitingForPlayersToJoin = 0x2,
            EGameState_HeroSelection = 0x3,
            EGameState_MatchIntro = 0x4,
            EGameState_WaitForMapToLoad = 0x5,
            EGameState_PreGameWait = 0x6,
            EGameState_GameInProgress = 0x7,
            EGameState_PostGame = 0x8,
            EGameState_PostGame_PlayOfTheGame = 0x9,
            EGameState_Abandoned = 0xa,
            EGameState_End = 0xb,
        };
    };
};
