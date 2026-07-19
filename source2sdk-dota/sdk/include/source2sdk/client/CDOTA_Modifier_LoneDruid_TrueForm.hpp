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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LoneDruid_TrueForm : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_armor; // 0x1a58            
            std::int32_t bonus_hp; // 0x1a5c            
            float attack_speed_pct; // 0x1a60            
            std::int32_t bonus_attack_damage; // 0x1a64            
            std::int32_t bonus_slow_resistance; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_TrueForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_LoneDruid_TrueForm) == 0x1a70);
    };
};
