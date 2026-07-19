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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tidehunter_LeviathansCatch_Stacks : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t fish_strength_gain; // 0x1a58            
            float fish_model_scale; // 0x1a5c            
            std::int32_t fish_attack_range; // 0x1a60            
            std::int32_t fish_damage_block; // 0x1a64            
            std::int32_t fish_health_bonus; // 0x1a68            
            std::int32_t m_iDamageTaken; // 0x1a6c            
            std::int32_t damage_cleanse; // 0x1a70            
            float damage_reset_interval; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_LeviathansCatch_Stacks because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tidehunter_LeviathansCatch_Stacks) == 0x1a78);
    };
};
