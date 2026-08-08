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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mjollnir_Static : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x14]; // 0x1a78
            std::int32_t static_chance; // 0x1a8c
            std::int32_t static_strikes; // 0x1a90
            std::int32_t static_damage; // 0x1a94
            std::int32_t static_primary_radius; // 0x1a98
            std::int32_t static_seconary_radius; // 0x1a9c
            std::int32_t static_radius; // 0x1aa0
            float static_cooldown; // 0x1aa4
            std::int32_t chain_damage_per_charge; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir_Static because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Mjollnir_Static) == 0x1ab0);
    };
};
