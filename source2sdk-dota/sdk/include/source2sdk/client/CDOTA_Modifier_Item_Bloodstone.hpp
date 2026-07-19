#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Bloodstone : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_health; // 0x1a58            
            std::int32_t bonus_mana; // 0x1a5c            
            float bonus_hp_regen; // 0x1a60            
            std::int32_t bonus_intellect; // 0x1a64            
            float spell_lifesteal; // 0x1a68            
            float spell_lifesteal_while_active; // 0x1a6c            
            float aura_radius; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bloodstone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Bloodstone) == 0x1a78);
    };
};
