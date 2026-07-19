#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CProjectile_KnightCharge_Projectile.hpp"

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
        // Size: 0xe70
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_KnightChargeLeading_Projectile : public source2sdk::server::CProjectile_KnightCharge_Projectile
        {
        public:
            uint8_t _pad0e58[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CProjectile_KnightChargeLeading_Projectile) == 0xe70);
    };
};
