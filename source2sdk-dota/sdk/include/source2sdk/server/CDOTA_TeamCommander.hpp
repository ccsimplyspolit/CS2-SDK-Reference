#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTATeam_t.hpp"
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Standard-layout class: true
        // Size: 0x1030
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_TeamCommander
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::entity2::GameTick_t m_nLastUnitsCollectTick; // 0x10            
            uint8_t _pad0014[0x2b4]; // 0x14
            source2sdk::server::CountdownTimer m_LaneFrontUpdate; // 0x2c8            
            source2sdk::server::CountdownTimer m_LastKnownEnemyLocationTimer; // 0x2e0            
            std::uint64_t m_ulBotScriptUGC; // 0x2f8            
            std::uint32_t m_rtBotScriptUpdated; // 0x300            
            uint8_t _pad0304[0x4]; // 0x304
            source2sdk::server::CountdownTimer m_AvoidanceGridTimer; // 0x308            
            source2sdk::server::CountdownTimer m_EnemyVisibilityGridTimer; // 0x320            
            source2sdk::server::CountdownTimer m_LaneStatusTimer; // 0x338            
            source2sdk::server::CountdownTimer m_ChatThrottleTimer; // 0x350            
            source2sdk::client::DOTATeam_t m_eTeam; // 0x368            
            uint8_t _pad036c[0x6c]; // 0x36c
            bool m_bLateGame; // 0x3d8            
            uint8_t _pad03d9[0x3]; // 0x3d9
            float m_LaneLengths[4]; // 0x3dc            
            float m_LaneFrontCreepsAmounts[2][4]; // 0x3ec            
            float m_LaneFrontTowersAmounts[2][4]; // 0x40c            
            uint8_t _pad042c[0x4]; // 0x42c
            source2sdk::server::CountdownTimer m_LaneReassignTimer; // 0x430            
            source2sdk::server::CountdownTimer m_LaneMigrationTimer; // 0x448            
            // m_AvoidanceGrid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_AvoidanceGrid;
            char m_AvoidanceGrid[0x18]; // 0x460            
            uint8_t _pad0478[0x28]; // 0x478
            // m_hRoamingUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoamingUnit;
            char m_hRoamingUnit[0x4]; // 0x4a0            
            source2sdk::client::DOTA_LANE m_RoamTargetLane; // 0x4a4            
            uint8_t _pad04a8[0x30]; // 0x4a8
            // m_Buildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_Buildings[4][8];
            char m_Buildings[0x80]; // 0x4d8            
            float m_fBuildingFortTimings[4][8]; // 0x558            
            // m_LaneNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_LaneNodes[4][9];
            char m_LaneNodes[0x90]; // 0x5d8            
            float m_fPushLaneDesire[4]; // 0x668            
            float m_fPushLaneRawDesire[4]; // 0x678            
            float m_fPushLaneConvenienceDesire[4]; // 0x688            
            float m_fDefendLaneDesire[4]; // 0x698            
            float m_fDefendLaneUrgencyDesire[4]; // 0x6a8            
            float m_fDefendLanePowerDesire[4]; // 0x6b8            
            uint8_t _pad06c8[0x20]; // 0x6c8
            float m_fFarmLaneDesire[4]; // 0x6e8            
            std::int32_t m_iLastSeenRoshanHealth; // 0x6f8            
            float m_fRoshanDesire; // 0x6fc            
            bool m_bWisdomShrineBelievedToBeReady[2]; // 0x700            
            uint8_t _pad0702[0x6]; // 0x702
            // m_hProposedPushUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedPushUnits[4];
            char m_hProposedPushUnits[0x60]; // 0x708            
            // m_hProposedDefendUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedDefendUnits[4];
            char m_hProposedDefendUnits[0x60]; // 0x768            
            // m_hProposedRoamUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedRoamUnits;
            char m_hProposedRoamUnits[0x18]; // 0x7c8            
            // m_hProposedRoshanUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedRoshanUnits;
            char m_hProposedRoshanUnits[0x18]; // 0x7e0            
            float m_fRoamDesire; // 0x7f8            
            float m_fRoamOffensivePowerFactor; // 0x7fc            
            float m_fRoamDistanceFactor; // 0x800            
            float m_fRoamPositionFactor; // 0x804            
            // m_hRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoamTarget;
            char m_hRoamTarget[0x4]; // 0x808            
            VectorWS m_vRoamTargetLoc; // 0x80c            
            float m_flTeamfightTotalPowerRatio; // 0x818            
            float m_flTeamfightNearbyPowerRatio; // 0x81c            
            uint8_t _pad0820[0x8]; // 0x820
            // m_hProposedTeamfightUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hProposedTeamfightUnits;
            char m_hProposedTeamfightUnits[0x18]; // 0x828            
            // m_hTeamfightTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamfightTarget;
            char m_hTeamfightTarget[0x4]; // 0x840            
            VectorWS m_vTeamfightTargetLoc; // 0x844            
            source2sdk::client::DOTA_LANE m_eTeamDefenseLane; // 0x850            
            source2sdk::entity2::GameTime_t m_flTeamDefenseStarted; // 0x854            
            source2sdk::server::CountdownTimer m_WardCalculationTimer; // 0x858            
            uint8_t _pad0870[0x18]; // 0x870
            float m_fHeroSelectionTimes[24]; // 0x888            
            uint8_t _pad08e8[0x18]; // 0x8e8
            VectorWS m_vBaseLocation; // 0x900            
            VectorWS m_vPregameGatherLocation; // 0x90c            
            // m_AllUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllUnits;
            char m_AllUnits[0x18]; // 0x918            
            // m_AllAlliedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedUnits;
            char m_AllAlliedUnits[0x18]; // 0x930            
            // m_AllAlliedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedHeroes;
            char m_AllAlliedHeroes[0x18]; // 0x948            
            // m_AllAlliedCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedCreeps;
            char m_AllAlliedCreeps[0x18]; // 0x960            
            // m_AllAlliedWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedWards;
            char m_AllAlliedWards[0x18]; // 0x978            
            // m_AllAlliedBuildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedBuildings;
            char m_AllAlliedBuildings[0x18]; // 0x990            
            // m_AllAlliedOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllAlliedOther;
            char m_AllAlliedOther[0x18]; // 0x9a8            
            // m_AllEnemyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyUnits;
            char m_AllEnemyUnits[0x18]; // 0x9c0            
            // m_AllEnemyHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyHeroes;
            char m_AllEnemyHeroes[0x18]; // 0x9d8            
            // m_AllEnemyCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyCreeps;
            char m_AllEnemyCreeps[0x18]; // 0x9f0            
            // m_AllEnemyWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyWards;
            char m_AllEnemyWards[0x18]; // 0xa08            
            // m_AllEnemyBuildings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyBuildings;
            char m_AllEnemyBuildings[0x18]; // 0xa20            
            // m_AllEnemyOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllEnemyOther;
            char m_AllEnemyOther[0x18]; // 0xa38            
            // m_AllNeutralCreeps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllNeutralCreeps;
            char m_AllNeutralCreeps[0x18]; // 0xa50            
            // m_ThinkerUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_ThinkerUnits;
            char m_ThinkerUnits[0x18]; // 0xa68            
            // m_AllUnitsIncludingDead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AllUnitsIncludingDead;
            char m_AllUnitsIncludingDead[0x18]; // 0xa80            
            uint8_t _pad0a98[0x30]; // 0xa98
            // m_hCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hCouriers;
            char m_hCouriers[0x18]; // 0xac8            
            // m_hDisabledBots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hDisabledBots;
            char m_hDisabledBots[0x18]; // 0xae0            
            uint8_t _pad0af8[0x370]; // 0xaf8
            source2sdk::entity2::GameTime_t m_fGoodLuckFlavorTextTime; // 0xe68            
            source2sdk::entity2::GameTime_t m_fTeamfightFlavorTextTime; // 0xe6c            
            source2sdk::entity2::GameTime_t m_fCongratulateHeroFlavorTextTime; // 0xe70            
            source2sdk::entity2::GameTime_t m_fLastAliveHeroHistorySnapshotTime; // 0xe74            
            std::int32_t m_iAliveHeroHistoryIndex; // 0xe78            
            std::int32_t m_iAliveHeroHistory[5]; // 0xe7c            
            source2sdk::entity2::GameTime_t m_fPlayerDraftChooseTime; // 0xe90            
            uint8_t _pad0e94[0xc]; // 0xe94
            CUtlString m_sScriptDirectory; // 0xea0            
            HSCRIPT m_hHeroSelectionScriptScope; // 0xea8            
            HSCRIPT m_hTeamLevelDesiresScriptScope; // 0xeb0            
            uint8_t _pad0eb8[0x68]; // 0xeb8
            source2sdk::entity2::GameTick_t m_nScriptPathAvoidanceUpdateTick; // 0xf20            
            float m_fExecutionTime[30]; // 0xf24            
            std::int32_t m_iCurExecutionTime; // 0xf9c            
            uint8_t _pad0fa0[0x90];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_nLastUnitsCollectTick) == 0x10);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneFrontUpdate) == 0x2c8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LastKnownEnemyLocationTimer) == 0x2e0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_ulBotScriptUGC) == 0x2f8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_rtBotScriptUpdated) == 0x300);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AvoidanceGridTimer) == 0x308);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_EnemyVisibilityGridTimer) == 0x320);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneStatusTimer) == 0x338);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_ChatThrottleTimer) == 0x350);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_eTeam) == 0x368);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_bLateGame) == 0x3d8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneLengths) == 0x3dc);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneFrontCreepsAmounts) == 0x3ec);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneFrontTowersAmounts) == 0x40c);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneReassignTimer) == 0x430);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneMigrationTimer) == 0x448);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AvoidanceGrid) == 0x460);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hRoamingUnit) == 0x4a0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_RoamTargetLane) == 0x4a4);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_Buildings) == 0x4d8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fBuildingFortTimings) == 0x558);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_LaneNodes) == 0x5d8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPushLaneDesire) == 0x668);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPushLaneRawDesire) == 0x678);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPushLaneConvenienceDesire) == 0x688);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fDefendLaneDesire) == 0x698);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fDefendLaneUrgencyDesire) == 0x6a8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fDefendLanePowerDesire) == 0x6b8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fFarmLaneDesire) == 0x6e8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iLastSeenRoshanHealth) == 0x6f8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoshanDesire) == 0x6fc);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_bWisdomShrineBelievedToBeReady) == 0x700);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedPushUnits) == 0x708);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedDefendUnits) == 0x768);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedRoamUnits) == 0x7c8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedRoshanUnits) == 0x7e0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamDesire) == 0x7f8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamOffensivePowerFactor) == 0x7fc);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamDistanceFactor) == 0x800);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fRoamPositionFactor) == 0x804);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hRoamTarget) == 0x808);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_vRoamTargetLoc) == 0x80c);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_flTeamfightTotalPowerRatio) == 0x818);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_flTeamfightNearbyPowerRatio) == 0x81c);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hProposedTeamfightUnits) == 0x828);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hTeamfightTarget) == 0x840);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_vTeamfightTargetLoc) == 0x844);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_eTeamDefenseLane) == 0x850);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_flTeamDefenseStarted) == 0x854);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_WardCalculationTimer) == 0x858);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fHeroSelectionTimes) == 0x888);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_vBaseLocation) == 0x900);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_vPregameGatherLocation) == 0x90c);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllUnits) == 0x918);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedUnits) == 0x930);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedHeroes) == 0x948);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedCreeps) == 0x960);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedWards) == 0x978);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedBuildings) == 0x990);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllAlliedOther) == 0x9a8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyUnits) == 0x9c0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyHeroes) == 0x9d8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyCreeps) == 0x9f0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyWards) == 0xa08);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyBuildings) == 0xa20);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllEnemyOther) == 0xa38);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllNeutralCreeps) == 0xa50);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_ThinkerUnits) == 0xa68);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_AllUnitsIncludingDead) == 0xa80);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hCouriers) == 0xac8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hDisabledBots) == 0xae0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fGoodLuckFlavorTextTime) == 0xe68);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fTeamfightFlavorTextTime) == 0xe6c);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fCongratulateHeroFlavorTextTime) == 0xe70);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fLastAliveHeroHistorySnapshotTime) == 0xe74);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iAliveHeroHistoryIndex) == 0xe78);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iAliveHeroHistory) == 0xe7c);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fPlayerDraftChooseTime) == 0xe90);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_sScriptDirectory) == 0xea0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hHeroSelectionScriptScope) == 0xea8);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_hTeamLevelDesiresScriptScope) == 0xeb0);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_nScriptPathAvoidanceUpdateTick) == 0xf20);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_fExecutionTime) == 0xf24);
        static_assert(offsetof(source2sdk::server::CDOTA_TeamCommander, m_iCurExecutionTime) == 0xf9c);
        
        static_assert(sizeof(source2sdk::server::CDOTA_TeamCommander) == 0x1030);
    };
};
