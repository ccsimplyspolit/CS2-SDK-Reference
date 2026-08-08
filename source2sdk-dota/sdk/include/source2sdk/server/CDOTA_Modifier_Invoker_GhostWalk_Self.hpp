#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_GhostWalk_Self : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t self_slow; // 0x1a88
            std::int32_t apply_ice_wall_debuff; // 0x1a8c
            float area_of_effect; // 0x1a90
            float aura_fade_time; // 0x1a94
            float health_regen; // 0x1a98
            float mana_regen; // 0x1a9c
            float disable_time; // 0x1aa0
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x1aa4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_GhostWalk_Self because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_GhostWalk_Self) == 0x1aa8);
    };
};
