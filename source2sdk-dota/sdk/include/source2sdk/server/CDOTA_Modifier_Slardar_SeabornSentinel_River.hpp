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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slardar_SeabornSentinel_River : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t river_speed; // 0x1a58            
            float puddle_regen; // 0x1a5c            
            float puddle_armor; // 0x1a60            
            std::int32_t puddle_status_resistance; // 0x1a64            
            float river_damage_pct; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_SeabornSentinel_River because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Slardar_SeabornSentinel_River) == 0x1a70);
    };
};
