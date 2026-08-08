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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MaskOfMadness_Berserk : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t berserk_bonus_attack_speed; // 0x1a78
            std::int32_t berserk_bonus_movement_speed; // 0x1a7c
            std::int32_t berserk_bonus_movement_speed_melee; // 0x1a80
            std::int32_t berserk_armor_reduction; // 0x1a84
            float berserk_slow_resist; // 0x1a88
            float berserk_slow_resist_melee; // 0x1a8c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_MaskOfMadness_Berserk because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MaskOfMadness_Berserk) == 0x1a90);
    };
};
