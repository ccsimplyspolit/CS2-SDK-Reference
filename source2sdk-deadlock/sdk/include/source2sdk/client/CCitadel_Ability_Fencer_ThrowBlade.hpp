#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b08
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tRecastEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_ThrowBlade : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x4]; // 0x11d8
            Vector m_vCastPosition; // 0x11dc            
            QAngle m_qCastAngles; // 0x11e8            
            source2sdk::client::ParticleIndex_t m_nMarkParticleIndex; // 0x11f4            
            source2sdk::client::ParticleIndex_t m_nLingerParticleIndex; // 0x11f8            
            source2sdk::client::ParticleIndex_t m_nExplodeParticleIndex; // 0x11fc            
            bool m_bHitEnemyPlayer; // 0x1200            
            uint8_t _pad1201[0x3]; // 0x1201
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tRecastEndTime; // 0x1204            
            uint8_t _pad1208[0x900];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_ThrowBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Fencer_ThrowBlade) == 0x1b08);
    };
};
