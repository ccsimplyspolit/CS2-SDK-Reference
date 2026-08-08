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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_Frogstomp_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_stomp; // 0x1a78
            std::int32_t total_ticks; // 0x1a7c
            float radius; // 0x1a80
            float stun_duration; // 0x1a84
            float stomp_interval; // 0x1a88
            float delay; // 0x1a8c
            std::int32_t infinite_stomps; // 0x1a90
            bool m_bStarted; // 0x1a94
            uint8_t _pad1a95[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_Frogstomp_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_Frogstomp_Thinker) == 0x1a98);
    };
};
