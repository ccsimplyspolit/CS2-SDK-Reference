#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ERocketeerState.hpp"
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
        // Size: 0x1208
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vImpulseDirection"
        // static metadata: MNetworkVarNames "Vector m_vVelocity"
        // static metadata: MNetworkVarNames "Vector m_vThrustingVelocity"
        // static metadata: MNetworkVarNames "GameTime_t m_tStateEnterTime"
        // static metadata: MNetworkVarNames "ERocketeerState m_eState"
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_Rocketeer4 : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vImpulseDirection; // 0x11d8            
            // metadata: MNetworkEnable
            Vector m_vVelocity; // 0x11e4            
            // metadata: MNetworkEnable
            Vector m_vThrustingVelocity; // 0x11f0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tStateEnterTime; // 0x11fc            
            // metadata: MNetworkEnable
            source2sdk::client::ERocketeerState m_eState; // 0x1200            
            uint8_t _pad1201[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_Rocketeer4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Airheart_Rocketeer4) == 0x1208);
    };
};
