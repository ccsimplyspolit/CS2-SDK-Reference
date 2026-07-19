#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x18b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "Vector m_vecElectricBeamTargetEnd"
        // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
        // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
        // static metadata: MNetworkVarNames "Vector m_vShrineAttackTargetPos"
        #pragma pack(push, 1)
        class CNPC_Boss_Tier3 : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0x4]; // 0x17b0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_iLane; // 0x17b4            
            uint8_t _pad17b8[0x34]; // 0x17b8
            // metadata: MNetworkEnable
            Vector m_vecElectricBeamTargetEnd; // 0x17ec            
            uint8_t _pad17f8[0x10]; // 0x17f8
            source2sdk::entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1808            
            source2sdk::entity2::CEntityIOOutput m_eventOnPhase1End; // 0x1820            
            CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1838            
            uint8_t _pad1840[0x4]; // 0x1840
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::ETier3State_t m_eAliveState; // 0x1844            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::ETier3Phase_t m_ePhase; // 0x1848            
            uint8_t _pad184c[0x2c]; // 0x184c
            // metadata: MNetworkEnable
            Vector m_vShrineAttackTargetPos; // 0x1878            
            uint8_t _pad1884[0x2c];
            
            // Datamap fields:
            // void m_vecStartingPosition; // 0x17c8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier3 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier3) == 0x18b0);
    };
};
