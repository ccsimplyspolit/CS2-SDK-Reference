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
        class CDOTA_Modifier_Tinker_Defensive_Matrix : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_absorb; // 0x1a78
            std::int32_t status_resistance; // 0x1a7c
            std::int32_t cooldown_reduction; // 0x1a80
            std::int32_t flicker_range; // 0x1a84
            std::int32_t flicker_angle; // 0x1a88
            bool m_bStartedTimer; // 0x1a8c
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            std::int32_t m_nDamageAbsorbed; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_Defensive_Matrix because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tinker_Defensive_Matrix) == 0x1a98);
    };
};
