#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1ad8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Leap : public source2sdk::client::CDOTA_Buff
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
            float m_flPlaybackRate; // 0x1abc
            std::int32_t pounce_distance; // 0x1ac0
            float pounce_speed; // 0x1ac4
            float pounce_acceleration; // 0x1ac8
            float initial_delay; // 0x1acc
            float landing_delay; // 0x1ad0
            uint8_t _pad1ad4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Leap) == 0x1ad8);
    };
};
