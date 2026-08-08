#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_LiquidCourage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t min_health_threshold; // 0x1a78
            std::int32_t max_health_threshold; // 0x1a7c
            float status_resist; // 0x1a80
            std::int32_t min_speed; // 0x1a84
            std::int32_t max_speed; // 0x1a88
            float max_hp_regen; // 0x1a8c
            float speed_toggle_time; // 0x1a90
            std::int32_t m_nCurrentSpeed; // 0x1a94
            std::int32_t m_nMaxHPRegen; // 0x1a98
            bool m_bForceActive; // 0x1a9c
            bool m_bMinimumSpeed; // 0x1a9d
            uint8_t _pad1a9e[0x2]; // 0x1a9e
            source2sdk::entity2::GameTime_t m_SpeedToggleTime; // 0x1aa0
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aa4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_LiquidCourage because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Brewmaster_LiquidCourage) == 0x1aa8);
    };
};
