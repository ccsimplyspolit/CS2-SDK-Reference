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
        class CDOTA_Modifier_Treant_LivingArmor : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal_per_second; // 0x1a58            
            float damage_block_base; // 0x1a5c            
            float damage_block_loss; // 0x1a60            
            float damage_block_threshold; // 0x1a64            
            float passive_reset_cd; // 0x1a68            
            uint8_t _pad1a6c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LivingArmor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_LivingArmor) == 0x1a80);
    };
};
