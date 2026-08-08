#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Eternal_Shroud : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_spell_resist; // 0x1a78
            std::int32_t bonus_strength; // 0x1a7c
            std::int32_t bonus_armor; // 0x1a80
            float bonus_health; // 0x1a84
            std::int32_t mana_restore_pct; // 0x1a88
            float stack_threshold; // 0x1a8c
            float stack_resist; // 0x1a90
            float stack_duration; // 0x1a94
            std::int32_t max_stacks; // 0x1a98
            float m_flCumulativeDamage; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Eternal_Shroud because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Eternal_Shroud) == 0x1aa0);
    };
};
