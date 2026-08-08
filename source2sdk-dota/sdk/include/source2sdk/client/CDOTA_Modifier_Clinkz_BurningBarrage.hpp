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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_BurningBarrage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iArrowCount; // 0x1a78
            VectorWS m_vOriginalTarget; // 0x1a7c
            std::int32_t arrow_width; // 0x1a88
            float arrow_speed; // 0x1a8c
            float arrow_range_multiplier; // 0x1a90
            std::int32_t wave_count; // 0x1a94
            std::int32_t arrow_count_per_wave; // 0x1a98
            std::int32_t arrow_angle; // 0x1a9c
            std::int32_t m_iLoopCount; // 0x1aa0
            float m_flInterval; // 0x1aa4
            float m_flCycleDelay; // 0x1aa8
            float m_flTimeWaste; // 0x1aac
            source2sdk::entity2::GameTime_t m_flExpectedTime; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_BurningBarrage because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Clinkz_BurningBarrage) == 0x1ab8);
    };
};
