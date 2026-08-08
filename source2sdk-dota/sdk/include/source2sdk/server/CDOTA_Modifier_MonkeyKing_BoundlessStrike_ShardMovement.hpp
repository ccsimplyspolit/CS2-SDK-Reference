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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1a78
            VectorWS m_vStartPosition; // 0x1a7c
            float m_flCurrentTimeHoriz; // 0x1a88
            float m_flCurrentTimeVert; // 0x1a8c
            bool m_bHorizontalMotionInterrupted; // 0x1a90
            uint8_t _pad1a91[0x3]; // 0x1a91
            Vector m_vHorizontalVelocity; // 0x1a94
            VectorWS m_vLastKnownTargetPosition; // 0x1aa0
            float m_flInitialVelocityZ; // 0x1aac
            std::int32_t acceleration_z; // 0x1ab0
            std::int32_t min_height_above_lowest; // 0x1ab4
            std::int32_t min_height_above_highest; // 0x1ab8
            std::int32_t max_horizontal_acceleration; // 0x1abc
            std::int32_t spring_channel_pct; // 0x1ac0
            uint8_t _pad1ac4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement) == 0x1ac8);
    };
};
