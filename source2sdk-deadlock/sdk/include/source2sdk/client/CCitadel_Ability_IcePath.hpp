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
        // Size: 0x1300
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIcePathing"
        // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
        // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
        // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePath : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x100]; // 0x11d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIcePathing; // 0x12d8            
            uint8_t _pad12d9[0x3]; // 0x12d9
            // metadata: MNetworkEnable
            QAngle m_qLastAngles; // 0x12dc            
            // metadata: MNetworkEnable
            Vector m_vLastVelocity; // 0x12e8            
            // metadata: MNetworkEnable
            bool m_bFirstMovementTick; // 0x12f4            
            uint8_t _pad12f5[0x3]; // 0x12f5
            source2sdk::entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0x12f8            
            uint8_t _pad12fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IcePath) == 0x1300);
    };
};
