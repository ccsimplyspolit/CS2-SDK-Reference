#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        #pragma pack(push, 1)
        struct TestComponent_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_ComponentData; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_system::TestComponent_t, m_ComponentData) == 0x8);
        
        static_assert(sizeof(source2sdk::pulse_system::TestComponent_t) == 0x10);
    };
};
