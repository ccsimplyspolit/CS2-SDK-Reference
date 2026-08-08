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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x1a78
            std::int32_t shard_movement_penalty; // 0x1a7c
            float swipe_radius; // 0x1a80
            float swipe_damage; // 0x1a84
            float smash_radius; // 0x1a88
            float smash_damage; // 0x1a8c
            float m_flCurrentSpeed; // 0x1a90
            float flSwipeInterval; // 0x1a94
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1a98
            std::int32_t iCurrentAttack; // 0x1a9c
            std::int32_t total_attacks; // 0x1aa0
            float smash_stun_duration; // 0x1aa4
            float sweep_stun_duration; // 0x1aa8
            bool m_bHasCompletedMove; // 0x1aac
            uint8_t _pad1aad[0x3]; // 0x1aad
            float duration; // 0x1ab0
            Vector m_vTargetHorizontalDirection; // 0x1ab4
            float smash_distance_from_hero; // 0x1ac0
            float animation_rate; // 0x1ac4
            float turn_rate; // 0x1ac8
            float m_flFacingTarget; // 0x1acc
            float movespeed_bonus_self_max; // 0x1ad0
            float movespeed_bonus_ally_max; // 0x1ad4
            float movespeed_bonus_radius; // 0x1ad8
            float movespeed_bonus_duration; // 0x1adc
            float immunity_resist; // 0x1ae0
            std::int32_t m_iSuccessfulSwipesHittingHeroes; // 0x1ae4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster) == 0x1ae8);
    };
};
