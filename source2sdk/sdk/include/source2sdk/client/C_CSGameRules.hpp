#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_RetakeGameRules.hpp"
#include "source2sdk/client/C_TeamplayRules.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSGameModeRules;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4f60
        // Has VTable
        #pragma pack(push, 1)
        class C_CSGameRules : public source2sdk::client::C_TeamplayRules
        {
        public:
            bool m_bFreezePeriod; // 0x40            
            bool m_bWarmupPeriod; // 0x41            
            uint8_t _pad0042[0x2]; // 0x42
            source2sdk::entity2::GameTime_t m_fWarmupPeriodEnd; // 0x44            
            source2sdk::entity2::GameTime_t m_fWarmupPeriodStart; // 0x48            
            bool m_bTerroristTimeOutActive; // 0x4c            
            bool m_bCTTimeOutActive; // 0x4d            
            uint8_t _pad004e[0x2]; // 0x4e
            float m_flTerroristTimeOutRemaining; // 0x50            
            float m_flCTTimeOutRemaining; // 0x54            
            std::int32_t m_nTerroristTimeOuts; // 0x58            
            std::int32_t m_nCTTimeOuts; // 0x5c            
            bool m_bTechnicalTimeOut; // 0x60            
            bool m_bMatchWaitingForResume; // 0x61            
            uint8_t _pad0062[0x2]; // 0x62
            std::int32_t m_iFreezeTime; // 0x64            
            std::int32_t m_iRoundTime; // 0x68            
            float m_fMatchStartTime; // 0x6c            
            source2sdk::entity2::GameTime_t m_fRoundStartTime; // 0x70            
            source2sdk::entity2::GameTime_t m_flRestartRoundTime; // 0x74            
            bool m_bGameRestart; // 0x78            
            uint8_t _pad0079[0x3]; // 0x79
            float m_flGameStartTime; // 0x7c            
            float m_timeUntilNextPhaseStarts; // 0x80            
            std::int32_t m_gamePhase; // 0x84            
            std::int32_t m_totalRoundsPlayed; // 0x88            
            std::int32_t m_nRoundsPlayedThisPhase; // 0x8c            
            std::int32_t m_nOvertimePlaying; // 0x90            
            std::int32_t m_iHostagesRemaining; // 0x94            
            bool m_bAnyHostageReached; // 0x98            
            bool m_bMapHasBombTarget; // 0x99            
            bool m_bMapHasRescueZone; // 0x9a            
            bool m_bMapHasBuyZone; // 0x9b            
            bool m_bIsQueuedMatchmaking; // 0x9c            
            uint8_t _pad009d[0x3]; // 0x9d
            std::int32_t m_nQueuedMatchmakingMode; // 0xa0            
            bool m_bIsValveDS; // 0xa4            
            bool m_bLogoMap; // 0xa5            
            bool m_bPlayAllStepSoundsOnServer; // 0xa6            
            uint8_t _pad00a7[0x1]; // 0xa7
            std::int32_t m_iSpectatorSlotCount; // 0xa8            
            std::int32_t m_MatchDevice; // 0xac            
            bool m_bHasMatchStarted; // 0xb0            
            uint8_t _pad00b1[0x3]; // 0xb1
            std::int32_t m_nNextMapInMapgroup; // 0xb4            
            char m_szTournamentEventName[512]; // 0xb8            
            char m_szTournamentEventStage[512]; // 0x2b8            
            char m_szMatchStatTxt[512]; // 0x4b8            
            char m_szTournamentPredictionsTxt[512]; // 0x6b8            
            std::int32_t m_nTournamentPredictionsPct; // 0x8b8            
            source2sdk::entity2::GameTime_t m_flCMMItemDropRevealStartTime; // 0x8bc            
            source2sdk::entity2::GameTime_t m_flCMMItemDropRevealEndTime; // 0x8c0            
            bool m_bIsDroppingItems; // 0x8c4            
            bool m_bIsQuestEligible; // 0x8c5            
            bool m_bIsHltvActive; // 0x8c6            
            bool m_bBombPlanted; // 0x8c7            
            std::uint16_t m_arrProhibitedItemIndices[100]; // 0x8c8            
            std::uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0x990            
            std::int32_t m_numBestOfMaps; // 0x9a0            
            std::int32_t m_nHalloweenMaskListSeed; // 0x9a4            
            bool m_bBombDropped; // 0x9a8            
            uint8_t _pad09a9[0x3]; // 0x9a9
            std::int32_t m_iRoundWinStatus; // 0x9ac            
            std::int32_t m_eRoundWinReason; // 0x9b0            
            bool m_bTCantBuy; // 0x9b4            
            bool m_bCTCantBuy; // 0x9b5            
            uint8_t _pad09b6[0x2]; // 0x9b6
            std::int32_t m_iMatchStats_RoundResults[30]; // 0x9b8            
            std::int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xa30            
            std::int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xaa8            
            float m_TeamRespawnWaveTimes[32]; // 0xb20            
            source2sdk::entity2::GameTime_t m_flNextRespawnWave[32]; // 0xba0            
            VectorWS m_vMinimapMins; // 0xc20            
            VectorWS m_vMinimapMaxs; // 0xc2c            
            float m_MinimapVerticalSectionHeights[8]; // 0xc38            
            std::uint64_t m_ullLocalMatchID; // 0xc58            
            std::int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xc60            
            std::int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xc88            
            std::int32_t m_nEndMatchMapVoteWinner; // 0xcb0            
            std::int32_t m_iNumConsecutiveCTLoses; // 0xcb4            
            std::int32_t m_iNumConsecutiveTerroristLoses; // 0xcb8            
            uint8_t _pad0cbc[0xbc]; // 0xcbc
            std::int32_t m_nMatchAbortedEarlyReason; // 0xd78            
            bool m_bHasTriggeredRoundStartMusic; // 0xd7c            
            bool m_bSwitchingTeamsAtRoundReset; // 0xd7d            
            uint8_t _pad0d7e[0x1a]; // 0xd7e
            source2sdk::client::CCSGameModeRules* m_pGameModeRules; // 0xd98            
            source2sdk::client::C_RetakeGameRules m_RetakeRules; // 0xda0            
            std::uint8_t m_nMatchEndCount; // 0xef8            
            uint8_t _pad0ef9[0x3]; // 0xef9
            std::int32_t m_nTTeamIntroVariant; // 0xefc            
            std::int32_t m_nCTTeamIntroVariant; // 0xf00            
            bool m_bTeamIntroPeriod; // 0xf04            
            uint8_t _pad0f05[0x3]; // 0xf05
            std::int32_t m_iRoundEndWinnerTeam; // 0xf08            
            std::int32_t m_eRoundEndReason; // 0xf0c            
            bool m_bRoundEndShowTimerDefend; // 0xf10            
            uint8_t _pad0f11[0x3]; // 0xf11
            std::int32_t m_iRoundEndTimerTime; // 0xf14            
            CUtlString m_sRoundEndFunFactToken; // 0xf18            
            CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0xf20            
            std::int32_t m_iRoundEndFunFactData1; // 0xf24            
            std::int32_t m_iRoundEndFunFactData2; // 0xf28            
            std::int32_t m_iRoundEndFunFactData3; // 0xf2c            
            CUtlString m_sRoundEndMessage; // 0xf30            
            std::int32_t m_iRoundEndPlayerCount; // 0xf38            
            bool m_bRoundEndNoMusic; // 0xf3c            
            uint8_t _pad0f3d[0x3]; // 0xf3d
            std::int32_t m_iRoundEndLegacy; // 0xf40            
            std::uint8_t m_nRoundEndCount; // 0xf44            
            uint8_t _pad0f45[0x3]; // 0xf45
            std::int32_t m_iRoundStartRoundNumber; // 0xf48            
            std::uint8_t m_nRoundStartCount; // 0xf4c            
            uint8_t _pad0f4d[0x400b]; // 0xf4d
            double m_flLastPerfSampleTime; // 0x4f58            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGameRules) == 0x4f60);
    };
};
