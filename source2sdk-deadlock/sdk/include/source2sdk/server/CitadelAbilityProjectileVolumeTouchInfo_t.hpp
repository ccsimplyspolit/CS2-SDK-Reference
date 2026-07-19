#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CitadelAbilityProjectileVolumeTouchInfo_t
        {
        public:
            bool m_bIsProjectileAsBullet; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            source2sdk::server::CBaseEntity* m_pProjectile; // 0x8            
            CCitadel_Bullet_Base* m_pBullet; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileVolumeTouchInfo_t, m_bIsProjectileAsBullet) == 0x0);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileVolumeTouchInfo_t, m_pProjectile) == 0x8);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileVolumeTouchInfo_t, m_pBullet) == 0x10);
        
        static_assert(sizeof(source2sdk::server::CitadelAbilityProjectileVolumeTouchInfo_t) == 0x18);
    };
};
