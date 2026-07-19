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
        struct DampedPathMotorInstanceData_t
        {
        public:
            Vector m_vVelocity; // 0x0            
            Vector m_vAcceleration; // 0xc            
            uint8_t _pad0018[0xc]; // 0x18
            bool m_bStopping; // 0x24            
            uint8_t _pad0025[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::DampedPathMotorInstanceData_t, m_vVelocity) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::DampedPathMotorInstanceData_t, m_vAcceleration) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::DampedPathMotorInstanceData_t, m_bStopping) == 0x24);
        
        static_assert(sizeof(source2sdk::animgraphlib::DampedPathMotorInstanceData_t) == 0x28);
    };
};
