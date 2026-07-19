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
        // Size: 0x16f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bWantsSlow"
        // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
        // static metadata: MNetworkVarNames "float m_flLatchedTimeScaleFrac"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Chrono_KineticCarbine : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlow; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0x11dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flLatchedTimeScaleFrac; // 0x11e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSpeedBoostEndTime; // 0x11e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flShotTimeScaleEndTime; // 0x11e8            
            uint8_t _pad11ec[0x4]; // 0x11ec
            float m_flStoredPowerPct; // 0x11f0            
            uint8_t _pad11f4[0x504];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Chrono_KineticCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Chrono_KineticCarbine) == 0x16f8);
    };
};
