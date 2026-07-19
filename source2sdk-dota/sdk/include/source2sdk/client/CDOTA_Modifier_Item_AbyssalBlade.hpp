#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        class CDOTA_Modifier_Item_AbyssalBlade : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_strength; // 0x1a58            
            std::int32_t bash_chance_melee; // 0x1a5c            
            std::int32_t bash_chance_ranged; // 0x1a60            
            float bash_duration; // 0x1a64            
            float bash_cooldown; // 0x1a68            
            std::int32_t bonus_chance_damage; // 0x1a6c            
            std::int32_t bonus_damage; // 0x1a70            
            uint8_t _pad1a74[0x4]; // 0x1a74
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a78            
            std::int32_t hp_regen_amp; // 0x1a90            
            std::int32_t slow_resistance; // 0x1a94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_AbyssalBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_AbyssalBlade) == 0x1a98);
    };
};
