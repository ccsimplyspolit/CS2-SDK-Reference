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
        // Size: 0x1b08
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Gyroshell : public source2sdk::client::CDOTA_Modifier_DebuffImmune
        {
        public:
            std::int32_t mp_cost_per_second; // 0x1a58            
            float tick_interval; // 0x1a5c            
            float forward_move_speed; // 0x1a60            
            float move_speed_ramp_up_time; // 0x1a64            
            float turn_rate_boosted; // 0x1a68            
            float turn_rate; // 0x1a6c            
            float hit_radius; // 0x1a70            
            float knockback_radius; // 0x1a74            
            std::int32_t damage_pct; // 0x1a78            
            float magic_resistance; // 0x1a7c            
            bool m_bHitFirstUpdate; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            source2sdk::entity2::GameTime_t m_flHitEndTime; // 0x1a84            
            float hit_recover_time; // 0x1a88            
            source2sdk::entity2::GameTime_t m_flJumpEndTime; // 0x1a8c            
            float jump_recover_time; // 0x1a90            
            float m_flTurnBoostProgress; // 0x1a94            
            float m_flFacingTarget; // 0x1a98            
            std::int32_t m_nInitialMovespeed; // 0x1a9c            
            bool m_bIsJumping; // 0x1aa0            
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aa4            
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x1aa8            
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x1ac0            
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x1ad8            
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1af0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Gyroshell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Gyroshell) == 0x1b08);
    };
};
