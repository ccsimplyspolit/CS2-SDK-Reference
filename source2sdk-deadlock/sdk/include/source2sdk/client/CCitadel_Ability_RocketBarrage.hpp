#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x16a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBarrageEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_RocketBarrage : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flBarrageEndTime; // 0x11d8            
            uint8_t _pad11f0[0x480]; // 0x11f0
            float m_flCurrentTimeScale; // 0x1670            
            Vector m_vecAimPos; // 0x1674            
            Vector m_vecAimVel; // 0x1680            
            source2sdk::entity2::GameTime_t m_flLastUpdateTime; // 0x168c            
            uint8_t _pad1690[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_RocketBarrage) == 0x16a8);
    };
};
