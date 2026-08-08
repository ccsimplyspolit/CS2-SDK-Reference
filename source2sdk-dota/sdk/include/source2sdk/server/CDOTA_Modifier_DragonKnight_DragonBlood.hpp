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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DragonKnight_DragonBlood : public source2sdk::client::CDOTA_Buff
        {
        public:
            float health_regen; // 0x1a78
            float armor; // 0x1a7c
            float regen_and_armor_multiplier_during_dragon_form; // 0x1a80
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_DragonBlood because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DragonKnight_DragonBlood) == 0x1a88);
    };
};
