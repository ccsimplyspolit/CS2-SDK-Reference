#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1800
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tSpawnTime"
        // static metadata: MNetworkVarNames "VectorWS m_vecCastLocation"
        // static metadata: MNetworkVarNames "bool m_bDontMove"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        // static metadata: MNetworkVarNames "float m_flSpawnDuration"
        #pragma pack(push, 1)
        class CNPC_NecroSkele : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0x28]; // 0x17b0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tSpawnTime; // 0x17d8            
            // metadata: MNetworkEnable
            VectorWS m_vecCastLocation; // 0x17dc            
            // metadata: MNetworkEnable
            bool m_bDontMove; // 0x17e8            
            uint8_t _pad17e9[0x3]; // 0x17e9
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0x17ec            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flSpawnDuration; // 0x17f0            
            uint8_t _pad17f4[0xc];
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hCastingAbility; // 0x17c4
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NecroSkele because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_NecroSkele) == 0x1800);
    };
};
