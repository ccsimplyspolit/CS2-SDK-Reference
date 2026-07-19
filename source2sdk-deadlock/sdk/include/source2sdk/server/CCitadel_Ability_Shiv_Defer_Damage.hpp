#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"

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
        // Size: 0x1198
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flTotalPendingDamage"
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_Defer_Damage : public source2sdk::server::CCitadelBaseShivAbility
        {
        public:
            uint8_t _pad0f70[0x200]; // 0xf70
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flTotalPendingDamage; // 0x1170            
            uint8_t _pad1174[0x1c]; // 0x1174
            source2sdk::entity2::GameTime_t m_flLastDeferredDamageApplicationTime; // 0x1190            
            uint8_t _pad1194[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_Defer_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Shiv_Defer_Damage) == 0x1198);
    };
};
