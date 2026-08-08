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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_LilShredder_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x18]; // 0x1a78
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a90
            std::int32_t m_nIsActive; // 0x1aa8
            bool m_bBonusAttack; // 0x1aac
            uint8_t _pad1aad[0x3]; // 0x1aad
            std::int32_t attack_range_bonus; // 0x1ab0
            std::int32_t buffed_attacks; // 0x1ab4
            float base_attack_time; // 0x1ab8
            std::int32_t attack_speed_bonus; // 0x1abc
            float armor_duration; // 0x1ac0
            std::int32_t extra_targets; // 0x1ac4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_LilShredder_Buff because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_LilShredder_Buff) == 0x1ac8);
    };
};
