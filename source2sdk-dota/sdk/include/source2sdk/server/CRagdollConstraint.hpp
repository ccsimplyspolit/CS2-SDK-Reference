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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRagdollConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_xmin; // 0x4f8            
            float m_xmax; // 0x4fc            
            float m_ymin; // 0x500            
            float m_ymax; // 0x504            
            float m_zmin; // 0x508            
            float m_zmax; // 0x50c            
            float m_xfriction; // 0x510            
            float m_yfriction; // 0x514            
            float m_zfriction; // 0x518            
            uint8_t _pad051c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollConstraint) == 0x520);
    };
};
