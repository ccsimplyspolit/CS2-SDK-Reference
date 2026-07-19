#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelTrackedProjectile.hpp"

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
        // Size: 0x948
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_BatSwarmProjectile : public source2sdk::server::CCitadelTrackedProjectile
        {
        public:
            uint8_t _pad0890[0x8c]; // 0x890
            Vector m_vecTargetVelocity; // 0x91c            
            Vector m_vecLastVelocity; // 0x928            
            source2sdk::entity2::GameTime_t m_SpawnTime; // 0x934            
            uint8_t _pad0938[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_BatSwarmProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_BatSwarmProjectile) == 0x948);
    };
};
