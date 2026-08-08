#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_DebuffImmune.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1b28
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Rollup : public source2sdk::client::CDOTA_Modifier_DebuffImmune
        {
        public:
            std::int32_t mp_cost_per_second; // 0x1a78
            float tick_interval; // 0x1a7c
            float forward_move_speed; // 0x1a80
            float turn_rate_boosted; // 0x1a84
            float turn_rate; // 0x1a88
            float hit_radius; // 0x1a8c
            float knockback_radius; // 0x1a90
            float magic_resistance; // 0x1a94
            bool m_bHitFirstUpdate; // 0x1a98
            uint8_t _pad1a99[0x3]; // 0x1a99
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x1a9c
            float hit_recover_time; // 0x1aa0
            source2sdk::entity2::GameTime_t m_flJumpEndTime; // 0x1aa4
            float jump_recover_time; // 0x1aa8
            float m_flTurnBoostProgress; // 0x1aac
            float m_flFacingTarget; // 0x1ab0
            source2sdk::entity2::GameTime_t m_flLastHeroAttackTime; // 0x1ab4
            bool m_bIsJumping; // 0x1ab8
            uint8_t _pad1ab9[0x3]; // 0x1ab9
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1abc
            float m_flGyroshellDurationRemaining; // 0x1ac0
            uint8_t _pad1ac4[0x4]; // 0x1ac4
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x1ac8
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x1ae0
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x1af8
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1b10
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Rollup because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Rollup) == 0x1b28);
    };
};
