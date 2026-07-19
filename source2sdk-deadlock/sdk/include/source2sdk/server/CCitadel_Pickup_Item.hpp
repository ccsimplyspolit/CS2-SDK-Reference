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
        // static metadata: MNetworkVarNames "AbilityID_t m_unItemID"
        #pragma pack(push, 1)
        class CCitadel_Pickup_Item : public source2sdk::server::CCitadel_Pickup
        {
        public:
            // metadata: MNetworkEnable
            CUtlStringToken m_unItemID; // 0xb10            
            uint8_t _pad0b14[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Pickup_Item) == 0xb20);
    };
};
