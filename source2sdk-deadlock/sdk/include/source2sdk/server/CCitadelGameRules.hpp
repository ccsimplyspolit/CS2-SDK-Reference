#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CStreetBrawlController.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/TeamKothState_t.hpp"
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
        struct CCitadelPlayOfTheGame;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelTrooperMinimap;
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
        // Size: 0x2ba8
        // Has VTable
        //
        // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
        // static metadata: MNetworkVarNames "GameTime_t m_fLevelStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStateStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStateEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRoundStartTime"
        // static metadata: MNetworkVarNames "EGameState m_eGameState"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerAmber"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerSapphire"
        // static metadata: MNetworkVarNames "bool m_bEnemyInAmberBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyInSapphireBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyPlayersInAmberBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyPlayersInSapphireBase"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
        // static metadata: MNetworkVarNames "bool m_bMatchSafeToAbandon"
        // static metadata: MNetworkVarNames "bool m_bMatchNotScored"
        // static metadata: MNetworkVarNames "GameTime_t m_tAbandonTriggerEarlyTime"
        // static metadata: MNetworkVarNames "bool m_bAbandonTriggerSapphire"
        // static metadata: MNetworkVarNames "bool m_bAbandonTriggerAmber"
        // static metadata: MNetworkVarNames "bool m_bNoDeathEnabled"
        // static metadata: MNetworkVarNames "bool m_bFastCooldownsEnabled"
        // static metadata: MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
        // static metadata: MNetworkVarNames "bool m_bUnlimitedAmmoEnabled"
        // static metadata: MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
        // static metadata: MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
        // static metadata: MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
        // static metadata: MNetworkVarNames "ECitadelGameMode m_eGameMode"
        // static metadata: MNetworkVarNames "uint32 m_unSpectatorCount"
        // static metadata: MNetworkVarNames "uint32 m_unExpectedPlayerCount"
        // static metadata: MNetworkVarNames "AccountID_t m_nHideoutOwner"
        // static metadata: MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
        // static metadata: MNetworkVarNames "CitadelTeam_t m_iWinningTeam"
        // static metadata: MNetworkVarNames "HeroID_t m_vecBannedHeroes"
        // static metadata: MNetworkVarNames "TeamKothState_t m_vecTeamKothStates"
        // static metadata: MNetworkVarNames "CitadelTeam_t m_nKothScoringTeam"
        // static metadata: MNetworkVarNames "GameTime_t m_timeKothScoring"
        // static metadata: MNetworkVarNames "GameTime_t m_timeKothCashInStarted"
        // static metadata: MNetworkVarNames "GameTime_t m_timeKothGiveUp"
        // static metadata: MNetworkVarNames "int m_nAmberGold"
        // static metadata: MNetworkVarNames "int m_nSapphireGold"
        // static metadata: MNetworkVarNames "VectorWS m_vKothCashInCurrentLocation"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
        // static metadata: MNetworkVarNames "int m_iMidbossKillCount"
        // static metadata: MNetworkVarNames "int m_iAmberRejuvCount"
        // static metadata: MNetworkVarNames "int m_iSapphireRejuvCount"
        // static metadata: MNetworkVarNames "float m_tNextMidBossSpawnTime"
        // static metadata: MNetworkVarNames "bool m_bServerPaused"
        // static metadata: MNetworkVarNames "int m_iPauseTeam"
        // static metadata: MNetworkVarNames "int m_nMatchClockUpdateTick"
        // static metadata: MNetworkVarNames "float m_flMatchClockAtLastUpdate"
        // static metadata: MNetworkVarNames "float m_fUnpauseRawTime"
        // static metadata: MNetworkVarNames "int m_eGGTeam"
        // static metadata: MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
        // static metadata: MNetworkVarNames "MatchID_t m_unMatchID"
        // static metadata: MNetworkVarNames "CUtlString m_sGameplayExperiment"
        // static metadata: MNetworkVarNames "uint32 m_ExperimentTokenHashCode"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeroDiedTime"
        // static metadata: MNetworkVarNames "CCitadelPlayOfTheGame* m_pPlayOfTheGame"
        // static metadata: MNetworkVarNames "CStreetBrawlController m_tStreetBrawl"
        #pragma pack(push, 1)
        class CCitadelGameRules : public source2sdk::server::CTeamplayRules
        {
        public:
            uint8_t _pad00d0[0x10]; // 0xd0
            // metadata: MNetworkEnable
            bool m_bFreezePeriod; // 0xe0
            uint8_t _pad00e1[0x3]; // 0xe1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLevelStartTime; // 0xe4
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0xe8
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStateStartTime; // 0xec
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStateEndTime; // 0xf0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoundStartTime; // 0xf4
            float m_flPlayOfTheGameStateEndTime; // 0xf8
            // metadata: MNetworkEnable
            source2sdk::client::EGameState m_eGameState; // 0xfc
            // metadata: MNetworkEnable
            // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTowerAmber;
            char m_hTowerAmber[0x4]; // 0x100
            // metadata: MNetworkEnable
            // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTowerSapphire;
            char m_hTowerSapphire[0x4]; // 0x104
            // metadata: MNetworkEnable
            bool m_bEnemyInAmberBase; // 0x108
            // metadata: MNetworkEnable
            bool m_bEnemyInSapphireBase; // 0x109
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInAmberBase; // 0x10a
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInSapphireBase; // 0x10b
            // metadata: MNetworkEnable
            Vector m_vMinimapMins; // 0x10c
            // metadata: MNetworkEnable
            Vector m_vMinimapMaxs; // 0x118
            // metadata: MNetworkEnable
            bool m_bMatchSafeToAbandon; // 0x124
            // metadata: MNetworkEnable
            bool m_bMatchNotScored; // 0x125
            uint8_t _pad0126[0x2]; // 0x126
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tAbandonTriggerEarlyTime; // 0x128
            // metadata: MNetworkEnable
            bool m_bAbandonTriggerSapphire; // 0x12c
            // metadata: MNetworkEnable
            bool m_bAbandonTriggerAmber; // 0x12d
            // metadata: MNetworkEnable
            bool m_bNoDeathEnabled; // 0x12e
            // metadata: MNetworkEnable
            bool m_bFastCooldownsEnabled; // 0x12f
            // metadata: MNetworkEnable
            bool m_bStaminaCooldownsEnabled; // 0x130
            // metadata: MNetworkEnable
            bool m_bUnlimitedAmmoEnabled; // 0x131
            // metadata: MNetworkEnable
            bool m_bInfiniteResourcesEnabled; // 0x132
            // metadata: MNetworkEnable
            bool m_bFlexSlotsForcedUnlocked; // 0x133
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelMatchMode m_eMatchMode; // 0x134
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelGameMode m_eGameMode; // 0x138
            // metadata: MNetworkEnable
            std::uint32_t m_unSpectatorCount; // 0x13c
            // metadata: MNetworkEnable
            std::uint32_t m_unExpectedPlayerCount; // 0x140
            // metadata: MNetworkEnable
            std::uint32_t m_nHideoutOwner; // 0x144
            // metadata: MNetworkEnable
            // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelTrooperMinimap> m_hTrooperMinimap;
            char m_hTrooperMinimap[0x4]; // 0x148
            // metadata: MNetworkEnable
            std::int32_t m_iWinningTeam; // 0x14c
            // metadata: MNetworkEnable
            // m_vecBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecBannedHeroes;
            char m_vecBannedHeroes[0x18]; // 0x150
            // metadata: MNetworkEnable
            // m_vecTeamKothStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TeamKothState_t> m_vecTeamKothStates;
            char m_vecTeamKothStates[0x128]; // 0x168
            // metadata: MNetworkEnable
            std::int32_t m_nKothScoringTeam; // 0x290
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothScoring; // 0x294
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothCashInStarted; // 0x298
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothGiveUp; // 0x29c
            // metadata: MNetworkEnable
            std::int32_t m_nAmberGold; // 0x2a0
            // metadata: MNetworkEnable
            std::int32_t m_nSapphireGold; // 0x2a4
            // metadata: MNetworkEnable
            VectorWS m_vKothCashInCurrentLocation; // 0x2a8
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterRebels;
            char m_hCurrentHeroDrafterRebels[0x4]; // 0x2b4
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterCombine;
            char m_hCurrentHeroDrafterCombine[0x4]; // 0x2b8
            bool m_bDontUploadStats; // 0x2bc
            bool m_bIsEndGameTest; // 0x2bd
            uint8_t _pad02be[0x6a]; // 0x2be
            bool m_bSpawnedBots; // 0x328
            bool m_bGuideBotAssigned; // 0x329
            uint8_t _pad032a[0x2]; // 0x32a
            source2sdk::client::ParticleIndex_t m_nKothWindowWarning; // 0x32c
            float m_timeLastSpawnCrates; // 0x330
            float m_timeNextKothSpawn; // 0x334
            float m_timeNextKothSpawnWindowTime; // 0x338
            VectorWS m_vNextKothLocation; // 0x33c
            SndOpEventGuid_t m_KothWarningSound; // 0x348
            uint8_t _pad035c[0x4]; // 0x35c
            // m_vKothSpawnLocationDeck has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vKothSpawnLocationDeck;
            char m_vKothSpawnLocationDeck[0x18]; // 0x360
            bool m_bNotifiedClientsOfNextCrateSpawn; // 0x378
            bool m_bEarlyCratesSpawned; // 0x379
            bool m_bIsEarlyCrateGamestate; // 0x37a
            uint8_t _pad037b[0x26d]; // 0x37b
            source2sdk::entity2::GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x5e8
            std::int32_t m_nNextHeroDraftPosition; // 0x5ec
            uint8_t _pad05f0[0x1248]; // 0x5f0
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1838
            source2sdk::server::CountdownTimer m_CheckCheatersTimer; // 0x1850
            uint8_t _pad1868[0x130]; // 0x1868
            source2sdk::entity2::GameTime_t m_flTimeScaleStart; // 0x1998
            source2sdk::entity2::GameTime_t m_flTimeScaleEndTime; // 0x199c
            source2sdk::entity2::GameTime_t m_flTimeScaleRampInEndTime; // 0x19a0
            source2sdk::entity2::GameTime_t m_flTimeScaleRampOutStartTime; // 0x19a4
            float m_flTimeScaleRampInTime; // 0x19a8
            float m_flTimeScaleDuration; // 0x19ac
            float m_flTimeScaleRampOutTime; // 0x19b0
            float m_flTimeScale; // 0x19b4
            float m_flOriginalTimeScale; // 0x19b8
            bool m_bTimeScaleActive; // 0x19bc
            uint8_t _pad19bd[0x3]; // 0x19bd
            // metadata: MNetworkEnable
            std::int32_t m_iMidbossKillCount; // 0x19c0
            // metadata: MNetworkEnable
            std::int32_t m_iAmberRejuvCount; // 0x19c4
            // metadata: MNetworkEnable
            std::int32_t m_iSapphireRejuvCount; // 0x19c8
            // metadata: MNetworkEnable
            float m_tNextMidBossSpawnTime; // 0x19cc
            uint8_t _pad19d0[0xfc0]; // 0x19d0
            // metadata: MNetworkEnable
            bool m_bServerPaused; // 0x2990
            uint8_t _pad2991[0x3]; // 0x2991
            // metadata: MNetworkEnable
            std::int32_t m_iPauseTeam; // 0x2994
            // metadata: MNetworkEnable
            std::int32_t m_nMatchClockUpdateTick; // 0x2998
            // metadata: MNetworkEnable
            float m_flMatchClockAtLastUpdate; // 0x299c
            double m_flPauseTime; // 0x29a0
            CPlayerSlot m_pausingPlayerId; // 0x29a8
            CPlayerSlot m_unpausingPlayerId; // 0x29ac
            float m_fPauseRawTime; // 0x29b0
            float m_fPauseCurTime; // 0x29b4
            // metadata: MNetworkEnable
            float m_fUnpauseRawTime; // 0x29b8
            float m_fUnpauseCurTime; // 0x29bc
            uint8_t _pad29c0[0x50]; // 0x29c0
            std::int32_t m_nLastPreGameCount; // 0x2a10
            // metadata: MNetworkEnable
            std::int32_t m_eGGTeam; // 0x2a14
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x2a18
            uint8_t _pad2a1c[0x4]; // 0x2a1c
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID; // 0x2a20
            // metadata: MNetworkEnable
            CUtlString m_sGameplayExperiment; // 0x2a28
            // metadata: MNetworkEnable
            std::uint32_t m_ExperimentTokenHashCode; // 0x2a30
            std::int32_t m_nPlayerDeathEventID; // 0x2a34
            std::int32_t m_nReplayChangedEvent; // 0x2a38
            std::int32_t m_nGameOverEvent; // 0x2a3c
            uint8_t _pad2a40[0x20]; // 0x2a40
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroDiedTime; // 0x2a60
            uint8_t _pad2a64[0x4]; // 0x2a64
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelPlayOfTheGame* m_pPlayOfTheGame; // 0x2a68
            // metadata: MNetworkEnable
            source2sdk::server::CStreetBrawlController m_tStreetBrawl; // 0x2a70
            uint8_t _pad2ba0[0x8];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CCitadelGameRules because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CCitadelGameRules) == 0x2ba8);
    };
};
