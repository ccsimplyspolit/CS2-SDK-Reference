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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SpiritWalk_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1a58            
            std::int32_t m_nHeroTickDamageApplied; // 0x1a5c            
            source2sdk::entity2::GameTime_t m_fLastEffectsTime; // 0x1a60            
            float radius; // 0x1a64            
            float buff_duration; // 0x1a68            
            float debuff_duration; // 0x1a6c            
            std::int32_t max_damage; // 0x1a70            
            float max_stun; // 0x1a74            
            std::int32_t movespeed_bonus_pct; // 0x1a78            
            std::int32_t damage_per_tick; // 0x1a7c            
            float tick_rate; // 0x1a80            
            float max_threshold_duration; // 0x1a84            
            std::int32_t can_end_early; // 0x1a88            
            std::int32_t shard_bonus_damage_pct; // 0x1a8c            
            std::int32_t shard_heal_pct; // 0x1a90            
            float shard_creep_penalty; // 0x1a94            
            bool m_bIsReflection; // 0x1a98            
            uint8_t _pad1a99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SpiritWalk_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_SpiritWalk_Buff) == 0x1aa0);
    };
};
