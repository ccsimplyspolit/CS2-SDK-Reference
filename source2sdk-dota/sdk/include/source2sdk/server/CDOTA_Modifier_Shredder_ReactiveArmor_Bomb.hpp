#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_ReactiveArmor_Bomb : public source2sdk::client::CDOTA_Buff
        {
        public:
            float initial_shield; // 0x1a78
            float max_shield; // 0x1a7c
            float shield_per_sec; // 0x1a80
            float shield_per_sec_per_enemy; // 0x1a84
            float duration; // 0x1a88
            float base_explosion; // 0x1a8c
            float radius; // 0x1a90
            float explosion_radius; // 0x1a94
            std::int32_t m_nDamageAbsorbed; // 0x1a98
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x1a9c
            source2sdk::entity2::GameTime_t m_StartTime; // 0x1aa0
            std::int32_t m_nLastParticleTime; // 0x1aa4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_ReactiveArmor_Bomb because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_ReactiveArmor_Bomb) == 0x1aa8);
    };
};
