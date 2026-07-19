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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_Curiosity : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t curiosity_per_spell_cast; // 0x1a58            
            float curiosity_duration; // 0x1a5c            
            float charge_radius; // 0x1a60            
            std::int32_t curiosity_attack_damage; // 0x1a64            
            float curiosity_modifier_amp; // 0x1a68            
            std::int32_t curiosity_aoe_bonus; // 0x1a6c            
            std::int32_t curiosity_per_kill; // 0x1a70            
            float grace_period; // 0x1a74            
            std::int32_t m_nCuriosityGained; // 0x1a78            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Curiosity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rubick_Curiosity) == 0x1a80);
    };
};
