#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelTrackedProjectile.hpp"

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
        // Size: 0xae0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_HookBlade : public source2sdk::client::C_CitadelTrackedProjectile
        {
        public:
            bool bIsReturning; // 0xad8            
            uint8_t _pad0ad9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_HookBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Projectile_HookBlade) == 0xae0);
    };
};
