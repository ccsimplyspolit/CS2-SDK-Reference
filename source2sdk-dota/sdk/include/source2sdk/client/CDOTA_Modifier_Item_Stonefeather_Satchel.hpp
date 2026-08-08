#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        class CDOTA_Modifier_Item_Stonefeather_Satchel : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float knockback_resistance; // 0x1a78
            float feather_movespeed; // 0x1a7c
            float rocks_armor; // 0x1a80
            std::int32_t m_iStat; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Stonefeather_Satchel because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Stonefeather_Satchel) == 0x1a88);
    };
};
