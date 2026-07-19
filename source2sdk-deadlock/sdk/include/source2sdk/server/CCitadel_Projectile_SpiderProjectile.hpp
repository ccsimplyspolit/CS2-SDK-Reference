#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"

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
        // Size: 0xbf8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_SpiderProjectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextRandomPositionTime; // 0x860            
            uint8_t _pad0864[0x394];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_SpiderProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_SpiderProjectile) == 0xbf8);
    };
};
