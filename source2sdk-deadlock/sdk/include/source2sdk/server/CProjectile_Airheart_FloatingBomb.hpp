#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xaf0
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Airheart_FloatingBomb : public source2sdk::server::CCitadelProjectile
        {
        public:
            Vector vVelocity; // 0x860            
            source2sdk::entity2::GameTime_t m_tSpawnTime; // 0x86c            
            uint8_t _pad0870[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Airheart_FloatingBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Airheart_FloatingBomb) == 0xaf0);
    };
};
