#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x19a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bWillLeapOff"
        // static metadata: MNetworkVarNames "bool m_bIsLeaping"
        // static metadata: MNetworkVarNames "GameTime_t m_tLeapStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tLeapOffTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_Leap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            bool m_bWillLeapOff; // 0xf70            
            // metadata: MNetworkEnable
            bool m_bIsLeaping; // 0xf71            
            uint8_t _pad0f72[0x2]; // 0xf72
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLeapStartTime; // 0xf74            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLeapOffTime; // 0xf78            
            VectorWS m_vLaunchPosition; // 0xf7c            
            VectorWS m_vLaunchVelocity; // 0xf88            
            QAngle m_qLaunchAngle; // 0xf94            
            uint8_t _pad0fa0[0xa08];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Werewolf_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Werewolf_Leap) == 0x19a8);
    };
};
