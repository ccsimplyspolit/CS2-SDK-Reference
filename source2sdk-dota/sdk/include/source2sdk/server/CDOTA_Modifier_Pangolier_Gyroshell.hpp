#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_DebuffImmune.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1b28
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Gyroshell : public source2sdk::server::CDOTA_Modifier_DebuffImmune
        {
        public:
            std::int32_t mp_cost_per_second; // 0x1a78
            float tick_interval; // 0x1a7c
            float forward_move_speed; // 0x1a80
            float move_speed_ramp_up_time; // 0x1a84
            float turn_rate_boosted; // 0x1a88
            float turn_rate; // 0x1a8c
            float hit_radius; // 0x1a90
            float knockback_radius; // 0x1a94
            std::int32_t damage_pct; // 0x1a98
            float magic_resistance; // 0x1a9c
            bool m_bHitFirstUpdate; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x1aa4
            float hit_recover_time; // 0x1aa8
            source2sdk::entity2::GameTime_t m_flJumpEndTime; // 0x1aac
            float jump_recover_time; // 0x1ab0
            float m_flTurnBoostProgress; // 0x1ab4
            float m_flFacingTarget; // 0x1ab8
            std::int32_t m_nInitialMovespeed; // 0x1abc
            bool m_bIsJumping; // 0x1ac0
            uint8_t _pad1ac1[0x3]; // 0x1ac1
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1ac4
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x1ac8
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x1ae0
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x1af8
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1b10
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Gyroshell because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pangolier_Gyroshell) == 0x1b28);
    };
};
