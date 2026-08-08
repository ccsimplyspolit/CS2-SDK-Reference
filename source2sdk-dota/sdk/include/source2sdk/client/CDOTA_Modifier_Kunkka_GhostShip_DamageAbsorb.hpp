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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flAccumulatedDamage; // 0x1a78
            float movespeed_bonus; // 0x1a7c
            float ghostship_absorb; // 0x1a80
            float m_flMoveSpeedBonus; // 0x1a84
            float m_flAbsorb; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kunkka_GhostShip_DamageAbsorb) == 0x1a90);
    };
};
