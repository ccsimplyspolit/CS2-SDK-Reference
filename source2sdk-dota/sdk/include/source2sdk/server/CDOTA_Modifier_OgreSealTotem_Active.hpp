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
        class CDOTA_Modifier_OgreSealTotem_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1a78
            float m_flInitialVelocity; // 0x1a7c
            VectorWS m_vStartPosition; // 0x1a80
            Vector m_vTargetHorizontalDirection; // 0x1a8c
            float m_flCurrentTimeHoriz; // 0x1a98
            float m_flCurrentTimeVert; // 0x1a9c
            bool m_bInterrupted; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            VectorWS m_vLastOrderPos; // 0x1aa4
            bool m_bIssuedOrder; // 0x1ab0
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            std::int32_t m_nCurrentBounce; // 0x1ab4
            std::int32_t leap_distance; // 0x1ab8
            float leap_speed; // 0x1abc
            float leap_acceleration; // 0x1ac0
            std::int32_t leap_radius; // 0x1ac4
            float leap_bonus_duration; // 0x1ac8
            bool m_bLaunched; // 0x1acc
            uint8_t _pad1acd[0x3]; // 0x1acd
            float m_flFacingTarget; // 0x1ad0
            float movement_turn_rate; // 0x1ad4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_OgreSealTotem_Active) == 0x1ad8);
    };
};
