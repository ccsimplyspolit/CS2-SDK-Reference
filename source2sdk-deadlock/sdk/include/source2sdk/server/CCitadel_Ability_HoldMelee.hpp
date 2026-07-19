#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_Melee_Base.hpp"

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
        // Size: 0x1100
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
        // static metadata: MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
        // static metadata: MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
        // static metadata: MNetworkVarNames "Vector m_vAirDashDir"
        // static metadata: MNetworkVarNames "bool m_bAttackStartedWhileSliding"
        // static metadata: MNetworkVarNames "GameTime_t m_flLightChainEndTime"
        // static metadata: MNetworkVarNames "int m_nLightChainCount"
        #pragma pack(push, 1)
        class CCitadel_Ability_HoldMelee : public source2sdk::server::CCitadel_Ability_Melee_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0x10a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashStartTime; // 0x10a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackState m_eCurrentAttackState; // 0x10a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackType m_eCurrentAttackType; // 0x10ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAirDashDir; // 0x10b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAttackStartedWhileSliding; // 0x10bc            
            uint8_t _pad10bd[0x3]; // 0x10bd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLightChainEndTime; // 0x10c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLightChainCount; // 0x10c4            
            bool m_bCreatedChargeEffects; // 0x10c8            
            uint8_t _pad10c9[0x3]; // 0x10c9
            QAngle m_angForced; // 0x10cc            
            Vector m_vGoalDir; // 0x10d8            
            uint8_t _pad10e4[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HoldMelee) == 0x1100);
    };
};
