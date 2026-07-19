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
        // Size: 0x1b68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsLeaping"
        // static metadata: MNetworkVarNames "GameTime_t m_tLeapStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tLeapOffTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_KickFlip : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIsLeaping; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLeapStartTime; // 0x11dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tLeapOffTime; // 0x11e0            
            uint8_t _pad11e4[0x984];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Werewolf_KickFlip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Werewolf_KickFlip) == 0x1b68);
    };
};
