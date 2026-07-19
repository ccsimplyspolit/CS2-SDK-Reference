#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xb28
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_FortunaWeapon : public source2sdk::server::CCitadelTrackedProjectile
        {
        public:
            uint8_t _pad0890[0x298];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Projectile_FortunaWeapon has no schema binary (size is a guess)
    };
};
