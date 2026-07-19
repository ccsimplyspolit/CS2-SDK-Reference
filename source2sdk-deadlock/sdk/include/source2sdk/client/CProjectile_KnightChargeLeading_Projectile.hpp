#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Projectile_KnightCharge_Projectile.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10c8
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_KnightChargeLeading_Projectile : public source2sdk::client::C_Projectile_KnightCharge_Projectile
        {
        public:
            uint8_t _pad10b0[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CProjectile_KnightChargeLeading_Projectile) == 0x10c8);
    };
};
