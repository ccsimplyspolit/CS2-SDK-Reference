#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IPhysicsMotionController;
    };
};

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
        // Size: 0x948
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerPhysics : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e8[0x8]; // 0x8e8
            // metadata: MPhysPtr
            source2sdk::client::IPhysicsMotionController* m_pController; // 0x8f0            
            float m_gravityScale; // 0x8f8            
            float m_linearLimit; // 0x8fc            
            float m_linearDamping; // 0x900            
            float m_angularLimit; // 0x904            
            float m_angularDamping; // 0x908            
            float m_linearForce; // 0x90c            
            float m_flFrequency; // 0x910            
            float m_flDampingRatio; // 0x914            
            Vector m_vecLinearForcePointAt; // 0x918            
            bool m_bCollapseToForcePoint; // 0x924            
            uint8_t _pad0925[0x3]; // 0x925
            VectorWS m_vecLinearForcePointAtWorld; // 0x928            
            Vector m_vecLinearForceDirection; // 0x934            
            bool m_bConvertToDebrisWhenPossible; // 0x940            
            uint8_t _pad0941[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPhysics) == 0x948);
    };
};
