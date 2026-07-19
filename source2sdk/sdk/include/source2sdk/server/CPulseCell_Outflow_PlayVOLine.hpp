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
        // Size: 0x120
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Play VO Line"
        // static metadata: MPropertyDescription "Starts a sound event on a speaker, and waits for its completion. Keywords: Voice Over, Choreo"
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/sequence.png"
        // static metadata: MPulseEditorHeaderHelper
        #pragma pack(push, 1)
        class CPulseCell_Outflow_PlayVOLine : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0xd8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_PlayVOLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_PlayVOLine) == 0x120);
    };
};
