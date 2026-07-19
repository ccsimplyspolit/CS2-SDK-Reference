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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1290
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flTotalPendingHeal"
        #pragma pack(push, 1)
        class CCitadel_Ability_PassiveBeefy : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x18]; // 0xf70
            source2sdk::entity2::GameTime_t m_flLastHealTime; // 0xf88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flTotalPendingHeal; // 0xf8c            
            uint8_t _pad0f90[0x300];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PassiveBeefy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PassiveBeefy) == 0x1290);
    };
};
