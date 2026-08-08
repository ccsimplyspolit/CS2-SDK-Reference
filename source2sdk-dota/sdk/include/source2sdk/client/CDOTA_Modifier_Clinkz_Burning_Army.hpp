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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_Burning_Army : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_rate; // 0x1a78
            std::int32_t damage_percent; // 0x1a7c
            std::int32_t skeleton_health; // 0x1a80
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a84
            std::int32_t skeleton_building_damage_reduction; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Burning_Army because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Clinkz_Burning_Army) == 0x1a90);
    };
};
