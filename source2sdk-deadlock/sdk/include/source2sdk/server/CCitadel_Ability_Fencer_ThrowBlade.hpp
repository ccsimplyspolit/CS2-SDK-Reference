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
        // Size: 0x18a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tRecastEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_ThrowBlade : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vCastPosition; // 0xf70            
            QAngle m_qCastAngles; // 0xf7c            
            source2sdk::client::ParticleIndex_t m_nMarkParticleIndex; // 0xf88            
            source2sdk::client::ParticleIndex_t m_nLingerParticleIndex; // 0xf8c            
            source2sdk::client::ParticleIndex_t m_nExplodeParticleIndex; // 0xf90            
            bool m_bHitEnemyPlayer; // 0xf94            
            uint8_t _pad0f95[0x3]; // 0xf95
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tRecastEndTime; // 0xf98            
            uint8_t _pad0f9c[0x904];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_ThrowBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Fencer_ThrowBlade) == 0x18a0);
    };
};
