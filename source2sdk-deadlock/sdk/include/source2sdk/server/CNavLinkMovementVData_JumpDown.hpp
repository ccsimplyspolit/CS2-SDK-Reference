#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNavLinkMetrics_JumpDown.hpp"
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
        class CNavLinkMovementVData_JumpDown : public source2sdk::server::CNavLinkMovementVData
        {
        public:
            source2sdk::server::CNavLinkMetrics_JumpDown m_metrics; // 0x118            
            bool m_bAlignWithExitDirectionDuringFall; // 0x12c            
            uint8_t _pad012d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMovementVData_JumpDown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMovementVData_JumpDown) == 0x130);
    };
};
