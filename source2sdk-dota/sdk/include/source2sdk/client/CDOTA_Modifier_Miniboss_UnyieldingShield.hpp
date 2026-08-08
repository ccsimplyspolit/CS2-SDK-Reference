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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Miniboss_UnyieldingShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_absorb; // 0x1a78
            float regen_per_second; // 0x1a7c
            float regen_bonus_per_interval; // 0x1a80
            std::int32_t status_resistance; // 0x1a84
            bool smaller_shield; // 0x1a88
            uint8_t _pad1a89[0x3]; // 0x1a89
            float m_flDamageAbsorbed; // 0x1a8c
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x1a90
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x1a94
            std::int32_t m_nVisualTeam; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Miniboss_UnyieldingShield because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Miniboss_UnyieldingShield) == 0x1aa0);
    };
};
