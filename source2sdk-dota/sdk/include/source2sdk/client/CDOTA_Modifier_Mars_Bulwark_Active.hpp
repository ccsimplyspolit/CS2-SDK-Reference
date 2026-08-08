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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t redirect_chance; // 0x1a78
            float redirect_range; // 0x1a7c
            float forward_angle; // 0x1a80
            float side_angle; // 0x1a84
            float redirect_speed_penatly; // 0x1a88
            float redirect_close_range; // 0x1a8c
            std::int32_t attack_redirection_grace_distance; // 0x1a90
            bool forced_movement_immunity; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            std::int32_t m_nPoseParameterWE; // 0x1a98
            std::int32_t m_nPoseParameterNS; // 0x1a9c
            float m_flLastPoseX; // 0x1aa0
            float m_flLastPoseY; // 0x1aa4
            std::int32_t m_nLastMaxDirection; // 0x1aa8
            VectorWS m_vLastOrigin; // 0x1aac
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x1ab8
            Vector m_vFacing; // 0x1abc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Active) == 0x1ac8);
    };
};
