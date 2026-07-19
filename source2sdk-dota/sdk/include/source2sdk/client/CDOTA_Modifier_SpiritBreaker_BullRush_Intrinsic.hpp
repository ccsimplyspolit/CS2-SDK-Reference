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
        class CDOTA_Modifier_SpiritBreaker_BullRush_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hero_duration; // 0x1a58            
            float creep_duration; // 0x1a5c            
            std::int32_t hero_movespeed_percent; // 0x1a60            
            std::int32_t creep_movespeed_percent; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_BullRush_Intrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SpiritBreaker_BullRush_Intrinsic) == 0x1a68);
    };
};
