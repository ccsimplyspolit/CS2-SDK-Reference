#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCanPull"
        #pragma pack(push, 1)
        class CCitadel_Item_RescueBeam : public source2sdk::server::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            bool m_bCanPull; // 0xf78            
            uint8_t _pad0f79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_RescueBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_RescueBeam) == 0xf80);
    };
};
