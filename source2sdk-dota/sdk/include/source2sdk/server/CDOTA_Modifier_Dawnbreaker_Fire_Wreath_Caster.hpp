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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x1a58            
            std::int32_t shard_movement_penalty; // 0x1a5c            
            float swipe_radius; // 0x1a60            
            float swipe_damage; // 0x1a64            
            float smash_radius; // 0x1a68            
            float smash_damage; // 0x1a6c            
            float m_flCurrentSpeed; // 0x1a70            
            float flSwipeInterval; // 0x1a74            
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1a78            
            std::int32_t iCurrentAttack; // 0x1a7c            
            std::int32_t total_attacks; // 0x1a80            
            float smash_stun_duration; // 0x1a84            
            float sweep_stun_duration; // 0x1a88            
            bool m_bHasCompletedMove; // 0x1a8c            
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            float duration; // 0x1a90            
            Vector m_vTargetHorizontalDirection; // 0x1a94            
            float smash_distance_from_hero; // 0x1aa0            
            float animation_rate; // 0x1aa4            
            float turn_rate; // 0x1aa8            
            float m_flFacingTarget; // 0x1aac            
            float movespeed_bonus_self_max; // 0x1ab0            
            float movespeed_bonus_ally_max; // 0x1ab4            
            float movespeed_bonus_radius; // 0x1ab8            
            float movespeed_bonus_duration; // 0x1abc            
            float immunity_resist; // 0x1ac0            
            std::int32_t m_iSuccessfulSwipesHittingHeroes; // 0x1ac4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Fire_Wreath_Caster) == 0x1ac8);
    };
};
