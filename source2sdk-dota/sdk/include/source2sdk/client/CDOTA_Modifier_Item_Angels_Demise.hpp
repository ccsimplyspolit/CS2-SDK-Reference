#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTABaseAbility;
    };
};

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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Angels_Demise : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_all_stats; // 0x1a78
            std::int32_t bonus_health; // 0x1a7c
            std::int32_t bonus_mana; // 0x1a80
            float bonus_health_regen; // 0x1a84
            float bonus_mana_regen; // 0x1a88
            float bonus_spell_damage; // 0x1a8c
            float slow_duration; // 0x1a90
            float proc_cooldown; // 0x1a94
            // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_DOTABaseAbility*> vecActivatedAbilities;
            char vecActivatedAbilities[0x18]; // 0x1a98
            source2sdk::entity2::GameTime_t m_NextProcTime; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Angels_Demise because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Angels_Demise) == 0x1ab8);
    };
};
