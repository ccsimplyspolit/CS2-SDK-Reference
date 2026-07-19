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
        // Size: 0x1b00
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Penguin : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLifetimeGained; // 0x1a58            
            VectorWS m_vTargetPos; // 0x1a5c            
            std::int32_t m_nCurrentSpeed; // 0x1a68            
            source2sdk::entity2::GameTime_t m_fLastBumpTime; // 0x1a6c            
            VectorWS m_vLastPos; // 0x1a70            
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x1a7c            
            Vector m_vDir; // 0x1a80            
            VectorWS m_vRunEndPos; // 0x1a8c            
            bool m_bIsInInitialRun; // 0x1a98            
            uint8_t _pad1a99[0x3]; // 0x1a99
            VectorWS m_vJumpEndPos; // 0x1a9c            
            bool m_bPlayedVroomSinceLastCrash; // 0x1aa8            
            uint8_t _pad1aa9[0x3]; // 0x1aa9
            source2sdk::client::ParticleIndex_t m_nVroomFX; // 0x1aac            
            source2sdk::entity2::GameTime_t m_fLastSpeedStepTime; // 0x1ab0            
            source2sdk::entity2::GameTime_t m_fLastSpeechTime; // 0x1ab4            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1ab8            
            std::int32_t m_nBumpsSinceLastCrash; // 0x1abc            
            // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastBumpingHero;
            char m_hLastBumpingHero[0x4]; // 0x1ac0            
            std::int32_t initial_speed; // 0x1ac4            
            std::int32_t max_speed; // 0x1ac8            
            std::int32_t speed_step; // 0x1acc            
            float speed_step_interval; // 0x1ad0            
            float bump_delay; // 0x1ad4            
            float bump_delay_absolute; // 0x1ad8            
            std::int32_t bump_collision_radius; // 0x1adc            
            std::int32_t run_distance; // 0x1ae0            
            std::int32_t jump_distance; // 0x1ae4            
            std::int32_t speed_after_crash; // 0x1ae8            
            std::int32_t speed_gain_per_hero_bump; // 0x1aec            
            float max_gainable_lifetime; // 0x1af0            
            float lifetime_gain_per_hero_bump; // 0x1af4            
            float min_speech_repeat_time; // 0x1af8            
            uint8_t _pad1afc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_Penguin) == 0x1b00);
    };
};
