#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_NightStalker_HunterInTheNight : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movement_speed_pct_night; // 0x1a78
            std::int32_t bonus_attack_speed_night; // 0x1a7c
            std::int32_t bonus_status_resist_night; // 0x1a80
            std::int32_t reset_cooldowns; // 0x1a84
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a88
            bool m_bIsDay; // 0x1a8c
            uint8_t _pad1a8d[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_HunterInTheNight because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_NightStalker_HunterInTheNight) == 0x1a90);
    };
};
