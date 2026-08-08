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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_DragonPotion : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_iOriginalAttackCapabilities; // 0x1a78
            uint8_t _pad1a7c[0x4]; // 0x1a7c
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1a80
            std::int32_t bonus_movement_speed; // 0x1a88
            std::int32_t bonus_attack_damage; // 0x1a8c
            std::int32_t bonus_attack_range; // 0x1a90
            std::int32_t attack_projectile_speed; // 0x1a94
            std::int32_t magic_resistance; // 0x1a98
            std::int32_t model_scale; // 0x1a9c
            std::int32_t skin_number; // 0x1aa0
            bool flying_movement; // 0x1aa4
            uint8_t _pad1aa5[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_DragonPotion because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_DragonPotion) == 0x1aa8);
    };
};
