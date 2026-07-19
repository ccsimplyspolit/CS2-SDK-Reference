#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"

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
        // Size: 0x10b0
        // Has VTable
        #pragma pack(push, 1)
        class C_Projectile_KnightCharge_Projectile : public source2sdk::client::C_CitadelProjectile
        {
        public:
            uint8_t _pad0ad8[0x5d8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: C_Projectile_KnightCharge_Projectile has no schema binary (size is a guess)
    };
};
