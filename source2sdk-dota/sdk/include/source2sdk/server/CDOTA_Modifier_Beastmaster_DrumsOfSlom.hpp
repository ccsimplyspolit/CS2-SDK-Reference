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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_DrumsOfSlom : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1a78
            float radius; // 0x1a7c
            std::int32_t max_stacks; // 0x1a80
            float base_damage; // 0x1a84
            std::int32_t heal_pct; // 0x1a88
            std::int32_t creep_heal_pct; // 0x1a8c
            std::int32_t creep_damage_pct; // 0x1a90
            std::int32_t iCurrentAttacksAtMinInterval; // 0x1a94
            float stack_decay_time; // 0x1a98
            float max_drum_hit_interval; // 0x1a9c
            float min_drum_hit_interval; // 0x1aa0
            source2sdk::entity2::GameTime_t m_flLastStackChangeTime; // 0x1aa4
            source2sdk::entity2::GameTime_t m_flLastDrumHitTime; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_DrumsOfSlom because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Beastmaster_DrumsOfSlom) == 0x1ab0);
    };
};
