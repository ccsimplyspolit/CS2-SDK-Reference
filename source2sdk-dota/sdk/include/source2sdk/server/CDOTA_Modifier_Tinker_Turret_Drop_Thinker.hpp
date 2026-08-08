#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_Tinker_Turret_Drop_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float missile_damage; // 0x1a78
            float radius; // 0x1a7c
            float turret_placement_radius; // 0x1a80
            float delay; // 0x1a84
            float drop_knockback_distance; // 0x1a88
            float drop_knockback_distance_tinker; // 0x1a8c
            float drop_knockback_duration; // 0x1a90
            float drop_knockback_duration_tinker; // 0x1a94
            float slow_duration; // 0x1a98
            float missile_target_range; // 0x1a9c
            float activation_time; // 0x1aa0
            float turret_duration; // 0x1aa4
            std::int32_t turrets_per_drop; // 0x1aa8
            std::int32_t extra_turrets_per_drop; // 0x1aac
            float drop_damage; // 0x1ab0
            float pre_delay; // 0x1ab4
            bool m_bAttachToRocket1; // 0x1ab8
            uint8_t _pad1ab9[0x7]; // 0x1ab9
            // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitHeroes;
            char m_vecHitHeroes[0x18]; // 0x1ac0
            bool m_bHitInvisibleHeroes; // 0x1ad8
            uint8_t _pad1ad9[0x3]; // 0x1ad9
            source2sdk::client::ParticleIndex_t m_nIndicatorParticle; // 0x1adc
            bool m_bWaitingForPreDelay; // 0x1ae0
            bool m_bTurretsSpawned; // 0x1ae1
            uint8_t _pad1ae2[0x6]; // 0x1ae2
            // m_vecTurrets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTurrets;
            char m_vecTurrets[0x18]; // 0x1ae8
            // m_vecTurretActivationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecTurretActivationTimes;
            char m_vecTurretActivationTimes[0x18]; // 0x1b00
            float m_flTotalTurretLifeTime; // 0x1b18
            float m_flTurretSpawnTime; // 0x1b1c
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x1b20
            uint8_t _pad1b24[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_Turret_Drop_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tinker_Turret_Drop_Thinker) == 0x1b28);
    };
};
