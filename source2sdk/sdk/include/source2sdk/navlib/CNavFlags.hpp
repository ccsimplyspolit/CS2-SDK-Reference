#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CNavFlags
        {
        public:
            std::uint64_t m_Flags; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::navlib::CNavFlags, m_Flags) == 0x0);
        
        static_assert(sizeof(source2sdk::navlib::CNavFlags) == 0x8);
    };
};
