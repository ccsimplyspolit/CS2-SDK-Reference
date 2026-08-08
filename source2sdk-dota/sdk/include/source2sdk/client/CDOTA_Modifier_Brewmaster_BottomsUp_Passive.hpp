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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_BottomsUp_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x18]; // 0x1a78
            std::int32_t brewed_up_per_ability; // 0x1a90
            std::int32_t brewed_up_per_proc; // 0x1a94
            std::int32_t brewed_up_max_stack; // 0x1a98
            float max_hp_regen; // 0x1a9c
            float brewed_up_min_speed; // 0x1aa0
            float brewed_up_max_speed; // 0x1aa4
            float speed_toggle_time; // 0x1aa8
            float stack_duration; // 0x1aac
            bool m_bMinimumSpeed; // 0x1ab0
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            source2sdk::entity2::GameTime_t m_SpeedToggleTime; // 0x1ab4
            std::int32_t m_nMaxHPRegen; // 0x1ab8
            std::int32_t m_nCurrentSpeed; // 0x1abc
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1ac0
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1ac4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_BottomsUp_Passive because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Brewmaster_BottomsUp_Passive) == 0x1ac8);
    };
};
