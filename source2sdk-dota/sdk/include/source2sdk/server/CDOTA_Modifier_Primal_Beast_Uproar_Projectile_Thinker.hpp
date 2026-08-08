#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1ad0
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
            uint8_t _pad1a9c[0x4]; // 0x1a9c
            // m_vecEnemiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEnemiesHit;
            char m_vecEnemiesHit[0x18]; // 0x1aa0
            // m_vecProjectileHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecProjectileHandles;
            char m_vecProjectileHandles[0x18]; // 0x1ab8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker) == 0x1ad0);
    };
};
