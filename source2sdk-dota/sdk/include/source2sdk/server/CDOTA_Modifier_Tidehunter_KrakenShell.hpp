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
        class CDOTA_Modifier_Tidehunter_KrakenShell : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iDamageTaken; // 0x1a78
            std::int32_t damage_reduction; // 0x1a7c
            std::int32_t bonus_reduction_per_kill; // 0x1a80
            float creep_reduction_penalty_pct; // 0x1a84
            float active_pct_effectiveness; // 0x1a88
            std::int32_t damage_cleanse; // 0x1a8c
            float damage_reset_interval; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_KrakenShell because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tidehunter_KrakenShell) == 0x1a98);
    };
};
