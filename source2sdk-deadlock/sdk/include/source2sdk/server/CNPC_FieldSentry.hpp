#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xc60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        #pragma pack(push, 1)
        class CNPC_FieldSentry : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            uint8_t _pad0c10[0xc]; // 0xc10
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAimPitch; // 0xc1c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0xc20            
            float m_flAttackCone; // 0xc24            
            float m_flAttackDelay; // 0xc28            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastAlertSound; // 0xc2c            
            float m_flTrackingSpeed; // 0xc30            
            float m_flDeployTime; // 0xc34            
            uint8_t _pad0c38[0x4]; // 0xc38
            float m_flLifeTime; // 0xc3c            
            uint8_t _pad0c40[0x2]; // 0xc40
            // metadata: MNotSaved
            bool m_bHadEnemy; // 0xc42            
            bool m_bLockedOn; // 0xc43            
            uint8_t _pad0c44[0x10]; // 0xc44
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0xc54            
            uint8_t _pad0c58[0x8];
            
            // Datamap fields:
            // void m_flSpawnTime; // 0xc38
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_FieldSentry) == 0xc60);
    };
};
