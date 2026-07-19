#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1c10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bWillLeapOff"
        // static metadata: MNetworkVarNames "bool m_bIsLeaping"
        // static metadata: MNetworkVarNames "GameTime_t m_tLeapStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tLeapOffTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_Leap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            bool m_bWillLeapOff; // 0x11d8            
            // metadata: MNetworkEnable
            bool m_bIsLeaping; // 0x11d9            
            uint8_t _pad11da[0x2]; // 0x11da
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLeapStartTime; // 0x11dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLeapOffTime; // 0x11e0            
            VectorWS m_vLaunchPosition; // 0x11e4            
            VectorWS m_vLaunchVelocity; // 0x11f0            
            QAngle m_qLaunchAngle; // 0x11fc            
            uint8_t _pad1208[0xa08];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Werewolf_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Werewolf_Leap) == 0x1c10);
    };
};
