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
        // Size: 0x8e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool bIsCloneProjectile"
        #pragma pack(push, 1)
        class CCitadel_Projectile_MagicBolt : public source2sdk::server::CCitadelProjectile
        {
        public:
            // metadata: MNetworkEnable
            bool bIsCloneProjectile; // 0x860            
            uint8_t _pad0861[0x87];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_MagicBolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_MagicBolt) == 0x8e8);
    };
};
