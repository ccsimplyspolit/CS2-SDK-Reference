#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x14]; // 0x1a58
            float heal_additive; // 0x1a6c            
            float heal_percentage; // 0x1a70            
            float tick_interval; // 0x1a74            
            float damage_buff_pct; // 0x1a78            
            float damage_buff_duration; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Cold_Embrace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Winter_Wyvern_Cold_Embrace) == 0x1a80);
    };
};
