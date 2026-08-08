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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x1a78
            float m_flFacingTarget; // 0x1a7c
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1a80
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1a84
            float m_flCurDistance; // 0x1a88
            VectorWS m_vAimTarget; // 0x1a8c
            float m_fLastTurnAmount; // 0x1a98
            std::int32_t m_nProjectilesLaunched; // 0x1a9c
            bool m_bDestroyOnNextThink; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            std::int32_t m_nProjectilesToLaunch; // 0x1aa4
            uint8_t _pad1aa8[0x14]; // 0x1aa8
            bool has_bonus_projectile; // 0x1abc
            uint8_t _pad1abd[0x3]; // 0x1abd
            std::int32_t projectile_count; // 0x1ac0
            float projectile_speed; // 0x1ac4
            float projectile_width; // 0x1ac8
            float projectile_vision; // 0x1acc
            float turn_rate; // 0x1ad0
            float min_range; // 0x1ad4
            float impact_radius; // 0x1ad8
            float min_lob_travel_time; // 0x1adc
            float max_lob_travel_time; // 0x1ae0
            float delay_after_last_projectile; // 0x1ae4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x1ae8);
    };
};
