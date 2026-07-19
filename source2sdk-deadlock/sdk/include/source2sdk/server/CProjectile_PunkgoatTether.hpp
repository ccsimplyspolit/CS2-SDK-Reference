#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelTrackedProjectile.hpp"

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
        // Size: 0x898
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_PunkgoatTether : public source2sdk::server::CCitadelTrackedProjectile
        {
        public:
            source2sdk::client::ParticleIndex_t m_nRopeProjectileParticle; // 0x890            
            uint8_t _pad0894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_PunkgoatTether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_PunkgoatTether) == 0x898);
    };
};
