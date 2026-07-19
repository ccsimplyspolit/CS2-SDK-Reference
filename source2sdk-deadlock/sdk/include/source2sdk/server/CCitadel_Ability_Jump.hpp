#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x1330
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
        class CCitadel_Ability_Jump : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xf70            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xf74            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xf78            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xf7c            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xf80            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0xf84            
            Vector m_vCurrentWallNormal; // 0xf88            
            Vector m_vLastWallCollidedWithNormal; // 0xf94            
            Vector m_vLastValidWallJumpNormal; // 0xfa0            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0xfac            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0xfb8            
            Vector m_vWallJumpFacingDir; // 0xfbc            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0xfc8            
            uint8_t _pad0fca[0x2]; // 0xfca
            float m_flLastWallJumpFatigueStrength; // 0xfcc            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xfd0            
            bool m_bShouldCreateAirJumpEffects; // 0xfd1            
            uint8_t _pad0fd2[0x2]; // 0xfd2
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xfd4            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xfd8            
            Vector m_vWallJumpNormalUsed; // 0xfdc            
            uint8_t _pad0fe8[0x300]; // 0xfe8
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0x12e8            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0x1300            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0x1318            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0x1319            
            uint8_t _pad131a[0x2]; // 0x131a
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0x131c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0x1320            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0x1324            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0x1325            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0x1326            
            uint8_t _pad1327[0x1]; // 0x1327
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0x1328            
            uint8_t _pad132c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Jump) == 0x1330);
    };
};
