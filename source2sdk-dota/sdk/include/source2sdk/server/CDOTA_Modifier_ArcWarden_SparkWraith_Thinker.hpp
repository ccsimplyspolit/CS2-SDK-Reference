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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float wraith_vision_radius; // 0x1a7c
            std::int32_t wraith_speed; // 0x1a80
            uint8_t _pad1a84[0x14]; // 0x1a84
            float activation_delay; // 0x1a98
            float think_interval; // 0x1a9c
            float m_flSparkDamage; // 0x1aa0
            std::int32_t m_nViewerID; // 0x1aa4
            std::int32_t m_nViewerTeam; // 0x1aa8
            bool m_bActive; // 0x1aac
            uint8_t _pad1aad[0x3]; // 0x1aad
            std::int32_t maximum_targets; // 0x1ab0
            float second_wraith_damage_pct; // 0x1ab4
            float second_wraith_speed_pct; // 0x1ab8
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x1ac0);
    };
};
