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
        // Size: 0x1368
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iAccruedGold"
        #pragma pack(push, 1)
        class CCitadel_Item_GooseEgg : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x8]; // 0x11d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iAccruedGold; // 0x11e0            
            uint8_t _pad11e4[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_GooseEgg because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_GooseEgg) == 0x1368);
    };
};
