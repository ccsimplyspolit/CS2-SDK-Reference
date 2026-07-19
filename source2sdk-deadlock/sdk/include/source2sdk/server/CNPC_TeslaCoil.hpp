#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAI.hpp"

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
        // Size: 0xe90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        #pragma pack(push, 1)
        class CNPC_TeslaCoil : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xc10            
            uint8_t _pad0e78[0x4]; // 0xe78
            float m_flDeployTime; // 0xe7c            
            uint8_t _pad0e80[0x4]; // 0xe80
            float m_flLifeTime; // 0xe84            
            uint8_t _pad0e88[0x8];
            
            // Datamap fields:
            // void m_flSpawnTime; // 0xe80
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TeslaCoil because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TeslaCoil) == 0xe90);
    };
};
