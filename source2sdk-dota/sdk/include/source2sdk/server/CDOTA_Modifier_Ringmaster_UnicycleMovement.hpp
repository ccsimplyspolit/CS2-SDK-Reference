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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_UnicycleMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_speed; // 0x1a78
            float acceleration; // 0x1a7c
            float turn_rate_min; // 0x1a80
            float turn_rate_max; // 0x1a84
            float impact_radius; // 0x1a88
            float tree_impact_speed_divisor; // 0x1a8c
            float knockback_distance; // 0x1a90
            float damage_threshold; // 0x1a94
            float damage_grace_period; // 0x1a98
            float m_flCurrentSpeed; // 0x1a9c
            float m_bCrashScheduled; // 0x1aa0
            float m_flDesiredYaw; // 0x1aa4
            source2sdk::client::ParticleIndex_t m_nMaxSpeedFXIndex; // 0x1aa8
            // m_hUnicycle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnicycle;
            char m_hUnicycle[0x4]; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_UnicycleMovement because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_UnicycleMovement) == 0x1ab0);
    };
};
