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
        // Size: 0x1be0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tCooldownStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tCooldownEndTime"
        // static metadata: MNetworkVarNames "bool m_bIsHelperAvailableNet"
        #pragma pack(push, 1)
        class CNPC_FamiliarHelper : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tCooldownStartTime; // 0x1bd0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tCooldownEndTime; // 0x1bd4            
            // metadata: MNetworkEnable
            bool m_bIsHelperAvailableNet; // 0x1bd8            
            uint8_t _pad1bd9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_FamiliarHelper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_FamiliarHelper) == 0x1be0);
    };
};
