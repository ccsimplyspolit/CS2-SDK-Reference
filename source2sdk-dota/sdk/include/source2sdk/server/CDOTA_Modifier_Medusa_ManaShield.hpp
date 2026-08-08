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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_ManaShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_mana; // 0x1a78
            float absorption_pct; // 0x1a7c
            float damage_per_mana; // 0x1a80
            float illusion_percentage; // 0x1a84
            float m_flDamageAccumulator; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_ManaShield because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Medusa_ManaShield) == 0x1a90);
    };
};
