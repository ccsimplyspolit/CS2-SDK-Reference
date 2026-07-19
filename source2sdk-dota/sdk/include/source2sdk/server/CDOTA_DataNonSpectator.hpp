#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CRoshanPhaseInfo.hpp"
#include "source2sdk/server/DOTATeleportInfo_t.hpp"
#include "source2sdk/server/DataTeamPlayer_t.hpp"
#include "source2sdk/server/PingConfirmationState_t.hpp"
#include "source2sdk/server/TierNeutralInfo_t.hpp"
#include "source2sdk/server/TreeModelReplacement_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1c80
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTA_DataNonSpectator : public source2sdk::server::CBaseEntity
        {
        public:
            // m_vecDataTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DataTeamPlayer_t> m_vecDataTeam;
            char m_vecDataTeam[0x68]; // 0x498            
            std::uint64_t m_bWorldTreeState[256]; // 0x500            
            std::uint64_t m_bNPCVisibleState[256]; // 0xd00            
            // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
            char m_vecWorldTreeModelReplacements[0x68]; // 0x1500            
            Vector2D m_vDesiredWardPlacement[2]; // 0x1568            
            std::int32_t m_nEnemyStartingPosition[5]; // 0x1578            
            source2sdk::client::HeroID_t m_nCaptainInspectedHeroID; // 0x158c            
            float m_flSuggestedWardWeights[20]; // 0x1590            
            std::uint8_t m_nSuggestedWardIndexes[20]; // 0x15e0            
            std::int32_t m_iSuggestedLanes[5]; // 0x15f4            
            float m_iSuggestedLaneWeights[5]; // 0x1608            
            bool m_bSuggestedLaneRoam[5]; // 0x161c            
            bool m_bSuggestedLaneJungle[5]; // 0x1621            
            uint8_t _pad1626[0x2]; // 0x1626
            // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
            char m_vecNeutralItemsTierInfo[0x68]; // 0x1628            
            // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecNeutralStashItems;
            char m_vecNeutralStashItems[0x18]; // 0x1690            
            // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecNeutralItemsConsumed;
            char m_vecNeutralItemsConsumed[0x18]; // 0x16a8            
            // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PingConfirmationState_t> m_PingConfirmationStates;
            char m_PingConfirmationStates[0x68]; // 0x16c0            
            // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecKnownClearCamps;
            char m_vecKnownClearCamps[0x18]; // 0x1728            
            Vector2D m_vPossibleWardPlacement[100]; // 0x1740            
            float m_vPossibleWardRadii[100]; // 0x1a60            
            // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTATeleportInfo_t> m_vecTrackedTeleports;
            char m_vecTrackedTeleports[0x68]; // 0x1bf0            
            source2sdk::server::CRoshanPhaseInfo m_roshanSpawnInfo; // 0x1c58            
            std::int32_t m_nNextPowerRuneType; // 0x1c70            
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x1c74            
            std::int32_t m_iTowerKills; // 0x1c78            
            uint8_t _pad1c7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DataNonSpectator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_DataNonSpectator) == 0x1c80);
    };
};
