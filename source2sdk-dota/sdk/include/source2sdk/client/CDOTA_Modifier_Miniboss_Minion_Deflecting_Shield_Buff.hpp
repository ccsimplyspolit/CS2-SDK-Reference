#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_barrier_pct_max_health; // 0x1a78
            float owner_max_barrier_pct_max_health; // 0x1a7c
            float regeneration_to_max_seconds; // 0x1a80
            float decay_to_zero_seconds; // 0x1a84
            float damage_reflection_pct; // 0x1a88
            float damage_cooldown; // 0x1a8c
            float aura_radius; // 0x1a90
            float m_flMaxBarrier; // 0x1a94
            float m_flBarrierAmount; // 0x1a98
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x1a9c
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x1aa0
            uint8_t _pad1aa4[0x14];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff) == 0x1ab8);
    };
};
