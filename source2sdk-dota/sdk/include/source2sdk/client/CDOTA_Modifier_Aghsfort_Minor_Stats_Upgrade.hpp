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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_all_stats; // 0x1a58            
            std::int32_t bonus_primary_stat; // 0x1a5c            
            std::int32_t bonus_movespeed; // 0x1a60            
            std::int32_t bonus_hp_regen; // 0x1a64            
            std::int32_t bonus_armor; // 0x1a68            
            std::int32_t bonus_attack_damage; // 0x1a6c            
            std::int32_t bonus_cast_range; // 0x1a70            
            std::int32_t bonus_spell_amp; // 0x1a74            
            std::int32_t bonus_health; // 0x1a78            
            std::int32_t bonus_mana; // 0x1a7c            
            std::int32_t bonus_attack_speed; // 0x1a80            
            std::int32_t bonus_heal_amp; // 0x1a84            
            std::int32_t bonus_mana_regen; // 0x1a88            
            std::int32_t bonus_evasion; // 0x1a8c            
            std::int32_t bonus_magic_resist; // 0x1a90            
            std::int32_t bonus_lifesteal; // 0x1a94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade) == 0x1a98);
    };
};
