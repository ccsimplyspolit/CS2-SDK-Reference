#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TeamCommander;
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
        // Size: 0x88e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Bot
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::int32_t m_iLifesteal; // 0x10            
            std::int32_t m_iBlock; // 0x14            
            bool m_bForceIdle; // 0x18            
            bool m_bForceCreepAttack; // 0x19            
            uint8_t _pad001a[0x2]; // 0x1a
            float m_fExecutionTime[30]; // 0x1c            
            std::int32_t m_iCurExecutionTime; // 0x94            
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x98            
            // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnit;
            char m_hUnit[0x4]; // 0x9c            
            source2sdk::server::CDOTA_TeamCommander* m_pTeamCommander; // 0xa0            
            std::int32_t m_iUnitType; // 0xa8            
            float m_fAggressionFactor; // 0xac            
            bool m_bBotControlled; // 0xb0            
            bool m_bLiquidate; // 0xb1            
            bool m_bDoNotPurchase; // 0xb2            
            uint8_t _pad00b3[0x1]; // 0xb3
            std::int32_t m_iDifficulty; // 0xb4            
            bool m_bIsFullScriptTakeover; // 0xb8            
            bool m_bIsTrialModeEnabled; // 0xb9            
            bool m_bIsTaskLogicEnabled; // 0xba            
            uint8_t _pad00bb[0x1]; // 0xbb
            source2sdk::client::DOTA_LANE m_CurrentLane; // 0xbc            
            source2sdk::client::DOTA_LANE m_MostRecentLane; // 0xc0            
            source2sdk::client::DOTA_LANE m_AssignedLane; // 0xc4            
            source2sdk::client::DOTA_LANE m_TargetLane; // 0xc8            
            source2sdk::client::DOTA_LANE m_ForcedLane; // 0xcc            
            float m_fCurrentLaneAmount; // 0xd0            
            bool m_bIsNPXCarry; // 0xd4            
            uint8_t _pad00d5[0x7]; // 0xd5
            bool m_bIsInLaningPhase; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            float m_fEstimatedUnitDamage; // 0xe0            
            float m_fEstimatedMaxUnitDamage; // 0xe4            
            float m_fEstimatedBuildingDamage; // 0xe8            
            bool m_bWantsToCast; // 0xec            
            uint8_t _pad00ed[0x3]; // 0xed
            std::int32_t m_iWantsToCastFrame; // 0xf0            
            bool m_bWantsToAttack; // 0xf4            
            uint8_t _pad00f5[0x3]; // 0xf5
            std::int32_t m_iWantsToAttackFrame; // 0xf8            
            uint8_t _pad00fc[0x4]; // 0xfc
            source2sdk::server::CountdownTimer m_UpdateCurrentLaneTimer; // 0x100            
            source2sdk::server::CountdownTimer m_UpdateModeTimer; // 0x118            
            source2sdk::server::CountdownTimer m_ModeThinkTimer; // 0x130            
            source2sdk::server::CountdownTimer m_UpdateTaskTimer; // 0x148            
            source2sdk::server::CountdownTimer m_InteralRatingsTimer; // 0x160            
            source2sdk::server::CountdownTimer m_BuybackDelayTimer; // 0x178            
            source2sdk::server::CountdownTimer m_CourierUsageTimer; // 0x190            
            source2sdk::server::CountdownTimer m_ItemModeTimeout; // 0x1a8            
            source2sdk::server::CountdownTimer m_AbilityMutedTimer; // 0x1c0            
            source2sdk::server::CountdownTimer m_AbilityMutedCheckTimer; // 0x1d8            
            source2sdk::entity2::GameTime_t m_HitByTowerTime; // 0x1f0            
            source2sdk::entity2::GameTime_t m_HitByHeroTime[24]; // 0x1f4            
            source2sdk::entity2::GameTime_t m_HitByCreepTime; // 0x254            
            source2sdk::entity2::GameTick_t m_nEstimatedDamageUpdatedTick; // 0x258            
            source2sdk::entity2::GameTick_t m_nNearbyUnitsUpdatedTick; // 0x25c            
            source2sdk::entity2::GameTick_t m_nNearbyTreesUpdatedTick; // 0x260            
            uint8_t _pad0264[0xc4]; // 0x264
            // m_NearbyTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_NearbyTrees;
            char m_NearbyTrees[0x18]; // 0x328            
            std::int32_t m_nNearbyEnemyCreeps; // 0x340            
            std::int32_t m_nAttackingCreeps; // 0x344            
            std::int32_t m_nAttackingTowers; // 0x348            
            std::int32_t m_nAttackingHeroes; // 0x34c            
            source2sdk::entity2::GameTime_t m_fLastSeen; // 0x350            
            std::int32_t m_nFailedPaths; // 0x354            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x358            
            VectorWS m_vTargetLoc; // 0x35c            
            source2sdk::entity2::GameTime_t m_fTargetLastSeen; // 0x368            
            // m_hTargetLastHitCreep has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetLastHitCreep;
            char m_hTargetLastHitCreep[0x4]; // 0x36c            
            bool m_bWasInvisible; // 0x370            
            bool m_bKnownInvisible; // 0x371            
            uint8_t _pad0372[0x2]; // 0x372
            VectorWS m_vLastSeenLoc; // 0x374            
            uint8_t _pad0380[0x38]; // 0x380
            VectorWS m_vRequestedBlinkLoc; // 0x3b8            
            source2sdk::entity2::GameTime_t m_fRequestedBlinkStart; // 0x3c4            
            source2sdk::entity2::GameTime_t m_fRequestedBlinkExpire; // 0x3c8            
            uint8_t _pad03cc[0x20]; // 0x3cc
            VectorWS m_vRequestedWardLocation; // 0x3ec            
            // m_hMinions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hMinions;
            char m_hMinions[0x18]; // 0x3f8            
            // m_Build has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTABaseAbility*> m_Build;
            char m_Build[0x18]; // 0x410            
            uint8_t _pad0428[0x8308]; // 0x428
            float m_fModeDesires[32]; // 0x8730            
            std::int32_t m_iPreviousBotModeType; // 0x87b0            
            uint8_t _pad87b4[0x7c]; // 0x87b4
            float m_flNextTaskDistance; // 0x8830            
            source2sdk::entity2::GameTime_t m_flTaskReconsiderTime; // 0x8834            
            uint8_t _pad8838[0x38]; // 0x8838
            source2sdk::entity2::GameTime_t m_flPlannerStateExpiration; // 0x8870            
            uint8_t _pad8874[0x4]; // 0x8874
            source2sdk::server::CountdownTimer m_UpdateDangerTimer; // 0x8878            
            uint8_t _pad8890[0x48]; // 0x8890
            source2sdk::entity2::GameTime_t m_fPendingActionExecuteTime; // 0x88d8            
            bool m_bPendingActionBypass; // 0x88dc            
            uint8_t _pad88dd[0x3]; // 0x88dd
            std::int32_t m_nForceAbility; // 0x88e0            
            source2sdk::entity2::GameTime_t m_flLastDebugTime; // 0x88e4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iLifesteal) == 0x10);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iBlock) == 0x14);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bForceIdle) == 0x18);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bForceCreepAttack) == 0x19);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fExecutionTime) == 0x1c);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iCurExecutionTime) == 0x94);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iPlayerID) == 0x98);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hUnit) == 0x9c);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_pTeamCommander) == 0xa0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iUnitType) == 0xa8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fAggressionFactor) == 0xac);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bBotControlled) == 0xb0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bLiquidate) == 0xb1);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bDoNotPurchase) == 0xb2);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iDifficulty) == 0xb4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsFullScriptTakeover) == 0xb8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsTrialModeEnabled) == 0xb9);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsTaskLogicEnabled) == 0xba);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_CurrentLane) == 0xbc);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_MostRecentLane) == 0xc0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_AssignedLane) == 0xc4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_TargetLane) == 0xc8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_ForcedLane) == 0xcc);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fCurrentLaneAmount) == 0xd0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsNPXCarry) == 0xd4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bIsInLaningPhase) == 0xdc);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fEstimatedUnitDamage) == 0xe0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fEstimatedMaxUnitDamage) == 0xe4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fEstimatedBuildingDamage) == 0xe8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bWantsToCast) == 0xec);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iWantsToCastFrame) == 0xf0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bWantsToAttack) == 0xf4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iWantsToAttackFrame) == 0xf8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_UpdateCurrentLaneTimer) == 0x100);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_UpdateModeTimer) == 0x118);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_ModeThinkTimer) == 0x130);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_UpdateTaskTimer) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_InteralRatingsTimer) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_BuybackDelayTimer) == 0x178);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_CourierUsageTimer) == 0x190);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_ItemModeTimeout) == 0x1a8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_AbilityMutedTimer) == 0x1c0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_AbilityMutedCheckTimer) == 0x1d8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_HitByTowerTime) == 0x1f0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_HitByHeroTime) == 0x1f4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_HitByCreepTime) == 0x254);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nEstimatedDamageUpdatedTick) == 0x258);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nNearbyUnitsUpdatedTick) == 0x25c);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nNearbyTreesUpdatedTick) == 0x260);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_NearbyTrees) == 0x328);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nNearbyEnemyCreeps) == 0x340);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nAttackingCreeps) == 0x344);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nAttackingTowers) == 0x348);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nAttackingHeroes) == 0x34c);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fLastSeen) == 0x350);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nFailedPaths) == 0x354);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hTarget) == 0x358);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vTargetLoc) == 0x35c);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fTargetLastSeen) == 0x368);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hTargetLastHitCreep) == 0x36c);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bWasInvisible) == 0x370);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bKnownInvisible) == 0x371);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vLastSeenLoc) == 0x374);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vRequestedBlinkLoc) == 0x3b8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fRequestedBlinkStart) == 0x3c4);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fRequestedBlinkExpire) == 0x3c8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_vRequestedWardLocation) == 0x3ec);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_hMinions) == 0x3f8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_Build) == 0x410);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fModeDesires) == 0x8730);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_iPreviousBotModeType) == 0x87b0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_flNextTaskDistance) == 0x8830);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_flTaskReconsiderTime) == 0x8834);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_flPlannerStateExpiration) == 0x8870);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_UpdateDangerTimer) == 0x8878);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_fPendingActionExecuteTime) == 0x88d8);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_bPendingActionBypass) == 0x88dc);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_nForceAbility) == 0x88e0);
        static_assert(offsetof(source2sdk::server::CDOTA_Bot, m_flLastDebugTime) == 0x88e4);
        
        static_assert(sizeof(source2sdk::server::CDOTA_Bot) == 0x88e8);
    };
};
