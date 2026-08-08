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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_LeechSeed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_interval; // 0x1a78
            float leech_damage; // 0x1a7c
            float movement_slow; // 0x1a80
            float radius; // 0x1a84
            float leech_heal; // 0x1a88
            std::int32_t max_heal_units; // 0x1a8c
            std::int32_t projectile_speed; // 0x1a90
            float m_flAccumulatedDamage; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeed because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_LeechSeed) == 0x1a98);
    };
};
