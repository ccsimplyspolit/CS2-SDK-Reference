#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/tier2/CRangeFloat.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkMetrics_JumpDown
        {
        public:
            float m_flEntryDistance; // 0x0            
            source2sdk::tier2::CRangeFloat m_horizontalRange; // 0x4            
            source2sdk::tier2::CRangeFloat m_verticalRange; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkMetrics_JumpDown, m_flEntryDistance) == 0x0);
        static_assert(offsetof(source2sdk::server::CNavLinkMetrics_JumpDown, m_horizontalRange) == 0x4);
        static_assert(offsetof(source2sdk::server::CNavLinkMetrics_JumpDown, m_verticalRange) == 0xc);
        
        static_assert(sizeof(source2sdk::server::CNavLinkMetrics_JumpDown) == 0x14);
    };
};
