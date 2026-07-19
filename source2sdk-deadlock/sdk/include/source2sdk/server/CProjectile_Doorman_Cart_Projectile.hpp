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
        // Size: 0x880
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Doorman_Cart_Projectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            uint8_t _pad0860[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CProjectile_Doorman_Cart_Projectile) == 0x880);
    };
};
