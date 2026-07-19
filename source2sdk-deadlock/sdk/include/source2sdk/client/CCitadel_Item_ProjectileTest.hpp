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
        // Size: 0x1270
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ProjectileTest : public source2sdk::client::CCitadel_Item
        {
        public:
            VectorWS m_vLaunchPosition; // 0x11d8            
            QAngle m_qLaunchAngle; // 0x11e4            
            uint8_t _pad11f0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ProjectileTest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_ProjectileTest) == 0x1270);
    };
};
