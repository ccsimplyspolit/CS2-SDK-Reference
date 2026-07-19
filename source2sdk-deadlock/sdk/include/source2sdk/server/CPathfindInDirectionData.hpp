#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CPathfindInDirectionData
        {
        public:
            Vector m_vGoalDir; // 0x0            
            float m_flMinPathLength; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CPathfindInDirectionData, m_vGoalDir) == 0x0);
        static_assert(offsetof(source2sdk::server::CPathfindInDirectionData, m_flMinPathLength) == 0xc);
        
        static_assert(sizeof(source2sdk::server::CPathfindInDirectionData) == 0x10);
    };
};
