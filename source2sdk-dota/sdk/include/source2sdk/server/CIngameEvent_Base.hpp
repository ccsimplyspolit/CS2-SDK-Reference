#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CavernCrawlMapVariant_t.hpp"
#include "source2sdk/client/DOTACavernCrawlMapResult_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CDOTASubChallengeInfo.hpp"
#include "source2sdk/server/CDOTA_CombatLogQueryProgress.hpp"
#include "source2sdk/server/CDOTA_PlayerChallengeInfo.hpp"

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
        // Size: 0x1a58
        // Has VTable
        // Is Abstract
        // Construct disallowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CIngameEvent_Base : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x20]; // 0x498
            bool m_bInitialized; // 0x4b8            
            uint8_t _pad04b9[0x3]; // 0x4b9
            std::int32_t m_CompendiumChallengeEventID[24]; // 0x4bc            
            std::int32_t m_CompendiumChallengeSequenceID[24]; // 0x51c            
            std::int32_t m_CompendiumChallengeCoinReward[24]; // 0x57c            
            std::int32_t m_CompendiumChallengeCoinSplash[24]; // 0x5dc            
            std::int32_t m_CompendiumChallengePointReward[24]; // 0x63c            
            bool m_CompendiumChallengeCompleted[24]; // 0x69c            
            bool m_CompendiumChallengeFailed[24]; // 0x6b4            
            std::int32_t m_CompendiumChallengeProgress[24]; // 0x6cc            
            std::int32_t m_QueryIDForProgress[24]; // 0x72c            
            uint8_t _pad078c[0x4]; // 0x78c
            // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTASubChallengeInfo> m_SubChallenges;
            char m_SubChallenges[0x68]; // 0x790            
            std::int32_t m_CompendiumCoinWager[10]; // 0x7f8            
            source2sdk::client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x820            
            std::int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x870            
            std::int32_t m_CompendiumCoinWagerResults[10]; // 0x898            
            std::int32_t m_CompendiumRankWagers[10]; // 0x8c0            
            float m_flWagerTimer; // 0x8e8            
            source2sdk::entity2::GameTime_t m_flWagerEndTime; // 0x8ec            
            // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
            char m_CompendiumChallengeInfo[0xad8]; // 0x8f0            
            // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
            char m_PlayerQueryIDs[0x68]; // 0x13c8            
            std::int32_t m_ProgressForQueryID[100]; // 0x1430            
            std::int32_t m_GoalForQueryID[100]; // 0x15c0            
            std::int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1750            
            std::int32_t m_PlayerQuestRankCompleted[10]; // 0x1778            
            source2sdk::client::PlayerID_t m_PlayerBountyTarget[10]; // 0x17a0            
            source2sdk::entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x17c8            
            std::int32_t m_PlayerBountyCount[10]; // 0x17f0            
            bool m_bHasSpentWager[10]; // 0x1818            
            bool m_bPendingWagerSpend[10]; // 0x1822            
            bool m_bCavernCrawlActive[24]; // 0x182c            
            source2sdk::client::CavernCrawlMapVariant_t m_nCavernCrawlMapVariant[24]; // 0x1844            
            bool m_bCavernHalfCredit; // 0x185c            
            bool m_bBountyReminded[24]; // 0x185d            
            bool m_bBountyAnnounced[24]; // 0x1875            
            uint8_t _pad188d[0x3]; // 0x188d
            std::uint32_t m_pCavernCrawlWinnings[24]; // 0x1890            
            std::uint32_t m_pCavernCrawlPlusShardWinnings[24]; // 0x18f0            
            // m_ppVecCavernCrawlMapResult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTACavernCrawlMapResult_t>* m_ppVecCavernCrawlMapResult[24];
            char m_ppVecCavernCrawlMapResult[0xc0]; // 0x1950            
            std::int32_t m_event_lobby_updated; // 0x1a10            
            uint8_t _pad1a14[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CIngameEvent_Base) == 0x1a58);
    };
};
