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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Special_Bonus_Mana_Break : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t value; // 0x1a78
            std::int32_t burn_illusions_ranged; // 0x1a7c
            std::int32_t burn_illusions_melee; // 0x1a80
            float damage_per_burn; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Special_Bonus_Mana_Break because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Special_Bonus_Mana_Break) == 0x1a88);
    };
};
