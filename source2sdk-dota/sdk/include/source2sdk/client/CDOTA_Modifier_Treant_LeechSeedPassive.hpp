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
        class CDOTA_Modifier_Treant_LeechSeedPassive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float leech_heal; // 0x1a78
            float leech_damage; // 0x1a7c
            float duration; // 0x1a80
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeedPassive because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_LeechSeedPassive) == 0x1a88);
    };
};
