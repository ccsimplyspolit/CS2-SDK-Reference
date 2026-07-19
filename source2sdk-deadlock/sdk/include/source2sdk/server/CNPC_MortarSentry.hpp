#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_MortarSentry : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0xc]; // 0x17b0
            float m_flAttackCone; // 0x17bc            
            // metadata: MNotSaved
            float m_flLastAlertSound; // 0x17c0            
            float m_flTrackingSpeed; // 0x17c4            
            VectorWS m_vTargetPosition; // 0x17c8            
            float m_flSearchRadius; // 0x17d4            
            float m_flLifeTime; // 0x17d8            
            uint8_t _pad17dc[0x34];
            
            // Datamap fields:
            // void m_nCurrentVolley; // 0x17e8
            // void m_nGrenadesPerVolley; // 0x17ec
            // void m_flNextAttackTime; // 0x17f0
            // void m_flAttackRateInnerVolley; // 0x17f4
            // void m_flAttackRate; // 0x17f8
            // void m_vLastTargetPos; // 0x17fc
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_MortarSentry) == 0x1810);
    };
};
