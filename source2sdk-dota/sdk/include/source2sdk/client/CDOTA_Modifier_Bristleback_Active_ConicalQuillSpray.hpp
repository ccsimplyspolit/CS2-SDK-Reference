#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t activation_num_quill_sprays; // 0x1a78
            float activation_spray_interval; // 0x1a7c
            std::int32_t activation_angle; // 0x1a80
            std::int32_t cast_range_bonus; // 0x1a84
            std::int32_t activation_movement_speed_pct; // 0x1a88
            std::int32_t activation_turn_rate_pct; // 0x1a8c
            std::int32_t activation_disable_turning; // 0x1a90
            std::int32_t activation_ignore_cast_angle; // 0x1a94
            std::int32_t activation_turn_rate; // 0x1a98
            float activation_delay; // 0x1a9c
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1aa0
            bool bDelayFinished; // 0x1aa4
            uint8_t _pad1aa5[0x3]; // 0x1aa5
            float m_flFacingTarget; // 0x1aa8
            Vector m_vFacing; // 0x1aac
            std::int32_t m_nNumSprays; // 0x1ab8
            std::int32_t m_nPoseParameterWE; // 0x1abc
            std::int32_t m_nPoseParameterNS; // 0x1ac0
            float m_flLastPoseX; // 0x1ac4
            float m_flLastPoseY; // 0x1ac8
            std::int32_t m_nLastMaxDirection; // 0x1acc
            VectorWS m_vLastOrigin; // 0x1ad0
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x1adc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray) == 0x1ae0);
    };
};
