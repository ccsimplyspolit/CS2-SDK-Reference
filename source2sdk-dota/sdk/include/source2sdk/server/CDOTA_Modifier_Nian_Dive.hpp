#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x1a78
            float m_flInitialVelocity; // 0x1a7c
            VectorWS m_vStartPosition; // 0x1a80
            Vector m_vTargetHorizontalDirection; // 0x1a8c
            VectorWS m_vTargetPosition; // 0x1a98
            float m_flCurrentTimeHoriz; // 0x1aa4
            float m_flCurrentTimeVert; // 0x1aa8
            bool m_bInterrupted; // 0x1aac
            uint8_t _pad1aad[0x3]; // 0x1aad
            float m_flHorizDelayTime; // 0x1ab0
            float m_flVertDelayTime; // 0x1ab4
            float m_flLeapSequenceDuration; // 0x1ab8
            float m_flClawDamageTime; // 0x1abc
            float m_flPlaybackRate; // 0x1ac0
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1ac4
            bool m_bPlayedSwipeSound; // 0x1ac8
            uint8_t _pad1ac9[0x3]; // 0x1ac9
            std::int32_t pounce_distance; // 0x1acc
            float pounce_speed; // 0x1ad0
            float pounce_acceleration; // 0x1ad4
            std::int32_t pounce_radius; // 0x1ad8
            std::int32_t pounce_damage; // 0x1adc
            std::int32_t stun_radius; // 0x1ae0
            float stun_duration; // 0x1ae4
            float leash_duration; // 0x1ae8
            float initial_delay; // 0x1aec
            float landing_delay; // 0x1af0
            float vertical_adjust; // 0x1af4
            float vertical_adjust_max_distance; // 0x1af8
            float vertical_adjust_min_distance; // 0x1afc
            std::int32_t claw_damage; // 0x1b00
            std::int32_t claw_damage_radius; // 0x1b04
            float claw_damage_delay; // 0x1b08
            float claw_damage_duration; // 0x1b0c
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x18]; // 0x1b10
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Dive) == 0x1b28);
    };
};
