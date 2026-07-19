#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelItemPickup.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x5780
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "bool m_bPickedUp"
        #pragma pack(push, 1)
        class CCitadelItemPickupRejuv : public source2sdk::server::CCitadelItemPickup
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x5510            
            uint8_t _pad5778[0x4]; // 0x5778
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bPickedUp; // 0x577c            
            uint8_t _pad577d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickupRejuv because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemPickupRejuv) == 0x5780);
    };
};
