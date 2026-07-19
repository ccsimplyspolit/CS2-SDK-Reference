#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x1300
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_FireBomb : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x108]; // 0x11d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CCitadelAutoScaledTime m_flDetonateTime; // 0x12e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x12f8            
            uint8_t _pad12fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FireBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FireBomb) == 0x1300);
    };
};
