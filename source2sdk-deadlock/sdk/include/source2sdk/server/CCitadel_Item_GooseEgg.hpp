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
        // Size: 0x1108
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iAccruedGold"
        #pragma pack(push, 1)
        class CCitadel_Item_GooseEgg : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x8]; // 0xf78
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iAccruedGold; // 0xf80            
            uint8_t _pad0f84[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_GooseEgg because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_GooseEgg) == 0x1108);
    };
};
