#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_range_min; // 0x1a58            
            float attack_range_max; // 0x1a5c            
            float cast_range_min; // 0x1a60            
            float cast_range_max; // 0x1a64            
            float debuff_amp_min; // 0x1a68            
            float debuff_amp_max; // 0x1a6c            
            float model_scale_min; // 0x1a70            
            float model_scale_max; // 0x1a74            
            float magic_amp_min; // 0x1a78            
            float magic_amp_max; // 0x1a7c            
            float attack_range_per_agi; // 0x1a80            
            float move_speed_per_agi; // 0x1a84            
            float cast_range_per_str; // 0x1a88            
            float slow_resist_per_str; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic) == 0x1a90);
    };
};
