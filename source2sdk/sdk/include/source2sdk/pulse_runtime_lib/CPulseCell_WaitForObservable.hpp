#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
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
        // Size: 0x198
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/observable_variable_listener.png"
        // static metadata: MPropertyFriendlyName "Wait Until"
        // static metadata: MPropertyDescription "All values connected to this node must be 'observable'. Variables on this graph will be automatically promoted to observable. Other value nodes must take an explicit context, look for those nodes with a corresponding icon."
        #pragma pack(push, 1)
        class CPulseCell_WaitForObservable : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPropertyDescription "Condition to evaluate when any of its dependent values change."
            // metadata: MPropertyFriendlyName "Observable"
            // m_Condition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CPulseObservableExpression<bool> m_Condition;
            char m_Condition[0x78]; // 0xd8            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnTrue; // 0x150            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_WaitForObservable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_WaitForObservable) == 0x198);
    };
};
