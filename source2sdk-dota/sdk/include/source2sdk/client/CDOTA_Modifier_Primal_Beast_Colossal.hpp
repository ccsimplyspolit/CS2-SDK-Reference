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
        class CDOTA_Modifier_Primal_Beast_Colossal : public source2sdk::client::CDOTA_Buff
        {
        public:
            float model_scale_per_stack; // 0x1a58            
            std::int32_t base_slow_resist; // 0x1a5c            
            std::int32_t base_aoe; // 0x1a60            
            std::int32_t hp_per_threshold; // 0x1a64            
            std::int32_t slow_resistance_per_threshold; // 0x1a68            
            float aoe_per_threshold; // 0x1a6c            
            float trample_bonus; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Colossal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Primal_Beast_Colossal) == 0x1a78);
    };
};
