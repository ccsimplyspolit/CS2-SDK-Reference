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
        class CDOTA_Modifier_Treant_SuperBloom : public source2sdk::client::CDOTA_Buff
        {
        public:
            float strength_bonus; // 0x1a78
            float splash_pct; // 0x1a7c
            float splash_radius; // 0x1a80
            float movement_speed; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_SuperBloom because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_SuperBloom) == 0x1a88);
    };
};
