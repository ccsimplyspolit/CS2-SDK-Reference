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
        // Size: 0x8f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_WreckingBall : public source2sdk::server::CCitadelProjectile
        {
        public:
            uint8_t _pad0860[0x10]; // 0x860
            bool m_bBroken; // 0x870            
            uint8_t _pad0871[0x87];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_WreckingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_WreckingBall) == 0x8f8);
    };
};
