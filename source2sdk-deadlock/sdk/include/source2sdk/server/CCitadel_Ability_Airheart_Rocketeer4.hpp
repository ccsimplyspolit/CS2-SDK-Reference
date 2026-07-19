#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ERocketeerState.hpp"
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
        // Size: 0xfa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vImpulseDirection"
        // static metadata: MNetworkVarNames "Vector m_vVelocity"
        // static metadata: MNetworkVarNames "Vector m_vThrustingVelocity"
        // static metadata: MNetworkVarNames "GameTime_t m_tStateEnterTime"
        // static metadata: MNetworkVarNames "ERocketeerState m_eState"
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_Rocketeer4 : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vImpulseDirection; // 0xf70            
            // metadata: MNetworkEnable
            Vector m_vVelocity; // 0xf7c            
            // metadata: MNetworkEnable
            Vector m_vThrustingVelocity; // 0xf88            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tStateEnterTime; // 0xf94            
            // metadata: MNetworkEnable
            source2sdk::client::ERocketeerState m_eState; // 0xf98            
            uint8_t _pad0f99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_Rocketeer4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Airheart_Rocketeer4) == 0xfa0);
    };
};
