#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8c0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_Viscous_GooGrenade : public source2sdk::server::CCitadelProjectile
        {
        public:
            std::int32_t m_nBounces; // 0x860            
            source2sdk::entity2::GameTime_t m_tNextDetonateTime; // 0x864            
            // m_vecLastHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecLastHitTargets;
            char m_vecLastHitTargets[0x18]; // 0x868            
            // m_vecProjectileHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecProjectileHitTargets;
            char m_vecProjectileHitTargets[0x18]; // 0x880            
            uint8_t _pad0898[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_Viscous_GooGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_Viscous_GooGrenade) == 0x8c0);
    };
};
