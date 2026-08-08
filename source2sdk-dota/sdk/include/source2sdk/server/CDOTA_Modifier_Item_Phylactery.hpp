#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Phylactery : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_all_stats; // 0x1a78
            float bonus_health_regen; // 0x1a7c
            float bonus_mana_regen; // 0x1a80
            float bonus_spell_damage; // 0x1a84
            float slow_duration; // 0x1a88
            float bonus_per_kill; // 0x1a8c
            float max_kill_bonus; // 0x1a90
            float kill_bonus_window; // 0x1a94
            // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTABaseAbility*> vecActivatedAbilities;
            char vecActivatedAbilities[0x18]; // 0x1a98
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Phylactery because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Phylactery) == 0x1ab0);
    };
};
