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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Dismember_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vDestination; // 0x1a78
            std::int32_t pull_units_per_second; // 0x1a84
            float pull_distance_limit; // 0x1a88
            uint8_t _pad1a8c[0x14]; // 0x1a8c
            float animation_rate; // 0x1aa0
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember_Pull because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Dismember_Pull) == 0x1aa8);
    };
};
