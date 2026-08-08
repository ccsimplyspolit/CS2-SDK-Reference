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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_LanceOfPursuit : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_mana; // 0x1a78
            std::int32_t bonus_strength; // 0x1a7c
            std::int32_t backstab_damage; // 0x1a80
            std::int32_t backstab_angle; // 0x1a84
            float slow_duration; // 0x1a88
            bool m_bBackstab; // 0x1a8c
            uint8_t _pad1a8d[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_LanceOfPursuit because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_LanceOfPursuit) == 0x1a90);
    };
};
