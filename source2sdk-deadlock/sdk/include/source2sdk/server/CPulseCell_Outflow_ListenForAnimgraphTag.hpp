#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

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
        // Size: 0x128
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Listen for AnimGraph Tag"
        // static metadata: MPropertyDescription "Creates new cursors for when an animgraph tag is handled. Will listen until canceled."
        // static metadata: MPulseEditorSubHeaderText
        #pragma pack(push, 1)
        class CPulseCell_Outflow_ListenForAnimgraphTag : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnStart; // 0x48            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnEnd; // 0x90            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0xd8            
            // metadata: MPropertyAttributeEditor "AnimGraphTag()"
            CGlobalSymbol m_TagName; // 0x120            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_ListenForAnimgraphTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_ListenForAnimgraphTag) == 0x128);
    };
};
