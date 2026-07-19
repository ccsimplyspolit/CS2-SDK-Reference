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
        // Size: 0x1628
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flScopeStartTime"
        // static metadata: MNetworkVarNames "int m_iSnipeKills"
        #pragma pack(push, 1)
        class CCitadel_Ability_Hornet_Snipe : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x69c]; // 0xf70
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flScopeStartTime; // 0x160c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iSnipeKills; // 0x1610            
            uint8_t _pad1614[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Hornet_Snipe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Hornet_Snipe) == 0x1628);
    };
};
