#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Enchanters_Bauble : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float enchantment_bonus_growth; // 0x1a58            
            float enchantment_bonus_base; // 0x1a5c            
            bool m_bRecursionGuard; // 0x1a60            
            uint8_t _pad1a61[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Enchanters_Bauble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Enchanters_Bauble) == 0x1a68);
    };
};
