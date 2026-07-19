#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CRetakeGameRules.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSGameModeRules;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct SpawnPoint;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x11448
        // Has VTable
        #pragma pack(push, 1)
        class CCSGameRules : public source2sdk::server::CTeamplayRules
        {
        public:
            uint8_t _pad00d0[0x8]; // 0xd0
            bool m_bFreezePeriod; // 0xd8            
            bool m_bWarmupPeriod; // 0xd9            
            uint8_t _pad00da[0x2]; // 0xda
            source2sdk::entity2::GameTime_t m_fWarmupPeriodEnd; // 0xdc            
            source2sdk::entity2::GameTime_t m_fWarmupPeriodStart; // 0xe0            
            bool m_bTerroristTimeOutActive; // 0xe4            
            bool m_bCTTimeOutActive; // 0xe5            
            uint8_t _pad00e6[0x2]; // 0xe6
            float m_flTerroristTimeOutRemaining; // 0xe8            
            float m_flCTTimeOutRemaining; // 0xec            
            std::int32_t m_nTerroristTimeOuts; // 0xf0            
            std::int32_t m_nCTTimeOuts; // 0xf4            
            bool m_bTechnicalTimeOut; // 0xf8            
            bool m_bMatchWaitingForResume; // 0xf9            
            uint8_t _pad00fa[0x2]; // 0xfa
            std::int32_t m_iFreezeTime; // 0xfc            
            std::int32_t m_iRoundTime; // 0x100            
            float m_fMatchStartTime; // 0x104            
            source2sdk::entity2::GameTime_t m_fRoundStartTime; // 0x108            
            source2sdk::entity2::GameTime_t m_flRestartRoundTime; // 0x10c            
            bool m_bGameRestart; // 0x110            
            uint8_t _pad0111[0x3]; // 0x111
            float m_flGameStartTime; // 0x114            
            float m_timeUntilNextPhaseStarts; // 0x118            
            std::int32_t m_gamePhase; // 0x11c            
            std::int32_t m_totalRoundsPlayed; // 0x120            
            std::int32_t m_nRoundsPlayedThisPhase; // 0x124            
            std::int32_t m_nOvertimePlaying; // 0x128            
            std::int32_t m_iHostagesRemaining; // 0x12c            
            bool m_bAnyHostageReached; // 0x130            
            bool m_bMapHasBombTarget; // 0x131            
            bool m_bMapHasRescueZone; // 0x132            
            bool m_bMapHasBuyZone; // 0x133            
            bool m_bIsQueuedMatchmaking; // 0x134            
            uint8_t _pad0135[0x3]; // 0x135
            std::int32_t m_nQueuedMatchmakingMode; // 0x138            
            bool m_bIsValveDS; // 0x13c            
            bool m_bLogoMap; // 0x13d            
            bool m_bPlayAllStepSoundsOnServer; // 0x13e            
            uint8_t _pad013f[0x1]; // 0x13f
            std::int32_t m_iSpectatorSlotCount; // 0x140            
            std::int32_t m_MatchDevice; // 0x144            
            bool m_bHasMatchStarted; // 0x148            
            uint8_t _pad0149[0x3]; // 0x149
            std::int32_t m_nNextMapInMapgroup; // 0x14c            
            char m_szTournamentEventName[512]; // 0x150            
            char m_szTournamentEventStage[512]; // 0x350            
            char m_szMatchStatTxt[512]; // 0x550            
            char m_szTournamentPredictionsTxt[512]; // 0x750            
            std::int32_t m_nTournamentPredictionsPct; // 0x950            
            source2sdk::entity2::GameTime_t m_flCMMItemDropRevealStartTime; // 0x954            
            source2sdk::entity2::GameTime_t m_flCMMItemDropRevealEndTime; // 0x958            
            bool m_bIsDroppingItems; // 0x95c            
            bool m_bIsQuestEligible; // 0x95d            
            bool m_bIsHltvActive; // 0x95e            
            bool m_bBombPlanted; // 0x95f            
            std::uint16_t m_arrProhibitedItemIndices[100]; // 0x960            
            std::uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa28            
            std::int32_t m_numBestOfMaps; // 0xa38            
            std::int32_t m_nHalloweenMaskListSeed; // 0xa3c            
            bool m_bBombDropped; // 0xa40            
            uint8_t _pad0a41[0x3]; // 0xa41
            std::int32_t m_iRoundWinStatus; // 0xa44            
            std::int32_t m_eRoundWinReason; // 0xa48            
            bool m_bTCantBuy; // 0xa4c            
            bool m_bCTCantBuy; // 0xa4d            
            uint8_t _pad0a4e[0x2]; // 0xa4e
            std::int32_t m_iMatchStats_RoundResults[30]; // 0xa50            
            std::int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xac8            
            std::int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb40            
            float m_TeamRespawnWaveTimes[32]; // 0xbb8            
            source2sdk::entity2::GameTime_t m_flNextRespawnWave[32]; // 0xc38            
            VectorWS m_vMinimapMins; // 0xcb8            
            VectorWS m_vMinimapMaxs; // 0xcc4            
            float m_MinimapVerticalSectionHeights[8]; // 0xcd0            
            std::uint64_t m_ullLocalMatchID; // 0xcf0            
            std::int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xcf8            
            std::int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd20            
            std::int32_t m_nEndMatchMapVoteWinner; // 0xd48            
            std::int32_t m_iNumConsecutiveCTLoses; // 0xd4c            
            std::int32_t m_iNumConsecutiveTerroristLoses; // 0xd50            
            uint8_t _pad0d54[0x1c]; // 0xd54
            bool m_bHasHostageBeenTouched; // 0xd70            
            uint8_t _pad0d71[0x3]; // 0xd71
            source2sdk::entity2::GameTime_t m_flIntermissionStartTime; // 0xd74            
            source2sdk::entity2::GameTime_t m_flIntermissionEndTime; // 0xd78            
            bool m_bLevelInitialized; // 0xd7c            
            uint8_t _pad0d7d[0x3]; // 0xd7d
            std::int32_t m_iTotalRoundsPlayed; // 0xd80            
            std::int32_t m_iUnBalancedRounds; // 0xd84            
            bool m_endMatchOnRoundReset; // 0xd88            
            bool m_endMatchOnThink; // 0xd89            
            uint8_t _pad0d8a[0x2]; // 0xd8a
            std::int32_t m_iNumTerrorist; // 0xd8c            
            std::int32_t m_iNumCT; // 0xd90            
            std::int32_t m_iNumSpawnableTerrorist; // 0xd94            
            std::int32_t m_iNumSpawnableCT; // 0xd98            
            uint8_t _pad0d9c[0x4]; // 0xd9c
            // m_arrSelectedHostageSpawnIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_arrSelectedHostageSpawnIndices;
            char m_arrSelectedHostageSpawnIndices[0x18]; // 0xda0            
            std::int32_t m_nSpawnPointsRandomSeed; // 0xdb8            
            bool m_bFirstConnected; // 0xdbc            
            bool m_bCompleteReset; // 0xdbd            
            bool m_bPickNewTeamsOnReset; // 0xdbe            
            bool m_bScrambleTeamsOnRestart; // 0xdbf            
            bool m_bSwapTeamsOnRestart; // 0xdc0            
            uint8_t _pad0dc1[0x7]; // 0xdc1
            // m_nEndMatchTiedVotes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nEndMatchTiedVotes;
            char m_nEndMatchTiedVotes[0x18]; // 0xdc8            
            uint8_t _pad0de0[0x4]; // 0xde0
            bool m_bNeedToAskPlayersForContinueVote; // 0xde4            
            uint8_t _pad0de5[0x3]; // 0xde5
            std::uint32_t m_numQueuedMatchmakingAccounts; // 0xde8            
            float m_fAvgPlayerRank; // 0xdec            
            char* m_pQueuedMatchmakingReservationString; // 0xdf0            
            std::uint32_t m_numTotalTournamentDrops; // 0xdf8            
            std::uint32_t m_numSpectatorsCountMax; // 0xdfc            
            std::uint32_t m_numSpectatorsCountMaxTV; // 0xe00            
            std::uint32_t m_numSpectatorsCountMaxLnk; // 0xe04            
            uint8_t _pad0e08[0x8]; // 0xe08
            std::int32_t m_nCTsAliveAtFreezetimeEnd; // 0xe10            
            std::int32_t m_nTerroristsAliveAtFreezetimeEnd; // 0xe14            
            bool m_bForceTeamChangeSilent; // 0xe18            
            bool m_bLoadingRoundBackupData; // 0xe19            
            uint8_t _pad0e1a[0x36]; // 0xe1a
            std::int32_t m_nMatchInfoShowType; // 0xe50            
            float m_flMatchInfoDecidedTime; // 0xe54            
            uint8_t _pad0e58[0x18]; // 0xe58
            std::int32_t mTeamDMLastWinningTeamNumber; // 0xe70            
            float mTeamDMLastThinkTime; // 0xe74            
            float m_flTeamDMLastAnnouncementTime; // 0xe78            
            std::int32_t m_iAccountTerrorist; // 0xe7c            
            std::int32_t m_iAccountCT; // 0xe80            
            std::int32_t m_iSpawnPointCount_Terrorist; // 0xe84            
            std::int32_t m_iSpawnPointCount_CT; // 0xe88            
            std::int32_t m_iMaxNumTerrorists; // 0xe8c            
            std::int32_t m_iMaxNumCTs; // 0xe90            
            std::int32_t m_iLoserBonusMostRecentTeam; // 0xe94            
            float m_tmNextPeriodicThink; // 0xe98            
            bool m_bVoiceWonMatchBragFired; // 0xe9c            
            uint8_t _pad0e9d[0x3]; // 0xe9d
            float m_fWarmupNextChatNoticeTime; // 0xea0            
            uint8_t _pad0ea4[0x4]; // 0xea4
            std::int32_t m_iHostagesRescued; // 0xea8            
            std::int32_t m_iHostagesTouched; // 0xeac            
            float m_flNextHostageAnnouncement; // 0xeb0            
            bool m_bNoTerroristsKilled; // 0xeb4            
            bool m_bNoCTsKilled; // 0xeb5            
            bool m_bNoEnemiesKilled; // 0xeb6            
            bool m_bCanDonateWeapons; // 0xeb7            
            uint8_t _pad0eb8[0x4]; // 0xeb8
            float m_firstKillTime; // 0xebc            
            uint8_t _pad0ec0[0x4]; // 0xec0
            float m_firstBloodTime; // 0xec4            
            uint8_t _pad0ec8[0x18]; // 0xec8
            bool m_hostageWasInjured; // 0xee0            
            bool m_hostageWasKilled; // 0xee1            
            uint8_t _pad0ee2[0xe]; // 0xee2
            bool m_bVoteCalled; // 0xef0            
            bool m_bServerVoteOnReset; // 0xef1            
            uint8_t _pad0ef2[0x2]; // 0xef2
            float m_flVoteCheckThrottle; // 0xef4            
            bool m_bBuyTimeEnded; // 0xef8            
            uint8_t _pad0ef9[0x3]; // 0xef9
            std::int32_t m_nLastFreezeEndBeep; // 0xefc            
            bool m_bTargetBombed; // 0xf00            
            bool m_bBombDefused; // 0xf01            
            bool m_bMapHasBombZone; // 0xf02            
            uint8_t _pad0f03[0x4d]; // 0xf03
            VectorWS m_vecMainCTSpawnPos; // 0xf50            
            uint8_t _pad0f5c[0x4]; // 0xf5c
            // m_CTSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::SpawnPoint>> m_CTSpawnPointsMasterList;
            char m_CTSpawnPointsMasterList[0x18]; // 0xf60            
            // m_TerroristSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::SpawnPoint>> m_TerroristSpawnPointsMasterList;
            char m_TerroristSpawnPointsMasterList[0x18]; // 0xf78            
            bool m_bRespawningAllRespawnablePlayers; // 0xf90            
            uint8_t _pad0f91[0x3]; // 0xf91
            std::int32_t m_iNextCTSpawnPoint; // 0xf94            
            float m_flCTSpawnPointUsedTime; // 0xf98            
            std::int32_t m_iNextTerroristSpawnPoint; // 0xf9c            
            float m_flTerroristSpawnPointUsedTime; // 0xfa0            
            uint8_t _pad0fa4[0x4]; // 0xfa4
            // m_CTSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::SpawnPoint>> m_CTSpawnPoints;
            char m_CTSpawnPoints[0x18]; // 0xfa8            
            // m_TerroristSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::SpawnPoint>> m_TerroristSpawnPoints;
            char m_TerroristSpawnPoints[0x18]; // 0xfc0            
            bool m_bIsUnreservedGameServer; // 0xfd8            
            uint8_t _pad0fd9[0x3]; // 0xfd9
            float m_fAutobalanceDisplayTime; // 0xfdc            
            uint8_t _pad0fe0[0x38]; // 0xfe0
            bool m_bAllowWeaponSwitch; // 0x1018            
            bool m_bRoundTimeWarningTriggered; // 0x1019            
            uint8_t _pad101a[0x2]; // 0x101a
            source2sdk::entity2::GameTime_t m_phaseChangeAnnouncementTime; // 0x101c            
            float m_fNextUpdateTeamClanNamesTime; // 0x1020            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1024            
            float m_fAccumulatedRoundOffDamage; // 0x1028            
            std::int32_t m_nShorthandedBonusLastEvalRound; // 0x102c            
            uint8_t _pad1030[0x48]; // 0x1030
            std::int32_t m_nMatchAbortedEarlyReason; // 0x1078            
            bool m_bHasTriggeredRoundStartMusic; // 0x107c            
            bool m_bSwitchingTeamsAtRoundReset; // 0x107d            
            uint8_t _pad107e[0x1a]; // 0x107e
            source2sdk::server::CCSGameModeRules* m_pGameModeRules; // 0x1098            
            KeyValues3 m_BtGlobalBlackboard; // 0x10a0            
            uint8_t _pad10b0[0x88]; // 0x10b0
            // m_hPlayerResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPlayerResource;
            char m_hPlayerResource[0x4]; // 0x1138            
            uint8_t _pad113c[0x4]; // 0x113c
            source2sdk::server::CRetakeGameRules m_RetakeRules; // 0x1140            
            // m_arrTeamUniqueKillWeaponsMatch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_arrTeamUniqueKillWeaponsMatch[4];
            char m_arrTeamUniqueKillWeaponsMatch[0x60]; // 0x1330            
            bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x1390            
            uint8_t _pad1394[0x24]; // 0x1394
            std::uint8_t m_nMatchEndCount; // 0x13b8            
            uint8_t _pad13b9[0x3]; // 0x13b9
            std::int32_t m_nTTeamIntroVariant; // 0x13bc            
            std::int32_t m_nCTTeamIntroVariant; // 0x13c0            
            bool m_bTeamIntroPeriod; // 0x13c4            
            uint8_t _pad13c5[0x3]; // 0x13c5
            source2sdk::entity2::GameTime_t m_fTeamIntroPeriodEnd; // 0x13c8            
            bool m_bPlayedTeamIntroVO; // 0x13cc            
            uint8_t _pad13cd[0x3]; // 0x13cd
            std::int32_t m_iRoundEndWinnerTeam; // 0x13d0            
            std::int32_t m_eRoundEndReason; // 0x13d4            
            bool m_bRoundEndShowTimerDefend; // 0x13d8            
            uint8_t _pad13d9[0x3]; // 0x13d9
            std::int32_t m_iRoundEndTimerTime; // 0x13dc            
            CUtlString m_sRoundEndFunFactToken; // 0x13e0            
            CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x13e8            
            std::int32_t m_iRoundEndFunFactData1; // 0x13ec            
            std::int32_t m_iRoundEndFunFactData2; // 0x13f0            
            std::int32_t m_iRoundEndFunFactData3; // 0x13f4            
            CUtlString m_sRoundEndMessage; // 0x13f8            
            std::int32_t m_iRoundEndPlayerCount; // 0x1400            
            bool m_bRoundEndNoMusic; // 0x1404            
            uint8_t _pad1405[0x3]; // 0x1405
            std::int32_t m_iRoundEndLegacy; // 0x1408            
            std::uint8_t m_nRoundEndCount; // 0x140c            
            uint8_t _pad140d[0x3]; // 0x140d
            std::int32_t m_iRoundStartRoundNumber; // 0x1410            
            std::uint8_t m_nRoundStartCount; // 0x1414            
            uint8_t _pad1415[0x400b]; // 0x1415
            double m_flLastPerfSampleTime; // 0x5420            
            uint8_t _pad5428[0xc020];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSGameRules) == 0x11448);
    };
};
