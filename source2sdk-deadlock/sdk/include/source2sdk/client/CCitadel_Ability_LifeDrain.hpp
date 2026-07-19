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
        // Size: 0x12e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tSlowStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tSlowStopTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_LifeDrain : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_tDrainLifeStopTime; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            source2sdk::entity2::GameTime_t m_tSlowStartTime; // 0x11dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            source2sdk::entity2::GameTime_t m_tSlowStopTime; // 0x11e0            
            uint8_t _pad11e4[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_LifeDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_LifeDrain) == 0x12e8);
    };
};
