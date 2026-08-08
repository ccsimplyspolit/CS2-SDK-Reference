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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Voidwalker_Phased : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1a78
            float max_damage_duration; // 0x1a7c
            std::int32_t attack_range_bonus; // 0x1a80
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a88
            bool bAttackRange; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            float m_flStartTime; // 0x1aa4
            float m_flFadeTime; // 0x1aa8
            float m_flDamageScale; // 0x1aac
            float duration; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Voidwalker_Phased because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Voidwalker_Phased) == 0x1ab8);
    };
};
