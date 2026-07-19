#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10a0
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "bool m_bUsingThisMelee"
        // static metadata: MNetworkVarNames "bool m_bUsingMeleeTagActive"
        // static metadata: MNetworkVarNames "bool m_bHitWithThisAttack"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastActivateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Melee_Base : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x18]; // 0xf70
            std::int32_t m_nHitNumber; // 0xf88            
            std::int32_t m_nPlayerKillNumber; // 0xf8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingThisMelee; // 0xf90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingMeleeTagActive; // 0xf91            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitWithThisAttack; // 0xf92            
            uint8_t _pad0f93[0x1]; // 0xf93
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastActivateTime; // 0xf94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackAllowedTime; // 0xf98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackTriggeredTime; // 0xf9c            
            uint8_t _pad0fa0[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Melee_Base) == 0x10a0);
    };
};
