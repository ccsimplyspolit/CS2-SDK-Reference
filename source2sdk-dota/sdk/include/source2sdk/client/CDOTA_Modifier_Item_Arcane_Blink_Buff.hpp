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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Arcane_Blink_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t cast_pct_improvement; // 0x1a58            
            std::int32_t manacost_reduction; // 0x1a5c            
            std::int32_t debuff_amp; // 0x1a60            
            std::int32_t cast_range_bonus; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Arcane_Blink_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Arcane_Blink_Buff) == 0x1a68);
    };
};
