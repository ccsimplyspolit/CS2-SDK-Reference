#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CStreetBrawlController.hpp"
#include "source2sdk/client/C_TeamplayRules.hpp"
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/client/TeamKothState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelPlayOfTheGame;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCitadelTrooperMinimap;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0xa070
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
        class C_CitadelGameRules : public source2sdk::client::C_TeamplayRules
        {
        public:
            uint8_t _pad0040[0x18]; // 0x40
            // metadata: MNetworkEnable
            bool m_bFreezePeriod; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLevelStartTime; // 0x5c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0x60            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStateStartTime; // 0x64            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStateEndTime; // 0x68            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoundStartTime; // 0x6c            
            float m_flPlayOfTheGameStateEndTime; // 0x70            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameStateChanged"
            source2sdk::client::EGameState m_eGameState; // 0x74            
            // metadata: MNetworkEnable
            // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerAmber;
            char m_hTowerAmber[0x4]; // 0x78            
            // metadata: MNetworkEnable
            // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerSapphire;
            char m_hTowerSapphire[0x4]; // 0x7c            
            // metadata: MNetworkEnable
            bool m_bEnemyInAmberBase; // 0x80            
            // metadata: MNetworkEnable
            bool m_bEnemyInSapphireBase; // 0x81            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInAmberBase; // 0x82            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInSapphireBase; // 0x83            
            // metadata: MNetworkEnable
            Vector m_vMinimapMins; // 0x84            
            // metadata: MNetworkEnable
            Vector m_vMinimapMaxs; // 0x90            
            // metadata: MNetworkEnable
            bool m_bMatchSafeToAbandon; // 0x9c            
            // metadata: MNetworkEnable
            bool m_bMatchNotScored; // 0x9d            
            // metadata: MNetworkEnable
            bool m_bNoDeathEnabled; // 0x9e            
            // metadata: MNetworkEnable
            bool m_bFastCooldownsEnabled; // 0x9f            
            // metadata: MNetworkEnable
            bool m_bStaminaCooldownsEnabled; // 0xa0            
            // metadata: MNetworkEnable
            bool m_bUnlimitedAmmoEnabled; // 0xa1            
            // metadata: MNetworkEnable
            bool m_bInfiniteResourcesEnabled; // 0xa2            
            // metadata: MNetworkEnable
            bool m_bFlexSlotsForcedUnlocked; // 0xa3            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelMatchMode m_eMatchMode; // 0xa4            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelGameMode m_eGameMode; // 0xa8            
            // metadata: MNetworkEnable
            std::uint32_t m_unSpectatorCount; // 0xac            
            // metadata: MNetworkEnable
            std::uint32_t m_unExpectedPlayerCount; // 0xb0            
            // metadata: MNetworkEnable
            std::uint32_t m_nHideoutOwner; // 0xb4            
            // metadata: MNetworkEnable
            // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadelTrooperMinimap> m_hTrooperMinimap;
            char m_hTrooperMinimap[0x4]; // 0xb8            
            // metadata: MNetworkEnable
            std::int32_t m_iWinningTeam; // 0xbc            
            // metadata: MNetworkEnable
            // m_vecTeamKothStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::TeamKothState_t> m_vecTeamKothStates;
            char m_vecTeamKothStates[0x108]; // 0xc0            
            // metadata: MNetworkEnable
            std::int32_t m_nKothScoringTeam; // 0x1c8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothScoring; // 0x1cc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothCashInStarted; // 0x1d0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeKothGiveUp; // 0x1d4            
            // metadata: MNetworkEnable
            std::int32_t m_nAmberGold; // 0x1d8            
            // metadata: MNetworkEnable
            std::int32_t m_nSapphireGold; // 0x1dc            
            // metadata: MNetworkEnable
            VectorWS m_vKothCashInCurrentLocation; // 0x1e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "playerDraftingChanged"
            // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentHeroDrafterRebels;
            char m_hCurrentHeroDrafterRebels[0x4]; // 0x1ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "playerDraftingChanged"
            // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentHeroDrafterCombine;
            char m_hCurrentHeroDrafterCombine[0x4]; // 0x1f0            
            bool m_bDontUploadStats; // 0x1f4            
            uint8_t _pad01f5[0x3]; // 0x1f5
            // metadata: MNetworkEnable
            std::int32_t m_iMidbossKillCount; // 0x1f8            
            // metadata: MNetworkEnable
            std::int32_t m_iAmberRejuvCount; // 0x1fc            
            // metadata: MNetworkEnable
            std::int32_t m_iSapphireRejuvCount; // 0x200            
            // metadata: MNetworkEnable
            float m_tNextMidBossSpawnTime; // 0x204            
            uint8_t _pad0208[0x9d58]; // 0x208
            // metadata: MNetworkEnable
            bool m_bServerPaused; // 0x9f60            
            uint8_t _pad9f61[0x3]; // 0x9f61
            // metadata: MNetworkEnable
            std::int32_t m_iPauseTeam; // 0x9f64            
            // metadata: MNetworkEnable
            std::int32_t m_nMatchClockUpdateTick; // 0x9f68            
            // metadata: MNetworkEnable
            float m_flMatchClockAtLastUpdate; // 0x9f6c            
            double m_flPauseTime; // 0x9f70            
            CPlayerSlot m_pausingPlayerId; // 0x9f78            
            CPlayerSlot m_unpausingPlayerId; // 0x9f7c            
            float m_fPauseRawTime; // 0x9f80            
            float m_fPauseCurTime; // 0x9f84            
            // metadata: MNetworkEnable
            float m_fUnpauseRawTime; // 0x9f88            
            float m_fUnpauseCurTime; // 0x9f8c            
            uint8_t _pad9f90[0x50]; // 0x9f90
            // metadata: MNetworkEnable
            bool m_bRequiresReportCardDismissal; // 0x9fe0            
            uint8_t _pad9fe1[0x3]; // 0x9fe1
            source2sdk::entity2::GameTime_t m_flPreGameWaitEndTime; // 0x9fe4            
            source2sdk::entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x9fe8            
            std::int32_t m_nLastPreGameCount; // 0x9fec            
            // metadata: MNetworkEnable
            std::int32_t m_eGGTeam; // 0x9ff0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x9ff4            
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID; // 0x9ff8            
            // metadata: MNetworkEnable
            CUtlString m_sGameplayExperiment; // 0xa000            
            // metadata: MNetworkEnable
            std::uint32_t m_ExperimentTokenHashCode; // 0xa008            
            std::int32_t m_nPlayerDeathEventID; // 0xa00c            
            std::int32_t m_nReplayChangedEvent; // 0xa010            
            std::int32_t m_nGameOverEvent; // 0xa014            
            uint8_t _pada018[0x20]; // 0xa018
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroDiedTime; // 0xa038            
            uint8_t _pada03c[0x4]; // 0xa03c
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelPlayOfTheGame* m_pPlayOfTheGame; // 0xa040            
            // metadata: MNetworkEnable
            source2sdk::client::CStreetBrawlController m_tStreetBrawl; // 0xa048            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelGameRules) == 0xa070);
    };
};
