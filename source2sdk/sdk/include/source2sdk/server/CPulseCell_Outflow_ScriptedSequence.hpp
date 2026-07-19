#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/server/PulseScriptedSequenceData_t.hpp"

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
        // Size: 0x198
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_Outflow_ScriptedSequence : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            CUtlString m_szSyncGroup; // 0xd8            
            std::int32_t m_nExpectedNumSequencesInSyncGroup; // 0xe0            
            bool m_bEnsureOnNavmeshOnFinish; // 0xe4            
            bool m_bDontTeleportAtEnd; // 0xe5            
            bool m_bDisallowInterrupts; // 0xe6            
            uint8_t _pad00e7[0x1]; // 0xe7
            source2sdk::server::PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0xe8            
            // m_vecAdditionalActors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PulseScriptedSequenceData_t> m_vecAdditionalActors;
            char m_vecAdditionalActors[0x18]; // 0x120            
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x138            
            // m_Triggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_OutflowConnection> m_Triggers;
            char m_Triggers[0x18]; // 0x180            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_ScriptedSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_ScriptedSequence) == 0x198);
    };
};
