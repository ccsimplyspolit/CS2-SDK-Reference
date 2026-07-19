#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0118[0x18]; // 0x118
            bool m_bIsRunningUnitTests; // 0x130            
            bool m_bExplicitTimeStepping; // 0x131            
            bool m_bExpectingToDestroyWithYieldedCursors; // 0x132            
            bool m_bQuietTracepoints; // 0x133            
            bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x134            
            uint8_t _pad0135[0x3]; // 0x135
            std::int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x138            
            std::int32_t m_nNextValidateIndex; // 0x13c            
            // m_Tracepoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Tracepoints;
            char m_Tracepoints[0x18]; // 0x140            
            bool m_bTestYesOrNoPath; // 0x158            
            uint8_t _pad0159[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseGraphInstance_TestDomain) == 0x160);
    };
};
