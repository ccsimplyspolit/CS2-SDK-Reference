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
        class CRootMotion
        {
        public:
            CMotionTransform m_deltaTransform; // 0x0            
            Vector m_vVelocityMS; // 0x10            
            Vector m_vUpOverride; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CRootMotion, m_deltaTransform) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CRootMotion, m_vVelocityMS) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CRootMotion, m_vUpOverride) == 0x1c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CRootMotion) == 0x28);
    };
};
