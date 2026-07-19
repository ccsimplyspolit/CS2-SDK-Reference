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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_LeechSeed_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_slow; // 0x1a58            
            float radius; // 0x1a5c            
            std::int32_t projectile_speed; // 0x1a60            
            std::int32_t healing_pulse_count; // 0x1a64            
            std::int32_t max_heal_units; // 0x1a68            
            float flat_heal; // 0x1a6c            
            float heal_amount; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeed_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_LeechSeed_Slow) == 0x1a78);
    };
};
