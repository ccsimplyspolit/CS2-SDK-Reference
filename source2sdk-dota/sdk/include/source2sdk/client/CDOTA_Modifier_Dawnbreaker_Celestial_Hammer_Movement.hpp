#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nProjectileID; // 0x1a78
            std::int32_t projectile_speed; // 0x1a7c
            std::int32_t travel_speed_pct; // 0x1a80
            std::int32_t m_nMaxRange; // 0x1a84
            VectorWS m_vStartPoint; // 0x1a88
            VectorWS m_vLastTrailThinkerLocation; // 0x1a94
            VectorWS m_vEndPointShard; // 0x1aa0
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x1aac
            float flare_radius; // 0x1ab0
            bool bHasStartedBurning; // 0x1ab4
            uint8_t _pad1ab5[0x3]; // 0x1ab5
            float flare_debuff_duration; // 0x1ab8
            float fire_trail_health_regen; // 0x1abc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x1ac0);
    };
};
