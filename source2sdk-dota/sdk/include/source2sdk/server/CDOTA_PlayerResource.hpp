#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/DamageShareEvent_t.hpp"
#include "source2sdk/server/PlayerResourceBroadcasterData_t.hpp"
#include "source2sdk/server/PlayerResourcePlayerData_t.hpp"
#include "source2sdk/server/PlayerResourcePlayerTeamData_t.hpp"
#include "source2sdk/server/PurchasedItem_t.hpp"
#include "source2sdk/server/TimedKillEvent_t.hpp"
#include "source2sdk/server/sPendingTreeModelChange.hpp"
#include "source2sdk/server/sPendingTreeRemoval.hpp"
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
        struct CDOTA_Unit_Courier;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xefb0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTA_PlayerResource : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x240]; // 0x498
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x68]; // 0x6d8            
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x68]; // 0x740            
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x68]; // 0x7a8            
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x18]; // 0x810            
            std::int8_t m_nPrimaryEventIndex; // 0x828            
            uint8_t _pad0829[0x13]; // 0x829
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x100]; // 0x83c            
            // m_playerIDToPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_playerIDToPawn[64];
            char m_playerIDToPawn[0x100]; // 0x93c            
            uint8_t _pad0a3c[0x244]; // 0xa3c
            // m_vecPendingTreeRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeRemoval> m_vecPendingTreeRemovals;
            char m_vecPendingTreeRemovals[0x18]; // 0xc80            
            // m_vecPendingTreeModelChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sPendingTreeModelChange> m_vecPendingTreeModelChanges;
            char m_vecPendingTreeModelChanges[0x18]; // 0xc98            
            float m_flClaimedFarm[24]; // 0xcb0            
            float m_flEarnedCreepFarm[24]; // 0xd10            
            float m_flScaledPlayerDamage[24]; // 0xd70            
            float m_flScaledTowerDamage[24]; // 0xdd0            
            std::int32_t m_iScaledHealing[24]; // 0xe30            
            std::int32_t m_iSupportAbilityValue[24]; // 0xe90            
            std::int32_t m_nNumMouseClickCastOrders[24]; // 0xef0            
            float m_flTimeWithUnspentSkillPoints[24]; // 0xf50            
            float m_flRawPlayerDamage[24]; // 0xfb0            
            float m_flRawTowerDamage[24]; // 0x1010            
            float m_flRawHealing[24]; // 0x1070            
            float m_flRawPlayerDamageReceivedPreReduction[3][24]; // 0x10d0            
            float m_flRawPlayerDamageReceivedPostReduction[3][24]; // 0x11f0            
            float m_flTotalPlayerDamageMatrix[24][24]; // 0x1310            
            float m_flRawPlayerDamageMatrix[24][24]; // 0x1c10            
            std::int32_t m_iAssistsMatrix[24][24]; // 0x2510            
            std::int32_t m_iTimeLastSeen[24]; // 0x2e10            
            std::int32_t m_iTotalDisconnectedTime[24]; // 0x2e70            
            double m_dTimeLastRecieved[24]; // 0x2ed0            
            std::int32_t m_iGoldBonusEarned[24]; // 0x2f90            
            std::int32_t m_iExperimentalGoldEarned[24]; // 0x2ff0            
            std::int32_t m_iExperimental2GoldEarned[24]; // 0x3050            
            std::int32_t m_iCreepDenyGoldEarned[24]; // 0x30b0            
            std::int32_t m_iTPScrollsPurchased[24]; // 0x3110            
            uint8_t _pad3170[0x240]; // 0x3170
            std::int32_t m_iAegisPickups[24]; // 0x33b0            
            std::int32_t m_iTeleportsUsed[24]; // 0x3410            
            std::int32_t m_iNumConsumablesPurchased[24]; // 0x3470            
            std::int32_t m_iNumItemsPurchased[24]; // 0x34d0            
            // m_vecItemsPurchased has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PurchasedItem_t> m_vecItemsPurchased[24];
            char m_vecItemsPurchased[0x240]; // 0x3530            
            float m_flTimeOfLastItemPurchase[24]; // 0x3770            
            float m_flTimeOfLastConsumablePurchase[24]; // 0x37d0            
            float m_flTimeOfLastDeath[24]; // 0x3830            
            float m_flTowerDamageTaken[24]; // 0x3890            
            float m_flCreepDamageTaken[24]; // 0x38f0            
            float m_flHeroDamageTaken[24]; // 0x3950            
            float m_flTotalTowerDamageTaken[24]; // 0x39b0            
            float m_flTotalCreepDamageTaken[24]; // 0x3a10            
            float m_flTotalHeroDamageTaken[24]; // 0x3a70            
            std::int32_t m_iRank[24]; // 0x3ad0            
            std::int32_t m_iRankUncertainty[24]; // 0x3b30            
            bool m_bRankCalibrated[24]; // 0x3b90            
            bool m_bLowPriority[24]; // 0x3ba8            
            std::int32_t m_nWins[24]; // 0x3bc0            
            std::int32_t m_nLosses[24]; // 0x3c20            
            std::int32_t m_nSmurfCategory[24]; // 0x3c80            
            std::int32_t m_nBehaviorScore[24]; // 0x3ce0            
            std::int32_t m_nCommScore[24]; // 0x3d40            
            bool m_bWasHeroPickDotaPlusSuggestion[24]; // 0x3da0            
            source2sdk::entity2::GameTime_t m_flLastActiveTime[24]; // 0x3db8            
            float m_flIdleTime[24]; // 0x3e18            
            bool m_bLoggedInElsewhere[24]; // 0x3e78            
            bool m_bPlayerLoadedCompletely[64]; // 0x3e90            
            std::int32_t m_iDisconnectionReason[64]; // 0x3ed0            
            uint8_t _pad3fd0[0x600]; // 0x3fd0
            std::uint64_t m_SelectedGuide[64]; // 0x45d0            
            bool m_bIsUsingPlusGuide[64]; // 0x47d0            
            std::uint32_t m_vecPredictedRanks[64]; // 0x4810            
            uint8_t _pad4910[0xc00]; // 0x4910
            std::uint32_t m_unLastRadiantFortPct; // 0x5510            
            std::uint32_t m_unLastDireFortPct; // 0x5514            
            std::int32_t m_iCustomTeamAssignments[24]; // 0x5518            
            // m_vecPlayerLevelUpTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPlayerLevelUpTimes[24];
            char m_vecPlayerLevelUpTimes[0x240]; // 0x5578            
            std::int32_t m_iManaSpent[64][6]; // 0x57b8            
            std::int32_t m_iNeutralOption[64][6][6]; // 0x5db8            
            bool m_bLeaverAlreadyDetected; // 0x81b8            
            uint8_t _pad81b9[0x427]; // 0x81b9
            // m_TimedKillList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedKillList;
            char m_TimedKillList[0x18]; // 0x85e0            
            // m_TimedAssistList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedAssistList;
            char m_TimedAssistList[0x18]; // 0x85f8            
            // m_TimedDeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::TimedKillEvent_t> m_TimedDeathList;
            char m_TimedDeathList[0x18]; // 0x8610            
            std::uint32_t m_unLastHeroPickOrder; // 0x8628            
            std::int32_t m_iBountyGoldEarned[24]; // 0x862c            
            std::int32_t m_iRangeCreepUpgradeGoldEarned[24]; // 0x868c            
            std::int32_t m_iObserverWardsDestroyed[24]; // 0x86ec            
            std::int32_t m_iReliableGoldEarned[24]; // 0x874c            
            std::int32_t m_iGoldLossPrevented[24]; // 0x87ac            
            std::int32_t m_iMaxHatStacks[24]; // 0x880c            
            uint8_t _pad886c[0x5c]; // 0x886c
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x168]; // 0x88c8            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x600]; // 0x8a30            
            float m_flAvailableLaneGold[15]; // 0x9030            
            uint8_t _pad906c[0x4]; // 0x906c
            // m_DamageShareList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::DamageShareEvent_t> m_DamageShareList[24];
            char m_DamageShareList[0x240]; // 0x9070            
            source2sdk::server::DamageShareEvent_t m_AbsorbedDamageRollup[24][25]; // 0x92b0            
            source2sdk::client::AbilityID_t m_playerAbilityUpgradeOrder[24][25]; // 0xaed0            
            std::int32_t m_playerAbilityUpgradeTimes[24][25]; // 0xb830            
            std::int32_t m_playerAbilityUpgradeCount[24]; // 0xc190            
            uint8_t _padc1f0[0x40]; // 0xc1f0
            std::int32_t m_fullUpdateCount[64]; // 0xc230            
            std::int32_t m_iCouriersDeployed[24]; // 0xc330            
            std::int32_t m_iCouriersPotentiallyKilled[24]; // 0xc390            
            std::int32_t m_iCommandsIssued[24]; // 0xc3f0            
            std::uint32_t m_hHeroSpawnGroup[24]; // 0xc450            
            uint8_t _padc4b0[0x17c0]; // 0xc4b0
            float m_fNextLaneDetectionUpdate; // 0xdc70            
            float m_fNextTimedHeroStatsUpdate; // 0xdc74            
            uint8_t _paddc78[0x2a0]; // 0xdc78
            bool m_bInitializedLaneWaypoints; // 0xdf18            
            uint8_t _paddf19[0x517]; // 0xdf19
            std::uint32_t m_nLastWardSuggestionBuildingState; // 0xe430            
            std::uint32_t m_nLastWardSuggestionUpdateNum; // 0xe434            
            bool m_bLastWardSuggestionRoshanAlive; // 0xe438            
            bool m_bDoFinalPregameSuggestion[10]; // 0xe439            
            uint8_t _pade443[0x1]; // 0xe443
            float m_fNextCreepDistanceUpdate; // 0xe444            
            float m_fCreepDistanceSafe[15]; // 0xe448            
            float m_fCreepDistanceMid[15]; // 0xe484            
            float m_fCreepDistanceOff[15]; // 0xe4c0            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0xe4fc            
            bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // 0xe500            
            uint8_t _pade501[0x607]; // 0xe501
            source2sdk::client::PlayerID_t m_nRequestedBotPlayerID; // 0xeb08            
            float m_fNextCombatLogLocationUpdateTime; // 0xeb0c            
            float m_fNextAPMUpdateTime; // 0xeb10            
            uint8_t _padeb14[0x4]; // 0xeb14
            // m_vecPendingPlayerResourceRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecPendingPlayerResourceRequests;
            char m_vecPendingPlayerResourceRequests[0x18]; // 0xeb18            
            std::int32_t m_iRampages[24]; // 0xeb30            
            std::int32_t m_iTripleKills[24]; // 0xeb90            
            std::int32_t m_iCouriersKilled[24]; // 0xebf0            
            std::int32_t m_iAegisesSnatched[24]; // 0xec50            
            std::int32_t m_iCheesesEaten[24]; // 0xecb0            
            std::int32_t m_iRapiersPurchased[24]; // 0xed10            
            float m_flPushingDamage[24]; // 0xed70            
            std::int32_t m_iRoshanKillsNight[24]; // 0xedd0            
            std::int32_t m_iRoshanKillsDay[24]; // 0xee30            
            std::int32_t m_iPortalsUsed[24]; // 0xee90            
            std::int32_t m_iWisdomRunesGained[24]; // 0xeef0            
            std::int32_t m_iShieldRunesGained[24]; // 0xef50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_PlayerResource) == 0xefb0);
    };
};
