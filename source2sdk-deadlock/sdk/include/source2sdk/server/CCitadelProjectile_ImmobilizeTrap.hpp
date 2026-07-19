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
        // Size: 0xfa0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelProjectile_ImmobilizeTrap : public source2sdk::server::CCitadelProjectile
        {
        public:
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x860            
            Vector m_vecStartPos; // 0x864            
            Vector m_vecEndPos; // 0x870            
            source2sdk::entity2::GameTime_t m_flProjectileLandTime; // 0x87c            
            uint8_t _pad0880[0x720];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelProjectile_ImmobilizeTrap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelProjectile_ImmobilizeTrap) == 0xfa0);
    };
};
