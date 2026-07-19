#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"

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
        // Size: 0x1bf8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "Vector m_vecElectricBeamTargetEnd"
        // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
        // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
        // static metadata: MNetworkVarNames "Vector m_vShrineAttackTargetPos"
        #pragma pack(push, 1)
        class C_NPC_Boss_Tier3 : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_iLane; // 0x1bd0            
            // metadata: MNetworkEnable
            Vector m_vecElectricBeamTargetEnd; // 0x1bd4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::ETier3State_t m_eAliveState; // 0x1be0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::ETier3Phase_t m_ePhase; // 0x1be4            
            // metadata: MNetworkEnable
            Vector m_vShrineAttackTargetPos; // 0x1be8            
            uint8_t _pad1bf4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_Boss_Tier3 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_Boss_Tier3) == 0x1bf8);
    };
};
