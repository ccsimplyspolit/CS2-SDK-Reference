#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_NPC_SimpleAnimatingAI.hpp"

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
        // Size: 0xea0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        #pragma pack(push, 1)
        class C_NPC_TeslaCoil : public source2sdk::client::C_NPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_TeslaCoil because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_TeslaCoil) == 0xea0);
    };
};
