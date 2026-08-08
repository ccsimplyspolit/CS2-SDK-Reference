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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Plus_HighFiveRequested : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t acknowledge_range; // 0x1a78
            float think_interval; // 0x1a7c
            float acknowledged_cooldown; // 0x1a80
            bool m_bAcknowledged; // 0x1a84
            bool m_bWithEnemy; // 0x1a85
            bool m_bFirstThink; // 0x1a86
            uint8_t _pad1a87[0x1]; // 0x1a87
            std::int32_t high_five_level; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Plus_HighFiveRequested because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Plus_HighFiveRequested) == 0x1a90);
    };
};
