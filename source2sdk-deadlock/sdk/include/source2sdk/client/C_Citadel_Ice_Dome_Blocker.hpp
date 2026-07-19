#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
        // Size: 0xcb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTurnSolidTime"
        #pragma pack(push, 1)
        class C_Citadel_Ice_Dome_Blocker : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurnSolidTime; // 0xca8            
            uint8_t _pad0cac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Ice_Dome_Blocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Ice_Dome_Blocker) == 0xcb0);
    };
};
