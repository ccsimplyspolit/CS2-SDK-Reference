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
        class CDOTA_Modifier_Elder_Titan_Fundamental_Fury : public source2sdk::client::CDOTA_Buff
        {
        public:
            float move_pct_creeps; // 0x1a78
            float move_pct_heroes; // 0x1a7c
            float armor_creeps; // 0x1a80
            float armor_heroes; // 0x1a84
            float move_pct_cap; // 0x1a88
            std::int32_t m_nCreepsHit; // 0x1a8c
            std::int32_t m_nHeroesHit; // 0x1a90
            float m_fSpeedPercentage; // 0x1a94
            std::int32_t m_nDamage; // 0x1a98
            std::int32_t m_nArmor; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_Fundamental_Fury because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_Fundamental_Fury) == 0x1aa0);
    };
};
