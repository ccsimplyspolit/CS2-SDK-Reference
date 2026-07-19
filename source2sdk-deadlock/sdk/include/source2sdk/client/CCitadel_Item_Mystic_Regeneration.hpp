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
        // Size: 0x12e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iRegenStacks"
        #pragma pack(push, 1)
        class CCitadel_Item_Mystic_Regeneration : public source2sdk::client::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iRegenStacks; // 0x11d8            
            uint8_t _pad11dc[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Mystic_Regeneration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_Mystic_Regeneration) == 0x12e0);
    };
};
