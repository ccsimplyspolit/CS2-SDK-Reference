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
        // Size: 0x1428
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bInGround"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Burrow : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x480]; // 0xf70
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInGround; // 0x13f0            
            uint8_t _pad13f1[0x3]; // 0x13f1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x13f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_SpinEndTime; // 0x13f8            
            uint8_t _pad13fc[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Burrow) == 0x1428);
    };
};
