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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_Divided_We_Stand : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_level; // 0x1a78
            std::int32_t dps_penalty_pct; // 0x1a7c
            std::int32_t attribute_penalty_pct; // 0x1a80
            std::int32_t m_nPenaltyAS; // 0x1a84
            std::int32_t m_nPenaltyDamage; // 0x1a88
            std::int32_t m_nPenaltyHealth; // 0x1a8c
            std::int32_t m_nPenaltyMana; // 0x1a90
            float m_flPenaltyHPRegen; // 0x1a94
            float m_flPenaltyHPRegenPct; // 0x1a98
            float m_flPenaltyMPRegen; // 0x1a9c
            float m_flPenaltyStrength; // 0x1aa0
            float m_flPenaltyAgility; // 0x1aa4
            float m_flPenaltyIntelligence; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_Divided_We_Stand because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Meepo_Divided_We_Stand) == 0x1ab0);
    };
};
