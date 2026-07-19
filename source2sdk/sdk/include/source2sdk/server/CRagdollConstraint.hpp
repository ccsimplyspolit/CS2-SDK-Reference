#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"

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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRagdollConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_xmin; // 0x508            
            float m_xmax; // 0x50c            
            float m_ymin; // 0x510            
            float m_ymax; // 0x514            
            float m_zmin; // 0x518            
            float m_zmax; // 0x51c            
            float m_xfriction; // 0x520            
            float m_yfriction; // 0x524            
            float m_zfriction; // 0x528            
            uint8_t _pad052c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollConstraint) == 0x530);
    };
};
