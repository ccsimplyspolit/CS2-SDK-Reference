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
        // Size: 0x950
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerPhysics : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08f0[0x8]; // 0x8f0
            // metadata: MPhysPtr
            source2sdk::client::IPhysicsMotionController* m_pController; // 0x8f8            
            float m_gravityScale; // 0x900            
            float m_linearLimit; // 0x904            
            float m_linearDamping; // 0x908            
            float m_angularLimit; // 0x90c            
            float m_angularDamping; // 0x910            
            float m_linearForce; // 0x914            
            float m_flFrequency; // 0x918            
            float m_flDampingRatio; // 0x91c            
            Vector m_vecLinearForcePointAt; // 0x920            
            bool m_bCollapseToForcePoint; // 0x92c            
            uint8_t _pad092d[0x3]; // 0x92d
            VectorWS m_vecLinearForcePointAtWorld; // 0x930            
            Vector m_vecLinearForceDirection; // 0x93c            
            bool m_bConvertToDebrisWhenPossible; // 0x948            
            uint8_t _pad0949[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPhysics) == 0x950);
    };
};
