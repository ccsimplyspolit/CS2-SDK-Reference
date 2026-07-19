#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTASubChallengeInfo.hpp"
#include "source2sdk/client/CDOTA_PlayerChallengeInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_DOTA_CombatLogQueryProgress.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x19b8
        // Has VTable
        // Is Abstract
        // Construct disallowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_IngameEvent_Base : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x8]; // 0x5f0
            bool m_bInitialized; // 0x5f8            
            uint8_t _pad05f9[0x3]; // 0x5f9
            std::int32_t m_CompendiumChallengeEventID[24]; // 0x5fc            
            std::int32_t m_CompendiumChallengeSequenceID[24]; // 0x65c            
            std::int32_t m_CompendiumChallengeCoinReward[24]; // 0x6bc            
            std::int32_t m_CompendiumChallengeCoinSplash[24]; // 0x71c            
            std::int32_t m_CompendiumChallengePointReward[24]; // 0x77c            
            bool m_CompendiumChallengeCompleted[24]; // 0x7dc            
            bool m_CompendiumChallengeFailed[24]; // 0x7f4            
            std::int32_t m_CompendiumChallengeProgress[24]; // 0x80c            
            std::int32_t m_QueryIDForProgress[24]; // 0x86c            
            uint8_t _pad08cc[0x4]; // 0x8cc
            // m_SubChallenges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTASubChallengeInfo> m_SubChallenges;
            char m_SubChallenges[0x68]; // 0x8d0            
            std::int32_t m_CompendiumCoinWager[10]; // 0x938            
            source2sdk::client::itemid_t m_CompendiumTokenWagerItemID[10]; // 0x960            
            std::int32_t m_CompendiumWagerTokenBonusPct[10]; // 0x9b0            
            std::int32_t m_CompendiumCoinWagerResults[10]; // 0x9d8            
            std::int32_t m_CompendiumRankWagers[10]; // 0xa00            
            float m_flWagerTimer; // 0xa28            
            source2sdk::entity2::GameTime_t m_flWagerEndTime; // 0xa2c            
            // m_CompendiumChallengeInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_PlayerChallengeInfo> m_CompendiumChallengeInfo;
            char m_CompendiumChallengeInfo[0xad8]; // 0xa30            
            // m_PlayerQueryIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_DOTA_CombatLogQueryProgress> m_PlayerQueryIDs;
            char m_PlayerQueryIDs[0x68]; // 0x1508            
            std::int32_t m_ProgressForQueryID[100]; // 0x1570            
            std::int32_t m_GoalForQueryID[100]; // 0x1700            
            std::int32_t m_PlayerQuestRankPreviouslyCompleted[10]; // 0x1890            
            std::int32_t m_PlayerQuestRankCompleted[10]; // 0x18b8            
            source2sdk::client::PlayerID_t m_PlayerBountyTarget[10]; // 0x18e0            
            source2sdk::entity2::GameTime_t m_flPlayerBountyTimestamp[10]; // 0x1908            
            std::int32_t m_PlayerBountyCount[10]; // 0x1930            
            std::int32_t m_PlayerBountyTimestamp_Obsolete[24]; // 0x1958            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_IngameEvent_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_IngameEvent_Base) == 0x19b8);
    };
};
