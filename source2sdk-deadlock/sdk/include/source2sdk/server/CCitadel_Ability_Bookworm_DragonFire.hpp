#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1390
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_DragonFire : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x400]; // 0xf70
            VectorWS m_vLaunchPosition; // 0x1370            
            QAngle m_qLaunchAngle; // 0x137c            
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0x1388            
            uint8_t _pad138c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_DragonFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bookworm_DragonFire) == 0x1390);
    };
};
