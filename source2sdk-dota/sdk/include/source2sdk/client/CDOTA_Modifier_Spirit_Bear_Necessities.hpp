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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spirit_Bear_Necessities : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_int; // 0x1a58            
            float bonus_str; // 0x1a5c            
            float bonus_agi; // 0x1a60            
            std::int32_t bonus_attack_speed; // 0x1a64            
            std::int32_t bonus_attack_damage; // 0x1a68            
            float bonus_health_regen; // 0x1a6c            
            float bonus_health_regen_percent; // 0x1a70            
            float bonus_mana_regen; // 0x1a74            
            std::int32_t bonus_health; // 0x1a78            
            std::int32_t bonus_mana; // 0x1a7c            
            float bonus_evasion; // 0x1a80            
            std::int32_t item_slots; // 0x1a84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Necessities because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Spirit_Bear_Necessities) == 0x1a88);
    };
};
