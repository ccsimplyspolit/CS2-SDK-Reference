#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/MovementGaitId_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkApproachConditions
        {
        public:
            source2sdk::modellib::MovementGaitId_t m_sMovementGait; // 0x0            
            float m_flFacingAlignmentDegrees; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkApproachConditions, m_sMovementGait) == 0x0);
        static_assert(offsetof(source2sdk::server::CNavLinkApproachConditions, m_flFacingAlignmentDegrees) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CNavLinkApproachConditions) == 0x10);
    };
};
