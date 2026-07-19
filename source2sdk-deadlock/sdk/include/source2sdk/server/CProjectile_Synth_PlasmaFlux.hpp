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
        // Size: 0x868
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSpawnedInNoTeleportArea"
        #pragma pack(push, 1)
        class CProjectile_Synth_PlasmaFlux : public source2sdk::server::CCitadelProjectile
        {
        public:
            // metadata: MNetworkEnable
            bool m_bSpawnedInNoTeleportArea; // 0x860            
            uint8_t _pad0861[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Synth_PlasmaFlux because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Synth_PlasmaFlux) == 0x868);
    };
};
