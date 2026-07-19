#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x738
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Warlock_Upheaval : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            VectorWS m_vPosition; // 0x6a8            
            float aoe; // 0x6b4            
            std::int32_t slow_per_second; // 0x6b8            
            std::int32_t aspd_per_second; // 0x6bc            
            std::int32_t max_slow; // 0x6c0            
            std::int32_t base_damage; // 0x6c4            
            std::int32_t damage_per_second; // 0x6c8            
            std::int32_t max_damage; // 0x6cc            
            float damage_tick_interval; // 0x6d0            
            uint8_t _pad06d4[0x4]; // 0x6d4
            source2sdk::client::CountdownTimer m_timer; // 0x6d8            
            source2sdk::client::CountdownTimer m_shardTimer; // 0x6f0            
            float duration; // 0x708            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x70c            
            float m_flCurrentSlow; // 0x710            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x714            
            source2sdk::client::ParticleIndex_t m_nCastFXIndex; // 0x718            
            uint8_t _pad071c[0x14]; // 0x71c
            bool m_bTargetCast; // 0x730            
            uint8_t _pad0731[0x3]; // 0x731
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x734            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Warlock_Upheaval) == 0x738);
    };
};
