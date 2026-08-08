#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1ad8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x1a78
            float m_flFacingTarget; // 0x1a7c
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1a80
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1a84
            float m_flCurDistance; // 0x1a88
            VectorWS m_vAimTarget; // 0x1a8c
            float m_fLastTurnAmount; // 0x1a98
            std::int32_t m_nProjectilesLaunched; // 0x1a9c
            bool m_bDestroyOnNextThink; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            std::int32_t m_nProjectilesToLaunch; // 0x1aa4
            bool has_bonus_projectile; // 0x1aa8
            uint8_t _pad1aa9[0x3]; // 0x1aa9
            std::int32_t projectile_count; // 0x1aac
            float projectile_speed; // 0x1ab0
            float projectile_width; // 0x1ab4
            float projectile_vision; // 0x1ab8
            float turn_rate; // 0x1abc
            float min_range; // 0x1ac0
            float impact_radius; // 0x1ac4
            float min_lob_travel_time; // 0x1ac8
            float max_lob_travel_time; // 0x1acc
            float delay_after_last_projectile; // 0x1ad0
            uint8_t _pad1ad4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x1ad8);
    };
};
