#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELashGrappleState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseLockonAbility.hpp"

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
        // Size: 0x1610
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ELashGrappleState m_EGrappleState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBoostEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Lash_Ultimate : public source2sdk::server::CCitadelBaseLockonAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::ELashGrappleState m_EGrappleState; // 0x12e0            
            uint8_t _pad12e1[0x3]; // 0x12e1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0x12e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0x12e8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBoostEndTime; // 0x12ec            
            uint8_t _pad12f0[0x320];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Lash_Ultimate) == 0x1610);
    };
};
