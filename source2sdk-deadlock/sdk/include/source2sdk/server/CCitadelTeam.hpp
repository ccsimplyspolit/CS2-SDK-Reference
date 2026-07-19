#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFlexSlotTypes_t.hpp"
#include "source2sdk/server/CTeam.hpp"
#include "source2sdk/server/STeamFOWEntity.hpp"

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
        // Size: 0x610
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flBaseObjectiveHealth"
        // static metadata: MNetworkVarNames "int m_vecBaseLocationX"
        // static metadata: MNetworkVarNames "int m_vecBaseLocationY"
        // static metadata: MNetworkVarNames "bool m_bHasValidBaseLocation"
        // static metadata: MNetworkVarNames "int m_nBossesAlive"
        // static metadata: MNetworkVarNames "int m_nBossesMax"
        // static metadata: MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
        // static metadata: MNetworkVarNames "int m_nBaseGuardianLanesCleared"
        // static metadata: MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
        // static metadata: MNetworkVarNames "int m_nStreetBrawlScore"
        // static metadata: MNetworkVarNames "int m_nStreetBrawlScoreLastRound"
        #pragma pack(push, 1)
        class CCitadelTeam : public source2sdk::server::CTeam
        {
        public:
            uint8_t _pad0558[0xc]; // 0x558
            // metadata: MNetworkEnable
            float m_flBaseObjectiveHealth; // 0x564            
            // metadata: MNetworkEnable
            std::int32_t m_vecBaseLocationX; // 0x568            
            // metadata: MNetworkEnable
            std::int32_t m_vecBaseLocationY; // 0x56c            
            // metadata: MNetworkEnable
            bool m_bHasValidBaseLocation; // 0x570            
            uint8_t _pad0571[0x1f]; // 0x571
            // metadata: MNetworkEnable
            std::int32_t m_nBossesAlive; // 0x590            
            // metadata: MNetworkEnable
            std::int32_t m_nBossesMax; // 0x594            
            // metadata: MNetworkEnable
            source2sdk::client::EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x598            
            uint8_t _pad059a[0x2]; // 0x59a
            // metadata: MNetworkEnable
            std::int32_t m_nBaseGuardianLanesCleared; // 0x59c            
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkPriority "32"
            // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::STeamFOWEntity> m_vecFOWEntities;
            char m_vecFOWEntities[0x68]; // 0x5a0            
            // metadata: MNetworkEnable
            std::int32_t m_nStreetBrawlScore; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nStreetBrawlScoreLastRound; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTeam) == 0x610);
    };
};
