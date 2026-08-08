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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BounceLeap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float give_up_distance; // 0x1a78
            float ground_jump_distance; // 0x1a7c
            float m_flZDelta; // 0x1a80
            float perched_day_vision; // 0x1a84
            float perched_night_vision; // 0x1a88
            VectorWS m_vStart; // 0x1a8c
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a98
            VectorWS m_vTargetPos; // 0x1a9c
            float m_flSpeed; // 0x1aa8
            bool m_bTargetingEntity; // 0x1aac
            bool m_bGroundToTree; // 0x1aad
            bool m_bTreeToGround; // 0x1aae
            bool m_bTreeToTree; // 0x1aaf
            bool m_bIsSpringJump; // 0x1ab0
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            float m_fSpringChanneledPercent; // 0x1ab4
            std::int32_t m_nLeapSpeed; // 0x1ab8
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1abc
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x1ac0
            float m_flFlightDuration; // 0x1ac4
            float m_flCurrentTimeVert; // 0x1ac8
            uint8_t _pad1acc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x1ad0);
    };
};
