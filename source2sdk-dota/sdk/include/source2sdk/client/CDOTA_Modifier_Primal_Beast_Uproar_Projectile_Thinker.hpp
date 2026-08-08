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
        class CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t projectiles_per_stack; // 0x1a78
            std::int32_t projectile_speed; // 0x1a7c
            float projectile_distance; // 0x1a80
            float projectile_width; // 0x1a84
            std::int32_t splinter_angle; // 0x1a88
            float split_delay; // 0x1a8c
            std::int32_t projectile_waves; // 0x1a90
            std::int32_t m_nCurrentWaveCount; // 0x1a94
            std::int32_t tectonic_shift_projectiles; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker) == 0x1aa0);
    };
};
