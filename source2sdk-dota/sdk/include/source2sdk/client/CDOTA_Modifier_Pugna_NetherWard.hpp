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
        class CDOTA_Modifier_Pugna_NetherWard : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float mana_multiplier; // 0x1a7c
            float mana_drained_per_attack; // 0x1a80
            std::int32_t attacks_to_destroy; // 0x1a84
            std::int32_t health_restore_pct; // 0x1a88
            std::int32_t mana_restore_pct; // 0x1a8c
            float self_restoration_range; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_NetherWard because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pugna_NetherWard) == 0x1a98);
    };
};
