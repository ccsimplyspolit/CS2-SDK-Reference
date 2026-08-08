#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        class CDOTA_Modifier_Item_Foragers_Nuts_Consumed : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float bonus_stat; // 0x1a78
            float bonus_stat_uni; // 0x1a7c
            float bonus_str; // 0x1a80
            float bonus_agi; // 0x1a84
            float bonus_int; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Foragers_Nuts_Consumed because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Foragers_Nuts_Consumed) == 0x1a90);
    };
};
