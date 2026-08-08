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
        class CDOTA_Modifier_Techies_SnareTrap_Slowed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x1a78
            float damage_interval; // 0x1a7c
            float move_slow_pct; // 0x1a80
            float cast_slow_pct; // 0x1a84
            float effect_radius; // 0x1a88
            bool m_bEscaped; // 0x1a8c
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            VectorWS vTetherOrigin; // 0x1a90
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_SnareTrap_Slowed because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_SnareTrap_Slowed) == 0x1aa0);
    };
};
