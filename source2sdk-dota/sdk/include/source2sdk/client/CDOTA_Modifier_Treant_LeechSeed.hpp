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
        class CDOTA_Modifier_Treant_LeechSeed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_interval; // 0x1a58            
            float leech_damage; // 0x1a5c            
            float movement_slow; // 0x1a60            
            float radius; // 0x1a64            
            float leech_heal; // 0x1a68            
            std::int32_t max_heal_units; // 0x1a6c            
            std::int32_t projectile_speed; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_LeechSeed) == 0x1a78);
    };
};
