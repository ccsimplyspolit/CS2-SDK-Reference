#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
        // Size: 0xca0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        // static metadata: MNetworkVarNames "bool m_bHasRecentlyAttacked"
        // static metadata: MNetworkVarNames "float m_flLifeTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpawnTime"
        #pragma pack(push, 1)
        class CNPC_ShieldedSentry : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc10            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0xc30            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAimPitch; // 0xc34            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bHasRecentlyAttacked; // 0xc38            
            uint8_t _pad0c39[0x3]; // 0xc39
            // metadata: MNetworkEnable
            float m_flLifeTime; // 0xc3c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0xc40            
            float m_flAttackCone; // 0xc44            
            float m_flTrackingSpeed; // 0xc48            
            float m_flDeployTime; // 0xc4c            
            float m_flAttackDelay; // 0xc50            
            uint8_t _pad0c54[0x4c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_ShieldedSentry) == 0xca0);
    };
};
