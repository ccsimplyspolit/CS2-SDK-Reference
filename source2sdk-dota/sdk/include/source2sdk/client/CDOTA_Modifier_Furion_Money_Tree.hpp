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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_Money_Tree : public source2sdk::client::CDOTA_Buff
        {
        public:
            float gold_per_bag; // 0x1a78
            float tick_interval; // 0x1a7c
            float tree_duration; // 0x1a80
            std::int32_t min_throw_range; // 0x1a84
            std::int32_t max_throw_range; // 0x1a88
            float gold_bag_duration; // 0x1a8c
            std::int32_t bags_per_tick; // 0x1a90
            float hero_level_gold_multiplier; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_Money_Tree because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Furion_Money_Tree) == 0x1a98);
    };
};
