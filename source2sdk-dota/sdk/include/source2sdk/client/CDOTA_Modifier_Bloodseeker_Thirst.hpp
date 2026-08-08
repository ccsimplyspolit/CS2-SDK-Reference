#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Bloodseeker_Thirst : public source2sdk::client::CDOTA_Buff
        {
        public:
            float half_bonus_aoe; // 0x1a78
            std::int32_t visibility_threshold_pct; // 0x1a7c
            std::int32_t invis_threshold_pct; // 0x1a80
            std::int32_t min_bonus_pct; // 0x1a84
            std::int32_t max_bonus_pct; // 0x1a88
            std::int32_t bonus_movement_speed; // 0x1a8c
            std::int32_t active_movement_speed; // 0x1a90
            float linger_duration; // 0x1a94
            float inactive_penalty_pct; // 0x1a98
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Thirst because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bloodseeker_Thirst) == 0x1aa0);
    };
};
