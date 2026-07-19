#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1100
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
        #pragma pack(push, 1)
        class CCitadel_Item_Bubble : public source2sdk::server::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndTime; // 0xf78            
            uint8_t _pad0f7c[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_Bubble) == 0x1100);
    };
};
