#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseState.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"

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
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Monitor Observable"
        // static metadata: MPropertyDescription "While active, manage child cursors based on the results of a boolean condition. When the observable result changes, the prior cursor will be canceled and the appropriate outflow will fire a new child cursor. Will monitor continuously until externally canceled."
        // static metadata: MPulseEditorCanvasItemSpecKV3
        #pragma pack(push, 1)
        class CPulseCell_BooleanSwitchState : public source2sdk::pulse_runtime_lib::CPulseCell_BaseState
        {
        public:
            // metadata: MPropertyDescription "Condition to evaluate when any of its dependent values change."
            // metadata: MPropertyFriendlyName "Observable"
            // m_Condition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CPulseObservableExpression<bool> m_Condition;
            char m_Condition[0x78]; // 0xd8            
            // metadata: MPropertyDescription "Fired when the observable boolean is true, and killed when false."
            // metadata: MPropertyFriendlyName "While True"
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_WhenTrue; // 0x150            
            // metadata: MPropertyDescription "Fired when the observable boolean is false, and killed when true."
            // metadata: MPropertyFriendlyName "While False"
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_WhenFalse; // 0x198            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_BooleanSwitchState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_BooleanSwitchState) == 0x1e0);
    };
};
