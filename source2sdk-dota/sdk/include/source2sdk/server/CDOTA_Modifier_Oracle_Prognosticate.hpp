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
        class CDOTA_Modifier_Oracle_Prognosticate : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t current_rune_location; // 0x1a78
            std::int32_t next_rune_location; // 0x1a7c
            std::int32_t current_rune_type; // 0x1a80
            std::int32_t next_rune_type; // 0x1a84
            bool started_spawning; // 0x1a88
            uint8_t _pad1a89[0x3]; // 0x1a89
            float next_rune_spawn_time; // 0x1a8c
            bool m_bIsActive; // 0x1a90
            uint8_t _pad1a91[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_Prognosticate because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Oracle_Prognosticate) == 0x1a98);
    };
};
