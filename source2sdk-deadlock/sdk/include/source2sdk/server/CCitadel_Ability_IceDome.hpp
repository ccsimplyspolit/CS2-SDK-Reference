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
        // Size: 0xff8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flDomeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDomeEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_IceDome : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x80]; // 0xf70
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDomeStartTime; // 0xff0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDomeEndTime; // 0xff4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IceDome because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IceDome) == 0xff8);
    };
};
