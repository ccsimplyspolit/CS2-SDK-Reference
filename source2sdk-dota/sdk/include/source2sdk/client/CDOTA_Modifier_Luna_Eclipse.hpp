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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_Eclipse : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a78
            float radius; // 0x1a7c
            std::int32_t beams; // 0x1a80
            std::int32_t hit_count; // 0x1a84
            std::int32_t m_iBeamDamage; // 0x1a88
            float beam_interval; // 0x1a8c
            float stun_duration; // 0x1a90
            VectorWS vPosition; // 0x1a94
            bool bAreaTarget; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            std::int32_t m_iTickCount; // 0x1aa4
            source2sdk::client::ParticleIndex_t m_nMoonlightFXIndex; // 0x1aa8
            uint8_t _pad1aac[0x4]; // 0x1aac
            // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_HitTargets;
            char m_HitTargets[0x18]; // 0x1ab0
            float m_flBeamStun; // 0x1ac8
            uint8_t _pad1acc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Luna_Eclipse) == 0x1ad0);
    };
};
