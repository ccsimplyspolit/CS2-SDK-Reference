#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t latch_range; // 0x1a78
            std::int32_t latch_vision; // 0x1a7c
            float latch_creation_delay; // 0x1a80
            float latch_duration; // 0x1a84
            uint8_t _pad1a88[0x14]; // 0x1a88
            bool m_bActive; // 0x1a9c
            uint8_t _pad1a9d[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_BrambleMaze_Thinker) == 0x1aa0);
    };
};
