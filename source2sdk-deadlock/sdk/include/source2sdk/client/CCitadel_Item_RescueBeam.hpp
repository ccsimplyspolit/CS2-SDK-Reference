#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"

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
        // Size: 0x11e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCanPull"
        #pragma pack(push, 1)
        class CCitadel_Item_RescueBeam : public source2sdk::client::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            bool m_bCanPull; // 0x11d8            
            uint8_t _pad11d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_RescueBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_RescueBeam) == 0x11e0);
    };
};
