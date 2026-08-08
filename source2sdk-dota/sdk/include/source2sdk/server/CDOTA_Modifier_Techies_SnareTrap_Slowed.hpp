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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_SnareTrap_Slowed : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x4]; // 0x1a78
            float damage; // 0x1a7c
            float damage_interval; // 0x1a80
            float move_slow_pct; // 0x1a84
            float cast_slow_pct; // 0x1a88
            float effect_radius; // 0x1a8c
            bool m_bEscaped; // 0x1a90
            uint8_t _pad1a91[0x3]; // 0x1a91
            VectorWS vTetherOrigin; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_SnareTrap_Slowed because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_SnareTrap_Slowed) == 0x1aa0);
    };
};
