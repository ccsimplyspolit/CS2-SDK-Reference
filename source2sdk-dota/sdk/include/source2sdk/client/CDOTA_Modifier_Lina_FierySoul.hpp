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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lina_FierySoul : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t fiery_soul_attack_speed_bonus; // 0x1a78
            std::int32_t fiery_soul_magic_resist; // 0x1a7c
            float fiery_soul_move_speed_bonus; // 0x1a80
            std::int32_t fiery_soul_max_stacks; // 0x1a84
            float fiery_soul_stack_duration; // 0x1a88
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a8c
            source2sdk::entity2::GameTime_t m_flFierySoulDieTime; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Lina_FierySoul because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lina_FierySoul) == 0x1a98);
    };
};
