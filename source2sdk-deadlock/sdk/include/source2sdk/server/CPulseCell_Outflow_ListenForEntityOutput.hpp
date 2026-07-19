#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Resume.hpp"

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
        // Size: 0xf0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Wait for Entity Output"
        // static metadata: MPropertyDescription "Waits for the entity to fire a specific output. By default, this listens once, but can be configured to listen until canceled."
        // static metadata: MPulseEditorSubHeaderText
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/inflow_wait.png"
        #pragma pack(push, 1)
        class CPulseCell_Outflow_ListenForEntityOutput : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            source2sdk::pulse_runtime_lib::SignatureOutflow_Resume m_OnFired; // 0x48            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x90            
            CGlobalSymbol m_strEntityOutput; // 0xd8            
            // metadata: MPropertyDescription "Optional output value to match if applicable. Leave empty to match any possible value for the output param."
            CUtlString m_strEntityOutputParam; // 0xe0            
            // metadata: MPropertyDescription "Continue listening for the output until canceled."
            bool m_bListenUntilCanceled; // 0xe8            
            uint8_t _pad00e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_ListenForEntityOutput because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_ListenForEntityOutput) == 0xf0);
    };
};
