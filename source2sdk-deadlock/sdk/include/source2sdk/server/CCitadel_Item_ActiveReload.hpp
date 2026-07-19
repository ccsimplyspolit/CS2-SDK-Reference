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
        #pragma pack(push, 1)
        class CCitadel_Item_ActiveReload : public source2sdk::server::CCitadel_Item
        {
        public:
            bool m_bPlayedStartSound; // 0xf78            
            bool m_bActiveReloadFailed; // 0xf79            
            uint8_t _pad0f7a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ActiveReload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ActiveReload) == 0xf80);
    };
};
