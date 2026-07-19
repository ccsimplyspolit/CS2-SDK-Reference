#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
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
        // Size: 0x2b90
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
        // static metadata: MNetworkVarNames "bool m_bRequiresReportCardDismissal"
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
            // metadata: MNetworkEnable
            bool m_bNoDeathEnabled; // 0x126            
            // metadata: MNetworkEnable
            bool m_bFastCooldownsEnabled; // 0x127            
            // metadata: MNetworkEnable
            bool m_bStaminaCooldownsEnabled; // 0x128            
            // metadata: MNetworkEnable
            bool m_bUnlimitedAmmoEnabled; // 0x129            
            // metadata: MNetworkEnable
            bool m_bInfiniteResourcesEnabled; // 0x12a            
            // metadata: MNetworkEnable
            bool m_bFlexSlotsForcedUnlocked; // 0x12b            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelMatchMode m_eMatchMode; // 0x12c            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelGameMode m_eGameMode; // 0x130            
            // metadata: MNetworkEnable
            std::uint32_t m_unSpectatorCount; // 0x134            
            // metadata: MNetworkEnable
            std::uint32_t m_unExpectedPlayerCount; // 0x138            
            // metadata: MNetworkEnable
            std::uint32_t m_nHideoutOwner; // 0x13c            
            // metadata: MNetworkEnable
            // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelTrooperMinimap> m_hTrooperMinimap;
            char m_hTrooperMinimap[0x4]; // 0x140            
            // metadata: MNetworkEnable
            std::int32_t m_iWinningTeam; // 0x144            
            // metadata: MNetworkEnable
            // m_vecTeamKothStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TeamKothState_t> m_vecTeamKothStates;
            char m_vecTeamKothStates[0x128]; // 0x148            
            // metadata: MNetworkEnable
            std::int32_t m_nKothScoringTeam; // 0x270            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothScoring; // 0x274            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothCashInStarted; // 0x278            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothGiveUp; // 0x27c            
            // metadata: MNetworkEnable
            std::int32_t m_nAmberGold; // 0x280            
            // metadata: MNetworkEnable
            std::int32_t m_nSapphireGold; // 0x284            
            // metadata: MNetworkEnable
            VectorWS m_vKothCashInCurrentLocation; // 0x288            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterRebels;
            char m_hCurrentHeroDrafterRebels[0x4]; // 0x294            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterCombine;
            char m_hCurrentHeroDrafterCombine[0x4]; // 0x298            
            bool m_bDontUploadStats; // 0x29c            
            bool m_bIsEndGameTest; // 0x29d            
            uint8_t _pad029e[0x6a]; // 0x29e
            bool m_bSpawnedBots; // 0x308            
            bool m_bGuideBotAssigned; // 0x309            
            uint8_t _pad030a[0x2]; // 0x30a
            source2sdk::client::ParticleIndex_t m_nKothWindowWarning; // 0x30c            
            float m_timeLastSpawnCrates; // 0x310            
            float m_timeNextKothSpawn; // 0x314            
            float m_timeNextKothSpawnWindowTime; // 0x318            
            VectorWS m_vNextKothLocation; // 0x31c            
            SndOpEventGuid_t m_KothWarningSound; // 0x328            
            uint8_t _pad033c[0x4]; // 0x33c
            // m_vKothSpawnLocationDeck has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vKothSpawnLocationDeck;
            char m_vKothSpawnLocationDeck[0x18]; // 0x340            
            bool m_bNotifiedClientsOfNextCrateSpawn; // 0x358            
            bool m_bEarlyCratesSpawned; // 0x359            
            bool m_bIsEarlyCrateGamestate; // 0x35a            
            uint8_t _pad035b[0x26d]; // 0x35b
            source2sdk::entity2::GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x5c8            
            std::int32_t m_nNextHeroDraftPosition; // 0x5cc            
            uint8_t _pad05d0[0x1248]; // 0x5d0
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1818            
            source2sdk::server::CountdownTimer m_CheckCheatersTimer; // 0x1830            
            uint8_t _pad1848[0x130]; // 0x1848
            source2sdk::entity2::GameTime_t m_flTimeScaleStart; // 0x1978            
            source2sdk::entity2::GameTime_t m_flTimeScaleEndTime; // 0x197c            
            source2sdk::entity2::GameTime_t m_flTimeScaleRampInEndTime; // 0x1980            
            source2sdk::entity2::GameTime_t m_flTimeScaleRampOutStartTime; // 0x1984            
            float m_flTimeScaleRampInTime; // 0x1988            
            float m_flTimeScaleDuration; // 0x198c            
            float m_flTimeScaleRampOutTime; // 0x1990            
            float m_flTimeScale; // 0x1994            
            float m_flOriginalTimeScale; // 0x1998            
            bool m_bTimeScaleActive; // 0x199c            
            uint8_t _pad199d[0x3]; // 0x199d
            // metadata: MNetworkEnable
            std::int32_t m_iMidbossKillCount; // 0x19a0            
            // metadata: MNetworkEnable
            std::int32_t m_iAmberRejuvCount; // 0x19a4            
            // metadata: MNetworkEnable
            std::int32_t m_iSapphireRejuvCount; // 0x19a8            
            // metadata: MNetworkEnable
            float m_tNextMidBossSpawnTime; // 0x19ac            
            uint8_t _pad19b0[0xfc0]; // 0x19b0
            // metadata: MNetworkEnable
            bool m_bServerPaused; // 0x2970            
            uint8_t _pad2971[0x3]; // 0x2971
            // metadata: MNetworkEnable
            std::int32_t m_iPauseTeam; // 0x2974            
            // metadata: MNetworkEnable
            std::int32_t m_nMatchClockUpdateTick; // 0x2978            
            // metadata: MNetworkEnable
            float m_flMatchClockAtLastUpdate; // 0x297c            
            double m_flPauseTime; // 0x2980            
            CPlayerSlot m_pausingPlayerId; // 0x2988            
            CPlayerSlot m_unpausingPlayerId; // 0x298c            
            float m_fPauseRawTime; // 0x2990            
            float m_fPauseCurTime; // 0x2994            
            // metadata: MNetworkEnable
            float m_fUnpauseRawTime; // 0x2998            
            float m_fUnpauseCurTime; // 0x299c            
            uint8_t _pad29a0[0x50]; // 0x29a0
            // metadata: MNetworkEnable
            bool m_bRequiresReportCardDismissal; // 0x29f0            
            uint8_t _pad29f1[0x3]; // 0x29f1
            source2sdk::entity2::GameTime_t m_flPreGameWaitEndTime; // 0x29f4            
            source2sdk::entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x29f8            
            std::int32_t m_nLastPreGameCount; // 0x29fc            
            // metadata: MNetworkEnable
            std::int32_t m_eGGTeam; // 0x2a00            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x2a04            
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID; // 0x2a08            
            // metadata: MNetworkEnable
            CUtlString m_sGameplayExperiment; // 0x2a10            
            // metadata: MNetworkEnable
            std::uint32_t m_ExperimentTokenHashCode; // 0x2a18            
            std::int32_t m_nPlayerDeathEventID; // 0x2a1c            
            std::int32_t m_nReplayChangedEvent; // 0x2a20            
            std::int32_t m_nGameOverEvent; // 0x2a24            
            uint8_t _pad2a28[0x20]; // 0x2a28
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroDiedTime; // 0x2a48            
            uint8_t _pad2a4c[0x4]; // 0x2a4c
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelPlayOfTheGame* m_pPlayOfTheGame; // 0x2a50            
            // metadata: MNetworkEnable
            source2sdk::server::CStreetBrawlController m_tStreetBrawl; // 0x2a58            
            uint8_t _pad2b88[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelGameRules) == 0x2b90);
    };
};
