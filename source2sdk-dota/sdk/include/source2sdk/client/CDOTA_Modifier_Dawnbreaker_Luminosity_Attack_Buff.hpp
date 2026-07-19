#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsBuffedAttack; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            std::int32_t heal_pct; // 0x1a5c            
            std::int32_t bonus_damage; // 0x1a60            
            float heal_radius; // 0x1a64            
            std::int32_t heal_from_creeps; // 0x1a68            
            std::int32_t allied_healing_pct; // 0x1a6c            
            bool triggered_by_celestial_hammer; // 0x1a70            
            uint8_t _pad1a71[0x7]; // 0x1a71
            // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hTargets;
            char hTargets[0x18]; // 0x1a78            
            float m_flTotalToHeal; // 0x1a90            
            bool m_bHasProccedCooldownReduction; // 0x1a94            
            uint8_t _pad1a95[0x3]; // 0x1a95
            float cooldown_reduction; // 0x1a98            
            float movespeed_bonus_duration; // 0x1a9c            
            float movespeed_bonus_from_creeps; // 0x1aa0            
            bool m_bShouldRecreate; // 0x1aa4            
            uint8_t _pad1aa5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x1aa8);
    };
};
