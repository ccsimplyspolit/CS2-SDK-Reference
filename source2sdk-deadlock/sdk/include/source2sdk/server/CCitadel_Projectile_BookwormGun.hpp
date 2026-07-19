#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xc88
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_BookwormGun : public source2sdk::server::CCitadelProjectile
        {
        public:
            uint8_t _pad0860[0x428];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Projectile_BookwormGun has no schema binary (size is a guess)
    };
};
