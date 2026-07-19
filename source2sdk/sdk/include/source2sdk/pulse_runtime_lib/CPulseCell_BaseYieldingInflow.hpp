#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCustomFGDMetadata "{ standard_yielding_flow = true }"
        #pragma pack(push, 1)
        class CPulseCell_BaseYieldingInflow : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPulseFGDSkipField
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_BaseFlow_OnAfterCancel; // 0x48            
            // metadata: MPulseFGDSkipField
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_BaseFlow_WhileActive; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_BaseYieldingInflow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow) == 0xd8);
    };
};
