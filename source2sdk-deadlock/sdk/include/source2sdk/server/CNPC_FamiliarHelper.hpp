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
        // Size: 0x1ba0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tCooldownStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tCooldownEndTime"
        // static metadata: MNetworkVarNames "bool m_bIsHelperAvailableNet"
        #pragma pack(push, 1)
        class CNPC_FamiliarHelper : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0x3e0]; // 0x17b0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tCooldownStartTime; // 0x1b90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tCooldownEndTime; // 0x1b94            
            // metadata: MNetworkEnable
            bool m_bIsHelperAvailableNet; // 0x1b98            
            uint8_t _pad1b99[0x7];
            
            // Datamap fields:
            // uint8_t m_nHelperIdx; // 0x1824
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_FamiliarHelper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_FamiliarHelper) == 0x1ba0);
    };
};
