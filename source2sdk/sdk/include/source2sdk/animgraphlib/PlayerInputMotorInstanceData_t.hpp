#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PlayerInputMotorInstanceData_t
        {
        public:
            Vector m_vInputVectorWS; // 0x0            
            Vector m_vVelocityWS; // 0xc            
            Vector m_vAccelerationWS; // 0x18            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::PlayerInputMotorInstanceData_t, m_vInputVectorWS) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::PlayerInputMotorInstanceData_t, m_vVelocityWS) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::PlayerInputMotorInstanceData_t, m_vAccelerationWS) == 0x18);
        
        static_assert(sizeof(source2sdk::animgraphlib::PlayerInputMotorInstanceData_t) == 0x28);
    };
};
