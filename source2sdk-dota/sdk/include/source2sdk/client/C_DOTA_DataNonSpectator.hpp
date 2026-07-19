#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CRoshanPhaseInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DOTATeleportInfo_t.hpp"
#include "source2sdk/client/DataTeamPlayer_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/PingConfirmationState_t.hpp"
#include "source2sdk/client/TierNeutralInfo_t.hpp"
#include "source2sdk/client/TreeModelReplacement_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1dd8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DOTA_DataNonSpectator : public source2sdk::client::C_BaseEntity
        {
        public:
            // m_vecDataTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::DataTeamPlayer_t> m_vecDataTeam;
            char m_vecDataTeam[0x68]; // 0x5f0            
            std::uint64_t m_bWorldTreeState[256]; // 0x658            
            std::uint64_t m_bNPCVisibleState[256]; // 0xe58            
            // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
            char m_vecWorldTreeModelReplacements[0x68]; // 0x1658            
            Vector2D m_vDesiredWardPlacement[2]; // 0x16c0            
            std::int32_t m_nEnemyStartingPosition[5]; // 0x16d0            
            std::int32_t m_nTotalEventPoints; // 0x16e4            
            source2sdk::client::HeroID_t m_nCaptainInspectedHeroID; // 0x16e8            
            std::int32_t m_nFeaturedPlayerID; // 0x16ec            
            float m_flSuggestedWardWeights[20]; // 0x16f0            
            std::uint8_t m_nSuggestedWardIndexes[20]; // 0x1740            
            std::int32_t m_iSuggestedLanes[5]; // 0x1754            
            float m_iSuggestedLaneWeights[5]; // 0x1768            
            bool m_bSuggestedLaneRoam[5]; // 0x177c            
            bool m_bSuggestedLaneJungle[5]; // 0x1781            
            uint8_t _pad1786[0x2]; // 0x1786
            // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
            char m_vecNeutralItemsTierInfo[0x68]; // 0x1788            
            // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecNeutralStashItems;
            char m_vecNeutralStashItems[0x18]; // 0x17f0            
            // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecNeutralItemsConsumed;
            char m_vecNeutralItemsConsumed[0x18]; // 0x1808            
            // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PingConfirmationState_t> m_PingConfirmationStates;
            char m_PingConfirmationStates[0x68]; // 0x1820            
            // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecKnownClearCamps;
            char m_vecKnownClearCamps[0x18]; // 0x1888            
            Vector2D m_vPossibleWardPlacement[100]; // 0x18a0            
            float m_vPossibleWardRadii[100]; // 0x1bc0            
            // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::DOTATeleportInfo_t> m_vecTrackedTeleports;
            char m_vecTrackedTeleports[0x68]; // 0x1d50            
            source2sdk::client::CRoshanPhaseInfo m_roshanSpawnInfo; // 0x1db8            
            std::int32_t m_nNextPowerRuneType; // 0x1dd0            
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x1dd4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_DataNonSpectator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_DataNonSpectator) == 0x1dd8);
    };
};
