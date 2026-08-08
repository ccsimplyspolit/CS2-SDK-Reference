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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_WitchDoctor_Maledict : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iStartHealth; // 0x1a78
            float bonus_damage; // 0x1a7c
            float bonus_damage_threshold; // 0x1a80
            std::int32_t ticks; // 0x1a84
            std::int32_t iCurrentTick; // 0x1a88
            std::int32_t health_restoration_reduction; // 0x1a8c
            float spread_radius; // 0x1a90
            float spread_pct; // 0x1a94
            uint8_t _pad1a98[0x18];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Maledict because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_WitchDoctor_Maledict) == 0x1ab0);
    };
};
