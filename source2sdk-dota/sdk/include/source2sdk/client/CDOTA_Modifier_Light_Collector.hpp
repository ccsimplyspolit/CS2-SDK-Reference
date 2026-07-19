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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Light_Collector : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            bool m_bActive; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            std::int32_t health_regen; // 0x1a5c            
            std::int32_t mana_regen; // 0x1a60            
            std::int32_t radius; // 0x1a64            
            std::int32_t movespeed_pct; // 0x1a68            
            std::int32_t penalty; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Light_Collector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Light_Collector) == 0x1a70);
    };
};
