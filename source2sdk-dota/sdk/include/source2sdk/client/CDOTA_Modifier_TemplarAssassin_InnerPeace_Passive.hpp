#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fElapsedTime; // 0x1a78
            float max_attack_range; // 0x1a7c
            float max_hp_regen; // 0x1a80
            float max_mana_regen; // 0x1a84
            float time_until_meditation; // 0x1a88
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            source2sdk::client::CountdownTimer m_StartMeditationTimer; // 0x1a90
            float m_fElapsedMeditationTime; // 0x1aa8
            float m_fElapsedLingerTime; // 0x1aac
            float time_until_max_bonus; // 0x1ab0
            float bonus_linger_time; // 0x1ab4
            std::int32_t m_nCurrentMaxStackCount; // 0x1ab8
            bool m_bHasBonusRange; // 0x1abc
            uint8_t _pad1abd[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive) == 0x1ac0);
    };
};
