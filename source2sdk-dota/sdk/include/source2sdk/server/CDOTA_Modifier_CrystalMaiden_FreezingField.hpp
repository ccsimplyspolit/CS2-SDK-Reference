#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1af0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CrystalMaiden_FreezingField : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            std::int32_t damage; // 0x1a5c            
            std::int32_t bonus_armor; // 0x1a60            
            float explosion_interval; // 0x1a64            
            float shard_bonus_explosion; // 0x1a68            
            float explosion_radius; // 0x1a6c            
            float slow_duration; // 0x1a70            
            std::int32_t explosion_min_dist; // 0x1a74            
            float explosion_max_dist; // 0x1a78            
            float frostbite_delay; // 0x1a7c            
            source2sdk::entity2::GameTime_t m_fLastTick; // 0x1a80            
            float m_fTimeAccumulator; // 0x1a84            
            std::int32_t m_iExplosionCount; // 0x1a88            
            std::int32_t m_iExplosionTotalCount; // 0x1a8c            
            std::int32_t m_iExplosionQuadrant; // 0x1a90            
            std::int32_t m_iExplosionDistance; // 0x1a94            
            std::int32_t shard_self_movement_speed_slow_pct; // 0x1a98            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c            
            uint8_t _pad1aa0[0x18]; // 0x1aa0
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1ab8            
            // m_hHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitHeroes;
            char m_hHitHeroes[0x18]; // 0x1ad0            
            bool m_bHitInvisibleHero; // 0x1ae8            
            uint8_t _pad1ae9[0x3]; // 0x1ae9
            std::int32_t can_move; // 0x1aec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_FreezingField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_CrystalMaiden_FreezingField) == 0x1af0);
    };
};
