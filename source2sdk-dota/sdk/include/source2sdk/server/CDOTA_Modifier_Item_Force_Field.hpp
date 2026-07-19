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
        class CDOTA_Modifier_Item_Force_Field : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            bool m_bAppliesToCreeps; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            float bonus_aoe_radius; // 0x1a5c            
            std::int32_t self_armor; // 0x1a60            
            std::int32_t self_mres; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Force_Field because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Force_Field) == 0x1a68);
    };
};
