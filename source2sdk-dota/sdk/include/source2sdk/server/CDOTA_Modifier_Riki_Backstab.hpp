#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_PersistentInvisibility.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Riki_Backstab : public source2sdk::server::CDOTA_Modifier_PersistentInvisibility
        {
        public:
            std::int32_t cleave; // 0x1a88
            float bonus_health_regen; // 0x1a8c
            float bonus_mana_regen; // 0x1a90
            std::int32_t creep_bonus_damage; // 0x1a94
            float bonus_xp_kill; // 0x1a98
            float bonus_xp_assist; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Backstab because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Riki_Backstab) == 0x1aa0);
    };
};
