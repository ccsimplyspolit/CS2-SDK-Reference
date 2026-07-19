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
        // Size: 0xf88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSprinting"
        // static metadata: MNetworkVarNames "GameTime_t m_flSprintStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Sprint : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nSprintParticle; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSprintingChanged"
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSprinting; // 0xf74            
            uint8_t _pad0f75[0x3]; // 0xf75
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSprintStartTime; // 0xf78            
            bool m_bInCombat; // 0xf7c            
            uint8_t _pad0f7d[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Sprint) == 0xf88);
    };
};
