#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_HammerOfPurity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bHammerAttack; // 0x1a78
            uint8_t _pad1a79[0x3]; // 0x1a79
            std::int32_t attack_range_bonus; // 0x1a7c
            source2sdk::client::AttackRecord_t m_nAttackRecord; // 0x1a80
            uint8_t _pad1a82[0x2]; // 0x1a82
            std::int32_t total_ticks; // 0x1a84
            // m_nHealQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nHealQueue;
            char m_nHealQueue[0x18]; // 0x1a88
            float tick_rate; // 0x1aa0
            float heal_duration; // 0x1aa4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_HammerOfPurity because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Omniknight_HammerOfPurity) == 0x1aa8);
    };
};
