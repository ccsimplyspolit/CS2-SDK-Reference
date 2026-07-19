#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Katana : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t katana_attack_range; // 0x1a58            
            float katana_base_attack_time; // 0x1a5c            
            std::int32_t katana_agility_bonus_base_damage; // 0x1a60            
            std::int32_t katana_bleed_attack_damage_pct; // 0x1a64            
            std::int32_t katana_base_ms; // 0x1a68            
            float katana_bleed_duration; // 0x1a6c            
            std::int32_t katana_swap_bonus_damage; // 0x1a70            
            float impale_duration; // 0x1a74            
            std::int32_t bleed_as_rupture_pct; // 0x1a78            
            std::int32_t max_stacks; // 0x1a7c            
            std::int32_t m_nBonusPreAttackDamage; // 0x1a80            
            bool m_bBackstab; // 0x1a84            
            uint8_t _pad1a85[0x3]; // 0x1a85
            float m_flStacksForLifesteal; // 0x1a88            
            source2sdk::client::AttackRecord_t m_nImpaleStartAttackRecord; // 0x1a8c            
            source2sdk::client::AttackRecord_t m_nImpaleEndAttackRecord; // 0x1a8e            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Katana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_Katana) == 0x1a90);
    };
};
