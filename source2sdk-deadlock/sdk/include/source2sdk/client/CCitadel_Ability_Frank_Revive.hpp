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
        // Size: 0x17f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bReviveIsActive"
        // static metadata: MNetworkVarNames "GameTime_t m_TimeOfDeath"
        // static metadata: MNetworkVarNames "GameTime_t m_TimeOfRevive"
        // static metadata: MNetworkVarNames "float m_flTotalPendingHeal"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_Revive : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x2]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bReviveIsActive; // 0x11da            
            uint8_t _pad11db[0x1]; // 0x11db
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_TimeOfDeath; // 0x11dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_TimeOfRevive; // 0x11e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flTotalPendingHeal; // 0x11e4            
            uint8_t _pad11e8[0x610];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_Revive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Frank_Revive) == 0x17f8);
    };
};
