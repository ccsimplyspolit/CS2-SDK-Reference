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
        // Size: 0x528
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysLength : public source2sdk::server::CPhysConstraint
        {
        public:
            Vector m_offset[2]; // 0x4f8            
            VectorWS m_vecAttach; // 0x510            
            float m_addLength; // 0x51c            
            float m_minLength; // 0x520            
            float m_totalLength; // 0x524            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysLength because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysLength) == 0x528);
    };
};
