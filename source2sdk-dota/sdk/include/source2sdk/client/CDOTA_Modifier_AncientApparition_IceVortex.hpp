#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AncientApparition_IceVortex : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t spell_resist_pct; // 0x1a78
            std::int32_t drag_speed; // 0x1a7c
            float aura_origin_x; // 0x1a80
            float aura_origin_y; // 0x1a84
            std::int32_t movement_speed_pct; // 0x1a88
            std::int32_t shard_attack_speed_reduction; // 0x1a8c
            std::int32_t damage_per_second; // 0x1a90
            VectorWS m_vCenter; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_IceVortex because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AncientApparition_IceVortex) == 0x1aa0);
    };
};
