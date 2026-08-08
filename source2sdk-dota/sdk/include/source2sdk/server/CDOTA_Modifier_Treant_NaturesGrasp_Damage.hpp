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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_NaturesGrasp_Damage : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_slow; // 0x1a78
            float damage_per_second; // 0x1a7c
            float creep_penalty; // 0x1a80
            float tick_interval; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Damage because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_NaturesGrasp_Damage) == 0x1a88);
    };
};
