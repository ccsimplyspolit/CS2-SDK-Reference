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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_Curiosity : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t curiosity_per_spell_cast; // 0x1a78
            float curiosity_duration; // 0x1a7c
            float charge_radius; // 0x1a80
            std::int32_t curiosity_attack_damage; // 0x1a84
            float curiosity_modifier_amp; // 0x1a88
            std::int32_t curiosity_aoe_bonus; // 0x1a8c
            std::int32_t curiosity_per_kill; // 0x1a90
            float grace_period; // 0x1a94
            uint8_t _pad1a98[0x18]; // 0x1a98
            std::int32_t m_nCuriosityGained; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Curiosity because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rubick_Curiosity) == 0x1ab8);
    };
};
