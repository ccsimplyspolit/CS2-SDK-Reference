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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Knockdown : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flStandUpDuration; // 0x1a78
            float m_flKnockDownDuration; // 0x1a7c
            bool m_bDebuff; // 0x1a80
            bool m_bStandingUp; // 0x1a81
            uint8_t _pad1a82[0x6];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Knockdown because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nian_Knockdown) == 0x1a88);
    };
};
