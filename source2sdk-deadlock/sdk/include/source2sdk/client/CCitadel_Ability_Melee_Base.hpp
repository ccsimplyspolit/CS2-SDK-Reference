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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x12e8
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
        class CCitadel_Ability_Melee_Base : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingThisMelee; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingMeleeTagActive; // 0x11d9            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitWithThisAttack; // 0x11da            
            uint8_t _pad11db[0x1]; // 0x11db
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastActivateTime; // 0x11dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackAllowedTime; // 0x11e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackTriggeredTime; // 0x11e4            
            uint8_t _pad11e8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Melee_Base) == 0x12e8);
    };
};
