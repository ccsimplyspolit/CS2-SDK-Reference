#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulseCell_Timeline_TimelineEvent_t.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_Timeline : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // m_TimelineEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t> m_TimelineEvents;
            char m_TimelineEvents[0x18]; // 0xd8            
            bool m_bWaitForChildOutflows; // 0xf0            
            uint8_t _pad00f1[0x7]; // 0xf1
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0xf8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Timeline because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Timeline) == 0x140);
    };
};
