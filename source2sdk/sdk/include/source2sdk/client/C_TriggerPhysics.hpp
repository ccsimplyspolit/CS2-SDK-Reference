#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0x10e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_TriggerPhysics : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_gravityScale; // 0x1098            
            float m_linearLimit; // 0x109c            
            float m_linearDamping; // 0x10a0            
            float m_angularLimit; // 0x10a4            
            float m_angularDamping; // 0x10a8            
            float m_linearForce; // 0x10ac            
            float m_flFrequency; // 0x10b0            
            float m_flDampingRatio; // 0x10b4            
            Vector m_vecLinearForcePointAt; // 0x10b8            
            bool m_bCollapseToForcePoint; // 0x10c4            
            uint8_t _pad10c5[0x3]; // 0x10c5
            VectorWS m_vecLinearForcePointAtWorld; // 0x10c8            
            Vector m_vecLinearForceDirection; // 0x10d4            
            bool m_bConvertToDebrisWhenPossible; // 0x10e0            
            uint8_t _pad10e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerPhysics) == 0x10e8);
    };
};
