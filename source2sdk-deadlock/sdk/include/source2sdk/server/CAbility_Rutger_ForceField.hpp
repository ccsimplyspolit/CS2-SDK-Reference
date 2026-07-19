#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1310
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Rutger_ForceField : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_hChargingParticle; // 0xf70            
            source2sdk::client::ParticleIndex_t m_hExplodeParticle; // 0xf74            
            Vector m_vSpawnPos; // 0xf78            
            source2sdk::entity2::GameTime_t m_fTimeToDestroyForceField; // 0xf84            
            bool m_bFirstThink; // 0xf88            
            uint8_t _pad0f89[0x387];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Rutger_ForceField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Rutger_ForceField) == 0x1310);
    };
};
