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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tower_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_armor; // 0x1a78
            bool m_bOverrideArmor; // 0x1a7c
            uint8_t _pad1a7d[0x3]; // 0x1a7d
            float hp_regen; // 0x1a80
            bool m_bOverrideRegen; // 0x1a84
            uint8_t _pad1a85[0x3]; // 0x1a85
            std::int32_t m_nRadius; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Tower_Aura because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tower_Aura) == 0x1a90);
    };
};
