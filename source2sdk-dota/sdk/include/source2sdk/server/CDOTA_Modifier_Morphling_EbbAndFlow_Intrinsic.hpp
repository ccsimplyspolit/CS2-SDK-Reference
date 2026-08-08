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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_range_min; // 0x1a78
            float attack_range_max; // 0x1a7c
            float cast_range_min; // 0x1a80
            float cast_range_max; // 0x1a84
            float debuff_amp_min; // 0x1a88
            float debuff_amp_max; // 0x1a8c
            float model_scale_min; // 0x1a90
            float model_scale_max; // 0x1a94
            float magic_amp_min; // 0x1a98
            float magic_amp_max; // 0x1a9c
            float attack_range_per_agi; // 0x1aa0
            float move_speed_per_agi; // 0x1aa4
            float cast_range_per_str; // 0x1aa8
            float slow_resist_per_str; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic) == 0x1ab0);
    };
};
