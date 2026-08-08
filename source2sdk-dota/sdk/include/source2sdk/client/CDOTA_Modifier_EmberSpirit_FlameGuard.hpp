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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EmberSpirit_FlameGuard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t absorb_amount; // 0x1a78
            std::int32_t damage_per_second; // 0x1a7c
            float radius; // 0x1a80
            float tick_interval; // 0x1a84
            std::int32_t shield_pct_absorb; // 0x1a88
            std::int32_t m_nAbsorbRemaining; // 0x1a8c
            float m_flShowParticleInterval; // 0x1a90
            bool m_bDestroy; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            float linger_duration; // 0x1a98
            uint8_t _pad1a9c[0x14];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FlameGuard because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EmberSpirit_FlameGuard) == 0x1ab0);
    };
};
