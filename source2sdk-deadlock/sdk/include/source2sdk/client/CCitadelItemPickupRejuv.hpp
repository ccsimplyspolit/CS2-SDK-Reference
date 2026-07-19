#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_CitadelItemPickup.hpp"

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
        // Size: 0xee0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "bool m_bPickedUp"
        #pragma pack(push, 1)
        class CCitadelItemPickupRejuv : public source2sdk::client::C_CitadelItemPickup
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcf0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bPickedUp; // 0xed8            
            uint8_t _pad0ed9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickupRejuv because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelItemPickupRejuv) == 0xee0);
    };
};
