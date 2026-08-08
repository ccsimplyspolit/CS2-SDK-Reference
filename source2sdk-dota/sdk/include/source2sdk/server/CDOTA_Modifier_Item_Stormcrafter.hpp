#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Stormcrafter : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x1a78
            std::int32_t passive_movement_bonus; // 0x1a7c
            float range; // 0x1a80
            std::int32_t damage; // 0x1a84
            float slow_duration; // 0x1a88
            float bonus_mana_regen; // 0x1a8c
            std::int32_t max_targets; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Stormcrafter because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Stormcrafter) == 0x1a98);
    };
};
