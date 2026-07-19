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
        // Size: 0x11f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSprinting"
        // static metadata: MNetworkVarNames "GameTime_t m_flSprintStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Sprint : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nSprintParticle; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSprintingChanged"
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSprinting; // 0x11dc            
            uint8_t _pad11dd[0x3]; // 0x11dd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSprintStartTime; // 0x11e0            
            bool m_bInCombat; // 0x11e4            
            uint8_t _pad11e5[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Sprint) == 0x11f0);
    };
};
