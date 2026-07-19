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
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0110[0x18]; // 0x110
            bool m_bIsRunningUnitTests; // 0x128            
            bool m_bExplicitTimeStepping; // 0x129            
            bool m_bExpectingToDestroyWithYieldedCursors; // 0x12a            
            bool m_bQuietTracepoints; // 0x12b            
            bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x12c            
            uint8_t _pad012d[0x3]; // 0x12d
            std::int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x130            
            std::int32_t m_nNextValidateIndex; // 0x134            
            // m_Tracepoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Tracepoints;
            char m_Tracepoints[0x18]; // 0x138            
            bool m_bTestYesOrNoPath; // 0x150            
            uint8_t _pad0151[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseGraphInstance_TestDomain) == 0x158);
    };
};
