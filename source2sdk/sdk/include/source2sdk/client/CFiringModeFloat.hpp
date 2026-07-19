#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MPropertyCustomEditor "multi_float(2)"
        #pragma pack(push, 1)
        class CFiringModeFloat
        {
        public:
            float m_flValues[2]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CFiringModeFloat, m_flValues) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CFiringModeFloat) == 0x8);
    };
};
