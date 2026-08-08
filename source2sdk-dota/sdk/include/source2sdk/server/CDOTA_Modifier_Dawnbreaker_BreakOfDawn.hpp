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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public source2sdk::client::CDOTA_Buff
        {
        public:
            float max_dmg_pct; // 0x1a78
            float max_vision_pct; // 0x1a7c
            bool heal_amp; // 0x1a80
            uint8_t _pad1a81[0x3]; // 0x1a81
            float m_flDaytimeStart; // 0x1a84
            float m_flNighttimeStart; // 0x1a88
            bool m_bDaytimeNormal; // 0x1a8c
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            float day_threshold; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_BreakOfDawn because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_BreakOfDawn) == 0x1a98);
    };
};
