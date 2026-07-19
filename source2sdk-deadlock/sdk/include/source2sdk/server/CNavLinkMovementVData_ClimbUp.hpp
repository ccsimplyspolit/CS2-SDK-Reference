#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNavLinkMetrics_ClimbUp.hpp"
#include "source2sdk/server/CNavLinkMovementVData.hpp"

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
        // Size: 0x130
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkMovementVData_ClimbUp : public source2sdk::server::CNavLinkMovementVData
        {
        public:
            bool m_bAlignOrientationWithEdgeNormal; // 0x118            
            uint8_t _pad0119[0x3]; // 0x119
            source2sdk::server::CNavLinkMetrics_ClimbUp m_metrics; // 0x11c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMovementVData_ClimbUp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMovementVData_ClimbUp) == 0x130);
    };
};
