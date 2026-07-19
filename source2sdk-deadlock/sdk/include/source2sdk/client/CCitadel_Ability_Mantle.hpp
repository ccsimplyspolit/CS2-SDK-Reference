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
        // Size: 0x1250
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flVertOffset"
        // static metadata: MNetworkVarNames "float m_flHorizGap"
        // static metadata: MNetworkVarNames "Vector m_vStartPos"
        // static metadata: MNetworkVarNames "Vector m_vTargetPos"
        // static metadata: MNetworkVarNames "QAngle m_angFacing"
        // static metadata: MNetworkVarNames "int m_nMantleTypeIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Mantle : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flVertOffset; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flHorizGap; // 0x11dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPos; // 0x11e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vTargetPos; // 0x11ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            QAngle m_angFacing; // 0x11f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nMantleTypeIndex; // 0x1204            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1208            
            uint8_t _pad120c[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Mantle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Mantle) == 0x1250);
    };
};
