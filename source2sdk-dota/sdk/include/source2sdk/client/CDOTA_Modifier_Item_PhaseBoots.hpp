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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_PhaseBoots : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1a78
            std::int32_t bonus_damage_melee; // 0x1a7c
            std::int32_t bonus_damage_range; // 0x1a80
            std::int32_t bonus_attack_speed; // 0x1a84
            std::int32_t bonus_armor; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_PhaseBoots because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_PhaseBoots) == 0x1a90);
    };
};
