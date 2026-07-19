#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_NPC_SimpleAnimatingAI.hpp"
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
        // Size: 0xeb8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        // static metadata: MNetworkVarNames "bool m_bHasRecentlyAttacked"
        // static metadata: MNetworkVarNames "float m_flLifeTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpawnTime"
        #pragma pack(push, 1)
        class C_NPC_ShieldedSentry : public source2sdk::client::C_NPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcb8            
            uint8_t _pad0ea0[0x4]; // 0xea0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0xea4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAimPitch; // 0xea8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bHasRecentlyAttacked; // 0xeac            
            uint8_t _pad0ead[0x3]; // 0xead
            // metadata: MNetworkEnable
            float m_flLifeTime; // 0xeb0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0xeb4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_ShieldedSentry) == 0xeb8);
    };
};
