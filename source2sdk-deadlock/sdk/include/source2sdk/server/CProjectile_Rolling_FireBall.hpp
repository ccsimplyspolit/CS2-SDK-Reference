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
        // Size: 0x870
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Rolling_FireBall : public source2sdk::server::CCitadelProjectile
        {
        public:
            bool m_bHitWorld; // 0x860            
            uint8_t _pad0861[0x3]; // 0x861
            Vector m_vInitialDirection; // 0x864            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Rolling_FireBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Rolling_FireBall) == 0x870);
    };
};
