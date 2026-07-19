#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
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
        // Size: 0x1358
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
        class CCitadel_Ability_HoldMelee : public source2sdk::client::CCitadel_Ability_Melee_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0x12e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashStartTime; // 0x12ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackState m_eCurrentAttackState; // 0x12f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackType m_eCurrentAttackType; // 0x12f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAirDashDir; // 0x12f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAttackStartedWhileSliding; // 0x1304            
            uint8_t _pad1305[0x3]; // 0x1305
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLightChainEndTime; // 0x1308            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLightChainCount; // 0x130c            
            bool m_bCreatedChargeEffects; // 0x1310            
            uint8_t _pad1311[0x3]; // 0x1311
            QAngle m_angForced; // 0x1314            
            Vector m_vGoalDir; // 0x1320            
            uint8_t _pad132c[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_HoldMelee) == 0x1358);
    };
};
