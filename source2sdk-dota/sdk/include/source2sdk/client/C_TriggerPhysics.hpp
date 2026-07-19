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
        // Size: 0xbc0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_TriggerPhysics : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_gravityScale; // 0xb70            
            float m_linearLimit; // 0xb74            
            float m_linearDamping; // 0xb78            
            float m_angularLimit; // 0xb7c            
            float m_angularDamping; // 0xb80            
            float m_linearForce; // 0xb84            
            float m_flFrequency; // 0xb88            
            float m_flDampingRatio; // 0xb8c            
            Vector m_vecLinearForcePointAt; // 0xb90            
            bool m_bCollapseToForcePoint; // 0xb9c            
            uint8_t _pad0b9d[0x3]; // 0xb9d
            VectorWS m_vecLinearForcePointAtWorld; // 0xba0            
            Vector m_vecLinearForceDirection; // 0xbac            
            bool m_bConvertToDebrisWhenPossible; // 0xbb8            
            uint8_t _pad0bb9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerPhysics) == 0xbc0);
    };
};
