#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Muerta_Ofrenda_Invulnerable : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78
            source2sdk::client::ParticleIndex_t m_nFXIndexAoE; // 0x1a7c
            float effect_radius; // 0x1a80
            bool bActive; // 0x1a84
            uint8_t _pad1a85[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Ofrenda_Invulnerable because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Muerta_Ofrenda_Invulnerable) == 0x1a88);
    };
};
