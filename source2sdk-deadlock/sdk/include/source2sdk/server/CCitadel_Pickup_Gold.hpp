#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Pickup.hpp"

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
        // Size: 0xb20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iGoldReward"
        #pragma pack(push, 1)
        class CCitadel_Pickup_Gold : public source2sdk::server::CCitadel_Pickup
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iGoldReward; // 0xb10            
            uint8_t _pad0b14[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup_Gold because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Pickup_Gold) == 0xb20);
    };
};
