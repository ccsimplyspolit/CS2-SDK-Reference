#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_MoonGlaive_Shield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rotating_glaives; // 0x1a78
            float rotating_glaives_hit_radius; // 0x1a7c
            float rotating_glaives_speed; // 0x1a80
            float rotating_glaives_collision_damage; // 0x1a84
            float rotating_glaives_movement_radius; // 0x1a88
            float rotating_glaives_movement_radius_expand_speed_scale; // 0x1a8c
            float rotating_glaives_damage_reduction; // 0x1a90
            float rotating_glaives_duration; // 0x1a94
            std::int32_t bonus_movement_speed; // 0x1a98
            float m_flCurRotation; // 0x1a9c
            float m_flCurRadius; // 0x1aa0
            float m_flCurRadiusUnclamped; // 0x1aa4
            float m_flSecondsPerRotation; // 0x1aa8
            float m_flMaxRadius; // 0x1aac
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1ab0
            uint8_t _pad1ab4[0x34];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_MoonGlaive_Shield because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Luna_MoonGlaive_Shield) == 0x1ae8);
    };
};
