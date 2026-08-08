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
        // Size: 0x1b20
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_Penguin : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLifetimeGained; // 0x1a78
            VectorWS m_vTargetPos; // 0x1a7c
            std::int32_t m_nCurrentSpeed; // 0x1a88
            source2sdk::entity2::GameTime_t m_fLastBumpTime; // 0x1a8c
            VectorWS m_vLastPos; // 0x1a90
            // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHit;
            char m_hLastHit[0x4]; // 0x1a9c
            Vector m_vDir; // 0x1aa0
            VectorWS m_vRunEndPos; // 0x1aac
            bool m_bIsInInitialRun; // 0x1ab8
            uint8_t _pad1ab9[0x3]; // 0x1ab9
            VectorWS m_vJumpEndPos; // 0x1abc
            bool m_bPlayedVroomSinceLastCrash; // 0x1ac8
            uint8_t _pad1ac9[0x3]; // 0x1ac9
            source2sdk::client::ParticleIndex_t m_nVroomFX; // 0x1acc
            source2sdk::entity2::GameTime_t m_fLastSpeedStepTime; // 0x1ad0
            source2sdk::entity2::GameTime_t m_fLastSpeechTime; // 0x1ad4
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1ad8
            std::int32_t m_nBumpsSinceLastCrash; // 0x1adc
            // m_hLastBumpingHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastBumpingHero;
            char m_hLastBumpingHero[0x4]; // 0x1ae0
            std::int32_t initial_speed; // 0x1ae4
            std::int32_t max_speed; // 0x1ae8
            std::int32_t speed_step; // 0x1aec
            float speed_step_interval; // 0x1af0
            float bump_delay; // 0x1af4
            float bump_delay_absolute; // 0x1af8
            std::int32_t bump_collision_radius; // 0x1afc
            std::int32_t run_distance; // 0x1b00
            std::int32_t jump_distance; // 0x1b04
            std::int32_t speed_after_crash; // 0x1b08
            std::int32_t speed_gain_per_hero_bump; // 0x1b0c
            float max_gainable_lifetime; // 0x1b10
            float lifetime_gain_per_hero_bump; // 0x1b14
            float min_speech_repeat_time; // 0x1b18
            uint8_t _pad1b1c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Penguin because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_Penguin) == 0x1b20);
    };
};
