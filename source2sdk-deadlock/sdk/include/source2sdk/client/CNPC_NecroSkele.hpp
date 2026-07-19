#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1c18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tSpawnTime"
        // static metadata: MNetworkVarNames "VectorWS m_vecCastLocation"
        // static metadata: MNetworkVarNames "bool m_bDontMove"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        // static metadata: MNetworkVarNames "float m_flSpawnDuration"
        #pragma pack(push, 1)
        class CNPC_NecroSkele : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            uint8_t _pad1bd0[0x28]; // 0x1bd0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tSpawnTime; // 0x1bf8            
            // metadata: MNetworkEnable
            VectorWS m_vecCastLocation; // 0x1bfc            
            // metadata: MNetworkEnable
            bool m_bDontMove; // 0x1c08            
            uint8_t _pad1c09[0x3]; // 0x1c09
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0x1c0c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flSpawnDuration; // 0x1c10            
            uint8_t _pad1c14[0x4];
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hCastingAbility; // 0x1be4
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NecroSkele because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_NecroSkele) == 0x1c18);
    };
};
