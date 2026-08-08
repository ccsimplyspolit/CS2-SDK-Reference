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
        class CDOTA_Modifier_Mars_ArenaOfBlood : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            std::int32_t width; // 0x1a7c
            std::int32_t spear_damage; // 0x1a80
            std::int32_t spear_distance_from_wall; // 0x1a84
            float spear_attack_interval; // 0x1a88
            bool pierces_debuff_immunity; // 0x1a8c
            uint8_t _pad1a8d[0x1b]; // 0x1a8d
            float warrior_fade_min_dist; // 0x1aa8
            float warrior_fade_max_dist; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_ArenaOfBlood) == 0x1ab0);
    };
};
