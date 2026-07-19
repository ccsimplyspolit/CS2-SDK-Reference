#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x168
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_TestWaitWithCursorState : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0xd8            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_WakeFail; // 0x120            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_TestWaitWithCursorState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState) == 0x168);
    };
};
