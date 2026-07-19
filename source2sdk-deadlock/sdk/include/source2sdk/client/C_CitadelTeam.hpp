#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Team.hpp"
#include "source2sdk/client/EFlexSlotTypes_t.hpp"
#include "source2sdk/client/STeamFOWEntity.hpp"

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
        // Size: 0x738
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
        class C_CitadelTeam : public source2sdk::client::C_Team
        {
        public:
            // metadata: MNetworkEnable
            float m_flBaseObjectiveHealth; // 0x6a8            
            // metadata: MNetworkEnable
            std::int32_t m_vecBaseLocationX; // 0x6ac            
            // metadata: MNetworkEnable
            std::int32_t m_vecBaseLocationY; // 0x6b0            
            // metadata: MNetworkEnable
            bool m_bHasValidBaseLocation; // 0x6b4            
            uint8_t _pad06b5[0x3]; // 0x6b5
            // metadata: MNetworkEnable
            std::int32_t m_nBossesAlive; // 0x6b8            
            // metadata: MNetworkEnable
            std::int32_t m_nBossesMax; // 0x6bc            
            // metadata: MNetworkEnable
            source2sdk::client::EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x6c0            
            uint8_t _pad06c2[0x2]; // 0x6c2
            // metadata: MNetworkEnable
            std::int32_t m_nBaseGuardianLanesCleared; // 0x6c4            
            // metadata: MNetworkEnable
            // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::STeamFOWEntity> m_vecFOWEntities;
            char m_vecFOWEntities[0x68]; // 0x6c8            
            // metadata: MNetworkEnable
            std::int32_t m_nStreetBrawlScore; // 0x730            
            // metadata: MNetworkEnable
            std::int32_t m_nStreetBrawlScoreLastRound; // 0x734            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelTeam) == 0x738);
    };
};
