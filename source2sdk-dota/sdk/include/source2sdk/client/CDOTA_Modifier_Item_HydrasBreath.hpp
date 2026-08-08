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
        // Size: 0x1b18
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_HydrasBreath : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t strength; // 0x1a78
            std::int32_t agility; // 0x1a7c
            std::int32_t damage; // 0x1a80
            std::int32_t proc_chance; // 0x1a84
            std::int32_t proc_dmg_pct; // 0x1a88
            std::int32_t count; // 0x1a8c
            std::int32_t base_count; // 0x1a90
            std::int32_t secondary_target_range_bonus; // 0x1a94
            std::int32_t secondary_target_angle; // 0x1a98
            std::int32_t base_attack_range; // 0x1a9c
            std::int32_t base_proc_dmg; // 0x1aa0
            float poison_duration; // 0x1aa4
            uint8_t _pad1aa8[0x70];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_HydrasBreath because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_HydrasBreath) == 0x1b18);
    };
};
