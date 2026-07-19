#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
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
        // Size: 0x1598
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
        // static metadata: MNetworkVarNames "bool m_bJumped"
        // static metadata: MNetworkVarNames "bool m_bCanDashJump"
        // static metadata: MNetworkVarNames "int m_nDesiredAirJumpCount"
        // static metadata: MNetworkVarNames "int m_nExecutedAirJumpCount"
        // static metadata: MNetworkVarNames "bool m_bInSlideJump"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirJumps"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveWallJumps"
        // static metadata: MNetworkVarNames "GameTime_t m_flLateralInputSuppressEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Jump : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0x11d8            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0x11dc            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0x11e0            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0x11e4            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0x11e8            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x11ec            
            Vector m_vCurrentWallNormal; // 0x11f0            
            Vector m_vLastWallCollidedWithNormal; // 0x11fc            
            Vector m_vLastValidWallJumpNormal; // 0x1208            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0x1214            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0x1220            
            Vector m_vWallJumpFacingDir; // 0x1224            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0x1230            
            uint8_t _pad1232[0x2]; // 0x1232
            float m_flLastWallJumpFatigueStrength; // 0x1234            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0x1238            
            bool m_bShouldCreateAirJumpEffects; // 0x1239            
            uint8_t _pad123a[0x2]; // 0x123a
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0x123c            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0x1240            
            Vector m_vWallJumpNormalUsed; // 0x1244            
            uint8_t _pad1250[0x300]; // 0x1250
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0x1550            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0x1568            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0x1580            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0x1581            
            uint8_t _pad1582[0x2]; // 0x1582
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0x1584            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0x1588            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0x158c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0x158d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0x158e            
            uint8_t _pad158f[0x1]; // 0x158f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0x1590            
            uint8_t _pad1594[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Jump) == 0x1598);
    };
};
