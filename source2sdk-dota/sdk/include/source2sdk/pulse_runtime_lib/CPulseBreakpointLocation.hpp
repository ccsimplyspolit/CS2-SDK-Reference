#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseBreakpointLocation
        {
        public:
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_NodeID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            PulseSymbol_t m_SequencePoint; // 0x8            
            PulseSymbol_t m_PortName; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseBreakpointLocation, m_NodeID) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseBreakpointLocation, m_SequencePoint) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseBreakpointLocation, m_PortName) == 0x18);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseBreakpointLocation) == 0x28);
    };
};
