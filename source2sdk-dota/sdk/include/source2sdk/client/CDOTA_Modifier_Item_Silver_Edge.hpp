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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Silver_Edge : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_intellect; // 0x1a78
            float bonus_mana_regen; // 0x1a7c
            std::int32_t bonus_attack_speed; // 0x1a80
            std::int32_t bonus_damage; // 0x1a84
            std::int32_t crit_chance; // 0x1a88
            std::int32_t crit_multiplier; // 0x1a8c
            float backstab_duration; // 0x1a90
            uint8_t _pad1a94[0x4]; // 0x1a94
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a98
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Silver_Edge because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Silver_Edge) == 0x1ab0);
    };
};
