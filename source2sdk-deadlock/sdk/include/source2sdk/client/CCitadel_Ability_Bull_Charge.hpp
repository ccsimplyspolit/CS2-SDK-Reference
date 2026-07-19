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
        // Size: 0x1888
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
        // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Charge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x680]; // 0x11d8
            // metadata: MNetworkEnable
            QAngle m_anglesCharging; // 0x1858            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChargingStateChanged"
            source2sdk::entity2::GameTime_t m_flChargeStartTime; // 0x1864            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeStartTime; // 0x1868            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeEndTime; // 0x186c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitAPlayer; // 0x1870            
            uint8_t _pad1871[0x3]; // 0x1871
            bool m_bFirstTick; // 0x1874            
            uint8_t _pad1875[0x3]; // 0x1875
            Vector m_vGoalDir; // 0x1878            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_Charge) == 0x1888);
    };
};
