#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_PersistentInvisibility.hpp"

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
        class CDOTA_Modifier_Mirana_MoonlightShadow : public source2sdk::client::CDOTA_Modifier_PersistentInvisibility
        {
        public:
            float duration; // 0x1a88
            std::int32_t bonus_movement_speed; // 0x1a8c
            std::int32_t evasion; // 0x1a90
            float bonus_outgoing_damage_pct; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_MoonlightShadow because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mirana_MoonlightShadow) == 0x1a98);
    };
};
