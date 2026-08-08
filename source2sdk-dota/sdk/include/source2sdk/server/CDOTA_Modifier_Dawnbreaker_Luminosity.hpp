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
        class CDOTA_Modifier_Dawnbreaker_Luminosity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAppliesToCreeps; // 0x1a78
            uint8_t _pad1a79[0x3]; // 0x1a79
            std::int32_t attack_count; // 0x1a7c
            bool triggered_by_celestial_hammer; // 0x1a80
            bool m_bShouldIncrement; // 0x1a81
            uint8_t _pad1a82[0x2]; // 0x1a82
            std::int32_t m_nStackCount; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Luminosity) == 0x1a88);
    };
};
