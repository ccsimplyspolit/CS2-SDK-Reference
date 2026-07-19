#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_BladeFury : public source2sdk::client::CDOTA_Buff
        {
        public:
            float immunity_resist; // 0x1a58            
            float blade_fury_radius; // 0x1a5c            
            float blade_fury_outer_radius; // 0x1a60            
            std::int32_t blade_fury_damage; // 0x1a64            
            float blade_fury_damage_tick; // 0x1a68            
            float m_flTotalAppliedDamage; // 0x1a6c            
            float attack_interval; // 0x1a70            
            std::int32_t can_crit; // 0x1a74            
            std::int32_t bonus_movespeed; // 0x1a78            
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x1a7c            
            bool m_bIgnoreAttackRestriction; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            float blade_fury_aspd_multiplier; // 0x1a84            
            uint8_t _pad1a88[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_BladeFury because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Juggernaut_BladeFury) == 0x1aa0);
    };
};
