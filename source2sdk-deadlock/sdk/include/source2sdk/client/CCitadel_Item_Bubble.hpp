#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
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
        // Size: 0x1360
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
        #pragma pack(push, 1)
        class CCitadel_Item_Bubble : public source2sdk::client::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndTime; // 0x11d8            
            uint8_t _pad11dc[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_Bubble) == 0x1360);
    };
};
